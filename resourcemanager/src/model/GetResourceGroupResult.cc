/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/resourcemanager/model/GetResourceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetResourceGroupResult::GetResourceGroupResult() :
	ServiceResult()
{}

GetResourceGroupResult::GetResourceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResourceGroupResult::~GetResourceGroupResult()
{}

void GetResourceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceGroupNode = value["ResourceGroup"];
	if(!resourceGroupNode["DisplayName"].isNull())
		resourceGroup_.displayName = resourceGroupNode["DisplayName"].asString();
	if(!resourceGroupNode["Status"].isNull())
		resourceGroup_.status = resourceGroupNode["Status"].asString();
	if(!resourceGroupNode["AccountId"].isNull())
		resourceGroup_.accountId = resourceGroupNode["AccountId"].asString();
	if(!resourceGroupNode["Name"].isNull())
		resourceGroup_.name = resourceGroupNode["Name"].asString();
	if(!resourceGroupNode["CreateDate"].isNull())
		resourceGroup_.createDate = resourceGroupNode["CreateDate"].asString();
	if(!resourceGroupNode["Id"].isNull())
		resourceGroup_.id = resourceGroupNode["Id"].asString();
	auto allRegionStatusesNode = resourceGroupNode["RegionStatuses"]["RegionStatus"];
	for (auto resourceGroupNodeRegionStatusesRegionStatus : allRegionStatusesNode)
	{
		ResourceGroup::RegionStatus regionStatusObject;
		if(!resourceGroupNodeRegionStatusesRegionStatus["Status"].isNull())
			regionStatusObject.status = resourceGroupNodeRegionStatusesRegionStatus["Status"].asString();
		if(!resourceGroupNodeRegionStatusesRegionStatus["RegionId"].isNull())
			regionStatusObject.regionId = resourceGroupNodeRegionStatusesRegionStatus["RegionId"].asString();
		resourceGroup_.regionStatuses.push_back(regionStatusObject);
	}
	auto allTagsNode = resourceGroupNode["Tags"]["Tag"];
	for (auto resourceGroupNodeTagsTag : allTagsNode)
	{
		ResourceGroup::Tag tagObject;
		if(!resourceGroupNodeTagsTag["TagKey"].isNull())
			tagObject.tagKey = resourceGroupNodeTagsTag["TagKey"].asString();
		if(!resourceGroupNodeTagsTag["TagValue"].isNull())
			tagObject.tagValue = resourceGroupNodeTagsTag["TagValue"].asString();
		resourceGroup_.tags.push_back(tagObject);
	}

}

GetResourceGroupResult::ResourceGroup GetResourceGroupResult::getResourceGroup()const
{
	return resourceGroup_;
}

