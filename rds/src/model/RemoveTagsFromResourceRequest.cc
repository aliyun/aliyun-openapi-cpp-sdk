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

#include <alibabacloud/rds/model/RemoveTagsFromResourceRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest() :
	RdsRequest("RemoveTagsFromResource")
{}

RemoveTagsFromResourceRequest::~RemoveTagsFromResourceRequest()
{}

std::string RemoveTagsFromResourceRequest::getTag4value()const
{
	return tag4value_;
}

void RemoveTagsFromResourceRequest::setTag4value(const std::string& tag4value)
{
	tag4value_ = tag4value;
	setParameter("Tag4value", tag4value);
}

long RemoveTagsFromResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveTagsFromResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveTagsFromResourceRequest::getTag2key()const
{
	return tag2key_;
}

void RemoveTagsFromResourceRequest::setTag2key(const std::string& tag2key)
{
	tag2key_ = tag2key;
	setParameter("Tag2key", tag2key);
}

std::string RemoveTagsFromResourceRequest::getTag5key()const
{
	return tag5key_;
}

void RemoveTagsFromResourceRequest::setTag5key(const std::string& tag5key)
{
	tag5key_ = tag5key;
	setParameter("Tag5key", tag5key);
}

std::string RemoveTagsFromResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveTagsFromResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RemoveTagsFromResourceRequest::getClientToken()const
{
	return clientToken_;
}

void RemoveTagsFromResourceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RemoveTagsFromResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveTagsFromResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RemoveTagsFromResourceRequest::getTag3key()const
{
	return tag3key_;
}

void RemoveTagsFromResourceRequest::setTag3key(const std::string& tag3key)
{
	tag3key_ = tag3key;
	setParameter("Tag3key", tag3key);
}

long RemoveTagsFromResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveTagsFromResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveTagsFromResourceRequest::getTag5value()const
{
	return tag5value_;
}

void RemoveTagsFromResourceRequest::setTag5value(const std::string& tag5value)
{
	tag5value_ = tag5value;
	setParameter("Tag5value", tag5value);
}

std::string RemoveTagsFromResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveTagsFromResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RemoveTagsFromResourceRequest::getTags()const
{
	return tags_;
}

void RemoveTagsFromResourceRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string RemoveTagsFromResourceRequest::getTag1key()const
{
	return tag1key_;
}

void RemoveTagsFromResourceRequest::setTag1key(const std::string& tag1key)
{
	tag1key_ = tag1key;
	setParameter("Tag1key", tag1key);
}

std::string RemoveTagsFromResourceRequest::getTag1value()const
{
	return tag1value_;
}

void RemoveTagsFromResourceRequest::setTag1value(const std::string& tag1value)
{
	tag1value_ = tag1value;
	setParameter("Tag1value", tag1value);
}

std::string RemoveTagsFromResourceRequest::getRegionId()const
{
	return regionId_;
}

void RemoveTagsFromResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RemoveTagsFromResourceRequest::getTag2value()const
{
	return tag2value_;
}

void RemoveTagsFromResourceRequest::setTag2value(const std::string& tag2value)
{
	tag2value_ = tag2value;
	setParameter("Tag2value", tag2value);
}

std::string RemoveTagsFromResourceRequest::getTag4key()const
{
	return tag4key_;
}

void RemoveTagsFromResourceRequest::setTag4key(const std::string& tag4key)
{
	tag4key_ = tag4key;
	setParameter("Tag4key", tag4key);
}

std::string RemoveTagsFromResourceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RemoveTagsFromResourceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string RemoveTagsFromResourceRequest::getTag3value()const
{
	return tag3value_;
}

void RemoveTagsFromResourceRequest::setTag3value(const std::string& tag3value)
{
	tag3value_ = tag3value;
	setParameter("Tag3value", tag3value);
}

std::string RemoveTagsFromResourceRequest::getProxyId()const
{
	return proxyId_;
}

void RemoveTagsFromResourceRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setParameter("ProxyId", proxyId);
}

