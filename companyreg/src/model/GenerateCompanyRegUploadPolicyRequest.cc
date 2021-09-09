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

#include <alibabacloud/companyreg/model/GenerateCompanyRegUploadPolicyRequest.h>

using AlibabaCloud::Companyreg::Model::GenerateCompanyRegUploadPolicyRequest;

GenerateCompanyRegUploadPolicyRequest::GenerateCompanyRegUploadPolicyRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "GenerateCompanyRegUploadPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

GenerateCompanyRegUploadPolicyRequest::~GenerateCompanyRegUploadPolicyRequest()
{}

std::string GenerateCompanyRegUploadPolicyRequest::getData()const
{
	return data_;
}

void GenerateCompanyRegUploadPolicyRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string GenerateCompanyRegUploadPolicyRequest::getBizCode()const
{
	return bizCode_;
}

void GenerateCompanyRegUploadPolicyRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string GenerateCompanyRegUploadPolicyRequest::getBizSubCode()const
{
	return bizSubCode_;
}

void GenerateCompanyRegUploadPolicyRequest::setBizSubCode(const std::string& bizSubCode)
{
	bizSubCode_ = bizSubCode;
	setParameter("BizSubCode", bizSubCode);
}

