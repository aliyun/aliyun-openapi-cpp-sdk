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

#include <alibabacloud/ccc/model/ListAgentStatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentStatesResult::ListAgentStatesResult() :
	ServiceResult()
{}

ListAgentStatesResult::ListAgentStatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentStatesResult::~ListAgentStatesResult()
{}

void ListAgentStatesResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["RealTimeAgentState"];
	for (auto dataNodeListRealTimeAgentState : allListNode)
	{
		Data::RealTimeAgentState realTimeAgentStateObject;
		if(!dataNodeListRealTimeAgentState["LoginName"].isNull())
			realTimeAgentStateObject.loginName = dataNodeListRealTimeAgentState["LoginName"].asString();
		if(!dataNodeListRealTimeAgentState["Dn"].isNull())
			realTimeAgentStateObject.dn = dataNodeListRealTimeAgentState["Dn"].asString();
		if(!dataNodeListRealTimeAgentState["StateDuration"].isNull())
			realTimeAgentStateObject.stateDuration = dataNodeListRealTimeAgentState["StateDuration"].asString();
		if(!dataNodeListRealTimeAgentState["State"].isNull())
			realTimeAgentStateObject.state = dataNodeListRealTimeAgentState["State"].asString();
		if(!dataNodeListRealTimeAgentState["AgentId"].isNull())
			realTimeAgentStateObject.agentId = dataNodeListRealTimeAgentState["AgentId"].asString();
		if(!dataNodeListRealTimeAgentState["AgentName"].isNull())
			realTimeAgentStateObject.agentName = dataNodeListRealTimeAgentState["AgentName"].asString();
		if(!dataNodeListRealTimeAgentState["InstanceId"].isNull())
			realTimeAgentStateObject.instanceId = dataNodeListRealTimeAgentState["InstanceId"].asString();
		if(!dataNodeListRealTimeAgentState["BreakCode"].isNull())
			realTimeAgentStateObject.breakCode = dataNodeListRealTimeAgentState["BreakCode"].asString();
		if(!dataNodeListRealTimeAgentState["OutboundScenario"].isNull())
			realTimeAgentStateObject.outboundScenario = dataNodeListRealTimeAgentState["OutboundScenario"].asString() == "true";
		data_.list.push_back(realTimeAgentStateObject);
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

std::string ListAgentStatesResult::getMessage()const
{
	return message_;
}

int ListAgentStatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListAgentStatesResult::Data ListAgentStatesResult::getData()const
{
	return data_;
}

std::string ListAgentStatesResult::getCode()const
{
	return code_;
}

bool ListAgentStatesResult::getSuccess()const
{
	return success_;
}

