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

#include <alibabacloud/alidns/model/DescribeGtmLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmLogsResult::DescribeGtmLogsResult() :
	ServiceResult()
{}

DescribeGtmLogsResult::DescribeGtmLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmLogsResult::~DescribeGtmLogsResult()
{}

void DescribeGtmLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogs = value["Logs"]["Log"];
	for (auto value : allLogs)
	{
		Log logsObject;
		if(!value["OperTime"].isNull())
			logsObject.operTime = value["OperTime"].asString();
		if(!value["OperAction"].isNull())
			logsObject.operAction = value["OperAction"].asString();
		if(!value["EntityType"].isNull())
			logsObject.entityType = value["EntityType"].asString();
		if(!value["EntityId"].isNull())
			logsObject.entityId = value["EntityId"].asString();
		if(!value["EntityName"].isNull())
			logsObject.entityName = value["EntityName"].asString();
		if(!value["OperIp"].isNull())
			logsObject.operIp = value["OperIp"].asString();
		if(!value["OperTimestamp"].isNull())
			logsObject.operTimestamp = std::stol(value["OperTimestamp"].asString());
		if(!value["Id"].isNull())
			logsObject.id = std::stol(value["Id"].asString());
		if(!value["Content"].isNull())
			logsObject.content = value["Content"].asString();
		logs_.push_back(logsObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeGtmLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGtmLogsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeGtmLogsResult::getTotalPages()const
{
	return totalPages_;
}

std::vector<DescribeGtmLogsResult::Log> DescribeGtmLogsResult::getLogs()const
{
	return logs_;
}

int DescribeGtmLogsResult::getTotalItems()const
{
	return totalItems_;
}

