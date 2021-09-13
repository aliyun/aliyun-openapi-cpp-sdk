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

#include <alibabacloud/linkwan/model/SendUnicastCommandRequest.h>

using AlibabaCloud::LinkWAN::Model::SendUnicastCommandRequest;

SendUnicastCommandRequest::SendUnicastCommandRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "SendUnicastCommand")
{
	setMethod(HttpRequest::Method::Post);
}

SendUnicastCommandRequest::~SendUnicastCommandRequest()
{}

bool SendUnicastCommandRequest::getConfirmed()const
{
	return confirmed_;
}

void SendUnicastCommandRequest::setConfirmed(bool confirmed)
{
	confirmed_ = confirmed;
	setParameter("Confirmed", confirmed ? "true" : "false");
}

std::string SendUnicastCommandRequest::getContent()const
{
	return content_;
}

void SendUnicastCommandRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string SendUnicastCommandRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SendUnicastCommandRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int SendUnicastCommandRequest::getMaxRetries()const
{
	return maxRetries_;
}

void SendUnicastCommandRequest::setMaxRetries(int maxRetries)
{
	maxRetries_ = maxRetries;
	setParameter("MaxRetries", std::to_string(maxRetries));
}

std::string SendUnicastCommandRequest::getDevEui()const
{
	return devEui_;
}

void SendUnicastCommandRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

bool SendUnicastCommandRequest::getCleanUp()const
{
	return cleanUp_;
}

void SendUnicastCommandRequest::setCleanUp(bool cleanUp)
{
	cleanUp_ = cleanUp;
	setParameter("CleanUp", cleanUp ? "true" : "false");
}

int SendUnicastCommandRequest::getFPort()const
{
	return fPort_;
}

void SendUnicastCommandRequest::setFPort(int fPort)
{
	fPort_ = fPort;
	setParameter("FPort", std::to_string(fPort));
}

std::string SendUnicastCommandRequest::getApiProduct()const
{
	return apiProduct_;
}

void SendUnicastCommandRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SendUnicastCommandRequest::getApiRevision()const
{
	return apiRevision_;
}

void SendUnicastCommandRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

