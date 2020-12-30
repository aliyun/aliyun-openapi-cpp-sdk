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

#include <alibabacloud/r-kvstore/model/ModifyNodeSpecRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyNodeSpecRequest;

ModifyNodeSpecRequest::ModifyNodeSpecRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyNodeSpec")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyNodeSpecRequest::~ModifyNodeSpecRequest()
{}

long ModifyNodeSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNodeSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyNodeSpecRequest::getCouponNo()const
{
	return couponNo_;
}

void ModifyNodeSpecRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string ModifyNodeSpecRequest::getInstanceClass()const
{
	return instanceClass_;
}

void ModifyNodeSpecRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setParameter("InstanceClass", instanceClass);
}

std::string ModifyNodeSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNodeSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyNodeSpecRequest::getSwitchTimeMode()const
{
	return switchTimeMode_;
}

void ModifyNodeSpecRequest::setSwitchTimeMode(const std::string& switchTimeMode)
{
	switchTimeMode_ = switchTimeMode;
	setParameter("SwitchTimeMode", switchTimeMode);
}

std::string ModifyNodeSpecRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyNodeSpecRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyNodeSpecRequest::getNodeId()const
{
	return nodeId_;
}

void ModifyNodeSpecRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string ModifyNodeSpecRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void ModifyNodeSpecRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

bool ModifyNodeSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyNodeSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyNodeSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNodeSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNodeSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNodeSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyNodeSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNodeSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyNodeSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyNodeSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyNodeSpecRequest::getOrderType()const
{
	return orderType_;
}

void ModifyNodeSpecRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

