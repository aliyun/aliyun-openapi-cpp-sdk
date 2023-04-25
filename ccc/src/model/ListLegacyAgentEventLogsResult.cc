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

#include <alibabacloud/ccc/model/ListLegacyAgentEventLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListLegacyAgentEventLogsResult::ListLegacyAgentEventLogsResult() :
	ServiceResult()
{}

ListLegacyAgentEventLogsResult::ListLegacyAgentEventLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLegacyAgentEventLogsResult::~ListLegacyAgentEventLogsResult()
{}

void ListLegacyAgentEventLogsResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["AgentEventLog"];
	for (auto dataNodeListAgentEventLog : allListNode)
	{
		Data::AgentEventLog agentEventLogObject;
		if(!dataNodeListAgentEventLog["TargetSelect"].isNull())
			agentEventLogObject.targetSelect = dataNodeListAgentEventLog["TargetSelect"].asString();
		if(!dataNodeListAgentEventLog["TargetRequest"].isNull())
			agentEventLogObject.targetRequest = dataNodeListAgentEventLog["TargetRequest"].asString();
		if(!dataNodeListAgentEventLog["StatisticDate"].isNull())
			agentEventLogObject.statisticDate = dataNodeListAgentEventLog["StatisticDate"].asString();
		if(!dataNodeListAgentEventLog["PhoneNo"].isNull())
			agentEventLogObject.phoneNo = dataNodeListAgentEventLog["PhoneNo"].asString();
		if(!dataNodeListAgentEventLog["GroupNo"].isNull())
			agentEventLogObject.groupNo = dataNodeListAgentEventLog["GroupNo"].asString();
		if(!dataNodeListAgentEventLog["Event"].isNull())
			agentEventLogObject.event = dataNodeListAgentEventLog["Event"].asString();
		if(!dataNodeListAgentEventLog["ConnId"].isNull())
			agentEventLogObject.connId = dataNodeListAgentEventLog["ConnId"].asString();
		if(!dataNodeListAgentEventLog["CallType"].isNull())
			agentEventLogObject.callType = dataNodeListAgentEventLog["CallType"].asString();
		if(!dataNodeListAgentEventLog["CallId"].isNull())
			agentEventLogObject.callId = dataNodeListAgentEventLog["CallId"].asString();
		if(!dataNodeListAgentEventLog["CallerId"].isNull())
			agentEventLogObject.callerId = dataNodeListAgentEventLog["CallerId"].asString();
		if(!dataNodeListAgentEventLog["CalleeId"].isNull())
			agentEventLogObject.calleeId = dataNodeListAgentEventLog["CalleeId"].asString();
		if(!dataNodeListAgentEventLog["AgentNo"].isNull())
			agentEventLogObject.agentNo = dataNodeListAgentEventLog["AgentNo"].asString();
		if(!dataNodeListAgentEventLog["AgentDropCall"].isNull())
			agentEventLogObject.agentDropCall = dataNodeListAgentEventLog["AgentDropCall"].asString();
		if(!dataNodeListAgentEventLog["TransferNumber"].isNull())
			agentEventLogObject.transferNumber = dataNodeListAgentEventLog["TransferNumber"].asString();
		if(!dataNodeListAgentEventLog["CallDir"].isNull())
			agentEventLogObject.callDir = dataNodeListAgentEventLog["CallDir"].asString();
		if(!dataNodeListAgentEventLog["CallMode"].isNull())
			agentEventLogObject.callMode = dataNodeListAgentEventLog["CallMode"].asString();
		if(!dataNodeListAgentEventLog["TenantId"].isNull())
			agentEventLogObject.tenantId = dataNodeListAgentEventLog["TenantId"].asString();
		if(!dataNodeListAgentEventLog["OutboundScenario"].isNull())
			agentEventLogObject.outboundScenario = dataNodeListAgentEventLog["OutboundScenario"].asString() == "true";
		data_.list.push_back(agentEventLogObject);
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

std::string ListLegacyAgentEventLogsResult::getMessage()const
{
	return message_;
}

int ListLegacyAgentEventLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListLegacyAgentEventLogsResult::Data ListLegacyAgentEventLogsResult::getData()const
{
	return data_;
}

std::string ListLegacyAgentEventLogsResult::getCode()const
{
	return code_;
}

bool ListLegacyAgentEventLogsResult::getSuccess()const
{
	return success_;
}

