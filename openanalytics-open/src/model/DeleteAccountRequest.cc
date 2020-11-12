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

#include <alibabacloud/openanalytics-open/model/DeleteAccountRequest.h>

using AlibabaCloud::Openanalytics_open::Model::DeleteAccountRequest;

DeleteAccountRequest::DeleteAccountRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "DeleteAccount")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAccountRequest::~DeleteAccountRequest()
{}

std::string DeleteAccountRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string DeleteAccountRequest::getAccountName()const
{
	return accountName_;
}

void DeleteAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

bool DeleteAccountRequest::getIsShort()const
{
	return isShort_;
}

void DeleteAccountRequest::setIsShort(bool isShort)
{
	isShort_ = isShort;
	setBodyParameter("IsShort", isShort ? "true" : "false");
}

bool DeleteAccountRequest::getIsServiceUser()const
{
	return isServiceUser_;
}

void DeleteAccountRequest::setIsServiceUser(bool isServiceUser)
{
	isServiceUser_ = isServiceUser;
	setBodyParameter("IsServiceUser", isServiceUser ? "true" : "false");
}

