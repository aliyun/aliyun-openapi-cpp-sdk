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

#include <alibabacloud/sgw/model/RemoveSharesFromExpressSyncRequest.h>

using AlibabaCloud::Sgw::Model::RemoveSharesFromExpressSyncRequest;

RemoveSharesFromExpressSyncRequest::RemoveSharesFromExpressSyncRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "RemoveSharesFromExpressSync")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveSharesFromExpressSyncRequest::~RemoveSharesFromExpressSyncRequest()
{}

std::string RemoveSharesFromExpressSyncRequest::getExpressSyncId()const
{
	return expressSyncId_;
}

void RemoveSharesFromExpressSyncRequest::setExpressSyncId(const std::string& expressSyncId)
{
	expressSyncId_ = expressSyncId;
	setParameter("ExpressSyncId", expressSyncId);
}

std::string RemoveSharesFromExpressSyncRequest::getGatewayShares()const
{
	return gatewayShares_;
}

void RemoveSharesFromExpressSyncRequest::setGatewayShares(const std::string& gatewayShares)
{
	gatewayShares_ = gatewayShares;
	setParameter("GatewayShares", gatewayShares);
}

std::string RemoveSharesFromExpressSyncRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveSharesFromExpressSyncRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RemoveSharesFromExpressSyncRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveSharesFromExpressSyncRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

