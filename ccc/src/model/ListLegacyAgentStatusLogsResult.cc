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

#include <alibabacloud/ccc/model/ListLegacyAgentStatusLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListLegacyAgentStatusLogsResult::ListLegacyAgentStatusLogsResult() :
	ServiceResult()
{}

ListLegacyAgentStatusLogsResult::ListLegacyAgentStatusLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLegacyAgentStatusLogsResult::~ListLegacyAgentStatusLogsResult()
{}

void ListLegacyAgentStatusLogsResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["AgentStatusLog"];
	for (auto dataNodeListAgentStatusLog : allListNode)
	{
		Data::AgentStatusLog agentStatusLogObject;
		if(!dataNodeListAgentStatusLog["TransferNo"].isNull())
			agentStatusLogObject.transferNo = dataNodeListAgentStatusLog["TransferNo"].asString();
		if(!dataNodeListAgentStatusLog["TargetSelect"].isNull())
			agentStatusLogObject.targetSelect = dataNodeListAgentStatusLog["TargetSelect"].asString();
		if(!dataNodeListAgentStatusLog["TargetRequest"].isNull())
			agentStatusLogObject.targetRequest = dataNodeListAgentStatusLog["TargetRequest"].asString();
		if(!dataNodeListAgentStatusLog["Status"].isNull())
			agentStatusLogObject.status = dataNodeListAgentStatusLog["Status"].asString();
		if(!dataNodeListAgentStatusLog["StatisticDate"].isNull())
			agentStatusLogObject.statisticDate = dataNodeListAgentStatusLog["StatisticDate"].asString();
		if(!dataNodeListAgentStatusLog["StatisticTime"].isNull())
			agentStatusLogObject.statisticTime = std::stoi(dataNodeListAgentStatusLog["StatisticTime"].asString());
		if(!dataNodeListAgentStatusLog["PhoneNo"].isNull())
			agentStatusLogObject.phoneNo = dataNodeListAgentStatusLog["PhoneNo"].asString();
		if(!dataNodeListAgentStatusLog["MonitedAgentPhoneNo"].isNull())
			agentStatusLogObject.monitedAgentPhoneNo = dataNodeListAgentStatusLog["MonitedAgentPhoneNo"].asString();
		if(!dataNodeListAgentStatusLog["MonitedAgentNo"].isNull())
			agentStatusLogObject.monitedAgentNo = dataNodeListAgentStatusLog["MonitedAgentNo"].asString();
		if(!dataNodeListAgentStatusLog["GroupNo"].isNull())
			agentStatusLogObject.groupNo = dataNodeListAgentStatusLog["GroupNo"].asString();
		if(!dataNodeListAgentStatusLog["ConnId"].isNull())
			agentStatusLogObject.connId = dataNodeListAgentStatusLog["ConnId"].asString();
		if(!dataNodeListAgentStatusLog["CallType"].isNull())
			agentStatusLogObject.callType = dataNodeListAgentStatusLog["CallType"].asString();
		if(!dataNodeListAgentStatusLog["CallId"].isNull())
			agentStatusLogObject.callId = dataNodeListAgentStatusLog["CallId"].asString();
		if(!dataNodeListAgentStatusLog["CallerId"].isNull())
			agentStatusLogObject.callerId = dataNodeListAgentStatusLog["CallerId"].asString();
		if(!dataNodeListAgentStatusLog["CalleeId"].isNull())
			agentStatusLogObject.calleeId = dataNodeListAgentStatusLog["CalleeId"].asString();
		if(!dataNodeListAgentStatusLog["CallDir"].isNull())
			agentStatusLogObject.callDir = dataNodeListAgentStatusLog["CallDir"].asString();
		if(!dataNodeListAgentStatusLog["AgentNo"].isNull())
			agentStatusLogObject.agentNo = dataNodeListAgentStatusLog["AgentNo"].asString();
		if(!dataNodeListAgentStatusLog["AgentDropCall"].isNull())
			agentStatusLogObject.agentDropCall = dataNodeListAgentStatusLog["AgentDropCall"].asString();
		if(!dataNodeListAgentStatusLog["AliHangupCause"].isNull())
			agentStatusLogObject.aliHangupCause = dataNodeListAgentStatusLog["AliHangupCause"].asString();
		if(!dataNodeListAgentStatusLog["TransferNumber"].isNull())
			agentStatusLogObject.transferNumber = dataNodeListAgentStatusLog["TransferNumber"].asString();
		if(!dataNodeListAgentStatusLog["Extend1"].isNull())
			agentStatusLogObject.extend1 = dataNodeListAgentStatusLog["Extend1"].asString();
		if(!dataNodeListAgentStatusLog["Extend2"].isNull())
			agentStatusLogObject.extend2 = dataNodeListAgentStatusLog["Extend2"].asString();
		if(!dataNodeListAgentStatusLog["Extend3"].isNull())
			agentStatusLogObject.extend3 = dataNodeListAgentStatusLog["Extend3"].asString();
		if(!dataNodeListAgentStatusLog["Extend4"].isNull())
			agentStatusLogObject.extend4 = dataNodeListAgentStatusLog["Extend4"].asString();
		if(!dataNodeListAgentStatusLog["TenantId"].isNull())
			agentStatusLogObject.tenantId = dataNodeListAgentStatusLog["TenantId"].asString();
		if(!dataNodeListAgentStatusLog["OutboundScenario"].isNull())
			agentStatusLogObject.outboundScenario = dataNodeListAgentStatusLog["OutboundScenario"].asString() == "true";
		data_.list.push_back(agentStatusLogObject);
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

std::string ListLegacyAgentStatusLogsResult::getMessage()const
{
	return message_;
}

int ListLegacyAgentStatusLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListLegacyAgentStatusLogsResult::Data ListLegacyAgentStatusLogsResult::getData()const
{
	return data_;
}

std::string ListLegacyAgentStatusLogsResult::getCode()const
{
	return code_;
}

bool ListLegacyAgentStatusLogsResult::getSuccess()const
{
	return success_;
}

