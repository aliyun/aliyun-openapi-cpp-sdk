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

#include <alibabacloud/slb/model/RemoveListenerWhiteListItemRequest.h>

using AlibabaCloud::Slb::Model::RemoveListenerWhiteListItemRequest;

RemoveListenerWhiteListItemRequest::RemoveListenerWhiteListItemRequest() :
	RpcServiceRequest("slb", "2014-05-15", "RemoveListenerWhiteListItem")
{}

RemoveListenerWhiteListItemRequest::~RemoveListenerWhiteListItemRequest()
{}

std::string RemoveListenerWhiteListItemRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void RemoveListenerWhiteListItemRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

long RemoveListenerWhiteListItemRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveListenerWhiteListItemRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int RemoveListenerWhiteListItemRequest::getListenerPort()const
{
	return listenerPort_;
}

void RemoveListenerWhiteListItemRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", listenerPort);
}

std::string RemoveListenerWhiteListItemRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void RemoveListenerWhiteListItemRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", std::to_string(loadBalancerId));
}

std::string RemoveListenerWhiteListItemRequest::getSourceItems()const
{
	return sourceItems_;
}

void RemoveListenerWhiteListItemRequest::setSourceItems(const std::string& sourceItems)
{
	sourceItems_ = sourceItems;
	setCoreParameter("SourceItems", std::to_string(sourceItems));
}

std::string RemoveListenerWhiteListItemRequest::getRegionId()const
{
	return regionId_;
}

void RemoveListenerWhiteListItemRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RemoveListenerWhiteListItemRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveListenerWhiteListItemRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string RemoveListenerWhiteListItemRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveListenerWhiteListItemRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long RemoveListenerWhiteListItemRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveListenerWhiteListItemRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RemoveListenerWhiteListItemRequest::getListenerProtocol()const
{
	return listenerProtocol_;
}

void RemoveListenerWhiteListItemRequest::setListenerProtocol(const std::string& listenerProtocol)
{
	listenerProtocol_ = listenerProtocol;
	setCoreParameter("ListenerProtocol", std::to_string(listenerProtocol));
}

std::string RemoveListenerWhiteListItemRequest::getTags()const
{
	return tags_;
}

void RemoveListenerWhiteListItemRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

