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

#include <alibabacloud/companyreg/model/DescribePartnerConfigRequest.h>

using AlibabaCloud::Companyreg::Model::DescribePartnerConfigRequest;

DescribePartnerConfigRequest::DescribePartnerConfigRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "DescribePartnerConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePartnerConfigRequest::~DescribePartnerConfigRequest()
{}

std::string DescribePartnerConfigRequest::getPartnerCode()const
{
	return partnerCode_;
}

void DescribePartnerConfigRequest::setPartnerCode(const std::string& partnerCode)
{
	partnerCode_ = partnerCode;
	setParameter("PartnerCode", partnerCode);
}

std::string DescribePartnerConfigRequest::getBizType()const
{
	return bizType_;
}

void DescribePartnerConfigRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

