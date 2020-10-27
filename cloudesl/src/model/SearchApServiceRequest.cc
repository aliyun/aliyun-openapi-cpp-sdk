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

#include <alibabacloud/cloudesl/model/SearchApServiceRequest.h>

using AlibabaCloud::Cloudesl::Model::SearchApServiceRequest;

SearchApServiceRequest::SearchApServiceRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "SearchApService")
{
	setMethod(HttpRequest::Method::Post);
}

SearchApServiceRequest::~SearchApServiceRequest()
{}

std::string SearchApServiceRequest::getApMac()const
{
	return apMac_;
}

void SearchApServiceRequest::setApMac(const std::string& apMac)
{
	apMac_ = apMac;
	setParameter("ApMac", apMac);
}

std::string SearchApServiceRequest::getStoreId()const
{
	return storeId_;
}

void SearchApServiceRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

int SearchApServiceRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchApServiceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int SearchApServiceRequest::getPageSize()const
{
	return pageSize_;
}

void SearchApServiceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

bool SearchApServiceRequest::getActivated()const
{
	return activated_;
}

void SearchApServiceRequest::setActivated(bool activated)
{
	activated_ = activated;
	setParameter("Activated", activated ? "true" : "false");
}

