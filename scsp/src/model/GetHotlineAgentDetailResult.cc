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

#include <alibabacloud/scsp/model/GetHotlineAgentDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetHotlineAgentDetailResult::GetHotlineAgentDetailResult() :
	ServiceResult()
{}

GetHotlineAgentDetailResult::GetHotlineAgentDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHotlineAgentDetailResult::~GetHotlineAgentDetailResult()
{}

void GetHotlineAgentDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AgentStatusCode"].isNull())
		data_.agentStatusCode = dataNode["AgentStatusCode"].asString();
	if(!dataNode["Token"].isNull())
		data_.token = dataNode["Token"].asString();
	if(!dataNode["AgentId"].isNull())
		data_.agentId = std::stol(dataNode["AgentId"].asString());
	if(!dataNode["Assigned"].isNull())
		data_.assigned = dataNode["Assigned"].asString() == "true";
	if(!dataNode["RestType"].isNull())
		data_.restType = std::stoi(dataNode["RestType"].asString());
	if(!dataNode["AgentStatus"].isNull())
		data_.agentStatus = std::stoi(dataNode["AgentStatus"].asString());
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = std::stol(dataNode["TenantId"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());

}

std::string GetHotlineAgentDetailResult::getMessage()const
{
	return message_;
}

long GetHotlineAgentDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetHotlineAgentDetailResult::Data GetHotlineAgentDetailResult::getData()const
{
	return data_;
}

std::string GetHotlineAgentDetailResult::getCode()const
{
	return code_;
}

bool GetHotlineAgentDetailResult::getSuccess()const
{
	return success_;
}

