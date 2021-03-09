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

#include <alibabacloud/ccc/model/ListInstancesOfUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListInstancesOfUserResult::ListInstancesOfUserResult() :
	ServiceResult()
{}

ListInstancesOfUserResult::ListInstancesOfUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesOfUserResult::~ListInstancesOfUserResult()
{}

void ListInstancesOfUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["CallCenterInstance"];
	for (auto valueInstancesCallCenterInstance : allInstancesNode)
	{
		CallCenterInstance instancesObject;
		if(!valueInstancesCallCenterInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesCallCenterInstance["InstanceId"].asString();
		if(!valueInstancesCallCenterInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesCallCenterInstance["InstanceName"].asString();
		if(!valueInstancesCallCenterInstance["InstanceDescription"].isNull())
			instancesObject.instanceDescription = valueInstancesCallCenterInstance["InstanceDescription"].asString();
		if(!valueInstancesCallCenterInstance["DomainName"].isNull())
			instancesObject.domainName = valueInstancesCallCenterInstance["DomainName"].asString();
		if(!valueInstancesCallCenterInstance["ConsoleUrl"].isNull())
			instancesObject.consoleUrl = valueInstancesCallCenterInstance["ConsoleUrl"].asString();
		if(!valueInstancesCallCenterInstance["StorageBucket"].isNull())
			instancesObject.storageBucket = valueInstancesCallCenterInstance["StorageBucket"].asString();
		if(!valueInstancesCallCenterInstance["StorageMaxDays"].isNull())
			instancesObject.storageMaxDays = std::stoi(valueInstancesCallCenterInstance["StorageMaxDays"].asString());
		if(!valueInstancesCallCenterInstance["StorageMaxSize"].isNull())
			instancesObject.storageMaxSize = std::stoi(valueInstancesCallCenterInstance["StorageMaxSize"].asString());
		if(!valueInstancesCallCenterInstance["MaxOnlineAgents"].isNull())
			instancesObject.maxOnlineAgents = std::stoi(valueInstancesCallCenterInstance["MaxOnlineAgents"].asString());
		if(!valueInstancesCallCenterInstance["TenantId"].isNull())
			instancesObject.tenantId = valueInstancesCallCenterInstance["TenantId"].asString();
		if(!valueInstancesCallCenterInstance["DirectoryId"].isNull())
			instancesObject.directoryId = valueInstancesCallCenterInstance["DirectoryId"].asString();
		if(!valueInstancesCallCenterInstance["Status"].isNull())
			instancesObject.status = valueInstancesCallCenterInstance["Status"].asString();
		if(!valueInstancesCallCenterInstance["CreatedTime"].isNull())
			instancesObject.createdTime = std::stol(valueInstancesCallCenterInstance["CreatedTime"].asString());
		if(!valueInstancesCallCenterInstance["Owner"].isNull())
			instancesObject.owner = valueInstancesCallCenterInstance["Owner"].asString();
		auto allAdminNode = valueInstancesCallCenterInstance["Admin"]["User"];
		for (auto valueInstancesCallCenterInstanceAdminUser : allAdminNode)
		{
			CallCenterInstance::User adminObject;
			if(!valueInstancesCallCenterInstanceAdminUser["UserId"].isNull())
				adminObject.userId = valueInstancesCallCenterInstanceAdminUser["UserId"].asString();
			if(!valueInstancesCallCenterInstanceAdminUser["RamId"].isNull())
				adminObject.ramId = valueInstancesCallCenterInstanceAdminUser["RamId"].asString();
			if(!valueInstancesCallCenterInstanceAdminUser["InstanceId"].isNull())
				adminObject.instanceId = valueInstancesCallCenterInstanceAdminUser["InstanceId"].asString();
			auto detailNode = value["Detail"];
			if(!detailNode["LoginName"].isNull())
				adminObject.detail.loginName = detailNode["LoginName"].asString();
			if(!detailNode["DisplayName"].isNull())
				adminObject.detail.displayName = detailNode["DisplayName"].asString();
			if(!detailNode["Phone"].isNull())
				adminObject.detail.phone = detailNode["Phone"].asString();
			if(!detailNode["Email"].isNull())
				adminObject.detail.email = detailNode["Email"].asString();
			if(!detailNode["Department"].isNull())
				adminObject.detail.department = detailNode["Department"].asString();
			instancesObject.admin.push_back(adminObject);
		}
		auto allPhoneNumbersNode = valueInstancesCallCenterInstance["PhoneNumbers"]["PhoneNumber"];
		for (auto valueInstancesCallCenterInstancePhoneNumbersPhoneNumber : allPhoneNumbersNode)
		{
			CallCenterInstance::PhoneNumber phoneNumbersObject;
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
				phoneNumbersObject.phoneNumberId = valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["PhoneNumberId"].asString();
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["InstanceId"].isNull())
				phoneNumbersObject.instanceId = valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["InstanceId"].asString();
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["Number"].isNull())
				phoneNumbersObject.number = valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["Number"].asString();
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
				phoneNumbersObject.phoneNumberDescription = valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["TestOnly"].isNull())
				phoneNumbersObject.testOnly = valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["RemainingTime"].isNull())
				phoneNumbersObject.remainingTime = std::stoi(valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["RemainingTime"].asString());
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["AllowOutbound"].isNull())
				phoneNumbersObject.allowOutbound = valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["Usage"].isNull())
				phoneNumbersObject.usage = valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["Usage"].asString();
			if(!valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["Trunks"].isNull())
				phoneNumbersObject.trunks = std::stoi(valueInstancesCallCenterInstancePhoneNumbersPhoneNumber["Trunks"].asString());
			instancesObject.phoneNumbers.push_back(phoneNumbersObject);
		}
		instances_.push_back(instancesObject);
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

std::vector<ListInstancesOfUserResult::CallCenterInstance> ListInstancesOfUserResult::getInstances()const
{
	return instances_;
}

std::string ListInstancesOfUserResult::getMessage()const
{
	return message_;
}

int ListInstancesOfUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListInstancesOfUserResult::getCode()const
{
	return code_;
}

bool ListInstancesOfUserResult::getSuccess()const
{
	return success_;
}

