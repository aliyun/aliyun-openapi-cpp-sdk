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

#include <alibabacloud/pts/model/GetJMeterLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetJMeterLogsResult::GetJMeterLogsResult() :
	ServiceResult()
{}

GetJMeterLogsResult::GetJMeterLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJMeterLogsResult::~GetJMeterLogsResult()
{}

void GetJMeterLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogs = value["Logs"]["JMeterLogItem"];
	for (const auto &item : allLogs)
		logs_.push_back(item.asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["AgentCount"].isNull())
		agentCount_ = std::stoi(value["AgentCount"].asString());

}

long GetJMeterLogsResult::getTotalCount()const
{
	return totalCount_;
}

int GetJMeterLogsResult::getAgentCount()const
{
	return agentCount_;
}

std::string GetJMeterLogsResult::getMessage()const
{
	return message_;
}

int GetJMeterLogsResult::getPageSize()const
{
	return pageSize_;
}

int GetJMeterLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<std::string> GetJMeterLogsResult::getLogs()const
{
	return logs_;
}

std::string GetJMeterLogsResult::getCode()const
{
	return code_;
}

bool GetJMeterLogsResult::getSuccess()const
{
	return success_;
}

