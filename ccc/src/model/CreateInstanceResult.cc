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

#include <alibabacloud/ccc/model/CreateInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CreateInstanceResult::CreateInstanceResult() :
	ServiceResult()
{}

CreateInstanceResult::CreateInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateInstanceResult::~CreateInstanceResult()
{}

void CreateInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["InstanceDescription"].isNull())
		instance_.instanceDescription = instanceNode["InstanceDescription"].asString();
	if(!instanceNode["DomainName"].isNull())
		instance_.domainName = instanceNode["DomainName"].asString();
	if(!instanceNode["ConsoleUrl"].isNull())
		instance_.consoleUrl = instanceNode["ConsoleUrl"].asString();
	if(!instanceNode["StorageBucket"].isNull())
		instance_.storageBucket = instanceNode["StorageBucket"].asString();
	if(!instanceNode["StorageMaxDays"].isNull())
		instance_.storageMaxDays = std::stoi(instanceNode["StorageMaxDays"].asString());
	if(!instanceNode["StorageMaxSize"].isNull())
		instance_.storageMaxSize = std::stoi(instanceNode["StorageMaxSize"].asString());
	if(!instanceNode["MaxOnlineAgents"].isNull())
		instance_.maxOnlineAgents = std::stoi(instanceNode["MaxOnlineAgents"].asString());
	if(!instanceNode["TenantId"].isNull())
		instance_.tenantId = instanceNode["TenantId"].asString();
	if(!instanceNode["Status"].isNull())
		instance_.status = instanceNode["Status"].asString();
	if(!instanceNode["DirectoryId"].isNull())
		instance_.directoryId = instanceNode["DirectoryId"].asString();
	if(!instanceNode["CreatedTime"].isNull())
		instance_.createdTime = std::stol(instanceNode["CreatedTime"].asString());
	if(!instanceNode["Owner"].isNull())
		instance_.owner = instanceNode["Owner"].asString();
	auto allAdminNode = instanceNode["Admin"]["User"];
	for (auto instanceNodeAdminUser : allAdminNode)
	{
		Instance::User userObject;
		if(!instanceNodeAdminUser["UserId"].isNull())
			userObject.userId = instanceNodeAdminUser["UserId"].asString();
		if(!instanceNodeAdminUser["RamId"].isNull())
			userObject.ramId = instanceNodeAdminUser["RamId"].asString();
		if(!instanceNodeAdminUser["InstanceId"].isNull())
			userObject.instanceId = instanceNodeAdminUser["InstanceId"].asString();
		auto detailNode = value["Detail"];
		if(!detailNode["LoginName"].isNull())
			userObject.detail.loginName = detailNode["LoginName"].asString();
		if(!detailNode["DisplayName"].isNull())
			userObject.detail.displayName = detailNode["DisplayName"].asString();
		if(!detailNode["Phone"].isNull())
			userObject.detail.phone = detailNode["Phone"].asString();
		if(!detailNode["Email"].isNull())
			userObject.detail.email = detailNode["Email"].asString();
		if(!detailNode["Department"].isNull())
			userObject.detail.department = detailNode["Department"].asString();
		instance_.admin.push_back(userObject);
	}
	auto allPhoneNumbersNode = instanceNode["PhoneNumbers"]["PhoneNumber"];
	for (auto instanceNodePhoneNumbersPhoneNumber : allPhoneNumbersNode)
	{
		Instance::PhoneNumber phoneNumberObject;
		if(!instanceNodePhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
			phoneNumberObject.phoneNumberId = instanceNodePhoneNumbersPhoneNumber["PhoneNumberId"].asString();
		if(!instanceNodePhoneNumbersPhoneNumber["InstanceId"].isNull())
			phoneNumberObject.instanceId = instanceNodePhoneNumbersPhoneNumber["InstanceId"].asString();
		if(!instanceNodePhoneNumbersPhoneNumber["Number"].isNull())
			phoneNumberObject.number = instanceNodePhoneNumbersPhoneNumber["Number"].asString();
		if(!instanceNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
			phoneNumberObject.phoneNumberDescription = instanceNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
		if(!instanceNodePhoneNumbersPhoneNumber["TestOnly"].isNull())
			phoneNumberObject.testOnly = instanceNodePhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
		if(!instanceNodePhoneNumbersPhoneNumber["RemainingTime"].isNull())
			phoneNumberObject.remainingTime = std::stoi(instanceNodePhoneNumbersPhoneNumber["RemainingTime"].asString());
		if(!instanceNodePhoneNumbersPhoneNumber["AllowOutbound"].isNull())
			phoneNumberObject.allowOutbound = instanceNodePhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
		if(!instanceNodePhoneNumbersPhoneNumber["Usage"].isNull())
			phoneNumberObject.usage = instanceNodePhoneNumbersPhoneNumber["Usage"].asString();
		if(!instanceNodePhoneNumbersPhoneNumber["Trunks"].isNull())
			phoneNumberObject.trunks = std::stoi(instanceNodePhoneNumbersPhoneNumber["Trunks"].asString());
		instance_.phoneNumbers.push_back(phoneNumberObject);
	}
		auto allSuccessPhoneNumbers = instanceNode["SuccessPhoneNumbers"]["SuccessPhoneNumber"];
		for (auto value : allSuccessPhoneNumbers)
			instance_.successPhoneNumbers.push_back(value.asString());
		auto allFailPhoneNumbers = instanceNode["FailPhoneNumbers"]["FailPhoneNumber"];
		for (auto value : allFailPhoneNumbers)
			instance_.failPhoneNumbers.push_back(value.asString());
		auto allSuccessLoginNames = instanceNode["SuccessLoginNames"]["SuccessLoginName"];
		for (auto value : allSuccessLoginNames)
			instance_.successLoginNames.push_back(value.asString());
		auto allFailLoginNames = instanceNode["FailLoginNames"]["FailLoginName"];
		for (auto value : allFailLoginNames)
			instance_.failLoginNames.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateInstanceResult::getMessage()const
{
	return message_;
}

CreateInstanceResult::Instance CreateInstanceResult::getInstance()const
{
	return instance_;
}

int CreateInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateInstanceResult::getCode()const
{
	return code_;
}

bool CreateInstanceResult::getSuccess()const
{
	return success_;
}

