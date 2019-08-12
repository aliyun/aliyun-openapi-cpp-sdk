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

#include <alibabacloud/mts/model/ListAllMediaBucketRequest.h>

using AlibabaCloud::Mts::Model::ListAllMediaBucketRequest;

ListAllMediaBucketRequest::ListAllMediaBucketRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ListAllMediaBucket")
{}

ListAllMediaBucketRequest::~ListAllMediaBucketRequest()
{}

long ListAllMediaBucketRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAllMediaBucketRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAllMediaBucketRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAllMediaBucketRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ListAllMediaBucketRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void ListAllMediaBucketRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", std::to_string(nextPageToken));
}

std::string ListAllMediaBucketRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAllMediaBucketRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int ListAllMediaBucketRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void ListAllMediaBucketRequest::setMaximumPageSize(int maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setCoreParameter("MaximumPageSize", maximumPageSize);
}

long ListAllMediaBucketRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAllMediaBucketRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ListAllMediaBucketRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAllMediaBucketRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

