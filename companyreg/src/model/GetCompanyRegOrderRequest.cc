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

#include <alibabacloud/companyreg/model/GetCompanyRegOrderRequest.h>

using AlibabaCloud::Companyreg::Model::GetCompanyRegOrderRequest;

GetCompanyRegOrderRequest::GetCompanyRegOrderRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "GetCompanyRegOrder")
{
	setMethod(HttpRequest::Method::Post);
}

GetCompanyRegOrderRequest::~GetCompanyRegOrderRequest()
{}

std::string GetCompanyRegOrderRequest::getActionTypes()const
{
	return actionTypes_;
}

void GetCompanyRegOrderRequest::setActionTypes(const std::string& actionTypes)
{
	actionTypes_ = actionTypes;
	setParameter("ActionTypes", actionTypes);
}

std::string GetCompanyRegOrderRequest::getBizCode()const
{
	return bizCode_;
}

void GetCompanyRegOrderRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string GetCompanyRegOrderRequest::getBizId()const
{
	return bizId_;
}

void GetCompanyRegOrderRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int GetCompanyRegOrderRequest::getMaxOperationSize()const
{
	return maxOperationSize_;
}

void GetCompanyRegOrderRequest::setMaxOperationSize(int maxOperationSize)
{
	maxOperationSize_ = maxOperationSize;
	setParameter("MaxOperationSize", std::to_string(maxOperationSize));
}

std::string GetCompanyRegOrderRequest::getBizSubCode()const
{
	return bizSubCode_;
}

void GetCompanyRegOrderRequest::setBizSubCode(const std::string& bizSubCode)
{
	bizSubCode_ = bizSubCode;
	setParameter("BizSubCode", bizSubCode);
}

