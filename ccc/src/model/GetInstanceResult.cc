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

#include <alibabacloud/ccc/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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
	if(!instanceNode["DirectoryId"].isNull())
		instance_.directoryId = instanceNode["DirectoryId"].asString();
	if(!instanceNode["Status"].isNull())
		instance_.status = instanceNode["Status"].asString();
	if(!instanceNode["CreatedTime"].isNull())
		instance_.createdTime = std::stol(instanceNode["CreatedTime"].asString());
	if(!instanceNode["Owner"].isNull())
		instance_.owner = instanceNode["Owner"].asString();
	auto allAdmin = value["Admin"]["User"];
	for (auto value : allAdmin)
	{
		Instance::User userObject;
		if(!value["UserId"].isNull())
			userObject.userId = value["UserId"].asString();
		if(!value["RamId"].isNull())
			userObject.ramId = value["RamId"].asString();
		if(!value["InstanceId"].isNull())
			userObject.instanceId = value["InstanceId"].asString();
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
	auto allPhoneNumbers = value["PhoneNumbers"]["PhoneNumber"];
	for (auto value : allPhoneNumbers)
	{
		Instance::PhoneNumber phoneNumberObject;
		if(!value["PhoneNumberId"].isNull())
			phoneNumberObject.phoneNumberId = value["PhoneNumberId"].asString();
		if(!value["InstanceId"].isNull())
			phoneNumberObject.instanceId = value["InstanceId"].asString();
		if(!value["Number"].isNull())
			phoneNumberObject.number = value["Number"].asString();
		if(!value["PhoneNumberDescription"].isNull())
			phoneNumberObject.phoneNumberDescription = value["PhoneNumberDescription"].asString();
		if(!value["TestOnly"].isNull())
			phoneNumberObject.testOnly = value["TestOnly"].asString() == "true";
		if(!value["RemainingTime"].isNull())
			phoneNumberObject.remainingTime = std::stoi(value["RemainingTime"].asString());
		if(!value["AllowOutbound"].isNull())
			phoneNumberObject.allowOutbound = value["AllowOutbound"].asString() == "true";
		if(!value["Usage"].isNull())
			phoneNumberObject.usage = value["Usage"].asString();
		if(!value["Trunks"].isNull())
			phoneNumberObject.trunks = std::stoi(value["Trunks"].asString());
		instance_.phoneNumbers.push_back(phoneNumberObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetInstanceResult::getMessage()const
{
	return message_;
}

GetInstanceResult::Instance GetInstanceResult::getInstance()const
{
	return instance_;
}

int GetInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetInstanceResult::getCode()const
{
	return code_;
}

bool GetInstanceResult::getSuccess()const
{
	return success_;
}

