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

#include <alibabacloud/arms/model/SearchAlertContactRequest.h>

using AlibabaCloud::ARMS::Model::SearchAlertContactRequest;

SearchAlertContactRequest::SearchAlertContactRequest() :
	RpcServiceRequest("arms", "2019-08-08", "SearchAlertContact")
{}

SearchAlertContactRequest::~SearchAlertContactRequest()
{}

std::string SearchAlertContactRequest::getContactName()const
{
	return contactName_;
}

void SearchAlertContactRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setCoreParameter("ContactName", contactName);
}

std::string SearchAlertContactRequest::getPhone()const
{
	return phone_;
}

void SearchAlertContactRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setCoreParameter("Phone", phone);
}

std::string SearchAlertContactRequest::getRegionId()const
{
	return regionId_;
}

void SearchAlertContactRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SearchAlertContactRequest::getPageSize()const
{
	return pageSize_;
}

void SearchAlertContactRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string SearchAlertContactRequest::getCurrentPage()const
{
	return currentPage_;
}

void SearchAlertContactRequest::setCurrentPage(const std::string& currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string SearchAlertContactRequest::getEmail()const
{
	return email_;
}

void SearchAlertContactRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", email);
}

