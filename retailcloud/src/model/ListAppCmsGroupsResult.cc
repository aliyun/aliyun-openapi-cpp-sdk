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

#include <alibabacloud/retailcloud/model/ListAppCmsGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAppCmsGroupsResult::ListAppCmsGroupsResult() :
	ServiceResult()
{}

ListAppCmsGroupsResult::ListAppCmsGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppCmsGroupsResult::~ListAppCmsGroupsResult()
{}

void ListAppCmsGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["String"];
	for (const auto &item : allData)
		data_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListAppCmsGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppCmsGroupsResult::getPageSize()const
{
	return pageSize_;
}

int ListAppCmsGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListAppCmsGroupsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<std::string> ListAppCmsGroupsResult::getData()const
{
	return data_;
}

int ListAppCmsGroupsResult::getCode()const
{
	return code_;
}

