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

#include <alibabacloud/sgw/model/DeployCSGClientsRequest.h>

using AlibabaCloud::Sgw::Model::DeployCSGClientsRequest;

DeployCSGClientsRequest::DeployCSGClientsRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeployCSGClients")
{
	setMethod(HttpRequest::Method::Post);
}

DeployCSGClientsRequest::~DeployCSGClientsRequest()
{}

Array DeployCSGClientsRequest::getEcsInstanceIds()const
{
	return ecsInstanceIds_;
}

void DeployCSGClientsRequest::setEcsInstanceIds(const Array& ecsInstanceIds)
{
	ecsInstanceIds_ = ecsInstanceIds;
	setParameter("EcsInstanceIds", std::to_string(ecsInstanceIds));
}

std::string DeployCSGClientsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeployCSGClientsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeployCSGClientsRequest::getClientRegionId()const
{
	return clientRegionId_;
}

void DeployCSGClientsRequest::setClientRegionId(const std::string& clientRegionId)
{
	clientRegionId_ = clientRegionId;
	setParameter("ClientRegionId", clientRegionId);
}

std::string DeployCSGClientsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeployCSGClientsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeployCSGClientsRequest::getVpcId()const
{
	return vpcId_;
}

void DeployCSGClientsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

