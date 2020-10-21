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

#include <alibabacloud/sgw/model/GenerateMqttTokenRequest.h>

using AlibabaCloud::Sgw::Model::GenerateMqttTokenRequest;

GenerateMqttTokenRequest::GenerateMqttTokenRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "GenerateMqttToken")
{
	setMethod(HttpRequest::Method::Post);
}

GenerateMqttTokenRequest::~GenerateMqttTokenRequest()
{}

std::string GenerateMqttTokenRequest::getClientUUID()const
{
	return clientUUID_;
}

void GenerateMqttTokenRequest::setClientUUID(const std::string& clientUUID)
{
	clientUUID_ = clientUUID;
	setParameter("ClientUUID", clientUUID);
}

std::string GenerateMqttTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GenerateMqttTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GenerateMqttTokenRequest::getSecurityToken()const
{
	return securityToken_;
}

void GenerateMqttTokenRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string GenerateMqttTokenRequest::getGatewayId()const
{
	return gatewayId_;
}

void GenerateMqttTokenRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

