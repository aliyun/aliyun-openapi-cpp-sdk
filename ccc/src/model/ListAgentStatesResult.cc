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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allList = value["List"]["RealTimeAgentState"];
	for (auto value : allList)
	{
		Data::RealTimeAgentState realTimeAgentStateObject;
		if(!value["InstanceId"].isNull())
			realTimeAgentStateObject.instanceId = value["InstanceId"].asString();
		if(!value["AgentId"].isNull())
			realTimeAgentStateObject.agentId = value["AgentId"].asString();
		if(!value["LoginName"].isNull())
			realTimeAgentStateObject.loginName = value["LoginName"].asString();
		if(!value["AgentName"].isNull())
			realTimeAgentStateObject.agentName = value["AgentName"].asString();
		if(!value["State"].isNull())
			realTimeAgentStateObject.state = value["State"].asString();
		if(!value["Dn"].isNull())
			realTimeAgentStateObject.dn = value["Dn"].asString();
		if(!value["StateDuration"].isNull())
			realTimeAgentStateObject.stateDuration = value["StateDuration"].asString();
		data_.list.push_back(realTimeAgentStateObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

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

