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

#include <alibabacloud/cms/model/ListMyGroupInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListMyGroupInstancesResult::ListMyGroupInstancesResult() :
	ServiceResult()
{}

ListMyGroupInstancesResult::ListMyGroupInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMyGroupInstancesResult::~ListMyGroupInstancesResult()
{}

void ListMyGroupInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		Resource resourcesObject;
		if(!value["Id"].isNull())
			resourcesObject.id = std::stol(value["Id"].asString());
		if(!value["AliUid"].isNull())
			resourcesObject.aliUid = std::stol(value["AliUid"].asString());
		if(!value["RegionId"].isNull())
			resourcesObject.regionId = value["RegionId"].asString();
		if(!value["InstanceId"].isNull())
			resourcesObject.instanceId = value["InstanceId"].asString();
		if(!value["Category"].isNull())
			resourcesObject.category = value["Category"].asString();
		if(!value["InstanceName"].isNull())
			resourcesObject.instanceName = value["InstanceName"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListMyGroupInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListMyGroupInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int ListMyGroupInstancesResult::getTotal()const
{
	return total_;
}

std::vector<ListMyGroupInstancesResult::Resource> ListMyGroupInstancesResult::getResources()const
{
	return resources_;
}

int ListMyGroupInstancesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMyGroupInstancesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMyGroupInstancesResult::getSuccess()const
{
	return success_;
}

