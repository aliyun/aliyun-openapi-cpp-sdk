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

#include <alibabacloud/alidns/model/DescribePdnsOperateLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsOperateLogsResult::DescribePdnsOperateLogsResult() :
	ServiceResult()
{}

DescribePdnsOperateLogsResult::DescribePdnsOperateLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsOperateLogsResult::~DescribePdnsOperateLogsResult()
{}

void DescribePdnsOperateLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsNode = value["Logs"]["Log"];
	for (auto valueLogsLog : allLogsNode)
	{
		Log logsObject;
		if(!valueLogsLog["OperateTime"].isNull())
			logsObject.operateTime = valueLogsLog["OperateTime"].asString();
		if(!valueLogsLog["Type"].isNull())
			logsObject.type = valueLogsLog["Type"].asString();
		if(!valueLogsLog["Action"].isNull())
			logsObject.action = valueLogsLog["Action"].asString();
		if(!valueLogsLog["content"].isNull())
			logsObject.content = valueLogsLog["content"].asString();
		logs_.push_back(logsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribePdnsOperateLogsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePdnsOperateLogsResult::getPageSize()const
{
	return pageSize_;
}

long DescribePdnsOperateLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePdnsOperateLogsResult::Log> DescribePdnsOperateLogsResult::getLogs()const
{
	return logs_;
}

