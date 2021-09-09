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

#include <alibabacloud/companyreg/model/ConvertInvoiceRequest.h>

using AlibabaCloud::Companyreg::Model::ConvertInvoiceRequest;

ConvertInvoiceRequest::ConvertInvoiceRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ConvertInvoice")
{
	setMethod(HttpRequest::Method::Post);
}

ConvertInvoiceRequest::~ConvertInvoiceRequest()
{}

bool ConvertInvoiceRequest::getIsFee()const
{
	return isFee_;
}

void ConvertInvoiceRequest::setIsFee(bool isFee)
{
	isFee_ = isFee;
	setParameter("IsFee", isFee ? "true" : "false");
}

std::string ConvertInvoiceRequest::getShellMethod()const
{
	return shellMethod_;
}

void ConvertInvoiceRequest::setShellMethod(const std::string& shellMethod)
{
	shellMethod_ = shellMethod;
	setParameter("ShellMethod", shellMethod);
}

std::string ConvertInvoiceRequest::getKind()const
{
	return kind_;
}

void ConvertInvoiceRequest::setKind(const std::string& kind)
{
	kind_ = kind;
	setParameter("Kind", kind);
}

std::string ConvertInvoiceRequest::getUse()const
{
	return use_;
}

void ConvertInvoiceRequest::setUse(const std::string& use)
{
	use_ = use;
	setParameter("Use", use);
}

std::string ConvertInvoiceRequest::getThirdKey()const
{
	return thirdKey_;
}

void ConvertInvoiceRequest::setThirdKey(const std::string& thirdKey)
{
	thirdKey_ = thirdKey;
	setParameter("ThirdKey", thirdKey);
}

std::string ConvertInvoiceRequest::getPayer()const
{
	return payer_;
}

void ConvertInvoiceRequest::setPayer(const std::string& payer)
{
	payer_ = payer;
	setParameter("Payer", payer);
}

std::string ConvertInvoiceRequest::getSecondKey()const
{
	return secondKey_;
}

void ConvertInvoiceRequest::setSecondKey(const std::string& secondKey)
{
	secondKey_ = secondKey;
	setParameter("SecondKey", secondKey);
}

std::string ConvertInvoiceRequest::getPayMethod()const
{
	return payMethod_;
}

void ConvertInvoiceRequest::setPayMethod(const std::string& payMethod)
{
	payMethod_ = payMethod;
	setParameter("PayMethod", payMethod);
}

std::string ConvertInvoiceRequest::getBuyMethod()const
{
	return buyMethod_;
}

void ConvertInvoiceRequest::setBuyMethod(const std::string& buyMethod)
{
	buyMethod_ = buyMethod;
	setParameter("BuyMethod", buyMethod);
}

std::string ConvertInvoiceRequest::getFixedAssetType()const
{
	return fixedAssetType_;
}

void ConvertInvoiceRequest::setFixedAssetType(const std::string& fixedAssetType)
{
	fixedAssetType_ = fixedAssetType;
	setParameter("FixedAssetType", fixedAssetType);
}

std::string ConvertInvoiceRequest::getFirstKey()const
{
	return firstKey_;
}

void ConvertInvoiceRequest::setFirstKey(const std::string& firstKey)
{
	firstKey_ = firstKey;
	setParameter("FirstKey", firstKey);
}

std::string ConvertInvoiceRequest::getBizId()const
{
	return bizId_;
}

void ConvertInvoiceRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

long ConvertInvoiceRequest::getId()const
{
	return id_;
}

void ConvertInvoiceRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ConvertInvoiceRequest::getBuyTarget()const
{
	return buyTarget_;
}

void ConvertInvoiceRequest::setBuyTarget(const std::string& buyTarget)
{
	buyTarget_ = buyTarget;
	setParameter("BuyTarget", buyTarget);
}

