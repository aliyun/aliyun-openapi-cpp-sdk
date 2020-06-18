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

#include <alibabacloud/aliyuncvc/model/CheckMeetingCodeRequest.h>

using AlibabaCloud::Aliyuncvc::Model::CheckMeetingCodeRequest;

CheckMeetingCodeRequest::CheckMeetingCodeRequest() :
	RpcServiceRequest("aliyuncvc", "2019-09-19", "CheckMeetingCode")
{
	setMethod(HttpRequest::Method::Post);
}

CheckMeetingCodeRequest::~CheckMeetingCodeRequest()
{}

std::string CheckMeetingCodeRequest::getMeetingCode()const
{
	return meetingCode_;
}

void CheckMeetingCodeRequest::setMeetingCode(const std::string& meetingCode)
{
	meetingCode_ = meetingCode;
	setBodyParameter("MeetingCode", meetingCode);
}

std::string CheckMeetingCodeRequest::getUserId()const
{
	return userId_;
}

void CheckMeetingCodeRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

