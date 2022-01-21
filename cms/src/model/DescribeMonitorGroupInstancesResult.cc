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

#include <alibabacloud/cms/model/DescribeMonitorGroupInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitorGroupInstancesResult::DescribeMonitorGroupInstancesResult() :
	ServiceResult()
{}

DescribeMonitorGroupInstancesResult::DescribeMonitorGroupInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitorGroupInstancesResult::~DescribeMonitorGroupInstancesResult()
{}

void DescribeMonitorGroupInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["Category"].isNull())
			resourcesObject.category = valueResourcesResource["Category"].asString();
		if(!valueResourcesResource["InstanceId"].isNull())
			resourcesObject.instanceId = valueResourcesResource["InstanceId"].asString();
		if(!valueResourcesResource["InstanceName"].isNull())
			resourcesObject.instanceName = valueResourcesResource["InstanceName"].asString();
		if(!valueResourcesResource["Id"].isNull())
			resourcesObject.id = std::stol(valueResourcesResource["Id"].asString());
		if(!valueResourcesResource["RegionId"].isNull())
			resourcesObject.regionId = valueResourcesResource["RegionId"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeMonitorGroupInstancesResult::getMessage()const
{
	return message_;
}

int DescribeMonitorGroupInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeMonitorGroupInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeMonitorGroupInstancesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeMonitorGroupInstancesResult::Resource> DescribeMonitorGroupInstancesResult::getResources()const
{
	return resources_;
}

int DescribeMonitorGroupInstancesResult::getCode()const
{
	return code_;
}

bool DescribeMonitorGroupInstancesResult::getSuccess()const
{
	return success_;
}

