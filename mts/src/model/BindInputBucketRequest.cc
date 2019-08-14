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

#include <alibabacloud/mts/model/BindInputBucketRequest.h>

using AlibabaCloud::Mts::Model::BindInputBucketRequest;

BindInputBucketRequest::BindInputBucketRequest() :
	RpcServiceRequest("mts", "2014-06-18", "BindInputBucket")
{}

BindInputBucketRequest::~BindInputBucketRequest()
{}

std::string BindInputBucketRequest::getBucket()const
{
	return bucket_;
}

void BindInputBucketRequest::setBucket(const std::string& bucket)
{
	bucket_ = bucket;
	setCoreParameter("Bucket", bucket);
}

long BindInputBucketRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindInputBucketRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BindInputBucketRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindInputBucketRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string BindInputBucketRequest::getRoleArn()const
{
	return roleArn_;
}

void BindInputBucketRequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setCoreParameter("RoleArn", roleArn);
}

std::string BindInputBucketRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void BindInputBucketRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long BindInputBucketRequest::getOwnerId()const
{
	return ownerId_;
}

void BindInputBucketRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string BindInputBucketRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindInputBucketRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

