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

#include <alibabacloud/finmall/model/PayForOrderRequest.h>

using AlibabaCloud::Finmall::Model::PayForOrderRequest;

PayForOrderRequest::PayForOrderRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "PayForOrder")
{}

PayForOrderRequest::~PayForOrderRequest()
{}

std::string PayForOrderRequest::getCreditId()const
{
	return creditId_;
}

void PayForOrderRequest::setCreditId(const std::string& creditId)
{
	creditId_ = creditId;
	setParameter("CreditId", creditId);
}

std::string PayForOrderRequest::getSmsIvToken()const
{
	return smsIvToken_;
}

void PayForOrderRequest::setSmsIvToken(const std::string& smsIvToken)
{
	smsIvToken_ = smsIvToken;
	setParameter("SmsIvToken", smsIvToken);
}

std::string PayForOrderRequest::getUserId()const
{
	return userId_;
}

void PayForOrderRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

