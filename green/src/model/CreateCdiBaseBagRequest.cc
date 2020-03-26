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

#include <alibabacloud/green/model/CreateCdiBaseBagRequest.h>

using AlibabaCloud::Green::Model::CreateCdiBaseBagRequest;

CreateCdiBaseBagRequest::CreateCdiBaseBagRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateCdiBaseBag")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCdiBaseBagRequest::~CreateCdiBaseBagRequest()
{}

int CreateCdiBaseBagRequest::getDuration()const
{
	return duration_;
}

void CreateCdiBaseBagRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string CreateCdiBaseBagRequest::getClientToken()const
{
	return clientToken_;
}

void CreateCdiBaseBagRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateCdiBaseBagRequest::getCommodityCode()const
{
	return commodityCode_;
}

void CreateCdiBaseBagRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long CreateCdiBaseBagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCdiBaseBagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateCdiBaseBagRequest::getFlowOutSpec()const
{
	return flowOutSpec_;
}

void CreateCdiBaseBagRequest::setFlowOutSpec(int flowOutSpec)
{
	flowOutSpec_ = flowOutSpec;
	setParameter("FlowOutSpec", std::to_string(flowOutSpec));
}

std::string CreateCdiBaseBagRequest::getOrderType()const
{
	return orderType_;
}

void CreateCdiBaseBagRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

