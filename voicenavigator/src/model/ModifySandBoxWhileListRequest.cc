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

#include <alibabacloud/voicenavigator/model/ModifySandBoxWhileListRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifySandBoxWhileListRequest;

ModifySandBoxWhileListRequest::ModifySandBoxWhileListRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ModifySandBoxWhileList")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySandBoxWhileListRequest::~ModifySandBoxWhileListRequest()
{}

std::string ModifySandBoxWhileListRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void ModifySandBoxWhileListRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string ModifySandBoxWhileListRequest::getDescription()const
{
	return description_;
}

void ModifySandBoxWhileListRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifySandBoxWhileListRequest::getUuid()const
{
	return uuid_;
}

void ModifySandBoxWhileListRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string ModifySandBoxWhileListRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifySandBoxWhileListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifySandBoxWhileListRequest::getName()const
{
	return name_;
}

void ModifySandBoxWhileListRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

