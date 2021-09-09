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

#include <alibabacloud/companyreg/model/ConvertFeeRequest.h>

using AlibabaCloud::Companyreg::Model::ConvertFeeRequest;

ConvertFeeRequest::ConvertFeeRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ConvertFee")
{
	setMethod(HttpRequest::Method::Post);
}

ConvertFeeRequest::~ConvertFeeRequest()
{}

std::string ConvertFeeRequest::getKind()const
{
	return kind_;
}

void ConvertFeeRequest::setKind(const std::string& kind)
{
	kind_ = kind;
	setParameter("Kind", kind);
}

std::string ConvertFeeRequest::getUse()const
{
	return use_;
}

void ConvertFeeRequest::setUse(const std::string& use)
{
	use_ = use;
	setParameter("Use", use);
}

std::string ConvertFeeRequest::getPayer()const
{
	return payer_;
}

void ConvertFeeRequest::setPayer(const std::string& payer)
{
	payer_ = payer;
	setParameter("Payer", payer);
}

std::string ConvertFeeRequest::getPayMethod()const
{
	return payMethod_;
}

void ConvertFeeRequest::setPayMethod(const std::string& payMethod)
{
	payMethod_ = payMethod;
	setParameter("PayMethod", payMethod);
}

std::string ConvertFeeRequest::getBizId()const
{
	return bizId_;
}

void ConvertFeeRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

long ConvertFeeRequest::getId()const
{
	return id_;
}

void ConvertFeeRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

