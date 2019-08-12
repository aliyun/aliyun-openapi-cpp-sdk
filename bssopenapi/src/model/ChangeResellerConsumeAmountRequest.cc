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

#include <alibabacloud/bssopenapi/model/ChangeResellerConsumeAmountRequest.h>

using AlibabaCloud::BssOpenApi::Model::ChangeResellerConsumeAmountRequest;

ChangeResellerConsumeAmountRequest::ChangeResellerConsumeAmountRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "ChangeResellerConsumeAmount")
{}

ChangeResellerConsumeAmountRequest::~ChangeResellerConsumeAmountRequest()
{}

std::string ChangeResellerConsumeAmountRequest::getAdjustType()const
{
	return adjustType_;
}

void ChangeResellerConsumeAmountRequest::setAdjustType(const std::string& adjustType)
{
	adjustType_ = adjustType;
	setCoreParameter("AdjustType", std::to_string(adjustType));
}

std::string ChangeResellerConsumeAmountRequest::getAmount()const
{
	return amount_;
}

void ChangeResellerConsumeAmountRequest::setAmount(const std::string& amount)
{
	amount_ = amount;
	setCoreParameter("Amount", std::to_string(amount));
}

std::string ChangeResellerConsumeAmountRequest::getOutBizId()const
{
	return outBizId_;
}

void ChangeResellerConsumeAmountRequest::setOutBizId(const std::string& outBizId)
{
	outBizId_ = outBizId;
	setCoreParameter("OutBizId", std::to_string(outBizId));
}

std::string ChangeResellerConsumeAmountRequest::getExtendMap()const
{
	return extendMap_;
}

void ChangeResellerConsumeAmountRequest::setExtendMap(const std::string& extendMap)
{
	extendMap_ = extendMap;
	setCoreParameter("ExtendMap", std::to_string(extendMap));
}

std::string ChangeResellerConsumeAmountRequest::getCurrency()const
{
	return currency_;
}

void ChangeResellerConsumeAmountRequest::setCurrency(const std::string& currency)
{
	currency_ = currency;
	setCoreParameter("Currency", std::to_string(currency));
}

std::string ChangeResellerConsumeAmountRequest::getSource()const
{
	return source_;
}

void ChangeResellerConsumeAmountRequest::setSource(const std::string& source)
{
	source_ = source;
	setCoreParameter("Source", std::to_string(source));
}

long ChangeResellerConsumeAmountRequest::getOwnerId()const
{
	return ownerId_;
}

void ChangeResellerConsumeAmountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ChangeResellerConsumeAmountRequest::getBusinessType()const
{
	return businessType_;
}

void ChangeResellerConsumeAmountRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setCoreParameter("BusinessType", std::to_string(businessType));
}

