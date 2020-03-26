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

#include <alibabacloud/green/model/UpgradeCdiBaseBagRequest.h>

using AlibabaCloud::Green::Model::UpgradeCdiBaseBagRequest;

UpgradeCdiBaseBagRequest::UpgradeCdiBaseBagRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpgradeCdiBaseBag")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeCdiBaseBagRequest::~UpgradeCdiBaseBagRequest()
{}

std::string UpgradeCdiBaseBagRequest::getInstanceId()const
{
	return instanceId_;
}

void UpgradeCdiBaseBagRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpgradeCdiBaseBagRequest::getClientToken()const
{
	return clientToken_;
}

void UpgradeCdiBaseBagRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpgradeCdiBaseBagRequest::getCommodityCode()const
{
	return commodityCode_;
}

void UpgradeCdiBaseBagRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long UpgradeCdiBaseBagRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeCdiBaseBagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int UpgradeCdiBaseBagRequest::getFlowOutSpec()const
{
	return flowOutSpec_;
}

void UpgradeCdiBaseBagRequest::setFlowOutSpec(int flowOutSpec)
{
	flowOutSpec_ = flowOutSpec;
	setParameter("FlowOutSpec", std::to_string(flowOutSpec));
}

std::string UpgradeCdiBaseBagRequest::getOrderType()const
{
	return orderType_;
}

void UpgradeCdiBaseBagRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

