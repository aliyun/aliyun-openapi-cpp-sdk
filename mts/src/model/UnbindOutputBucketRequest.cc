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

#include <alibabacloud/mts/model/UnbindOutputBucketRequest.h>

using AlibabaCloud::Mts::Model::UnbindOutputBucketRequest;

UnbindOutputBucketRequest::UnbindOutputBucketRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UnbindOutputBucket")
{}

UnbindOutputBucketRequest::~UnbindOutputBucketRequest()
{}

std::string UnbindOutputBucketRequest::getBucket()const
{
	return bucket_;
}

void UnbindOutputBucketRequest::setBucket(const std::string& bucket)
{
	bucket_ = bucket;
	setCoreParameter("Bucket", bucket);
}

long UnbindOutputBucketRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnbindOutputBucketRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnbindOutputBucketRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnbindOutputBucketRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnbindOutputBucketRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnbindOutputBucketRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnbindOutputBucketRequest::getOwnerId()const
{
	return ownerId_;
}

void UnbindOutputBucketRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnbindOutputBucketRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnbindOutputBucketRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

