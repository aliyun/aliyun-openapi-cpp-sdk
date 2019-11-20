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

#include <alibabacloud/cdn/model/AddFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::AddFCTriggerRequest;

AddFCTriggerRequest::AddFCTriggerRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "AddFCTrigger")
{
	setMethod(HttpRequest::Method::Post);
}

AddFCTriggerRequest::~AddFCTriggerRequest()
{}

std::string AddFCTriggerRequest::getNotes()const
{
	return notes_;
}

void AddFCTriggerRequest::setNotes(const std::string& notes)
{
	notes_ = notes;
	setCoreParameter("Notes", notes);
}

std::string AddFCTriggerRequest::getEventMetaVersion()const
{
	return eventMetaVersion_;
}

void AddFCTriggerRequest::setEventMetaVersion(const std::string& eventMetaVersion)
{
	eventMetaVersion_ = eventMetaVersion;
	setCoreParameter("EventMetaVersion", eventMetaVersion);
}

std::string AddFCTriggerRequest::getTriggerARN()const
{
	return triggerARN_;
}

void AddFCTriggerRequest::setTriggerARN(const std::string& triggerARN)
{
	triggerARN_ = triggerARN;
	setCoreParameter("TriggerARN", triggerARN);
}

std::string AddFCTriggerRequest::getSourceARN()const
{
	return sourceARN_;
}

void AddFCTriggerRequest::setSourceARN(const std::string& sourceARN)
{
	sourceARN_ = sourceARN;
	setCoreParameter("SourceARN", sourceARN);
}

long AddFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void AddFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddFCTriggerRequest::getRoleARN()const
{
	return roleARN_;
}

void AddFCTriggerRequest::setRoleARN(const std::string& roleARN)
{
	roleARN_ = roleARN;
	setCoreParameter("RoleARN", roleARN);
}

std::string AddFCTriggerRequest::getEventMetaName()const
{
	return eventMetaName_;
}

void AddFCTriggerRequest::setEventMetaName(const std::string& eventMetaName)
{
	eventMetaName_ = eventMetaName;
	setCoreParameter("EventMetaName", eventMetaName);
}

std::string AddFCTriggerRequest::getFunctionARN()const
{
	return functionARN_;
}

void AddFCTriggerRequest::setFunctionARN(const std::string& functionARN)
{
	functionARN_ = functionARN;
	setCoreParameter("FunctionARN", functionARN);
}

