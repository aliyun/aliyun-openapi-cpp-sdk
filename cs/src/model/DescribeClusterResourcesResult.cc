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

#include <alibabacloud/cs/model/DescribeClusterResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClusterResourcesResult::DescribeClusterResourcesResult() :
	ServiceResult()
{}

DescribeClusterResourcesResult::DescribeClusterResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterResourcesResult::~DescribeClusterResourcesResult()
{}

void DescribeClusterResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresourcesNode = value["resources"]["resourcesItem"];
	for (auto valueresourcesresourcesItem : allresourcesNode)
	{
		ResourcesItem resourcesObject;
		if(!valueresourcesresourcesItem["instance_id"].isNull())
			resourcesObject.instance_id = valueresourcesresourcesItem["instance_id"].asString();
		if(!valueresourcesresourcesItem["resource_type"].isNull())
			resourcesObject.resource_type = valueresourcesresourcesItem["resource_type"].asString();
		if(!valueresourcesresourcesItem["resource_info"].isNull())
			resourcesObject.resource_info = valueresourcesresourcesItem["resource_info"].asString();
		if(!valueresourcesresourcesItem["state"].isNull())
			resourcesObject.state = valueresourcesresourcesItem["state"].asString();
		resources_.push_back(resourcesObject);
	}

}

std::vector<DescribeClusterResourcesResult::ResourcesItem> DescribeClusterResourcesResult::getresources()const
{
	return resources_;
}

