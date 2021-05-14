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

#include <alibabacloud/r-kvstore/model/EnableAdditionalBandwidthRequest.h>

using AlibabaCloud::R_kvstore::Model::EnableAdditionalBandwidthRequest;

EnableAdditionalBandwidthRequest::EnableAdditionalBandwidthRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "EnableAdditionalBandwidth")
{
	setMethod(HttpRequest::Method::Post);
}

EnableAdditionalBandwidthRequest::~EnableAdditionalBandwidthRequest()
{}

long EnableAdditionalBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EnableAdditionalBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EnableAdditionalBandwidthRequest::getCouponNo()const
{
	return couponNo_;
}

void EnableAdditionalBandwidthRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string EnableAdditionalBandwidthRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EnableAdditionalBandwidthRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string EnableAdditionalBandwidthRequest::getSecurityToken()const
{
	return securityToken_;
}

void EnableAdditionalBandwidthRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string EnableAdditionalBandwidthRequest::getSourceBiz()const
{
	return sourceBiz_;
}

void EnableAdditionalBandwidthRequest::setSourceBiz(const std::string& sourceBiz)
{
	sourceBiz_ = sourceBiz;
	setParameter("SourceBiz", sourceBiz);
}

std::string EnableAdditionalBandwidthRequest::getNodeId()const
{
	return nodeId_;
}

void EnableAdditionalBandwidthRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string EnableAdditionalBandwidthRequest::getOrderTimeLength()const
{
	return orderTimeLength_;
}

void EnableAdditionalBandwidthRequest::setOrderTimeLength(const std::string& orderTimeLength)
{
	orderTimeLength_ = orderTimeLength;
	setParameter("OrderTimeLength", orderTimeLength);
}

int EnableAdditionalBandwidthRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void EnableAdditionalBandwidthRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

std::string EnableAdditionalBandwidthRequest::getProduct()const
{
	return product_;
}

void EnableAdditionalBandwidthRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

bool EnableAdditionalBandwidthRequest::getAutoPay()const
{
	return autoPay_;
}

void EnableAdditionalBandwidthRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string EnableAdditionalBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EnableAdditionalBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EnableAdditionalBandwidthRequest::getBandwidth()const
{
	return bandwidth_;
}

void EnableAdditionalBandwidthRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", bandwidth);
}

std::string EnableAdditionalBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EnableAdditionalBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long EnableAdditionalBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void EnableAdditionalBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string EnableAdditionalBandwidthRequest::getInstanceId()const
{
	return instanceId_;
}

void EnableAdditionalBandwidthRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool EnableAdditionalBandwidthRequest::getAutoRenew()const
{
	return autoRenew_;
}

void EnableAdditionalBandwidthRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string EnableAdditionalBandwidthRequest::getCategory()const
{
	return category_;
}

void EnableAdditionalBandwidthRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

