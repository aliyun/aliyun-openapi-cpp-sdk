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

#include <alibabacloud/oceanbasepro/model/DescribeTenantTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantTagsResult::DescribeTenantTagsResult() :
	ServiceResult()
{}

DescribeTenantTagsResult::DescribeTenantTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantTagsResult::~DescribeTenantTagsResult()
{}

void DescribeTenantTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagResourcesNode = value["TagResources"]["TagResourcesItem"];
	for (auto valueTagResourcesTagResourcesItem : allTagResourcesNode)
	{
		TagResourcesItem tagResourcesObject;
		if(!valueTagResourcesTagResourcesItem["ResourceId"].isNull())
			tagResourcesObject.resourceId = valueTagResourcesTagResourcesItem["ResourceId"].asString();
		if(!valueTagResourcesTagResourcesItem["ResourceType"].isNull())
			tagResourcesObject.resourceType = valueTagResourcesTagResourcesItem["ResourceType"].asString();
		if(!valueTagResourcesTagResourcesItem["Tag"].isNull())
			tagResourcesObject.tag = valueTagResourcesTagResourcesItem["Tag"].asString();
		tagResources_.push_back(tagResourcesObject);
	}

}

std::vector<DescribeTenantTagsResult::TagResourcesItem> DescribeTenantTagsResult::getTagResources()const
{
	return tagResources_;
}

