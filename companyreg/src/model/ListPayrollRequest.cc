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

#include <alibabacloud/companyreg/model/ListPayrollRequest.h>

using AlibabaCloud::Companyreg::Model::ListPayrollRequest;

ListPayrollRequest::ListPayrollRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ListPayroll")
{
	setMethod(HttpRequest::Method::Get);
}

ListPayrollRequest::~ListPayrollRequest()
{}

std::string ListPayrollRequest::getPeriod()const
{
	return period_;
}

void ListPayrollRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string ListPayrollRequest::getBizId()const
{
	return bizId_;
}

void ListPayrollRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int ListPayrollRequest::getPageSize()const
{
	return pageSize_;
}

void ListPayrollRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListPayrollRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListPayrollRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

