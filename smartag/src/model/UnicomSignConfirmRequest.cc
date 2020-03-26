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

#include <alibabacloud/smartag/model/UnicomSignConfirmRequest.h>

using AlibabaCloud::Smartag::Model::UnicomSignConfirmRequest;

UnicomSignConfirmRequest::UnicomSignConfirmRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "UnicomSignConfirm")
{
	setMethod(HttpRequest::Method::Post);
}

UnicomSignConfirmRequest::~UnicomSignConfirmRequest()
{}

long UnicomSignConfirmRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnicomSignConfirmRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnicomSignConfirmRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnicomSignConfirmRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnicomSignConfirmRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnicomSignConfirmRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::vector<UnicomSignConfirmRequest::TmsOrder> UnicomSignConfirmRequest::getTmsOrder()const
{
	return tmsOrder_;
}

void UnicomSignConfirmRequest::setTmsOrder(const std::vector<TmsOrder>& tmsOrder)
{
	tmsOrder_ = tmsOrder;
	for(int dep1 = 0; dep1!= tmsOrder.size(); dep1++) {
		auto tmsOrderObj = tmsOrder.at(dep1);
		std::string tmsOrderObjStr = "TmsOrder." + std::to_string(dep1 + 1);
		setParameter(tmsOrderObjStr + ".TmsCode", tmsOrderObj.tmsCode);
		setParameter(tmsOrderObjStr + ".SigningTime", tmsOrderObj.signingTime);
		setParameter(tmsOrderObjStr + ".TmsOrderCode", tmsOrderObj.tmsOrderCode);
		setParameter(tmsOrderObjStr + ".TradeId", tmsOrderObj.tradeId);
	}
}

long UnicomSignConfirmRequest::getOwnerId()const
{
	return ownerId_;
}

void UnicomSignConfirmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

