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
{}

UnicomSignConfirmRequest::~UnicomSignConfirmRequest()
{}

long UnicomSignConfirmRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnicomSignConfirmRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UnicomSignConfirmRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnicomSignConfirmRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnicomSignConfirmRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnicomSignConfirmRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::vector<UnicomSignConfirmRequest::TmsOrder> UnicomSignConfirmRequest::getTmsOrder()const
{
	return tmsOrder_;
}

void UnicomSignConfirmRequest::setTmsOrder(const std::vector<TmsOrder>& tmsOrder)
{
	tmsOrder_ = tmsOrder;
	int i = 0;
	for(int i = 0; i!= tmsOrder.size(); i++)	{
		auto obj = tmsOrder.at(i);
		std::string str ="TmsOrder."+ std::to_string(i);
		setCoreParameter(str + ".TmsCode", std::to_string(obj.tmsCode));
		setCoreParameter(str + ".SigningTime", std::to_string(obj.signingTime));
		setCoreParameter(str + ".TmsOrderCode", std::to_string(obj.tmsOrderCode));
		setCoreParameter(str + ".TradeId", std::to_string(obj.tradeId));
	}
}

long UnicomSignConfirmRequest::getOwnerId()const
{
	return ownerId_;
}

void UnicomSignConfirmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

