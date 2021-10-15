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
	RpcServiceRequest("cloudesl", "2020-02-01", "UpdateStore")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateStoreRequest::~UpdateStoreRequest()
{}

std::string UpdateStoreRequest::getExtraParams()const
{
	return extraParams_;
}

void UpdateStoreRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string UpdateStoreRequest::getTimezone()const
{
	return timezone_;
}

void UpdateStoreRequest::setTimezone(const std::string& timezone)
{
	timezone_ = timezone;
	setBodyParameter("Timezone", timezone);
}

std::string UpdateStoreRequest::getStoreName()const
{
	return storeName_;
}

void UpdateStoreRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setBodyParameter("StoreName", storeName);
}

std::string UpdateStoreRequest::getStoreId()const
{
	return storeId_;
}

void UpdateStoreRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string UpdateStoreRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void UpdateStoreRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string UpdateStoreRequest::getUserStoreCode()const
{
	return userStoreCode_;
}

void UpdateStoreRequest::setUserStoreCode(const std::string& userStoreCode)
{
	userStoreCode_ = userStoreCode;
	setBodyParameter("UserStoreCode", userStoreCode);
}

std::string UpdateStoreRequest::getPhone()const
{
	return phone_;
}

void UpdateStoreRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setBodyParameter("Phone", phone);
}

