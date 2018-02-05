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

#include <alibabacloud/ecs/model/DescribeRecommendInstanceTypeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRecommendInstanceTypeRequest;

DescribeRecommendInstanceTypeRequest::DescribeRecommendInstanceTypeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeRecommendInstanceType")
{}

DescribeRecommendInstanceTypeRequest::~DescribeRecommendInstanceTypeRequest()
{}

long DescribeRecommendInstanceTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRecommendInstanceTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRecommendInstanceTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRecommendInstanceTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRecommendInstanceTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRecommendInstanceTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeRecommendInstanceTypeRequest::getChannel()const
{
	return channel_;
}

void DescribeRecommendInstanceTypeRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string DescribeRecommendInstanceTypeRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeRecommendInstanceTypeRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

long DescribeRecommendInstanceTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecommendInstanceTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecommendInstanceTypeRequest::get_Operator()const
{
	return _operator_;
}

void DescribeRecommendInstanceTypeRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setParameter("_Operator", _operator);
}

std::string DescribeRecommendInstanceTypeRequest::getToken()const
{
	return token_;
}

void DescribeRecommendInstanceTypeRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string DescribeRecommendInstanceTypeRequest::getScene()const
{
	return scene_;
}

void DescribeRecommendInstanceTypeRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string DescribeRecommendInstanceTypeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRecommendInstanceTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeRecommendInstanceTypeRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeRecommendInstanceTypeRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeRecommendInstanceTypeRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setParameter("ProxyId", proxyId);
}

