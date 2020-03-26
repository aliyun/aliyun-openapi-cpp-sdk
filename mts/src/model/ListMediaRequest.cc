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

#include <alibabacloud/mts/model/ListMediaRequest.h>

using AlibabaCloud::Mts::Model::ListMediaRequest;

ListMediaRequest::ListMediaRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ListMedia")
{
	setMethod(HttpRequest::Method::Post);
}

ListMediaRequest::~ListMediaRequest()
{}

long ListMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListMediaRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void ListMediaRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

std::string ListMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListMediaRequest::getFrom()const
{
	return from_;
}

void ListMediaRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

std::string ListMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListMediaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListMediaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListMediaRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void ListMediaRequest::setMaximumPageSize(long maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setParameter("MaximumPageSize", std::to_string(maximumPageSize));
}

long ListMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void ListMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListMediaRequest::getTo()const
{
	return to_;
}

void ListMediaRequest::setTo(const std::string& to)
{
	to_ = to;
	setParameter("To", to);
}

