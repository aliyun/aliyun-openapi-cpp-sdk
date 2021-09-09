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

#include <alibabacloud/companyreg/model/SubmitPartnerCompanyInformationRequest.h>

using AlibabaCloud::Companyreg::Model::SubmitPartnerCompanyInformationRequest;

SubmitPartnerCompanyInformationRequest::SubmitPartnerCompanyInformationRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "SubmitPartnerCompanyInformation")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitPartnerCompanyInformationRequest::~SubmitPartnerCompanyInformationRequest()
{}

std::string SubmitPartnerCompanyInformationRequest::getUscc()const
{
	return uscc_;
}

void SubmitPartnerCompanyInformationRequest::setUscc(const std::string& uscc)
{
	uscc_ = uscc;
	setParameter("Uscc", uscc);
}

std::string SubmitPartnerCompanyInformationRequest::getContactName()const
{
	return contactName_;
}

void SubmitPartnerCompanyInformationRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string SubmitPartnerCompanyInformationRequest::getCompanyName()const
{
	return companyName_;
}

void SubmitPartnerCompanyInformationRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setParameter("CompanyName", companyName);
}

std::string SubmitPartnerCompanyInformationRequest::getBizId()const
{
	return bizId_;
}

void SubmitPartnerCompanyInformationRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string SubmitPartnerCompanyInformationRequest::getContactMobile()const
{
	return contactMobile_;
}

void SubmitPartnerCompanyInformationRequest::setContactMobile(const std::string& contactMobile)
{
	contactMobile_ = contactMobile;
	setParameter("ContactMobile", contactMobile);
}

std::string SubmitPartnerCompanyInformationRequest::getCompanyBizType()const
{
	return companyBizType_;
}

void SubmitPartnerCompanyInformationRequest::setCompanyBizType(const std::string& companyBizType)
{
	companyBizType_ = companyBizType;
	setParameter("CompanyBizType", companyBizType);
}

