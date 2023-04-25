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

#include <alibabacloud/ccc/model/ListLegacyQueueEventLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListLegacyQueueEventLogsResult::ListLegacyQueueEventLogsResult() :
	ServiceResult()
{}

ListLegacyQueueEventLogsResult::ListLegacyQueueEventLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLegacyQueueEventLogsResult::~ListLegacyQueueEventLogsResult()
{}

void ListLegacyQueueEventLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["QueueEventLog"];
	for (auto dataNodeListQueueEventLog : allListNode)
	{
		Data::QueueEventLog queueEventLogObject;
		if(!dataNodeListQueueEventLog["Vq"].isNull())
			queueEventLogObject.vq = dataNodeListQueueEventLog["Vq"].asString();
		if(!dataNodeListQueueEventLog["StatisticDate"].isNull())
			queueEventLogObject.statisticDate = dataNodeListQueueEventLog["StatisticDate"].asString();
		if(!dataNodeListQueueEventLog["QueueTime"].isNull())
			queueEventLogObject.queueTime = std::stol(dataNodeListQueueEventLog["QueueTime"].asString());
		if(!dataNodeListQueueEventLog["Ani"].isNull())
			queueEventLogObject.ani = dataNodeListQueueEventLog["Ani"].asString();
		if(!dataNodeListQueueEventLog["Dnis"].isNull())
			queueEventLogObject.dnis = dataNodeListQueueEventLog["Dnis"].asString();
		if(!dataNodeListQueueEventLog["Cause"].isNull())
			queueEventLogObject.cause = dataNodeListQueueEventLog["Cause"].asString();
		if(!dataNodeListQueueEventLog["AnswerTime"].isNull())
			queueEventLogObject.answerTime = std::stol(dataNodeListQueueEventLog["AnswerTime"].asString());
		if(!dataNodeListQueueEventLog["AnswerPhone"].isNull())
			queueEventLogObject.answerPhone = dataNodeListQueueEventLog["AnswerPhone"].asString();
		if(!dataNodeListQueueEventLog["Acid"].isNull())
			queueEventLogObject.acid = dataNodeListQueueEventLog["Acid"].asString();
		if(!dataNodeListQueueEventLog["TenantId"].isNull())
			queueEventLogObject.tenantId = dataNodeListQueueEventLog["TenantId"].asString();
		if(!dataNodeListQueueEventLog["Id"].isNull())
			queueEventLogObject.id = std::stol(dataNodeListQueueEventLog["Id"].asString());
		data_.list.push_back(queueEventLogObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListLegacyQueueEventLogsResult::getMessage()const
{
	return message_;
}

int ListLegacyQueueEventLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListLegacyQueueEventLogsResult::Data ListLegacyQueueEventLogsResult::getData()const
{
	return data_;
}

std::string ListLegacyQueueEventLogsResult::getCode()const
{
	return code_;
}

bool ListLegacyQueueEventLogsResult::getSuccess()const
{
	return success_;
}

