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

#include <alibabacloud/companyreg/model/ListCompanyRegConsultationsRequest.h>

using AlibabaCloud::Companyreg::Model::ListCompanyRegConsultationsRequest;

ListCompanyRegConsultationsRequest::ListCompanyRegConsultationsRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "ListCompanyRegConsultations")
{
	setMethod(HttpRequest::Method::Post);
}

ListCompanyRegConsultationsRequest::~ListCompanyRegConsultationsRequest()
{}

long ListCompanyRegConsultationsRequest::getEndGmtCreate()const
{
	return endGmtCreate_;
}

void ListCompanyRegConsultationsRequest::setEndGmtCreate(long endGmtCreate)
{
	endGmtCreate_ = endGmtCreate;
	setParameter("EndGmtCreate", std::to_string(endGmtCreate));
}

std::string ListCompanyRegConsultationsRequest::getCity()const
{
	return city_;
}

void ListCompanyRegConsultationsRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

int ListCompanyRegConsultationsRequest::getPageNum()const
{
	return pageNum_;
}

void ListCompanyRegConsultationsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListCompanyRegConsultationsRequest::getBizCode()const
{
	return bizCode_;
}

void ListCompanyRegConsultationsRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

int ListCompanyRegConsultationsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCompanyRegConsultationsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListCompanyRegConsultationsRequest::getBizId()const
{
	return bizId_;
}

void ListCompanyRegConsultationsRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

long ListCompanyRegConsultationsRequest::getStartGmtCreate()const
{
	return startGmtCreate_;
}

void ListCompanyRegConsultationsRequest::setStartGmtCreate(long startGmtCreate)
{
	startGmtCreate_ = startGmtCreate;
	setParameter("StartGmtCreate", std::to_string(startGmtCreate));
}

