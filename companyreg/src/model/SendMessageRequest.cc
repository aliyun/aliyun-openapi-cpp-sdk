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

#include <alibabacloud/companyreg/model/SendMessageRequest.h>

using AlibabaCloud::Companyreg::Model::SendMessageRequest;

SendMessageRequest::SendMessageRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "SendMessage")
{
	setMethod(HttpRequest::Method::Post);
}

SendMessageRequest::~SendMessageRequest()
{}

std::string SendMessageRequest::getEventId()const
{
	return eventId_;
}

void SendMessageRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setParameter("EventId", eventId);
}

std::string SendMessageRequest::getParam()const
{
	return param_;
}

void SendMessageRequest::setParam(const std::string& param)
{
	param_ = param;
	setParameter("Param", param);
}

std::string SendMessageRequest::getBizId()const
{
	return bizId_;
}

void SendMessageRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

