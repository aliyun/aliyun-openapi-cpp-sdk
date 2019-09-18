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

#include <alibabacloud/r-kvstore/model/DescribeCertificationRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeCertificationRequest;

DescribeCertificationRequest::DescribeCertificationRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeCertification")
{}

DescribeCertificationRequest::~DescribeCertificationRequest()
{}

long DescribeCertificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCertificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCertificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCertificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCertificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCertificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCertificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCertificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCertificationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCertificationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeCertificationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCertificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCertificationRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCertificationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeCertificationRequest::getParameters()const
{
	return parameters_;
}

void DescribeCertificationRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setCoreParameter("Parameters", parameters);
}

