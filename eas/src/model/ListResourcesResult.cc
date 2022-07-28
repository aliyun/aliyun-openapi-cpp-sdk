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

#include <alibabacloud/eas/model/ListResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListResourcesResult::ListResourcesResult() :
	ServiceResult()
{}

ListResourcesResult::ListResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourcesResult::~ListResourcesResult()
{}

void ListResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["ResourcesItem"];
	for (auto valueResourcesResourcesItem : allResourcesNode)
	{
		ResourcesItem resourcesObject;
		if(!valueResourcesResourcesItem["ResourceId"].isNull())
			resourcesObject.resourceId = valueResourcesResourcesItem["ResourceId"].asString();
		if(!valueResourcesResourcesItem["ResourceName"].isNull())
			resourcesObject.resourceName = valueResourcesResourcesItem["ResourceName"].asString();
		if(!valueResourcesResourcesItem["ClusterId"].isNull())
			resourcesObject.clusterId = valueResourcesResourcesItem["ClusterId"].asString();
		if(!valueResourcesResourcesItem["CreateTime"].isNull())
			resourcesObject.createTime = valueResourcesResourcesItem["CreateTime"].asString();
		if(!valueResourcesResourcesItem["UpdateTime"].isNull())
			resourcesObject.updateTime = valueResourcesResourcesItem["UpdateTime"].asString();
		if(!valueResourcesResourcesItem["InstanceCount"].isNull())
			resourcesObject.instanceCount = std::stoi(valueResourcesResourcesItem["InstanceCount"].asString());
		if(!valueResourcesResourcesItem["PrePaidInstanceCount"].isNull())
			resourcesObject.prePaidInstanceCount = std::stoi(valueResourcesResourcesItem["PrePaidInstanceCount"].asString());
		if(!valueResourcesResourcesItem["PostPaidInstanceCount"].isNull())
			resourcesObject.postPaidInstanceCount = std::stoi(valueResourcesResourcesItem["PostPaidInstanceCount"].asString());
		if(!valueResourcesResourcesItem["CpuCount"].isNull())
			resourcesObject.cpuCount = std::stoi(valueResourcesResourcesItem["CpuCount"].asString());
		if(!valueResourcesResourcesItem["GpuCount"].isNull())
			resourcesObject.gpuCount = std::stoi(valueResourcesResourcesItem["GpuCount"].asString());
		if(!valueResourcesResourcesItem["Status"].isNull())
			resourcesObject.status = valueResourcesResourcesItem["Status"].asString();
		if(!valueResourcesResourcesItem["Message"].isNull())
			resourcesObject.message = valueResourcesResourcesItem["Message"].asString();
		if(!valueResourcesResourcesItem["ExtraData"].isNull())
			resourcesObject.extraData = valueResourcesResourcesItem["ExtraData"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListResourcesResult::getTotalCount()const
{
	return totalCount_;
}

int ListResourcesResult::getPageSize()const
{
	return pageSize_;
}

int ListResourcesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListResourcesResult::ResourcesItem> ListResourcesResult::getResources()const
{
	return resources_;
}

