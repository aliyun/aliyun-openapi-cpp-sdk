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

#include <alibabacloud/market/model/NotifyContractEventRequest.h>

using AlibabaCloud::Market::Model::NotifyContractEventRequest;

NotifyContractEventRequest::NotifyContractEventRequest() :
	RpcServiceRequest("market", "2015-11-01", "NotifyContractEvent")
{
	setMethod(HttpRequest::Method::Post);
}

NotifyContractEventRequest::~NotifyContractEventRequest()
{}

std::string NotifyContractEventRequest::getEventMessage()const
{
	return eventMessage_;
}

void NotifyContractEventRequest::setEventMessage(const std::string& eventMessage)
{
	eventMessage_ = eventMessage;
	setParameter("EventMessage", eventMessage);
}

std::string NotifyContractEventRequest::getEventType()const
{
	return eventType_;
}

void NotifyContractEventRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

