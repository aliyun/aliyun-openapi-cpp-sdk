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

#include <alibabacloud/cloud-siem/model/GetLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

GetLogsResult::GetLogsResult() :
	ServiceResult()
{}

GetLogsResult::GetLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLogsResult::~GetLogsResult()
{}

void GetLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	auto responseDataNode = dataNode["ResponseData"];
	if(!responseDataNode["CompleteOrNot"].isNull())
		data_.responseData.completeOrNot = responseDataNode["CompleteOrNot"].asString() == "true";
	if(!responseDataNode["Count"].isNull())
		data_.responseData.count = std::stoi(responseDataNode["Count"].asString());
	if(!responseDataNode["Cost"].isNull())
		data_.responseData.cost = std::stol(responseDataNode["Cost"].asString());
	if(!responseDataNode["HasSql"].isNull())
		data_.responseData.hasSql = responseDataNode["HasSql"].asString() == "true";
		auto allKeys = responseDataNode["Keys"]["Key"];
		for (auto value : allKeys)
			data_.responseData.keys.push_back(value.asString());
		auto allLines = responseDataNode["Lines"]["Line"];
		for (auto value : allLines)
			data_.responseData.lines.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetLogsResult::getMessage()const
{
	return message_;
}

GetLogsResult::Data GetLogsResult::getData()const
{
	return data_;
}

int GetLogsResult::getCode()const
{
	return code_;
}

bool GetLogsResult::getSuccess()const
{
	return success_;
}

