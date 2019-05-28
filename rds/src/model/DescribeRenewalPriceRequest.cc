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

#include <alibabacloud/rds/model/DescribeRenewalPriceRequest.h>

using AlibabaCloud::Rds::Model::DescribeRenewalPriceRequest;

DescribeRenewalPriceRequest::DescribeRenewalPriceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeRenewalPrice")
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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeRenewalPriceRequest::getQuantity()const
{
	return quantity_;
}

void DescribeRenewalPriceRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", std::to_string(quantity));
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

std::string DescribeRenewalPriceRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeRenewalPriceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
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

std::string DescribeRenewalPriceRequest::getCommodityCode()const
{
	return commodityCode_;
}

void DescribeRenewalPriceRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long DescribeRenewalPriceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRenewalPriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRenewalPriceRequest::getUsedTime()const
{
	return usedTime_;
}

void DescribeRenewalPriceRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
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

std::string DescribeRenewalPriceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void DescribeRenewalPriceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
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

std::string DescribeRenewalPriceRequest::getPromotionCode()const
{
	return promotionCode_;
}

void DescribeRenewalPriceRequest::setPromotionCode(const std::string& promotionCode)
{
	promotionCode_ = promotionCode;
	setCoreParameter("PromotionCode", promotionCode);
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

std::string DescribeRenewalPriceRequest::getTimeType()const
{
	return timeType_;
}

void DescribeRenewalPriceRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setCoreParameter("TimeType", timeType);
}

std::string DescribeRenewalPriceRequest::getPayType()const
{
	return payType_;
}

void DescribeRenewalPriceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
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

std::string DescribeRenewalPriceRequest::getOrderType()const
{
	return orderType_;
}

void DescribeRenewalPriceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

