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

#include <alibabacloud/dds/model/DescribeStaticVerificationListRequest.h>

using AlibabaCloud::Dds::Model::DescribeStaticVerificationListRequest;

DescribeStaticVerificationListRequest::DescribeStaticVerificationListRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeStaticVerificationList")
{}

DescribeStaticVerificationListRequest::~DescribeStaticVerificationListRequest()
{}

long DescribeStaticVerificationListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeStaticVerificationListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeStaticVerificationListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStaticVerificationListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeStaticVerificationListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeStaticVerificationListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeStaticVerificationListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeStaticVerificationListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeStaticVerificationListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeStaticVerificationListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeStaticVerificationListRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeStaticVerificationListRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

std::string DescribeStaticVerificationListRequest::getDestinationInstanceId()const
{
	return destinationInstanceId_;
}

void DescribeStaticVerificationListRequest::setDestinationInstanceId(const std::string& destinationInstanceId)
{
	destinationInstanceId_ = destinationInstanceId;
	setCoreParameter("DestinationInstanceId", destinationInstanceId);
}

std::string DescribeStaticVerificationListRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void DescribeStaticVerificationListRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setCoreParameter("SourceInstanceId", sourceInstanceId);
}

long DescribeStaticVerificationListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStaticVerificationListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStaticVerificationListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStaticVerificationListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

