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

#include <alibabacloud/cloudesl/model/DescribeUserRamPolicyRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeUserRamPolicyRequest;

DescribeUserRamPolicyRequest::DescribeUserRamPolicyRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "DescribeUserRamPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUserRamPolicyRequest::~DescribeUserRamPolicyRequest()
{}

std::string DescribeUserRamPolicyRequest::getUserType()const
{
	return userType_;
}

void DescribeUserRamPolicyRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setParameter("UserType", userType);
}

std::string DescribeUserRamPolicyRequest::getStoreId()const
{
	return storeId_;
}

void DescribeUserRamPolicyRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::string DescribeUserRamPolicyRequest::getCompanyId()const
{
	return companyId_;
}

void DescribeUserRamPolicyRequest::setCompanyId(const std::string& companyId)
{
	companyId_ = companyId;
	setParameter("CompanyId", companyId);
}

