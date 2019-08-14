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

#include <alibabacloud/smartag/model/UnicomOrderConfirmRequest.h>

using AlibabaCloud::Smartag::Model::UnicomOrderConfirmRequest;

UnicomOrderConfirmRequest::UnicomOrderConfirmRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "UnicomOrderConfirm")
{}

UnicomOrderConfirmRequest::~UnicomOrderConfirmRequest()
{}

std::string UnicomOrderConfirmRequest::getTmsCode()const
{
	return tmsCode_;
}

void UnicomOrderConfirmRequest::setTmsCode(const std::string& tmsCode)
{
	tmsCode_ = tmsCode;
	setCoreParameter("TmsCode", tmsCode);
}

long UnicomOrderConfirmRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnicomOrderConfirmRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<UnicomOrderConfirmRequest::OrderItem> UnicomOrderConfirmRequest::getOrderItem()const
{
	return orderItem_;
}

void UnicomOrderConfirmRequest::setOrderItem(const std::vector<OrderItem>& orderItem)
{
	orderItem_ = orderItem;
	int i = 0;
	for(int i = 0; i!= orderItem.size(); i++)	{
		auto obj = orderItem.at(i);
		std::string str ="OrderItem."+ std::to_string(i);
		setCoreParameter(str + ".ScItemName", obj.scItemName);
		setCoreParameter(str + ".ItemAmount", obj.itemAmount);
		for(int i = 0; i!= obj.snList.size(); i++)				setCoreParameter(str + ".SnList."+ std::to_string(i), obj.snList.at(i));
		setCoreParameter(str + ".OrderItemId", obj.orderItemId);
		setCoreParameter(str + ".ScItemCode", obj.scItemCode);
		setCoreParameter(str + ".ItemQuantity", std::to_string(obj.itemQuantity));
		setCoreParameter(str + ".TradeId", obj.tradeId);
		setCoreParameter(str + ".TradeItemId", obj.tradeItemId);
	}
}

std::string UnicomOrderConfirmRequest::getOwnerUserId()const
{
	return ownerUserId_;
}

void UnicomOrderConfirmRequest::setOwnerUserId(const std::string& ownerUserId)
{
	ownerUserId_ = ownerUserId;
	setCoreParameter("OwnerUserId", ownerUserId);
}

std::string UnicomOrderConfirmRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnicomOrderConfirmRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnicomOrderConfirmRequest::getRegionId()const
{
	return regionId_;
}

void UnicomOrderConfirmRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnicomOrderConfirmRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnicomOrderConfirmRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnicomOrderConfirmRequest::getOrderPostFee()const
{
	return orderPostFee_;
}

void UnicomOrderConfirmRequest::setOrderPostFee(long orderPostFee)
{
	orderPostFee_ = orderPostFee;
	setCoreParameter("OrderPostFee", std::to_string(orderPostFee));
}

long UnicomOrderConfirmRequest::getOwnerId()const
{
	return ownerId_;
}

void UnicomOrderConfirmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnicomOrderConfirmRequest::getTmsOrderCode()const
{
	return tmsOrderCode_;
}

void UnicomOrderConfirmRequest::setTmsOrderCode(const std::string& tmsOrderCode)
{
	tmsOrderCode_ = tmsOrderCode;
	setCoreParameter("TmsOrderCode", tmsOrderCode);
}

std::string UnicomOrderConfirmRequest::getTradeId()const
{
	return tradeId_;
}

void UnicomOrderConfirmRequest::setTradeId(const std::string& tradeId)
{
	tradeId_ = tradeId;
	setCoreParameter("TradeId", tradeId);
}

