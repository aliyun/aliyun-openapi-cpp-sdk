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

#include <alibabacloud/sgw/model/CheckUpgradeVersionRequest.h>

using AlibabaCloud::Sgw::Model::CheckUpgradeVersionRequest;

CheckUpgradeVersionRequest::CheckUpgradeVersionRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CheckUpgradeVersion")
{
	setMethod(HttpRequest::Method::Post);
}

CheckUpgradeVersionRequest::~CheckUpgradeVersionRequest()
{}

std::string CheckUpgradeVersionRequest::getClientUUID()const
{
	return clientUUID_;
}

void CheckUpgradeVersionRequest::setClientUUID(const std::string& clientUUID)
{
	clientUUID_ = clientUUID;
	setParameter("ClientUUID", clientUUID);
}

std::string CheckUpgradeVersionRequest::getGatewayVersion()const
{
	return gatewayVersion_;
}

void CheckUpgradeVersionRequest::setGatewayVersion(const std::string& gatewayVersion)
{
	gatewayVersion_ = gatewayVersion;
	setParameter("GatewayVersion", gatewayVersion);
}

std::string CheckUpgradeVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckUpgradeVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckUpgradeVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void CheckUpgradeVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CheckUpgradeVersionRequest::getGatewayId()const
{
	return gatewayId_;
}

void CheckUpgradeVersionRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

