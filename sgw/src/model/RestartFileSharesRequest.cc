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

#include <alibabacloud/sgw/model/RestartFileSharesRequest.h>

using AlibabaCloud::Sgw::Model::RestartFileSharesRequest;

RestartFileSharesRequest::RestartFileSharesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "RestartFileShares")
{
	setMethod(HttpRequest::Method::Post);
}

RestartFileSharesRequest::~RestartFileSharesRequest()
{}

std::string RestartFileSharesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartFileSharesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RestartFileSharesRequest::getSecurityToken()const
{
	return securityToken_;
}

void RestartFileSharesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RestartFileSharesRequest::getShareProtocol()const
{
	return shareProtocol_;
}

void RestartFileSharesRequest::setShareProtocol(const std::string& shareProtocol)
{
	shareProtocol_ = shareProtocol;
	setParameter("ShareProtocol", shareProtocol);
}

std::string RestartFileSharesRequest::getGatewayId()const
{
	return gatewayId_;
}

void RestartFileSharesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

