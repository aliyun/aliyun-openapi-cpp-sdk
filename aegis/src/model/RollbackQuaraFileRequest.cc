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

#include <alibabacloud/aegis/model/RollbackQuaraFileRequest.h>

using AlibabaCloud::Aegis::Model::RollbackQuaraFileRequest;

RollbackQuaraFileRequest::RollbackQuaraFileRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "RollbackQuaraFile")
{}

RollbackQuaraFileRequest::~RollbackQuaraFileRequest()
{}

std::string RollbackQuaraFileRequest::getUuid()const
{
	return uuid_;
}

void RollbackQuaraFileRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string RollbackQuaraFileRequest::getEventName()const
{
	return eventName_;
}

void RollbackQuaraFileRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setCoreParameter("EventName", eventName);
}

std::string RollbackQuaraFileRequest::getSourceIp()const
{
	return sourceIp_;
}

void RollbackQuaraFileRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string RollbackQuaraFileRequest::getEventType()const
{
	return eventType_;
}

void RollbackQuaraFileRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", eventType);
}

std::string RollbackQuaraFileRequest::getTag()const
{
	return tag_;
}

void RollbackQuaraFileRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

