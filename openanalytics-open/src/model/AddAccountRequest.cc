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

#include <alibabacloud/openanalytics-open/model/AddAccountRequest.h>

using AlibabaCloud::Openanalytics_open::Model::AddAccountRequest;

AddAccountRequest::AddAccountRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "AddAccount")
{
	setMethod(HttpRequest::Method::Post);
}

AddAccountRequest::~AddAccountRequest()
{}

std::string AddAccountRequest::getRamUid()const
{
	return ramUid_;
}

void AddAccountRequest::setRamUid(const std::string& ramUid)
{
	ramUid_ = ramUid;
	setBodyParameter("RamUid", ramUid);
}

bool AddAccountRequest::getIsShort()const
{
	return isShort_;
}

void AddAccountRequest::setIsShort(bool isShort)
{
	isShort_ = isShort;
	setBodyParameter("IsShort", isShort ? "true" : "false");
}

std::string AddAccountRequest::getRemark()const
{
	return remark_;
}

void AddAccountRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setBodyParameter("Remark", remark);
}

std::string AddAccountRequest::getPassword()const
{
	return password_;
}

void AddAccountRequest::setPassword(const std::string& password)
{
	password_ = password;
	setBodyParameter("Password", password);
}

std::string AddAccountRequest::getAccountName()const
{
	return accountName_;
}

void AddAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string AddAccountRequest::getRegionId()const
{
	return regionId_;
}

void AddAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

bool AddAccountRequest::getEnableKMS()const
{
	return enableKMS_;
}

void AddAccountRequest::setEnableKMS(bool enableKMS)
{
	enableKMS_ = enableKMS;
	setBodyParameter("EnableKMS", enableKMS ? "true" : "false");
}

bool AddAccountRequest::getUseRandomPassword()const
{
	return useRandomPassword_;
}

void AddAccountRequest::setUseRandomPassword(bool useRandomPassword)
{
	useRandomPassword_ = useRandomPassword;
	setBodyParameter("UseRandomPassword", useRandomPassword ? "true" : "false");
}

