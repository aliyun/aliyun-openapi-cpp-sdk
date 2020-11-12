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

#include <alibabacloud/openanalytics-open/model/UpdateAccountPasswordRequest.h>

using AlibabaCloud::Openanalytics_open::Model::UpdateAccountPasswordRequest;

UpdateAccountPasswordRequest::UpdateAccountPasswordRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "UpdateAccountPassword")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAccountPasswordRequest::~UpdateAccountPasswordRequest()
{}

bool UpdateAccountPasswordRequest::getIsShort()const
{
	return isShort_;
}

void UpdateAccountPasswordRequest::setIsShort(bool isShort)
{
	isShort_ = isShort;
	setBodyParameter("IsShort", isShort ? "true" : "false");
}

std::string UpdateAccountPasswordRequest::getPassword()const
{
	return password_;
}

void UpdateAccountPasswordRequest::setPassword(const std::string& password)
{
	password_ = password;
	setBodyParameter("Password", password);
}

std::string UpdateAccountPasswordRequest::getAccountName()const
{
	return accountName_;
}

void UpdateAccountPasswordRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string UpdateAccountPasswordRequest::getRegionId()const
{
	return regionId_;
}

void UpdateAccountPasswordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

bool UpdateAccountPasswordRequest::getEnableKMS()const
{
	return enableKMS_;
}

void UpdateAccountPasswordRequest::setEnableKMS(bool enableKMS)
{
	enableKMS_ = enableKMS;
	setBodyParameter("EnableKMS", enableKMS ? "true" : "false");
}

bool UpdateAccountPasswordRequest::getUseRandomPassword()const
{
	return useRandomPassword_;
}

void UpdateAccountPasswordRequest::setUseRandomPassword(bool useRandomPassword)
{
	useRandomPassword_ = useRandomPassword;
	setBodyParameter("UseRandomPassword", useRandomPassword ? "true" : "false");
}

