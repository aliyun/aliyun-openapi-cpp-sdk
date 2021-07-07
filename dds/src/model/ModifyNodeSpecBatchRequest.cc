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

#include <alibabacloud/dds/model/ModifyNodeSpecBatchRequest.h>

using AlibabaCloud::Dds::Model::ModifyNodeSpecBatchRequest;

ModifyNodeSpecBatchRequest::ModifyNodeSpecBatchRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyNodeSpecBatch")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyNodeSpecBatchRequest::~ModifyNodeSpecBatchRequest()
{}

long ModifyNodeSpecBatchRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNodeSpecBatchRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyNodeSpecBatchRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyNodeSpecBatchRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyNodeSpecBatchRequest::getNodesInfo()const
{
	return nodesInfo_;
}

void ModifyNodeSpecBatchRequest::setNodesInfo(const std::string& nodesInfo)
{
	nodesInfo_ = nodesInfo;
	setParameter("NodesInfo", nodesInfo);
}

std::string ModifyNodeSpecBatchRequest::getCouponNo()const
{
	return couponNo_;
}

void ModifyNodeSpecBatchRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string ModifyNodeSpecBatchRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNodeSpecBatchRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyNodeSpecBatchRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyNodeSpecBatchRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyNodeSpecBatchRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNodeSpecBatchRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyNodeSpecBatchRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void ModifyNodeSpecBatchRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

std::string ModifyNodeSpecBatchRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyNodeSpecBatchRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyNodeSpecBatchRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void ModifyNodeSpecBatchRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

bool ModifyNodeSpecBatchRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyNodeSpecBatchRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyNodeSpecBatchRequest::getFromApp()const
{
	return fromApp_;
}

void ModifyNodeSpecBatchRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setParameter("FromApp", fromApp);
}

std::string ModifyNodeSpecBatchRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNodeSpecBatchRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNodeSpecBatchRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNodeSpecBatchRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyNodeSpecBatchRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNodeSpecBatchRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyNodeSpecBatchRequest::getOrderType()const
{
	return orderType_;
}

void ModifyNodeSpecBatchRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

