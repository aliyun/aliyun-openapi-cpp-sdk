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

#include <alibabacloud/finmall/model/ApplyForLoanRequest.h>

using AlibabaCloud::Finmall::Model::ApplyForLoanRequest;

ApplyForLoanRequest::ApplyForLoanRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "ApplyForLoan")
{}

ApplyForLoanRequest::~ApplyForLoanRequest()
{}

std::string ApplyForLoanRequest::getBizType()const
{
	return bizType_;
}

void ApplyForLoanRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string ApplyForLoanRequest::getCreditId()const
{
	return creditId_;
}

void ApplyForLoanRequest::setCreditId(const std::string& creditId)
{
	creditId_ = creditId;
	setParameter("CreditId", creditId);
}

std::string ApplyForLoanRequest::getProductId()const
{
	return productId_;
}

void ApplyForLoanRequest::setProductId(const std::string& productId)
{
	productId_ = productId;
	setParameter("ProductId", productId);
}

std::string ApplyForLoanRequest::getFundpartyId()const
{
	return fundpartyId_;
}

void ApplyForLoanRequest::setFundpartyId(const std::string& fundpartyId)
{
	fundpartyId_ = fundpartyId;
	setParameter("FundpartyId", fundpartyId);
}

std::string ApplyForLoanRequest::getBizData()const
{
	return bizData_;
}

void ApplyForLoanRequest::setBizData(const std::string& bizData)
{
	bizData_ = bizData;
	setParameter("BizData", bizData);
}

std::string ApplyForLoanRequest::getUserId()const
{
	return userId_;
}

void ApplyForLoanRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

