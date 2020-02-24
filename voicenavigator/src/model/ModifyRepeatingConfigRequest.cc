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

#include <alibabacloud/voicenavigator/model/ModifyRepeatingConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyRepeatingConfigRequest;

ModifyRepeatingConfigRequest::ModifyRepeatingConfigRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyRepeatingConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyRepeatingConfigRequest::~ModifyRepeatingConfigRequest()
{}

std::vector<std::string> ModifyRepeatingConfigRequest::getUtterances()const
{
	return utterances_;
}

void ModifyRepeatingConfigRequest::setUtterances(const std::vector<std::string>& utterances)
{
	utterances_ = utterances;
	for(int dep1 = 0; dep1!= utterances.size(); dep1++) {
		setParameter("Utterances."+ std::to_string(dep1), utterances.at(dep1));
	}
}

std::string ModifyRepeatingConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyRepeatingConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

