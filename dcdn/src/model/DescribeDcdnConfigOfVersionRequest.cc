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

#include <alibabacloud/dcdn/model/DescribeDcdnConfigOfVersionRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnConfigOfVersionRequest;

DescribeDcdnConfigOfVersionRequest::DescribeDcdnConfigOfVersionRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnConfigOfVersion")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnConfigOfVersionRequest::~DescribeDcdnConfigOfVersionRequest()
{}

std::string DescribeDcdnConfigOfVersionRequest::getVersionId()const
{
	return versionId_;
}

void DescribeDcdnConfigOfVersionRequest::setVersionId(const std::string& versionId)
{
	versionId_ = versionId;
	setParameter("VersionId", versionId);
}

std::string DescribeDcdnConfigOfVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnConfigOfVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnConfigOfVersionRequest::getFunctionName()const
{
	return functionName_;
}

void DescribeDcdnConfigOfVersionRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

long DescribeDcdnConfigOfVersionRequest::getGroupId()const
{
	return groupId_;
}

void DescribeDcdnConfigOfVersionRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

long DescribeDcdnConfigOfVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnConfigOfVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeDcdnConfigOfVersionRequest::getFunctionId()const
{
	return functionId_;
}

void DescribeDcdnConfigOfVersionRequest::setFunctionId(int functionId)
{
	functionId_ = functionId;
	setParameter("FunctionId", std::to_string(functionId));
}

