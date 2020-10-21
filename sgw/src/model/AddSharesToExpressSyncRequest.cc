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

#include <alibabacloud/sgw/model/AddSharesToExpressSyncRequest.h>

using AlibabaCloud::Sgw::Model::AddSharesToExpressSyncRequest;

AddSharesToExpressSyncRequest::AddSharesToExpressSyncRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "AddSharesToExpressSync")
{
	setMethod(HttpRequest::Method::Post);
}

AddSharesToExpressSyncRequest::~AddSharesToExpressSyncRequest()
{}

std::string AddSharesToExpressSyncRequest::getExpressSyncId()const
{
	return expressSyncId_;
}

void AddSharesToExpressSyncRequest::setExpressSyncId(const std::string& expressSyncId)
{
	expressSyncId_ = expressSyncId;
	setParameter("ExpressSyncId", expressSyncId);
}

std::string AddSharesToExpressSyncRequest::getGatewayShares()const
{
	return gatewayShares_;
}

void AddSharesToExpressSyncRequest::setGatewayShares(const std::string& gatewayShares)
{
	gatewayShares_ = gatewayShares;
	setParameter("GatewayShares", gatewayShares);
}

std::string AddSharesToExpressSyncRequest::getGatewayRegions()const
{
	return gatewayRegions_;
}

void AddSharesToExpressSyncRequest::setGatewayRegions(const std::string& gatewayRegions)
{
	gatewayRegions_ = gatewayRegions;
	setParameter("GatewayRegions", gatewayRegions);
}

std::string AddSharesToExpressSyncRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddSharesToExpressSyncRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddSharesToExpressSyncRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddSharesToExpressSyncRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

