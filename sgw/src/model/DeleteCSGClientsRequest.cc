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

#include <alibabacloud/sgw/model/DeleteCSGClientsRequest.h>

using AlibabaCloud::Sgw::Model::DeleteCSGClientsRequest;

DeleteCSGClientsRequest::DeleteCSGClientsRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeleteCSGClients")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteCSGClientsRequest::~DeleteCSGClientsRequest()
{}

std::string DeleteCSGClientsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteCSGClientsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

Array DeleteCSGClientsRequest::getClientIds()const
{
	return clientIds_;
}

void DeleteCSGClientsRequest::setClientIds(const Array& clientIds)
{
	clientIds_ = clientIds;
	setParameter("ClientIds", std::to_string(clientIds));
}

std::string DeleteCSGClientsRequest::getClientRegionId()const
{
	return clientRegionId_;
}

void DeleteCSGClientsRequest::setClientRegionId(const std::string& clientRegionId)
{
	clientRegionId_ = clientRegionId;
	setParameter("ClientRegionId", clientRegionId);
}

std::string DeleteCSGClientsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteCSGClientsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

