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

#include <alibabacloud/mts/model/BindOutputBucketRequest.h>

using AlibabaCloud::Mts::Model::BindOutputBucketRequest;

BindOutputBucketRequest::BindOutputBucketRequest() :
	RpcServiceRequest("mts", "2014-06-18", "BindOutputBucket")
{}

BindOutputBucketRequest::~BindOutputBucketRequest()
{}

std::string BindOutputBucketRequest::getBucket()const
{
	return bucket_;
}

void BindOutputBucketRequest::setBucket(const std::string& bucket)
{
	bucket_ = bucket;
	setParameter("Bucket", bucket);
}

long BindOutputBucketRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindOutputBucketRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BindOutputBucketRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindOutputBucketRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string BindOutputBucketRequest::getRoleArn()const
{
	return roleArn_;
}

void BindOutputBucketRequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setParameter("RoleArn", roleArn);
}

std::string BindOutputBucketRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void BindOutputBucketRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long BindOutputBucketRequest::getOwnerId()const
{
	return ownerId_;
}

void BindOutputBucketRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindOutputBucketRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindOutputBucketRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

