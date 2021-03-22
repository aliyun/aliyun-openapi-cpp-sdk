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

#include <alibabacloud/eais/model/CreateEaiRequest.h>

using AlibabaCloud::Eais::Model::CreateEaiRequest;

CreateEaiRequest::CreateEaiRequest() :
	RpcServiceRequest("eais", "2019-06-24", "CreateEai")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEaiRequest::~CreateEaiRequest()
{}

std::string CreateEaiRequest::getClientToken()const
{
	return clientToken_;
}

void CreateEaiRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateEaiRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateEaiRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string CreateEaiRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateEaiRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateEaiRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateEaiRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateEaiRequest::getRegionId()const
{
	return regionId_;
}

void CreateEaiRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateEaiRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateEaiRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

