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

#include <alibabacloud/bssopenapi/model/SetUserQuotaRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetUserQuotaRequest;

SetUserQuotaRequest::SetUserQuotaRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "SetUserQuota")
{}

SetUserQuotaRequest::~SetUserQuotaRequest()
{}

long SetUserQuotaRequest::getUid()const
{
	return uid_;
}

void SetUserQuotaRequest::setUid(long uid)
{
	uid_ = uid;
	setCoreParameter("Uid", std::to_string(uid));
}

std::string SetUserQuotaRequest::getAmount()const
{
	return amount_;
}

void SetUserQuotaRequest::setAmount(const std::string& amount)
{
	amount_ = amount;
	setCoreParameter("Amount", amount);
}

std::string SetUserQuotaRequest::getOutBizId()const
{
	return outBizId_;
}

void SetUserQuotaRequest::setOutBizId(const std::string& outBizId)
{
	outBizId_ = outBizId;
	setCoreParameter("OutBizId", outBizId);
}

std::string SetUserQuotaRequest::getCurrency()const
{
	return currency_;
}

void SetUserQuotaRequest::setCurrency(const std::string& currency)
{
	currency_ = currency;
	setCoreParameter("Currency", currency);
}

std::string SetUserQuotaRequest::getBid()const
{
	return bid_;
}

void SetUserQuotaRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setCoreParameter("Bid", bid);
}

