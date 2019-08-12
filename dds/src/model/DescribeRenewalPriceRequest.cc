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

#include <alibabacloud/dds/model/DescribeRenewalPriceRequest.h>

using AlibabaCloud::Dds::Model::DescribeRenewalPriceRequest;

DescribeRenewalPriceRequest::DescribeRenewalPriceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeRenewalPrice")
{}

DescribeRenewalPriceRequest::~DescribeRenewalPriceRequest()
{}

long DescribeRenewalPriceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRenewalPriceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeRenewalPriceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRenewalPriceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRenewalPriceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRenewalPriceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRenewalPriceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRenewalPriceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRenewalPriceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRenewalPriceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeRenewalPriceRequest::getCouponNo()const
{
	return couponNo_;
}

void DescribeRenewalPriceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

std::string DescribeRenewalPriceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeRenewalPriceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DescribeRenewalPriceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRenewalPriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRenewalPriceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void DescribeRenewalPriceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

std::string DescribeRenewalPriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRenewalPriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

