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

#include <alibabacloud/sgw/model/ModifyGatewayClassRequest.h>

using AlibabaCloud::Sgw::Model::ModifyGatewayClassRequest;

ModifyGatewayClassRequest::ModifyGatewayClassRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ModifyGatewayClass")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGatewayClassRequest::~ModifyGatewayClassRequest()
{}

std::string ModifyGatewayClassRequest::getGatewayClass()const
{
	return gatewayClass_;
}

void ModifyGatewayClassRequest::setGatewayClass(const std::string& gatewayClass)
{
	gatewayClass_ = gatewayClass;
	setParameter("GatewayClass", gatewayClass);
}

std::string ModifyGatewayClassRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyGatewayClassRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyGatewayClassRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyGatewayClassRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyGatewayClassRequest::getGatewayId()const
{
	return gatewayId_;
}

void ModifyGatewayClassRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

