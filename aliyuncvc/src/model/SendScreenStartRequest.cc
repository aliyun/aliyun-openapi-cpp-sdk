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

#include <alibabacloud/aliyuncvc/model/SendScreenStartRequest.h>

using AlibabaCloud::Aliyuncvc::Model::SendScreenStartRequest;

SendScreenStartRequest::SendScreenStartRequest() :
	RpcServiceRequest("aliyuncvc", "2019-10-30", "SendScreenStart")
{
	setMethod(HttpRequest::Method::Post);
}

SendScreenStartRequest::~SendScreenStartRequest()
{}

std::string SendScreenStartRequest::getCastScreenCode()const
{
	return castScreenCode_;
}

void SendScreenStartRequest::setCastScreenCode(const std::string& castScreenCode)
{
	castScreenCode_ = castScreenCode;
	setBodyParameter("CastScreenCode", castScreenCode);
}

std::string SendScreenStartRequest::getSessionId()const
{
	return sessionId_;
}

void SendScreenStartRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setBodyParameter("SessionId", sessionId);
}

