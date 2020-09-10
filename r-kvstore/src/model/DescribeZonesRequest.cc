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

#include <alibabacloud/r-kvstore/model/DescribeZonesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeZones")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeZonesRequest::~DescribeZonesRequest()
{}

long DescribeZonesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeZonesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeZonesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeZonesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeZonesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeZonesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeZonesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeZonesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeZonesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeZonesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeZonesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeZonesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeZonesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeZonesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeZonesRequest::getAcceptLanguage()const
{
	return acceptLanguage_;
}

void DescribeZonesRequest::setAcceptLanguage(const std::string& acceptLanguage)
{
	acceptLanguage_ = acceptLanguage;
	setParameter("AcceptLanguage", acceptLanguage);
}

