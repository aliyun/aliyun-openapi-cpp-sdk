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
		auto allAdminNode = allInstancesNode["Admin"]["User"];
		for (auto allInstancesNodeAdminUser : allAdminNode)
		{
			CallCenterInstance::User adminObject;
			if(!allInstancesNodeAdminUser["UserId"].isNull())
				adminObject.userId = allInstancesNodeAdminUser["UserId"].asString();
			if(!allInstancesNodeAdminUser["RamId"].isNull())
				adminObject.ramId = allInstancesNodeAdminUser["RamId"].asString();
			if(!allInstancesNodeAdminUser["InstanceId"].isNull())
				adminObject.instanceId = allInstancesNodeAdminUser["InstanceId"].asString();
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
		auto allPhoneNumbersNode = allInstancesNode["PhoneNumbers"]["PhoneNumber"];
		for (auto allInstancesNodePhoneNumbersPhoneNumber : allPhoneNumbersNode)
		{
			CallCenterInstance::PhoneNumber phoneNumbersObject;
			if(!allInstancesNodePhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
				phoneNumbersObject.phoneNumberId = allInstancesNodePhoneNumbersPhoneNumber["PhoneNumberId"].asString();
			if(!allInstancesNodePhoneNumbersPhoneNumber["InstanceId"].isNull())
				phoneNumbersObject.instanceId = allInstancesNodePhoneNumbersPhoneNumber["InstanceId"].asString();
			if(!allInstancesNodePhoneNumbersPhoneNumber["Number"].isNull())
				phoneNumbersObject.number = allInstancesNodePhoneNumbersPhoneNumber["Number"].asString();
			if(!allInstancesNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
				phoneNumbersObject.phoneNumberDescription = allInstancesNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
			if(!allInstancesNodePhoneNumbersPhoneNumber["TestOnly"].isNull())
				phoneNumbersObject.testOnly = allInstancesNodePhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
			if(!allInstancesNodePhoneNumbersPhoneNumber["RemainingTime"].isNull())
				phoneNumbersObject.remainingTime = std::stoi(allInstancesNodePhoneNumbersPhoneNumber["RemainingTime"].asString());
			if(!allInstancesNodePhoneNumbersPhoneNumber["AllowOutbound"].isNull())
				phoneNumbersObject.allowOutbound = allInstancesNodePhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
			if(!allInstancesNodePhoneNumbersPhoneNumber["Usage"].isNull())
				phoneNumbersObject.usage = allInstancesNodePhoneNumbersPhoneNumber["Usage"].asString();
			if(!allInstancesNodePhoneNumbersPhoneNumber["Trunks"].isNull())
				phoneNumbersObject.trunks = std::stoi(allInstancesNodePhoneNumbersPhoneNumber["Trunks"].asString());
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

