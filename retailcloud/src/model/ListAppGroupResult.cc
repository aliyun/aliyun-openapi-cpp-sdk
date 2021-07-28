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

#include <alibabacloud/retailcloud/model/ListAppGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAppGroupResult::ListAppGroupResult() :
	ServiceResult()
{}

ListAppGroupResult::ListAppGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppGroupResult::~ListAppGroupResult()
{}

void ListAppGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AppGroupDetail"];
	for (auto valueDataAppGroupDetail : allDataNode)
	{
		AppGroupDetail dataObject;
		if(!valueDataAppGroupDetail["BizName"].isNull())
			dataObject.bizName = valueDataAppGroupDetail["BizName"].asString();
		if(!valueDataAppGroupDetail["Name"].isNull())
			dataObject.name = valueDataAppGroupDetail["Name"].asString();
		if(!valueDataAppGroupDetail["Id"].isNull())
			dataObject.id = std::stol(valueDataAppGroupDetail["Id"].asString());
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

long ListAppGroupResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppGroupResult::getPageSize()const
{
	return pageSize_;
}

int ListAppGroupResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListAppGroupResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListAppGroupResult::AppGroupDetail> ListAppGroupResult::getData()const
{
	return data_;
}

int ListAppGroupResult::getCode()const
{
	return code_;
}

