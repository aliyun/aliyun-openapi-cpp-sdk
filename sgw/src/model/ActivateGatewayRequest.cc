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

#include <alibabacloud/sgw/model/ActivateGatewayRequest.h>

using AlibabaCloud::Sgw::Model::ActivateGatewayRequest;

ActivateGatewayRequest::ActivateGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ActivateGateway")
{
	setMethod(HttpRequest::Method::Post);
}

ActivateGatewayRequest::~ActivateGatewayRequest()
{}

std::string ActivateGatewayRequest::getClientUUID()const
{
	return clientUUID_;
}

void ActivateGatewayRequest::setClientUUID(const std::string& clientUUID)
{
	clientUUID_ = clientUUID;
	setParameter("ClientUUID", clientUUID);
}

std::string ActivateGatewayRequest::getSerialNumber()const
{
	return serialNumber_;
}

void ActivateGatewayRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setParameter("SerialNumber", serialNumber);
}

std::string ActivateGatewayRequest::getType()const
{
	return type_;
}

void ActivateGatewayRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string ActivateGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ActivateGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ActivateGatewayRequest::getToken()const
{
	return token_;
}

void ActivateGatewayRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string ActivateGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void ActivateGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ActivateGatewayRequest::getModel()const
{
	return model_;
}

void ActivateGatewayRequest::setModel(const std::string& model)
{
	model_ = model;
	setParameter("Model", model);
}

std::string ActivateGatewayRequest::getCategory()const
{
	return category_;
}

void ActivateGatewayRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

