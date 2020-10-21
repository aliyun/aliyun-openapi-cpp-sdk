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

#include <alibabacloud/sgw/model/CheckActivationKeyRequest.h>

using AlibabaCloud::Sgw::Model::CheckActivationKeyRequest;

CheckActivationKeyRequest::CheckActivationKeyRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CheckActivationKey")
{
	setMethod(HttpRequest::Method::Post);
}

CheckActivationKeyRequest::~CheckActivationKeyRequest()
{}

std::string CheckActivationKeyRequest::getCryptKey()const
{
	return cryptKey_;
}

void CheckActivationKeyRequest::setCryptKey(const std::string& cryptKey)
{
	cryptKey_ = cryptKey;
	setParameter("CryptKey", cryptKey);
}

std::string CheckActivationKeyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckActivationKeyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckActivationKeyRequest::getToken()const
{
	return token_;
}

void CheckActivationKeyRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string CheckActivationKeyRequest::getSecurityToken()const
{
	return securityToken_;
}

void CheckActivationKeyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CheckActivationKeyRequest::getCryptText()const
{
	return cryptText_;
}

void CheckActivationKeyRequest::setCryptText(const std::string& cryptText)
{
	cryptText_ = cryptText;
	setParameter("CryptText", cryptText);
}

std::string CheckActivationKeyRequest::getGatewayId()const
{
	return gatewayId_;
}

void CheckActivationKeyRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

