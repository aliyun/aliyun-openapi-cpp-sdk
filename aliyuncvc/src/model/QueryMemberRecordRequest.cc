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

#include <alibabacloud/aliyuncvc/model/QueryMemberRecordRequest.h>

using AlibabaCloud::Aliyuncvc::Model::QueryMemberRecordRequest;

QueryMemberRecordRequest::QueryMemberRecordRequest() :
	RpcServiceRequest("aliyuncvc", "2019-09-19", "QueryMemberRecord")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMemberRecordRequest::~QueryMemberRecordRequest()
{}

std::string QueryMemberRecordRequest::getMeetingUUID()const
{
	return meetingUUID_;
}

void QueryMemberRecordRequest::setMeetingUUID(const std::string& meetingUUID)
{
	meetingUUID_ = meetingUUID;
	setParameter("MeetingUUID", meetingUUID);
}

