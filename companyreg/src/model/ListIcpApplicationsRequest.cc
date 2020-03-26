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

#include <alibabacloud/companyreg/model/ListIcpApplicationsRequest.h>

using AlibabaCloud::Companyreg::Model::ListIcpApplicationsRequest;

ListIcpApplicationsRequest::ListIcpApplicationsRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "ListIcpApplications")
{
	setMethod(HttpRequest::Method::Post);
}

ListIcpApplicationsRequest::~ListIcpApplicationsRequest()
{}

std::string ListIcpApplicationsRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void ListIcpApplicationsRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setParameter("IntentionBizId", intentionBizId);
}

int ListIcpApplicationsRequest::getType()const
{
	return type_;
}

void ListIcpApplicationsRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

int ListIcpApplicationsRequest::getApplicationStatus()const
{
	return applicationStatus_;
}

void ListIcpApplicationsRequest::setApplicationStatus(int applicationStatus)
{
	applicationStatus_ = applicationStatus;
	setParameter("ApplicationStatus", std::to_string(applicationStatus));
}

int ListIcpApplicationsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListIcpApplicationsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListIcpApplicationsRequest::getCompanyName()const
{
	return companyName_;
}

void ListIcpApplicationsRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setParameter("CompanyName", companyName);
}

int ListIcpApplicationsRequest::getPageSize()const
{
	return pageSize_;
}

void ListIcpApplicationsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListIcpApplicationsRequest::getSortOrder()const
{
	return sortOrder_;
}

void ListIcpApplicationsRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setParameter("SortOrder", sortOrder);
}

std::string ListIcpApplicationsRequest::getSortField()const
{
	return sortField_;
}

void ListIcpApplicationsRequest::setSortField(const std::string& sortField)
{
	sortField_ = sortField;
	setParameter("SortField", sortField);
}

