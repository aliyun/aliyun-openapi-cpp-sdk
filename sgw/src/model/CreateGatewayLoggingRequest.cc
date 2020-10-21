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

#include <alibabacloud/sgw/model/CreateGatewayLoggingRequest.h>

using AlibabaCloud::Sgw::Model::CreateGatewayLoggingRequest;

CreateGatewayLoggingRequest::CreateGatewayLoggingRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateGatewayLogging")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGatewayLoggingRequest::~CreateGatewayLoggingRequest()
{}

std::string CreateGatewayLoggingRequest::getSlsLogstore()const
{
	return slsLogstore_;
}

void CreateGatewayLoggingRequest::setSlsLogstore(const std::string& slsLogstore)
{
	slsLogstore_ = slsLogstore;
	setParameter("SlsLogstore", slsLogstore);
}

std::string CreateGatewayLoggingRequest::getSlsProject()const
{
	return slsProject_;
}

void CreateGatewayLoggingRequest::setSlsProject(const std::string& slsProject)
{
	slsProject_ = slsProject;
	setParameter("SlsProject", slsProject);
}

std::string CreateGatewayLoggingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGatewayLoggingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGatewayLoggingRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGatewayLoggingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateGatewayLoggingRequest::getGatewayId()const
{
	return gatewayId_;
}

void CreateGatewayLoggingRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

