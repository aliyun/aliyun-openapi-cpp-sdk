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

#include <alibabacloud/dds/model/DescribePriceRequest.h>

using AlibabaCloud::Dds::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribePrice")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePriceRequest::~DescribePriceRequest()
{}

long DescribePriceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePriceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribePriceRequest::getProductCode()const
{
	return productCode_;
}

void DescribePriceRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string DescribePriceRequest::getCouponNo()const
{
	return couponNo_;
}

void DescribePriceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string DescribePriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribePriceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribePriceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribePriceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribePriceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribePriceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void DescribePriceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

std::string DescribePriceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePriceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePriceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePriceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribePriceRequest::getOrderParamOut()const
{
	return orderParamOut_;
}

void DescribePriceRequest::setOrderParamOut(const std::string& orderParamOut)
{
	orderParamOut_ = orderParamOut;
	setParameter("OrderParamOut", orderParamOut);
}

std::string DescribePriceRequest::getCommodityCode()const
{
	return commodityCode_;
}

void DescribePriceRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long DescribePriceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePriceRequest::getDBInstances()const
{
	return dBInstances_;
}

void DescribePriceRequest::setDBInstances(const std::string& dBInstances)
{
	dBInstances_ = dBInstances;
	setParameter("DBInstances", dBInstances);
}

std::string DescribePriceRequest::getOrderType()const
{
	return orderType_;
}

void DescribePriceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

