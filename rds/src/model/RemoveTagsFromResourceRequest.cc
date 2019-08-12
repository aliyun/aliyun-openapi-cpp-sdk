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

using AlibabaCloud::Rds::Model::RemoveTagsFromResourceRequest;

RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RemoveTagsFromResource")
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
	setCoreParameter("Tag4value", std::to_string(tag4value));
}

long RemoveTagsFromResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveTagsFromResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RemoveTagsFromResourceRequest::getTag2key()const
{
	return tag2key_;
}

void RemoveTagsFromResourceRequest::setTag2key(const std::string& tag2key)
{
	tag2key_ = tag2key;
	setCoreParameter("Tag2key", std::to_string(tag2key));
}

std::string RemoveTagsFromResourceRequest::getTag5key()const
{
	return tag5key_;
}

void RemoveTagsFromResourceRequest::setTag5key(const std::string& tag5key)
{
	tag5key_ = tag5key;
	setCoreParameter("Tag5key", std::to_string(tag5key));
}

std::string RemoveTagsFromResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveTagsFromResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string RemoveTagsFromResourceRequest::getClientToken()const
{
	return clientToken_;
}

void RemoveTagsFromResourceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string RemoveTagsFromResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveTagsFromResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string RemoveTagsFromResourceRequest::getTag3key()const
{
	return tag3key_;
}

void RemoveTagsFromResourceRequest::setTag3key(const std::string& tag3key)
{
	tag3key_ = tag3key;
	setCoreParameter("Tag3key", std::to_string(tag3key));
}

long RemoveTagsFromResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveTagsFromResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RemoveTagsFromResourceRequest::getTag5value()const
{
	return tag5value_;
}

void RemoveTagsFromResourceRequest::setTag5value(const std::string& tag5value)
{
	tag5value_ = tag5value;
	setCoreParameter("Tag5value", std::to_string(tag5value));
}

std::string RemoveTagsFromResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveTagsFromResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string RemoveTagsFromResourceRequest::getTags()const
{
	return tags_;
}

void RemoveTagsFromResourceRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

std::string RemoveTagsFromResourceRequest::getTag1key()const
{
	return tag1key_;
}

void RemoveTagsFromResourceRequest::setTag1key(const std::string& tag1key)
{
	tag1key_ = tag1key;
	setCoreParameter("Tag1key", std::to_string(tag1key));
}

std::string RemoveTagsFromResourceRequest::getTag1value()const
{
	return tag1value_;
}

void RemoveTagsFromResourceRequest::setTag1value(const std::string& tag1value)
{
	tag1value_ = tag1value;
	setCoreParameter("Tag1value", std::to_string(tag1value));
}

std::string RemoveTagsFromResourceRequest::getRegionId()const
{
	return regionId_;
}

void RemoveTagsFromResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RemoveTagsFromResourceRequest::getTag2value()const
{
	return tag2value_;
}

void RemoveTagsFromResourceRequest::setTag2value(const std::string& tag2value)
{
	tag2value_ = tag2value;
	setCoreParameter("Tag2value", std::to_string(tag2value));
}

std::string RemoveTagsFromResourceRequest::getTag4key()const
{
	return tag4key_;
}

void RemoveTagsFromResourceRequest::setTag4key(const std::string& tag4key)
{
	tag4key_ = tag4key;
	setCoreParameter("Tag4key", std::to_string(tag4key));
}

std::string RemoveTagsFromResourceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RemoveTagsFromResourceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string RemoveTagsFromResourceRequest::getTag3value()const
{
	return tag3value_;
}

void RemoveTagsFromResourceRequest::setTag3value(const std::string& tag3value)
{
	tag3value_ = tag3value;
	setCoreParameter("Tag3value", std::to_string(tag3value));
}

std::string RemoveTagsFromResourceRequest::getProxyId()const
{
	return proxyId_;
}

void RemoveTagsFromResourceRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setCoreParameter("ProxyId", std::to_string(proxyId));
}

