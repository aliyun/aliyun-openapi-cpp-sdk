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

#include <alibabacloud/cloudesl/model/CreateStoreRequest.h>

using AlibabaCloud::Cloudesl::Model::CreateStoreRequest;

CreateStoreRequest::CreateStoreRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "CreateStore")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStoreRequest::~CreateStoreRequest()
{}

std::string CreateStoreRequest::getStoreName()const
{
	return storeName_;
}

void CreateStoreRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setParameter("StoreName", storeName);
}

std::string CreateStoreRequest::getParentId()const
{
	return parentId_;
}

void CreateStoreRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string CreateStoreRequest::getCompanyId()const
{
	return companyId_;
}

void CreateStoreRequest::setCompanyId(const std::string& companyId)
{
	companyId_ = companyId;
	setParameter("CompanyId", companyId);
}

std::string CreateStoreRequest::getBrand()const
{
	return brand_;
}

void CreateStoreRequest::setBrand(const std::string& brand)
{
	brand_ = brand;
	setParameter("Brand", brand);
}

std::string CreateStoreRequest::getComments()const
{
	return comments_;
}

void CreateStoreRequest::setComments(const std::string& comments)
{
	comments_ = comments;
	setParameter("Comments", comments);
}

std::string CreateStoreRequest::getGroups()const
{
	return groups_;
}

void CreateStoreRequest::setGroups(const std::string& groups)
{
	groups_ = groups;
	setParameter("Groups", groups);
}

std::string CreateStoreRequest::getPhone()const
{
	return phone_;
}

void CreateStoreRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string CreateStoreRequest::getOutId()const
{
	return outId_;
}

void CreateStoreRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

