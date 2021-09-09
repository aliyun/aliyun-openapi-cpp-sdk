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

#include <alibabacloud/companyreg/model/ListCompanyRegOrdersRequest.h>

using AlibabaCloud::Companyreg::Model::ListCompanyRegOrdersRequest;

ListCompanyRegOrdersRequest::ListCompanyRegOrdersRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "ListCompanyRegOrders")
{
	setMethod(HttpRequest::Method::Post);
}

ListCompanyRegOrdersRequest::~ListCompanyRegOrdersRequest()
{}

std::string ListCompanyRegOrdersRequest::getNotBizStatus()const
{
	return notBizStatus_;
}

void ListCompanyRegOrdersRequest::setNotBizStatus(const std::string& notBizStatus)
{
	notBizStatus_ = notBizStatus;
	setParameter("NotBizStatus", notBizStatus);
}

int ListCompanyRegOrdersRequest::getPageNum()const
{
	return pageNum_;
}

void ListCompanyRegOrdersRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListCompanyRegOrdersRequest::getBizCode()const
{
	return bizCode_;
}

void ListCompanyRegOrdersRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string ListCompanyRegOrdersRequest::getBizStatus()const
{
	return bizStatus_;
}

void ListCompanyRegOrdersRequest::setBizStatus(const std::string& bizStatus)
{
	bizStatus_ = bizStatus;
	setParameter("BizStatus", bizStatus);
}

std::string ListCompanyRegOrdersRequest::getCompanyName()const
{
	return companyName_;
}

void ListCompanyRegOrdersRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setParameter("CompanyName", companyName);
}

int ListCompanyRegOrdersRequest::getPageSize()const
{
	return pageSize_;
}

void ListCompanyRegOrdersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListCompanyRegOrdersRequest::getAliyunOrderId()const
{
	return aliyunOrderId_;
}

void ListCompanyRegOrdersRequest::setAliyunOrderId(const std::string& aliyunOrderId)
{
	aliyunOrderId_ = aliyunOrderId;
	setParameter("AliyunOrderId", aliyunOrderId);
}

std::string ListCompanyRegOrdersRequest::getBizSubCode()const
{
	return bizSubCode_;
}

void ListCompanyRegOrdersRequest::setBizSubCode(const std::string& bizSubCode)
{
	bizSubCode_ = bizSubCode;
	setParameter("BizSubCode", bizSubCode);
}

