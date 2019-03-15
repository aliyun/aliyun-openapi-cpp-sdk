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

#include <alibabacloud/finmall/model/GetLoanAgreementRequest.h>

using AlibabaCloud::Finmall::Model::GetLoanAgreementRequest;

GetLoanAgreementRequest::GetLoanAgreementRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "GetLoanAgreement")
{}

GetLoanAgreementRequest::~GetLoanAgreementRequest()
{}

std::string GetLoanAgreementRequest::getCreditId()const
{
	return creditId_;
}

void GetLoanAgreementRequest::setCreditId(const std::string& creditId)
{
	creditId_ = creditId;
	setParameter("CreditId", creditId);
}

std::string GetLoanAgreementRequest::getFundPartyId()const
{
	return fundPartyId_;
}

void GetLoanAgreementRequest::setFundPartyId(const std::string& fundPartyId)
{
	fundPartyId_ = fundPartyId;
	setParameter("FundPartyId", fundPartyId);
}

std::string GetLoanAgreementRequest::getReturnUrl()const
{
	return returnUrl_;
}

void GetLoanAgreementRequest::setReturnUrl(const std::string& returnUrl)
{
	returnUrl_ = returnUrl;
	setParameter("ReturnUrl", returnUrl);
}

std::string GetLoanAgreementRequest::getUserId()const
{
	return userId_;
}

void GetLoanAgreementRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

