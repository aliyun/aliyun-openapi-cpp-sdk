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
	RpcServiceRequest("cloudesl", "2020-02-01", "CreateStore")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStoreRequest::~CreateStoreRequest()
{}

std::string CreateStoreRequest::getExtraParams()const
{
	return extraParams_;
}

void CreateStoreRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string CreateStoreRequest::getClientToken()const
{
	return clientToken_;
}

void CreateStoreRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateStoreRequest::getTimeZone()const
{
	return timeZone_;
}

void CreateStoreRequest::setTimeZone(const std::string& timeZone)
{
	timeZone_ = timeZone;
	setBodyParameter("TimeZone", timeZone);
}

std::string CreateStoreRequest::getStoreName()const
{
	return storeName_;
}

void CreateStoreRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setBodyParameter("StoreName", storeName);
}

std::string CreateStoreRequest::getParentId()const
{
	return parentId_;
}

void CreateStoreRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setBodyParameter("ParentId", parentId);
}

std::string CreateStoreRequest::getUserStoreCode()const
{
	return userStoreCode_;
}

void CreateStoreRequest::setUserStoreCode(const std::string& userStoreCode)
{
	userStoreCode_ = userStoreCode;
	setBodyParameter("UserStoreCode", userStoreCode);
}

std::string CreateStoreRequest::getPhone()const
{
	return phone_;
}

void CreateStoreRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setBodyParameter("Phone", phone);
}

