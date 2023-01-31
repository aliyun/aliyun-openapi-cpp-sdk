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

#include <alibabacloud/vpc/model/ListIpsecServerLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListIpsecServerLogsResult::ListIpsecServerLogsResult() :
	ServiceResult()
{}

ListIpsecServerLogsResult::ListIpsecServerLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIpsecServerLogsResult::~ListIpsecServerLogsResult()
{}

void ListIpsecServerLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Logs"];
	for (const auto &item : allData)
		data_.push_back(item.asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["IsCompleted"].isNull())
		isCompleted_ = value["IsCompleted"].asString() == "true";

}

int ListIpsecServerLogsResult::getPageSize()const
{
	return pageSize_;
}

int ListIpsecServerLogsResult::getPageNumber()const
{
	return pageNumber_;
}

bool ListIpsecServerLogsResult::getIsCompleted()const
{
	return isCompleted_;
}

std::vector<std::string> ListIpsecServerLogsResult::getData()const
{
	return data_;
}

int ListIpsecServerLogsResult::getCount()const
{
	return count_;
}

