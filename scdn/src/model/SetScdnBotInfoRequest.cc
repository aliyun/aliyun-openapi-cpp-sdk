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

#include <alibabacloud/scdn/model/SetScdnBotInfoRequest.h>

using AlibabaCloud::Scdn::Model::SetScdnBotInfoRequest;

SetScdnBotInfoRequest::SetScdnBotInfoRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "SetScdnBotInfo")
{
	setMethod(HttpRequest::Method::Get);
}

SetScdnBotInfoRequest::~SetScdnBotInfoRequest()
{}

std::string SetScdnBotInfoRequest::getEnable()const
{
	return enable_;
}

void SetScdnBotInfoRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetScdnBotInfoRequest::getDomainName()const
{
	return domainName_;
}

void SetScdnBotInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetScdnBotInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void SetScdnBotInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetScdnBotInfoRequest::getStatus()const
{
	return status_;
}

void SetScdnBotInfoRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

