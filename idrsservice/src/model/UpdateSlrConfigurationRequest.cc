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

#include <alibabacloud/idrsservice/model/UpdateSlrConfigurationRequest.h>

using AlibabaCloud::Idrsservice::Model::UpdateSlrConfigurationRequest;

UpdateSlrConfigurationRequest::UpdateSlrConfigurationRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "UpdateSlrConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSlrConfigurationRequest::~UpdateSlrConfigurationRequest()
{}

std::string UpdateSlrConfigurationRequest::getMqInstanceId()const
{
	return mqInstanceId_;
}

void UpdateSlrConfigurationRequest::setMqInstanceId(const std::string& mqInstanceId)
{
	mqInstanceId_ = mqInstanceId;
	setParameter("MqInstanceId", mqInstanceId);
}

std::string UpdateSlrConfigurationRequest::getMqGroupId()const
{
	return mqGroupId_;
}

void UpdateSlrConfigurationRequest::setMqGroupId(const std::string& mqGroupId)
{
	mqGroupId_ = mqGroupId;
	setParameter("MqGroupId", mqGroupId);
}

std::vector<std::string> UpdateSlrConfigurationRequest::getMqEvent()const
{
	return mqEvent_;
}

void UpdateSlrConfigurationRequest::setMqEvent(const std::vector<std::string>& mqEvent)
{
	mqEvent_ = mqEvent;
	for(int dep1 = 0; dep1!= mqEvent.size(); dep1++) {
		setParameter("MqEvent."+ std::to_string(dep1), mqEvent.at(dep1));
	}
}

std::string UpdateSlrConfigurationRequest::getMqEndpoint()const
{
	return mqEndpoint_;
}

void UpdateSlrConfigurationRequest::setMqEndpoint(const std::string& mqEndpoint)
{
	mqEndpoint_ = mqEndpoint;
	setParameter("MqEndpoint", mqEndpoint);
}

std::string UpdateSlrConfigurationRequest::getMqTopic()const
{
	return mqTopic_;
}

void UpdateSlrConfigurationRequest::setMqTopic(const std::string& mqTopic)
{
	mqTopic_ = mqTopic;
	setParameter("MqTopic", mqTopic);
}

bool UpdateSlrConfigurationRequest::getMqSubscribe()const
{
	return mqSubscribe_;
}

void UpdateSlrConfigurationRequest::setMqSubscribe(bool mqSubscribe)
{
	mqSubscribe_ = mqSubscribe;
	setParameter("MqSubscribe", mqSubscribe ? "true" : "false");
}

