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

#include <alibabacloud/green/model/CreateCdiBagRequest.h>

using AlibabaCloud::Green::Model::CreateCdiBagRequest;

CreateCdiBagRequest::CreateCdiBagRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateCdiBag")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCdiBagRequest::~CreateCdiBagRequest()
{}

std::string CreateCdiBagRequest::getClientToken()const
{
	return clientToken_;
}

void CreateCdiBagRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int CreateCdiBagRequest::getOrderNum()const
{
	return orderNum_;
}

void CreateCdiBagRequest::setOrderNum(int orderNum)
{
	orderNum_ = orderNum;
	setParameter("OrderNum", std::to_string(orderNum));
}

std::string CreateCdiBagRequest::getCommodityCode()const
{
	return commodityCode_;
}

void CreateCdiBagRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long CreateCdiBagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCdiBagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateCdiBagRequest::getFlowOutSpec()const
{
	return flowOutSpec_;
}

void CreateCdiBagRequest::setFlowOutSpec(int flowOutSpec)
{
	flowOutSpec_ = flowOutSpec;
	setParameter("FlowOutSpec", std::to_string(flowOutSpec));
}

std::string CreateCdiBagRequest::getOrderType()const
{
	return orderType_;
}

void CreateCdiBagRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

