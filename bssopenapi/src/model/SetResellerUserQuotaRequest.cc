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

#include <alibabacloud/bssopenapi/model/SetResellerUserQuotaRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetResellerUserQuotaRequest;

SetResellerUserQuotaRequest::SetResellerUserQuotaRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "SetResellerUserQuota")
{}

SetResellerUserQuotaRequest::~SetResellerUserQuotaRequest()
{}

std::string SetResellerUserQuotaRequest::getAmount()const
{
	return amount_;
}

void SetResellerUserQuotaRequest::setAmount(const std::string& amount)
{
	amount_ = amount;
	setCoreParameter("Amount", amount);
}

std::string SetResellerUserQuotaRequest::getOutBizId()const
{
	return outBizId_;
}

void SetResellerUserQuotaRequest::setOutBizId(const std::string& outBizId)
{
	outBizId_ = outBizId;
	setCoreParameter("OutBizId", outBizId);
}

std::string SetResellerUserQuotaRequest::getCurrency()const
{
	return currency_;
}

void SetResellerUserQuotaRequest::setCurrency(const std::string& currency)
{
	currency_ = currency;
	setCoreParameter("Currency", currency);
}

long SetResellerUserQuotaRequest::getOwnerId()const
{
	return ownerId_;
}

void SetResellerUserQuotaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

