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

#include <alibabacloud/dcdn/model/SetDcdnConfigOfVersionRequest.h>

using AlibabaCloud::Dcdn::Model::SetDcdnConfigOfVersionRequest;

SetDcdnConfigOfVersionRequest::SetDcdnConfigOfVersionRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "SetDcdnConfigOfVersion")
{
	setMethod(HttpRequest::Method::Post);
}

SetDcdnConfigOfVersionRequest::~SetDcdnConfigOfVersionRequest()
{}

std::string SetDcdnConfigOfVersionRequest::getVersionId()const
{
	return versionId_;
}

void SetDcdnConfigOfVersionRequest::setVersionId(const std::string& versionId)
{
	versionId_ = versionId;
	setParameter("VersionId", versionId);
}

std::string SetDcdnConfigOfVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetDcdnConfigOfVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetDcdnConfigOfVersionRequest::getFunctionName()const
{
	return functionName_;
}

void SetDcdnConfigOfVersionRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetDcdnConfigOfVersionRequest::getFunctionArgs()const
{
	return functionArgs_;
}

void SetDcdnConfigOfVersionRequest::setFunctionArgs(const std::string& functionArgs)
{
	functionArgs_ = functionArgs;
	setParameter("FunctionArgs", functionArgs);
}

std::string SetDcdnConfigOfVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetDcdnConfigOfVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetDcdnConfigOfVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDcdnConfigOfVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long SetDcdnConfigOfVersionRequest::getFunctionId()const
{
	return functionId_;
}

void SetDcdnConfigOfVersionRequest::setFunctionId(long functionId)
{
	functionId_ = functionId;
	setParameter("FunctionId", std::to_string(functionId));
}

std::string SetDcdnConfigOfVersionRequest::getConfigId()const
{
	return configId_;
}

void SetDcdnConfigOfVersionRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setParameter("ConfigId", configId);
}

