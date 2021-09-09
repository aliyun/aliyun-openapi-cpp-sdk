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

#include <alibabacloud/companyreg/model/UpdateFeeRequest.h>

using AlibabaCloud::Companyreg::Model::UpdateFeeRequest;

UpdateFeeRequest::UpdateFeeRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "UpdateFee")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateFeeRequest::~UpdateFeeRequest()
{}

std::string UpdateFeeRequest::getKind()const
{
	return kind_;
}

void UpdateFeeRequest::setKind(const std::string& kind)
{
	kind_ = kind;
	setParameter("Kind", kind);
}

std::string UpdateFeeRequest::getUse()const
{
	return use_;
}

void UpdateFeeRequest::setUse(const std::string& use)
{
	use_ = use;
	setParameter("Use", use);
}

std::string UpdateFeeRequest::getBaseTotalAmount()const
{
	return baseTotalAmount_;
}

void UpdateFeeRequest::setBaseTotalAmount(const std::string& baseTotalAmount)
{
	baseTotalAmount_ = baseTotalAmount;
	setParameter("BaseTotalAmount", baseTotalAmount);
}

std::string UpdateFeeRequest::getPayer()const
{
	return payer_;
}

void UpdateFeeRequest::setPayer(const std::string& payer)
{
	payer_ = payer;
	setParameter("Payer", payer);
}

std::string UpdateFeeRequest::getSecondKey()const
{
	return secondKey_;
}

void UpdateFeeRequest::setSecondKey(const std::string& secondKey)
{
	secondKey_ = secondKey;
	setParameter("SecondKey", secondKey);
}

std::string UpdateFeeRequest::getPayMethod()const
{
	return payMethod_;
}

void UpdateFeeRequest::setPayMethod(const std::string& payMethod)
{
	payMethod_ = payMethod;
	setParameter("PayMethod", payMethod);
}

std::string UpdateFeeRequest::getFirstKey()const
{
	return firstKey_;
}

void UpdateFeeRequest::setFirstKey(const std::string& firstKey)
{
	firstKey_ = firstKey;
	setParameter("FirstKey", firstKey);
}

std::string UpdateFeeRequest::getBizId()const
{
	return bizId_;
}

void UpdateFeeRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string UpdateFeeRequest::getFeeType()const
{
	return feeType_;
}

void UpdateFeeRequest::setFeeType(const std::string& feeType)
{
	feeType_ = feeType;
	setParameter("FeeType", feeType);
}

long UpdateFeeRequest::getId()const
{
	return id_;
}

void UpdateFeeRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

