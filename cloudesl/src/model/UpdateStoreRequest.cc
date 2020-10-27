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

#include <alibabacloud/cloudesl/model/UpdateStoreRequest.h>

using AlibabaCloud::Cloudesl::Model::UpdateStoreRequest;

UpdateStoreRequest::UpdateStoreRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "UpdateStore")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateStoreRequest::~UpdateStoreRequest()
{}

std::string UpdateStoreRequest::getComments()const
{
	return comments_;
}

void UpdateStoreRequest::setComments(const std::string& comments)
{
	comments_ = comments;
	setParameter("Comments", comments);
}

std::string UpdateStoreRequest::getStoreName()const
{
	return storeName_;
}

void UpdateStoreRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setParameter("StoreName", storeName);
}

std::string UpdateStoreRequest::getGroups()const
{
	return groups_;
}

void UpdateStoreRequest::setGroups(const std::string& groups)
{
	groups_ = groups;
	setParameter("Groups", groups);
}

std::string UpdateStoreRequest::getStoreId()const
{
	return storeId_;
}

void UpdateStoreRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::string UpdateStoreRequest::getPhone()const
{
	return phone_;
}

void UpdateStoreRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string UpdateStoreRequest::getOutId()const
{
	return outId_;
}

void UpdateStoreRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

std::string UpdateStoreRequest::getBrand()const
{
	return brand_;
}

void UpdateStoreRequest::setBrand(const std::string& brand)
{
	brand_ = brand;
	setParameter("Brand", brand);
}

