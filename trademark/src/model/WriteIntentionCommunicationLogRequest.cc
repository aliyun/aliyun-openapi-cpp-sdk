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

#include <alibabacloud/trademark/model/WriteIntentionCommunicationLogRequest.h>

using AlibabaCloud::Trademark::Model::WriteIntentionCommunicationLogRequest;

WriteIntentionCommunicationLogRequest::WriteIntentionCommunicationLogRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "WriteIntentionCommunicationLog")
{
	setMethod(HttpRequest::Method::Post);
}

WriteIntentionCommunicationLogRequest::~WriteIntentionCommunicationLogRequest()
{}

std::string WriteIntentionCommunicationLogRequest::getNote()const
{
	return note_;
}

void WriteIntentionCommunicationLogRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

bool WriteIntentionCommunicationLogRequest::getReject()const
{
	return reject_;
}

void WriteIntentionCommunicationLogRequest::setReject(bool reject)
{
	reject_ = reject;
	setParameter("Reject", reject ? "true" : "false");
}

std::string WriteIntentionCommunicationLogRequest::getBizId()const
{
	return bizId_;
}

void WriteIntentionCommunicationLogRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

