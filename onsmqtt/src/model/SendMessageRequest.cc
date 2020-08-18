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

#include <alibabacloud/onsmqtt/model/SendMessageRequest.h>

using AlibabaCloud::OnsMqtt::Model::SendMessageRequest;

SendMessageRequest::SendMessageRequest() :
	RpcServiceRequest("onsmqtt", "2020-04-20", "SendMessage")
{
	setMethod(HttpRequest::Method::Post);
}

SendMessageRequest::~SendMessageRequest()
{}

std::string SendMessageRequest::getMqttTopic()const
{
	return mqttTopic_;
}

void SendMessageRequest::setMqttTopic(const std::string& mqttTopic)
{
	mqttTopic_ = mqttTopic;
	setParameter("MqttTopic", mqttTopic);
}

std::string SendMessageRequest::getInstanceId()const
{
	return instanceId_;
}

void SendMessageRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string SendMessageRequest::getPayload()const
{
	return payload_;
}

void SendMessageRequest::setPayload(const std::string& payload)
{
	payload_ = payload;
	setParameter("Payload", payload);
}

