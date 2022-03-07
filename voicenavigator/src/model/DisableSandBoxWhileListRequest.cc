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

#include <alibabacloud/voicenavigator/model/DisableSandBoxWhileListRequest.h>

using AlibabaCloud::VoiceNavigator::Model::DisableSandBoxWhileListRequest;

DisableSandBoxWhileListRequest::DisableSandBoxWhileListRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "DisableSandBoxWhileList")
{
	setMethod(HttpRequest::Method::Post);
}

DisableSandBoxWhileListRequest::~DisableSandBoxWhileListRequest()
{}

std::string DisableSandBoxWhileListRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void DisableSandBoxWhileListRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string DisableSandBoxWhileListRequest::getInstanceId()const
{
	return instanceId_;
}

void DisableSandBoxWhileListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

