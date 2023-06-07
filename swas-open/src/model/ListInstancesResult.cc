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

#include <alibabacloud/swas-open/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = valueInstancesInstance["CreationTime"].asString();
		if(!valueInstancesInstance["InnerIpAddress"].isNull())
			instancesObject.innerIpAddress = valueInstancesInstance["InnerIpAddress"].asString();
		if(!valueInstancesInstance["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesInstance["ChargeType"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["PlanId"].isNull())
			instancesObject.planId = valueInstancesInstance["PlanId"].asString();
		if(!valueInstancesInstance["PublicIpAddress"].isNull())
			instancesObject.publicIpAddress = valueInstancesInstance["PublicIpAddress"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["ExpiredTime"].isNull())
			instancesObject.expiredTime = valueInstancesInstance["ExpiredTime"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["BusinessStatus"].isNull())
			instancesObject.businessStatus = valueInstancesInstance["BusinessStatus"].asString();
		if(!valueInstancesInstance["DdosStatus"].isNull())
			instancesObject.ddosStatus = valueInstancesInstance["DdosStatus"].asString();
		if(!valueInstancesInstance["ImageId"].isNull())
			instancesObject.imageId = valueInstancesInstance["ImageId"].asString();
		if(!valueInstancesInstance["DisableReason"].isNull())
			instancesObject.disableReason = valueInstancesInstance["DisableReason"].asString();
		if(!valueInstancesInstance["Combination"].isNull())
			instancesObject.combination = valueInstancesInstance["Combination"].asString() == "true";
		if(!valueInstancesInstance["CombinationInstanceId"].isNull())
			instancesObject.combinationInstanceId = valueInstancesInstance["CombinationInstanceId"].asString();
		if(!valueInstancesInstance["Uuid"].isNull())
			instancesObject.uuid = valueInstancesInstance["Uuid"].asString();
		auto resourceSpecNode = value["ResourceSpec"];
		if(!resourceSpecNode["DiskCategory"].isNull())
			instancesObject.resourceSpec.diskCategory = resourceSpecNode["DiskCategory"].asString();
		if(!resourceSpecNode["Cpu"].isNull())
			instancesObject.resourceSpec.cpu = std::stoi(resourceSpecNode["Cpu"].asString());
		if(!resourceSpecNode["Bandwidth"].isNull())
			instancesObject.resourceSpec.bandwidth = std::stoi(resourceSpecNode["Bandwidth"].asString());
		if(!resourceSpecNode["DiskSize"].isNull())
			instancesObject.resourceSpec.diskSize = std::stoi(resourceSpecNode["DiskSize"].asString());
		if(!resourceSpecNode["Memory"].isNull())
			instancesObject.resourceSpec.memory = resourceSpecNode["Memory"].asString();
		if(!resourceSpecNode["Flow"].isNull())
			instancesObject.resourceSpec.flow = resourceSpecNode["Flow"].asString();
		auto imageNode = value["Image"];
		if(!imageNode["OsType"].isNull())
			instancesObject.image.osType = imageNode["OsType"].asString();
		if(!imageNode["ImageName"].isNull())
			instancesObject.image.imageName = imageNode["ImageName"].asString();
		if(!imageNode["ImageVersion"].isNull())
			instancesObject.image.imageVersion = imageNode["ImageVersion"].asString();
		if(!imageNode["ImageType"].isNull())
			instancesObject.image.imageType = imageNode["ImageType"].asString();
		if(!imageNode["ImageIconUrl"].isNull())
			instancesObject.image.imageIconUrl = imageNode["ImageIconUrl"].asString();
		if(!imageNode["ImageContact"].isNull())
			instancesObject.image.imageContact = imageNode["ImageContact"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListInstancesResult::Instance> ListInstancesResult::getInstances()const
{
	return instances_;
}

int ListInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

