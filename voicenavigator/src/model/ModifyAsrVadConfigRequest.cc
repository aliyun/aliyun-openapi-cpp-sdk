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

#include <alibabacloud/voicenavigator/model/ModifyAsrVadConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyAsrVadConfigRequest;

ModifyAsrVadConfigRequest::ModifyAsrVadConfigRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyAsrVadConfig")
{
	setMethod(HttpRequest::Method::Get);
}

ModifyAsrVadConfigRequest::~ModifyAsrVadConfigRequest()
{}

std::string ModifyAsrVadConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyAsrVadConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyAsrVadConfigRequest::getSpeechNoiseThreshold()const
{
	return speechNoiseThreshold_;
}

void ModifyAsrVadConfigRequest::setSpeechNoiseThreshold(const std::string& speechNoiseThreshold)
{
	speechNoiseThreshold_ = speechNoiseThreshold;
	setParameter("SpeechNoiseThreshold", speechNoiseThreshold);
}

