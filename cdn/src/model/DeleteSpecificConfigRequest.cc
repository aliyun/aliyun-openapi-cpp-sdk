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

#include <alibabacloud/cdn/model/DeleteSpecificConfigRequest.h>

using AlibabaCloud::Cdn::Model::DeleteSpecificConfigRequest;

DeleteSpecificConfigRequest::DeleteSpecificConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DeleteSpecificConfig")
{}

DeleteSpecificConfigRequest::~DeleteSpecificConfigRequest()
{}

std::string DeleteSpecificConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteSpecificConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteSpecificConfigRequest::getFunctionName()const
{
	return functionName_;
}

void DeleteSpecificConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string DeleteSpecificConfigRequest::getConfigId()const
{
	return configId_;
}

void DeleteSpecificConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", configId);
}

std::string DeleteSpecificConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteSpecificConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DeleteSpecificConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSpecificConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

