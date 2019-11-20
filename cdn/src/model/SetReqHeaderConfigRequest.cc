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

#include <alibabacloud/cdn/model/SetReqHeaderConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetReqHeaderConfigRequest;

SetReqHeaderConfigRequest::SetReqHeaderConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetReqHeaderConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetReqHeaderConfigRequest::~SetReqHeaderConfigRequest()
{}

std::string SetReqHeaderConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetReqHeaderConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long SetReqHeaderConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetReqHeaderConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetReqHeaderConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetReqHeaderConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

long SetReqHeaderConfigRequest::getConfigId()const
{
	return configId_;
}

void SetReqHeaderConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

std::string SetReqHeaderConfigRequest::getValue()const
{
	return value_;
}

void SetReqHeaderConfigRequest::setValue(const std::string& value)
{
	value_ = value;
	setCoreParameter("Value", value);
}

std::string SetReqHeaderConfigRequest::getKey()const
{
	return key_;
}

void SetReqHeaderConfigRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}

