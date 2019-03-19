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

#include <alibabacloud/bssopenapi/model/ChangeConsumeAmountRequest.h>

using AlibabaCloud::BssOpenApi::Model::ChangeConsumeAmountRequest;

ChangeConsumeAmountRequest::ChangeConsumeAmountRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "ChangeConsumeAmount")
{}

ChangeConsumeAmountRequest::~ChangeConsumeAmountRequest()
{}

long ChangeConsumeAmountRequest::getUid()const
{
	return uid_;
}

void ChangeConsumeAmountRequest::setUid(long uid)
{
	uid_ = uid;
	setParameter("Uid", std::to_string(uid));
}

std::string ChangeConsumeAmountRequest::getAdjustType()const
{
	return adjustType_;
}

void ChangeConsumeAmountRequest::setAdjustType(const std::string& adjustType)
{
	adjustType_ = adjustType;
	setParameter("AdjustType", adjustType);
}

std::string ChangeConsumeAmountRequest::getAmount()const
{
	return amount_;
}

void ChangeConsumeAmountRequest::setAmount(const std::string& amount)
{
	amount_ = amount;
	setParameter("Amount", amount);
}

std::string ChangeConsumeAmountRequest::getOutBizId()const
{
	return outBizId_;
}

void ChangeConsumeAmountRequest::setOutBizId(const std::string& outBizId)
{
	outBizId_ = outBizId;
	setParameter("OutBizId", outBizId);
}

std::string ChangeConsumeAmountRequest::getExtendMap()const
{
	return extendMap_;
}

void ChangeConsumeAmountRequest::setExtendMap(const std::string& extendMap)
{
	extendMap_ = extendMap;
	setParameter("ExtendMap", extendMap);
}

std::string ChangeConsumeAmountRequest::getCurrency()const
{
	return currency_;
}

void ChangeConsumeAmountRequest::setCurrency(const std::string& currency)
{
	currency_ = currency;
	setParameter("Currency", currency);
}

std::string ChangeConsumeAmountRequest::getSource()const
{
	return source_;
}

void ChangeConsumeAmountRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string ChangeConsumeAmountRequest::getBid()const
{
	return bid_;
}

void ChangeConsumeAmountRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setParameter("Bid", bid);
}

std::string ChangeConsumeAmountRequest::getBusinessType()const
{
	return businessType_;
}

void ChangeConsumeAmountRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setParameter("BusinessType", businessType);
}

