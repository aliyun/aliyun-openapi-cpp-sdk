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

#include <alibabacloud/ccc/model/ListLegacyAppraiseLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListLegacyAppraiseLogsResult::ListLegacyAppraiseLogsResult() :
	ServiceResult()
{}

ListLegacyAppraiseLogsResult::ListLegacyAppraiseLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLegacyAppraiseLogsResult::~ListLegacyAppraiseLogsResult()
{}

void ListLegacyAppraiseLogsResult::parse(const std::string &payload)
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
		if(!dataNodeListAgentStatusLog["Id"].isNull())
			agentStatusLogObject.id = std::stol(dataNodeListAgentStatusLog["Id"].asString());
		if(!dataNodeListAgentStatusLog["Acid"].isNull())
			agentStatusLogObject.acid = dataNodeListAgentStatusLog["Acid"].asString();
		if(!dataNodeListAgentStatusLog["ContactType"].isNull())
			agentStatusLogObject.contactType = dataNodeListAgentStatusLog["ContactType"].asString();
		if(!dataNodeListAgentStatusLog["RamId"].isNull())
			agentStatusLogObject.ramId = dataNodeListAgentStatusLog["RamId"].asString();
		if(!dataNodeListAgentStatusLog["StatisticDate"].isNull())
			agentStatusLogObject.statisticDate = dataNodeListAgentStatusLog["StatisticDate"].asString();
		if(!dataNodeListAgentStatusLog["SkillGroupId"].isNull())
			agentStatusLogObject.skillGroupId = dataNodeListAgentStatusLog["SkillGroupId"].asString();
		if(!dataNodeListAgentStatusLog["InstanceId"].isNull())
			agentStatusLogObject.instanceId = dataNodeListAgentStatusLog["InstanceId"].asString();
		if(!dataNodeListAgentStatusLog["PressKey"].isNull())
			agentStatusLogObject.pressKey = dataNodeListAgentStatusLog["PressKey"].asString();
		if(!dataNodeListAgentStatusLog["Note"].isNull())
			agentStatusLogObject.note = dataNodeListAgentStatusLog["Note"].asString();
		if(!dataNodeListAgentStatusLog["ParentNote"].isNull())
			agentStatusLogObject.parentNote = dataNodeListAgentStatusLog["ParentNote"].asString();
		if(!dataNodeListAgentStatusLog["Type"].isNull())
			agentStatusLogObject.type = dataNodeListAgentStatusLog["Type"].asString();
		if(!dataNodeListAgentStatusLog["KeyMarkRelation"].isNull())
			agentStatusLogObject.keyMarkRelation = dataNodeListAgentStatusLog["KeyMarkRelation"].asString();
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

std::string ListLegacyAppraiseLogsResult::getMessage()const
{
	return message_;
}

int ListLegacyAppraiseLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListLegacyAppraiseLogsResult::Data ListLegacyAppraiseLogsResult::getData()const
{
	return data_;
}

std::string ListLegacyAppraiseLogsResult::getCode()const
{
	return code_;
}

bool ListLegacyAppraiseLogsResult::getSuccess()const
{
	return success_;
}

