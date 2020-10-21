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

#include <alibabacloud/sgw/model/SwitchGatewayExpirationPolicyRequest.h>

using AlibabaCloud::Sgw::Model::SwitchGatewayExpirationPolicyRequest;

SwitchGatewayExpirationPolicyRequest::SwitchGatewayExpirationPolicyRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "SwitchGatewayExpirationPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

SwitchGatewayExpirationPolicyRequest::~SwitchGatewayExpirationPolicyRequest()
{}

std::string SwitchGatewayExpirationPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchGatewayExpirationPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SwitchGatewayExpirationPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void SwitchGatewayExpirationPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SwitchGatewayExpirationPolicyRequest::getGatewayId()const
{
	return gatewayId_;
}

void SwitchGatewayExpirationPolicyRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

