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

#include <alibabacloud/companyreg/model/GetAlipayUrlRequest.h>

using AlibabaCloud::Companyreg::Model::GetAlipayUrlRequest;

GetAlipayUrlRequest::GetAlipayUrlRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "GetAlipayUrl")
{
	setMethod(HttpRequest::Method::Get);
}

GetAlipayUrlRequest::~GetAlipayUrlRequest()
{}

long GetAlipayUrlRequest::getOrderId()const
{
	return orderId_;
}

void GetAlipayUrlRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", std::to_string(orderId));
}

std::string GetAlipayUrlRequest::getType()const
{
	return type_;
}

void GetAlipayUrlRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string GetAlipayUrlRequest::getBizType()const
{
	return bizType_;
}

void GetAlipayUrlRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string GetAlipayUrlRequest::getReturnUrl()const
{
	return returnUrl_;
}

void GetAlipayUrlRequest::setReturnUrl(const std::string& returnUrl)
{
	returnUrl_ = returnUrl;
	setParameter("ReturnUrl", returnUrl);
}

