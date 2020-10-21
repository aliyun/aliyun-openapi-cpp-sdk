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

#include <alibabacloud/sgw/model/ActivateAllInOneGatewayRequest.h>

using AlibabaCloud::Sgw::Model::ActivateAllInOneGatewayRequest;

ActivateAllInOneGatewayRequest::ActivateAllInOneGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ActivateAllInOneGateway")
{
	setMethod(HttpRequest::Method::Post);
}

ActivateAllInOneGatewayRequest::~ActivateAllInOneGatewayRequest()
{}

std::string ActivateAllInOneGatewayRequest::getClientUUID()const
{
	return clientUUID_;
}

void ActivateAllInOneGatewayRequest::setClientUUID(const std::string& clientUUID)
{
	clientUUID_ = clientUUID;
	setParameter("ClientUUID", clientUUID);
}

std::string ActivateAllInOneGatewayRequest::getSerialNumber()const
{
	return serialNumber_;
}

void ActivateAllInOneGatewayRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setParameter("SerialNumber", serialNumber);
}

std::string ActivateAllInOneGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ActivateAllInOneGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ActivateAllInOneGatewayRequest::getDeviceNumber()const
{
	return deviceNumber_;
}

void ActivateAllInOneGatewayRequest::setDeviceNumber(const std::string& deviceNumber)
{
	deviceNumber_ = deviceNumber;
	setParameter("DeviceNumber", deviceNumber);
}

std::string ActivateAllInOneGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void ActivateAllInOneGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ActivateAllInOneGatewayRequest::getModel()const
{
	return model_;
}

void ActivateAllInOneGatewayRequest::setModel(const std::string& model)
{
	model_ = model;
	setParameter("Model", model);
}

std::string ActivateAllInOneGatewayRequest::getGatewayId()const
{
	return gatewayId_;
}

void ActivateAllInOneGatewayRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

