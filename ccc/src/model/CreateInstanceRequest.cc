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
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

std::vector<std::string> CreateInstanceRequest::getPhoneNumbers()const
{
	return phoneNumbers_;
}

void CreateInstanceRequest::setPhoneNumbers(const std::vector<std::string>& phoneNumbers)
{
	phoneNumbers_ = phoneNumbers;
	for(int i = 0; i!= phoneNumbers.size(); i++)
		setCoreParameter("PhoneNumbers."+ std::to_string(i), std::to_string(phoneNumbers.at(i)));
}

std::vector<std::string> CreateInstanceRequest::getUserObject()const
{
	return userObject_;
}

void CreateInstanceRequest::setUserObject(const std::vector<std::string>& userObject)
{
	userObject_ = userObject;
	for(int i = 0; i!= userObject.size(); i++)
		setCoreParameter("UserObject."+ std::to_string(i), std::to_string(userObject.at(i)));
}

std::string CreateInstanceRequest::getName()const
{
	return name_;
}

void CreateInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateInstanceRequest::getDomainName()const
{
	return domainName_;
}

void CreateInstanceRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string CreateInstanceRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void CreateInstanceRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setCoreParameter("PhoneNumber", std::to_string(phoneNumber));
}

std::string CreateInstanceRequest::getDescription()const
{
	return description_;
}

void CreateInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

int CreateInstanceRequest::getStorageMaxDays()const
{
	return storageMaxDays_;
}

void CreateInstanceRequest::setStorageMaxDays(int storageMaxDays)
{
	storageMaxDays_ = storageMaxDays;
	setCoreParameter("StorageMaxDays", storageMaxDays);
}

int CreateInstanceRequest::getStorageMaxSize()const
{
	return storageMaxSize_;
}

void CreateInstanceRequest::setStorageMaxSize(int storageMaxSize)
{
	storageMaxSize_ = storageMaxSize;
	setCoreParameter("StorageMaxSize", storageMaxSize);
}

std::string CreateInstanceRequest::getDirectoryId()const
{
	return directoryId_;
}

void CreateInstanceRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setCoreParameter("DirectoryId", std::to_string(directoryId));
}

std::vector<std::string> CreateInstanceRequest::getAdminRamId()const
{
	return adminRamId_;
}

void CreateInstanceRequest::setAdminRamId(const std::vector<std::string>& adminRamId)
{
	adminRamId_ = adminRamId;
	for(int i = 0; i!= adminRamId.size(); i++)
		setCoreParameter("AdminRamId."+ std::to_string(i), std::to_string(adminRamId.at(i)));
}

std::string CreateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

