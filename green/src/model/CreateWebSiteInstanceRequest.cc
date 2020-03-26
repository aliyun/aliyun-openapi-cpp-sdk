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

#include <alibabacloud/green/model/CreateWebSiteInstanceRequest.h>

using AlibabaCloud::Green::Model::CreateWebSiteInstanceRequest;

CreateWebSiteInstanceRequest::CreateWebSiteInstanceRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateWebSiteInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateWebSiteInstanceRequest::~CreateWebSiteInstanceRequest()
{}

int CreateWebSiteInstanceRequest::getDuration()const
{
	return duration_;
}

void CreateWebSiteInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string CreateWebSiteInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateWebSiteInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int CreateWebSiteInstanceRequest::getOrderNum()const
{
	return orderNum_;
}

void CreateWebSiteInstanceRequest::setOrderNum(int orderNum)
{
	orderNum_ = orderNum;
	setParameter("OrderNum", std::to_string(orderNum));
}

long CreateWebSiteInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateWebSiteInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateWebSiteInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateWebSiteInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

std::string CreateWebSiteInstanceRequest::getOrderType()const
{
	return orderType_;
}

void CreateWebSiteInstanceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

