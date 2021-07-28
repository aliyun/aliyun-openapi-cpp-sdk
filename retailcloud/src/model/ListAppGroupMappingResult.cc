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

#include <alibabacloud/retailcloud/model/ListAppGroupMappingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAppGroupMappingResult::ListAppGroupMappingResult() :
	ServiceResult()
{}

ListAppGroupMappingResult::ListAppGroupMappingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppGroupMappingResult::~ListAppGroupMappingResult()
{}

void ListAppGroupMappingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AppGroupMappingDetail"];
	for (auto valueDataAppGroupMappingDetail : allDataNode)
	{
		AppGroupMappingDetail dataObject;
		if(!valueDataAppGroupMappingDetail["Id"].isNull())
			dataObject.id = std::stol(valueDataAppGroupMappingDetail["Id"].asString());
		if(!valueDataAppGroupMappingDetail["Name"].isNull())
			dataObject.name = valueDataAppGroupMappingDetail["Name"].asString();
		if(!valueDataAppGroupMappingDetail["GroupId"].isNull())
			dataObject.groupId = std::stol(valueDataAppGroupMappingDetail["GroupId"].asString());
		if(!valueDataAppGroupMappingDetail["AppId"].isNull())
			dataObject.appId = std::stol(valueDataAppGroupMappingDetail["AppId"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

long ListAppGroupMappingResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppGroupMappingResult::getPageSize()const
{
	return pageSize_;
}

int ListAppGroupMappingResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListAppGroupMappingResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListAppGroupMappingResult::AppGroupMappingDetail> ListAppGroupMappingResult::getData()const
{
	return data_;
}

int ListAppGroupMappingResult::getCode()const
{
	return code_;
}

