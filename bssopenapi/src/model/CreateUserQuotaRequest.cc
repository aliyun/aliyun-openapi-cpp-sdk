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

#include <alibabacloud/bssopenapi/model/CreateUserQuotaRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateUserQuotaRequest;

CreateUserQuotaRequest::CreateUserQuotaRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "CreateUserQuota")
{}

CreateUserQuotaRequest::~CreateUserQuotaRequest()
{}

long CreateUserQuotaRequest::getUid()const
{
	return uid_;
}

void CreateUserQuotaRequest::setUid(long uid)
{
	uid_ = uid;
	setParameter("Uid", std::to_string(uid));
}

std::string CreateUserQuotaRequest::getAmount()const
{
	return amount_;
}

void CreateUserQuotaRequest::setAmount(const std::string& amount)
{
	amount_ = amount;
	setParameter("Amount", amount);
}

std::string CreateUserQuotaRequest::getOutBizId()const
{
	return outBizId_;
}

void CreateUserQuotaRequest::setOutBizId(const std::string& outBizId)
{
	outBizId_ = outBizId;
	setParameter("OutBizId", outBizId);
}

std::string CreateUserQuotaRequest::getCurrency()const
{
	return currency_;
}

void CreateUserQuotaRequest::setCurrency(const std::string& currency)
{
	currency_ = currency;
	setParameter("Currency", currency);
}

std::string CreateUserQuotaRequest::getBid()const
{
	return bid_;
}

void CreateUserQuotaRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setParameter("Bid", bid);
}

