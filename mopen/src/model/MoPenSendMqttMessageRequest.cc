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

#include <alibabacloud/mopen/model/MoPenSendMqttMessageRequest.h>

using AlibabaCloud::MoPen::Model::MoPenSendMqttMessageRequest;

MoPenSendMqttMessageRequest::MoPenSendMqttMessageRequest() :
	RpcServiceRequest("mopen", "2018-02-11", "MoPenSendMqttMessage")
{
	setMethod(HttpRequest::Method::Post);
}

MoPenSendMqttMessageRequest::~MoPenSendMqttMessageRequest()
{}

std::string MoPenSendMqttMessageRequest::getPayload()const
{
	return payload_;
}

void MoPenSendMqttMessageRequest::setPayload(const std::string& payload)
{
	payload_ = payload;
	setBodyParameter("Payload", payload);
}

std::string MoPenSendMqttMessageRequest::getDeviceName()const
{
	return deviceName_;
}

void MoPenSendMqttMessageRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

