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

#include <alibabacloud/trademark/model/WriteCommunicationLogRequest.h>

using AlibabaCloud::Trademark::Model::WriteCommunicationLogRequest;

WriteCommunicationLogRequest::WriteCommunicationLogRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "WriteCommunicationLog")
{}

WriteCommunicationLogRequest::~WriteCommunicationLogRequest()
{}

std::string WriteCommunicationLogRequest::getNote()const
{
	return note_;
}

void WriteCommunicationLogRequest::setNote(const std::string& note)
{
	note_ = note;
	setCoreParameter("Note", std::to_string(note));
}

std::string WriteCommunicationLogRequest::getTargetId()const
{
	return targetId_;
}

void WriteCommunicationLogRequest::setTargetId(const std::string& targetId)
{
	targetId_ = targetId;
	setCoreParameter("TargetId", std::to_string(targetId));
}

std::string WriteCommunicationLogRequest::getBizId()const
{
	return bizId_;
}

void WriteCommunicationLogRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", std::to_string(bizId));
}

