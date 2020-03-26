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

#include <alibabacloud/ccc/model/CreateInstanceRequest.h>

using AlibabaCloud::CCC::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest()
{}

std::vector<std::string> CreateInstanceRequest::getPhoneNumbers()const
{
	return phoneNumbers_;
}

void CreateInstanceRequest::setPhoneNumbers(const std::vector<std::string>& phoneNumbers)
{
	phoneNumbers_ = phoneNumbers;
	for(int dep1 = 0; dep1!= phoneNumbers.size(); dep1++) {
		setParameter("PhoneNumbers."+ std::to_string(dep1), phoneNumbers.at(dep1));
	}
}

std::vector<std::string> CreateInstanceRequest::getUserObject()const
{
	return userObject_;
}

void CreateInstanceRequest::setUserObject(const std::vector<std::string>& userObject)
{
	userObject_ = userObject;
	for(int dep1 = 0; dep1!= userObject.size(); dep1++) {
		setParameter("UserObject."+ std::to_string(dep1), userObject.at(dep1));
	}
}

std::string CreateInstanceRequest::getDomainName()const
{
	return domainName_;
}

void CreateInstanceRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string CreateInstanceRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void CreateInstanceRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string CreateInstanceRequest::getDescription()const
{
	return description_;
}

void CreateInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int CreateInstanceRequest::getStorageMaxDays()const
{
	return storageMaxDays_;
}

void CreateInstanceRequest::setStorageMaxDays(int storageMaxDays)
{
	storageMaxDays_ = storageMaxDays;
	setParameter("StorageMaxDays", std::to_string(storageMaxDays));
}

std::vector<std::string> CreateInstanceRequest::getAdminRamId()const
{
	return adminRamId_;
}

void CreateInstanceRequest::setAdminRamId(const std::vector<std::string>& adminRamId)
{
	adminRamId_ = adminRamId;
	for(int dep1 = 0; dep1!= adminRamId.size(); dep1++) {
		setParameter("AdminRamId."+ std::to_string(dep1), adminRamId.at(dep1));
	}
}

std::string CreateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateInstanceRequest::getName()const
{
	return name_;
}

void CreateInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int CreateInstanceRequest::getStorageMaxSize()const
{
	return storageMaxSize_;
}

void CreateInstanceRequest::setStorageMaxSize(int storageMaxSize)
{
	storageMaxSize_ = storageMaxSize;
	setParameter("StorageMaxSize", std::to_string(storageMaxSize));
}

std::string CreateInstanceRequest::getDirectoryId()const
{
	return directoryId_;
}

void CreateInstanceRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setParameter("DirectoryId", directoryId);
}

