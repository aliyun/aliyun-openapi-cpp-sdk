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

#include <alibabacloud/cams/model/CheckContactsRequest.h>

using AlibabaCloud::Cams::Model::CheckContactsRequest;

CheckContactsRequest::CheckContactsRequest() :
	RpcServiceRequest("cams", "2020-06-06", "CheckContacts")
{
	setMethod(HttpRequest::Method::Post);
}

CheckContactsRequest::~CheckContactsRequest()
{}

long CheckContactsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckContactsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckContactsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckContactsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckContactsRequest::getChannelType()const
{
	return channelType_;
}

void CheckContactsRequest::setChannelType(const std::string& channelType)
{
	channelType_ = channelType;
	setBodyParameter("ChannelType", channelType);
}

std::string CheckContactsRequest::getFrom()const
{
	return from_;
}

void CheckContactsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setBodyParameter("From", from);
}

std::string CheckContactsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckContactsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CheckContactsRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckContactsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CheckContactsRequest::getContacts()const
{
	return contacts_;
}

void CheckContactsRequest::setContacts(const std::string& contacts)
{
	contacts_ = contacts;
	setBodyParameter("Contacts", contacts);
}

