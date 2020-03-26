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

#include <alibabacloud/companyreg/model/SubmitIcpSolutionRequest.h>

using AlibabaCloud::Companyreg::Model::SubmitIcpSolutionRequest;

SubmitIcpSolutionRequest::SubmitIcpSolutionRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "SubmitIcpSolution")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitIcpSolutionRequest::~SubmitIcpSolutionRequest()
{}

std::string SubmitIcpSolutionRequest::getArea()const
{
	return area_;
}

void SubmitIcpSolutionRequest::setArea(const std::string& area)
{
	area_ = area;
	setBodyParameter("Area", area);
}

std::string SubmitIcpSolutionRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void SubmitIcpSolutionRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setBodyParameter("IntentionBizId", intentionBizId);
}

int SubmitIcpSolutionRequest::getIcpType()const
{
	return icpType_;
}

void SubmitIcpSolutionRequest::setIcpType(int icpType)
{
	icpType_ = icpType;
	setBodyParameter("IcpType", std::to_string(icpType));
}

std::string SubmitIcpSolutionRequest::getCompanyAddress()const
{
	return companyAddress_;
}

void SubmitIcpSolutionRequest::setCompanyAddress(const std::string& companyAddress)
{
	companyAddress_ = companyAddress;
	setBodyParameter("CompanyAddress", companyAddress);
}

std::string SubmitIcpSolutionRequest::getCompanyName()const
{
	return companyName_;
}

void SubmitIcpSolutionRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setBodyParameter("CompanyName", companyName);
}

std::string SubmitIcpSolutionRequest::getBizId()const
{
	return bizId_;
}

void SubmitIcpSolutionRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

