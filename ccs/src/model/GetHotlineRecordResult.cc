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

#include <alibabacloud/ccs/model/GetHotlineRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ccs;
using namespace AlibabaCloud::Ccs::Model;

GetHotlineRecordResult::GetHotlineRecordResult() :
	ServiceResult()
{}

GetHotlineRecordResult::GetHotlineRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHotlineRecordResult::~GetHotlineRecordResult()
{}

void GetHotlineRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["CallType"].isNull())
		callType_ = value["CallType"].asString();
	if(!value["VisitorId"].isNull())
		visitorId_ = value["VisitorId"].asString();
	if(!value["VisitorPhone"].isNull())
		visitorPhone_ = value["VisitorPhone"].asString();
	if(!value["VisitorProvince"].isNull())
		visitorProvince_ = value["VisitorProvince"].asString();
	if(!value["SceneId"].isNull())
		sceneId_ = value["SceneId"].asString();
	if(!value["AgentId"].isNull())
		agentId_ = value["AgentId"].asString();
	if(!value["AgentName"].isNull())
		agentName_ = value["AgentName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Memo"].isNull())
		memo_ = value["Memo"].asString();
	if(!value["HangupType"].isNull())
		hangupType_ = value["HangupType"].asString();
	if(!value["Satisfaction"].isNull())
		satisfaction_ = value["Satisfaction"].asString();
	if(!value["OutboundTaskId"].isNull())
		outboundTaskId_ = value["OutboundTaskId"].asString();
	if(!value["Categories"].isNull())
		categories_ = value["Categories"].asString();
	if(!value["CcsInstanceId"].isNull())
		ccsInstanceId_ = value["CcsInstanceId"].asString();
	if(!value["TalkDuration"].isNull())
		talkDuration_ = std::stol(value["TalkDuration"].asString());
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();

}

std::string GetHotlineRecordResult::getStatus()const
{
	return status_;
}

std::string GetHotlineRecordResult::getGroupName()const
{
	return groupName_;
}

std::string GetHotlineRecordResult::getVisitorId()const
{
	return visitorId_;
}

std::string GetHotlineRecordResult::getOutboundTaskId()const
{
	return outboundTaskId_;
}

std::string GetHotlineRecordResult::getCategories()const
{
	return categories_;
}

long GetHotlineRecordResult::getTalkDuration()const
{
	return talkDuration_;
}

std::string GetHotlineRecordResult::getVisitorPhone()const
{
	return visitorPhone_;
}

std::string GetHotlineRecordResult::getCreateTime()const
{
	return createTime_;
}

std::string GetHotlineRecordResult::getSatisfaction()const
{
	return satisfaction_;
}

std::string GetHotlineRecordResult::getCallType()const
{
	return callType_;
}

std::string GetHotlineRecordResult::getVisitorProvince()const
{
	return visitorProvince_;
}

std::string GetHotlineRecordResult::getCcsInstanceId()const
{
	return ccsInstanceId_;
}

std::string GetHotlineRecordResult::getGroupId()const
{
	return groupId_;
}

std::string GetHotlineRecordResult::getSceneId()const
{
	return sceneId_;
}

std::string GetHotlineRecordResult::getFinishTime()const
{
	return finishTime_;
}

std::string GetHotlineRecordResult::getHangupType()const
{
	return hangupType_;
}

std::string GetHotlineRecordResult::getId()const
{
	return id_;
}

std::string GetHotlineRecordResult::getAgentId()const
{
	return agentId_;
}

std::string GetHotlineRecordResult::getAgentName()const
{
	return agentName_;
}

std::string GetHotlineRecordResult::getMemo()const
{
	return memo_;
}

