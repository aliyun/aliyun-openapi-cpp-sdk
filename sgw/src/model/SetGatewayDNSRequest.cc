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

#include <alibabacloud/sgw/model/SetGatewayDNSRequest.h>

using AlibabaCloud::Sgw::Model::SetGatewayDNSRequest;

SetGatewayDNSRequest::SetGatewayDNSRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "SetGatewayDNS")
{
	setMethod(HttpRequest::Method::Post);
}

SetGatewayDNSRequest::~SetGatewayDNSRequest()
{}

std::string SetGatewayDNSRequest::getDnsServer()const
{
	return dnsServer_;
}

void SetGatewayDNSRequest::setDnsServer(const std::string& dnsServer)
{
	dnsServer_ = dnsServer;
	setParameter("DnsServer", dnsServer);
}

std::string SetGatewayDNSRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetGatewayDNSRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetGatewayDNSRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetGatewayDNSRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetGatewayDNSRequest::getGatewayId()const
{
	return gatewayId_;
}

void SetGatewayDNSRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

