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

#include <alibabacloud/openanalytics-open/model/BindingRamUidToDlaAccountRequest.h>

using AlibabaCloud::Openanalytics_open::Model::BindingRamUidToDlaAccountRequest;

BindingRamUidToDlaAccountRequest::BindingRamUidToDlaAccountRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "BindingRamUidToDlaAccount")
{
	setMethod(HttpRequest::Method::Post);
}

BindingRamUidToDlaAccountRequest::~BindingRamUidToDlaAccountRequest()
{}

std::string BindingRamUidToDlaAccountRequest::getRegionId()const
{
	return regionId_;
}

void BindingRamUidToDlaAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string BindingRamUidToDlaAccountRequest::getAccountName()const
{
	return accountName_;
}

void BindingRamUidToDlaAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string BindingRamUidToDlaAccountRequest::getRamUid()const
{
	return ramUid_;
}

void BindingRamUidToDlaAccountRequest::setRamUid(const std::string& ramUid)
{
	ramUid_ = ramUid;
	setBodyParameter("RamUid", ramUid);
}

bool BindingRamUidToDlaAccountRequest::getIsShort()const
{
	return isShort_;
}

void BindingRamUidToDlaAccountRequest::setIsShort(bool isShort)
{
	isShort_ = isShort;
	setBodyParameter("IsShort", isShort ? "true" : "false");
}

bool BindingRamUidToDlaAccountRequest::getIsServiceUser()const
{
	return isServiceUser_;
}

void BindingRamUidToDlaAccountRequest::setIsServiceUser(bool isServiceUser)
{
	isServiceUser_ = isServiceUser;
	setBodyParameter("IsServiceUser", isServiceUser ? "true" : "false");
}

