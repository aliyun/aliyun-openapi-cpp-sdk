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

#include <alibabacloud/sgw/model/ModifyGatewayRequest.h>

using AlibabaCloud::Sgw::Model::ModifyGatewayRequest;

ModifyGatewayRequest::ModifyGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ModifyGateway")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGatewayRequest::~ModifyGatewayRequest()
{}

std::string ModifyGatewayRequest::getDescription()const
{
	return description_;
}

void ModifyGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyGatewayRequest::getName()const
{
	return name_;
}

void ModifyGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyGatewayRequest::getGatewayId()const
{
	return gatewayId_;
}

void ModifyGatewayRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

