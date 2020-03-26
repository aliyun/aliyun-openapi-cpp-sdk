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

#include <alibabacloud/slb/model/DescribeListenerAccessControlAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeListenerAccessControlAttributeRequest;

DescribeListenerAccessControlAttributeRequest::DescribeListenerAccessControlAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeListenerAccessControlAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeListenerAccessControlAttributeRequest::~DescribeListenerAccessControlAttributeRequest()
{}

std::string DescribeListenerAccessControlAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeListenerAccessControlAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeListenerAccessControlAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeListenerAccessControlAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeListenerAccessControlAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeListenerAccessControlAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeListenerAccessControlAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void DescribeListenerAccessControlAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string DescribeListenerAccessControlAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeListenerAccessControlAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeListenerAccessControlAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeListenerAccessControlAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeListenerAccessControlAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeListenerAccessControlAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeListenerAccessControlAttributeRequest::getListenerProtocol()const
{
	return listenerProtocol_;
}

void DescribeListenerAccessControlAttributeRequest::setListenerProtocol(const std::string& listenerProtocol)
{
	listenerProtocol_ = listenerProtocol;
	setParameter("ListenerProtocol", listenerProtocol);
}

std::string DescribeListenerAccessControlAttributeRequest::getTags()const
{
	return tags_;
}

void DescribeListenerAccessControlAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DescribeListenerAccessControlAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeListenerAccessControlAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

