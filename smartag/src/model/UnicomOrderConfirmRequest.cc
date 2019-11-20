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
{
	setMethod(HttpRequest::Method::Post);
}

UnicomOrderConfirmRequest::~UnicomOrderConfirmRequest()
{}

long UnicomOrderConfirmRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnicomOrderConfirmRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnicomOrderConfirmRequest::getTmsCode()const
{
	return tmsCode_;
}

void UnicomOrderConfirmRequest::setTmsCode(const std::string& tmsCode)
{
	tmsCode_ = tmsCode;
	setCoreParameter("TmsCode", tmsCode);
}

std::vector<UnicomOrderConfirmRequest::OrderItem> UnicomOrderConfirmRequest::getOrderItem()const
{
	return orderItem_;
}

void UnicomOrderConfirmRequest::setOrderItem(const std::vector<OrderItem>& orderItem)
{
	orderItem_ = orderItem;
	for(int dep1 = 0; dep1!= orderItem.size(); dep1++) {
		auto orderItemObj = orderItem.at(dep1);
		std::string orderItemObjStr = "OrderItem." + std::to_string(dep1);
		setCoreParameter(orderItemObjStr + ".ScItemName", orderItemObj.scItemName);
		setCoreParameter(orderItemObjStr + ".ItemAmount", orderItemObj.itemAmount);
		for(int dep2 = 0; dep2!= orderItemObj.snList.size(); dep2++) {
			setCoreParameter(orderItemObjStr + ".SnList."+ std::to_string(dep2), orderItemObj.snList.at(dep2));
		}
		setCoreParameter(orderItemObjStr + ".OrderItemId", orderItemObj.orderItemId);
		setCoreParameter(orderItemObjStr + ".ScItemCode", orderItemObj.scItemCode);
		setCoreParameter(orderItemObjStr + ".ItemQuantity", std::to_string(orderItemObj.itemQuantity));
		setCoreParameter(orderItemObjStr + ".TradeId", orderItemObj.tradeId);
		setCoreParameter(orderItemObjStr + ".TradeItemId", orderItemObj.tradeItemId);
	}
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

long UnicomOrderConfirmRequest::getOrderPostFee()const
{
	return orderPostFee_;
}

void UnicomOrderConfirmRequest::setOrderPostFee(long orderPostFee)
{
	orderPostFee_ = orderPostFee;
	setCoreParameter("OrderPostFee", std::to_string(orderPostFee));
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

std::string UnicomOrderConfirmRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnicomOrderConfirmRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
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

