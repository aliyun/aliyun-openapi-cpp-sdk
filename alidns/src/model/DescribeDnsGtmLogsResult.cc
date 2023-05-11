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

#include <alibabacloud/alidns/model/DescribeDnsGtmLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmLogsResult::DescribeDnsGtmLogsResult() :
	ServiceResult()
{}

DescribeDnsGtmLogsResult::DescribeDnsGtmLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmLogsResult::~DescribeDnsGtmLogsResult()
{}

void DescribeDnsGtmLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsNode = value["Logs"]["Log"];
	for (auto valueLogsLog : allLogsNode)
	{
		Log logsObject;
		if(!valueLogsLog["OperTimestamp"].isNull())
			logsObject.operTimestamp = std::stol(valueLogsLog["OperTimestamp"].asString());
		if(!valueLogsLog["EntityId"].isNull())
			logsObject.entityId = valueLogsLog["EntityId"].asString();
		if(!valueLogsLog["EntityType"].isNull())
			logsObject.entityType = valueLogsLog["EntityType"].asString();
		if(!valueLogsLog["OperTime"].isNull())
			logsObject.operTime = valueLogsLog["OperTime"].asString();
		if(!valueLogsLog["OperAction"].isNull())
			logsObject.operAction = valueLogsLog["OperAction"].asString();
		if(!valueLogsLog["Content"].isNull())
			logsObject.content = valueLogsLog["Content"].asString();
		if(!valueLogsLog["EntityName"].isNull())
			logsObject.entityName = valueLogsLog["EntityName"].asString();
		if(!valueLogsLog["Id"].isNull())
			logsObject.id = std::stol(valueLogsLog["Id"].asString());
		logs_.push_back(logsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

int DescribeDnsGtmLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDnsGtmLogsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDnsGtmLogsResult::getTotalPages()const
{
	return totalPages_;
}

std::vector<DescribeDnsGtmLogsResult::Log> DescribeDnsGtmLogsResult::getLogs()const
{
	return logs_;
}

int DescribeDnsGtmLogsResult::getTotalItems()const
{
	return totalItems_;
}

