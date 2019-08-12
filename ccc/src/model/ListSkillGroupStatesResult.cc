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

#include <alibabacloud/ccc/model/ListSkillGroupStatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSkillGroupStatesResult::ListSkillGroupStatesResult() :
	ServiceResult()
{}

ListSkillGroupStatesResult::ListSkillGroupStatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupStatesResult::~ListSkillGroupStatesResult()
{}

void ListSkillGroupStatesResult::parse(const std::string &payload)
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
	auto allList = value["List"]["RealTimeSkillGroupState"];
	for (auto value : allList)
	{
		Data::RealTimeSkillGroupState realTimeSkillGroupStateObject;
		if(!value["InstanceId"].isNull())
			realTimeSkillGroupStateObject.instanceId = value["InstanceId"].asString();
		if(!value["SkillGroupId"].isNull())
			realTimeSkillGroupStateObject.skillGroupId = value["SkillGroupId"].asString();
		if(!value["SkillGroupName"].isNull())
			realTimeSkillGroupStateObject.skillGroupName = value["SkillGroupName"].asString();
		if(!value["WaitingCalls"].isNull())
			realTimeSkillGroupStateObject.waitingCalls = std::stol(value["WaitingCalls"].asString());
		if(!value["LongestCall"].isNull())
			realTimeSkillGroupStateObject.longestCall = std::stol(value["LongestCall"].asString());
		if(!value["LoggedInAgents"].isNull())
			realTimeSkillGroupStateObject.loggedInAgents = std::stol(value["LoggedInAgents"].asString());
		if(!value["ReadyAgents"].isNull())
			realTimeSkillGroupStateObject.readyAgents = std::stol(value["ReadyAgents"].asString());
		if(!value["BreakingAgents"].isNull())
			realTimeSkillGroupStateObject.breakingAgents = std::stol(value["BreakingAgents"].asString());
		if(!value["TalkingAgents"].isNull())
			realTimeSkillGroupStateObject.talkingAgents = std::stol(value["TalkingAgents"].asString());
		if(!value["WorkingAgents"].isNull())
			realTimeSkillGroupStateObject.workingAgents = std::stol(value["WorkingAgents"].asString());
		data_.list.push_back(realTimeSkillGroupStateObject);
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

std::string ListSkillGroupStatesResult::getMessage()const
{
	return message_;
}

int ListSkillGroupStatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListSkillGroupStatesResult::Data ListSkillGroupStatesResult::getData()const
{
	return data_;
}

std::string ListSkillGroupStatesResult::getCode()const
{
	return code_;
}

bool ListSkillGroupStatesResult::getSuccess()const
{
	return success_;
}

