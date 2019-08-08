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
	auto allInstances = value["Instances"]["CallCenterInstance"];
	for (auto value : allInstances)
	{
		CallCenterInstance instancesObject;
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			instancesObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceDescription"].isNull())
			instancesObject.instanceDescription = value["InstanceDescription"].asString();
		if(!value["DomainName"].isNull())
			instancesObject.domainName = value["DomainName"].asString();
		if(!value["ConsoleUrl"].isNull())
			instancesObject.consoleUrl = value["ConsoleUrl"].asString();
		if(!value["StorageBucket"].isNull())
			instancesObject.storageBucket = value["StorageBucket"].asString();
		if(!value["StorageMaxDays"].isNull())
			instancesObject.storageMaxDays = std::stoi(value["StorageMaxDays"].asString());
		if(!value["StorageMaxSize"].isNull())
			instancesObject.storageMaxSize = std::stoi(value["StorageMaxSize"].asString());
		if(!value["MaxOnlineAgents"].isNull())
			instancesObject.maxOnlineAgents = std::stoi(value["MaxOnlineAgents"].asString());
		if(!value["TenantId"].isNull())
			instancesObject.tenantId = value["TenantId"].asString();
		if(!value["DirectoryId"].isNull())
			instancesObject.directoryId = value["DirectoryId"].asString();
		if(!value["Status"].isNull())
			instancesObject.status = value["Status"].asString();
		if(!value["CreatedTime"].isNull())
			instancesObject.createdTime = std::stol(value["CreatedTime"].asString());
		if(!value["Owner"].isNull())
			instancesObject.owner = value["Owner"].asString();
		auto allAdmin = value["Admin"]["User"];
		for (auto value : allAdmin)
		{
			CallCenterInstance::User adminObject;
			if(!value["UserId"].isNull())
				adminObject.userId = value["UserId"].asString();
			if(!value["RamId"].isNull())
				adminObject.ramId = value["RamId"].asString();
			if(!value["InstanceId"].isNull())
				adminObject.instanceId = value["InstanceId"].asString();
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
		auto allPhoneNumbers = value["PhoneNumbers"]["PhoneNumber"];
		for (auto value : allPhoneNumbers)
		{
			CallCenterInstance::PhoneNumber phoneNumbersObject;
			if(!value["PhoneNumberId"].isNull())
				phoneNumbersObject.phoneNumberId = value["PhoneNumberId"].asString();
			if(!value["InstanceId"].isNull())
				phoneNumbersObject.instanceId = value["InstanceId"].asString();
			if(!value["Number"].isNull())
				phoneNumbersObject.number = value["Number"].asString();
			if(!value["PhoneNumberDescription"].isNull())
				phoneNumbersObject.phoneNumberDescription = value["PhoneNumberDescription"].asString();
			if(!value["TestOnly"].isNull())
				phoneNumbersObject.testOnly = value["TestOnly"].asString() == "true";
			if(!value["RemainingTime"].isNull())
				phoneNumbersObject.remainingTime = std::stoi(value["RemainingTime"].asString());
			if(!value["AllowOutbound"].isNull())
				phoneNumbersObject.allowOutbound = value["AllowOutbound"].asString() == "true";
			if(!value["Usage"].isNull())
				phoneNumbersObject.usage = value["Usage"].asString();
			if(!value["Trunks"].isNull())
				phoneNumbersObject.trunks = std::stoi(value["Trunks"].asString());
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

