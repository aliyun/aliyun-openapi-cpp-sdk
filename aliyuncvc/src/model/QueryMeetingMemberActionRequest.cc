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

#include <alibabacloud/aliyuncvc/model/QueryMeetingMemberActionRequest.h>

using AlibabaCloud::Aliyuncvc::Model::QueryMeetingMemberActionRequest;

QueryMeetingMemberActionRequest::QueryMeetingMemberActionRequest() :
	RpcServiceRequest("aliyuncvc", "2019-10-30", "QueryMeetingMemberAction")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMeetingMemberActionRequest::~QueryMeetingMemberActionRequest()
{}

std::string QueryMeetingMemberActionRequest::getMeetingUnitKey()const
{
	return meetingUnitKey_;
}

void QueryMeetingMemberActionRequest::setMeetingUnitKey(const std::string& meetingUnitKey)
{
	meetingUnitKey_ = meetingUnitKey;
	setBodyParameter("MeetingUnitKey", meetingUnitKey);
}

long QueryMeetingMemberActionRequest::getEndTime()const
{
	return endTime_;
}

void QueryMeetingMemberActionRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

std::string QueryMeetingMemberActionRequest::getMemberUUID()const
{
	return memberUUID_;
}

void QueryMeetingMemberActionRequest::setMemberUUID(const std::string& memberUUID)
{
	memberUUID_ = memberUUID;
	setBodyParameter("MemberUUID", memberUUID);
}

long QueryMeetingMemberActionRequest::getStartTime()const
{
	return startTime_;
}

void QueryMeetingMemberActionRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

std::string QueryMeetingMemberActionRequest::getMeetingUUID()const
{
	return meetingUUID_;
}

void QueryMeetingMemberActionRequest::setMeetingUUID(const std::string& meetingUUID)
{
	meetingUUID_ = meetingUUID;
	setBodyParameter("MeetingUUID", meetingUUID);
}

