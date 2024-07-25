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

#include <alibabacloud/cams/model/ChatappSyncPhoneNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

ChatappSyncPhoneNumberResult::ChatappSyncPhoneNumberResult() :
	ServiceResult()
{}

ChatappSyncPhoneNumberResult::ChatappSyncPhoneNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ChatappSyncPhoneNumberResult::~ChatappSyncPhoneNumberResult()
{}

void ChatappSyncPhoneNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPhoneNumbersNode = value["PhoneNumbers"]["content"];
	for (auto valuePhoneNumberscontent : allPhoneNumbersNode)
	{
		Content phoneNumbersObject;
		if(!valuePhoneNumberscontent["VerifiedName"].isNull())
			phoneNumbersObject.verifiedName = valuePhoneNumberscontent["VerifiedName"].asString();
		if(!valuePhoneNumberscontent["Status"].isNull())
			phoneNumbersObject.status = valuePhoneNumberscontent["Status"].asString();
		if(!valuePhoneNumberscontent["QualityRating"].isNull())
			phoneNumbersObject.qualityRating = valuePhoneNumberscontent["QualityRating"].asString();
		if(!valuePhoneNumberscontent["CodeVerificationStatus"].isNull())
			phoneNumbersObject.codeVerificationStatus = valuePhoneNumberscontent["CodeVerificationStatus"].asString();
		if(!valuePhoneNumberscontent["NewNameStatus"].isNull())
			phoneNumbersObject.newNameStatus = valuePhoneNumberscontent["NewNameStatus"].asString();
		if(!valuePhoneNumberscontent["PhoneNumber"].isNull())
			phoneNumbersObject.phoneNumber = valuePhoneNumberscontent["PhoneNumber"].asString();
		if(!valuePhoneNumberscontent["StatusQueue"].isNull())
			phoneNumbersObject.statusQueue = valuePhoneNumberscontent["StatusQueue"].asString();
		if(!valuePhoneNumberscontent["UpQueue"].isNull())
			phoneNumbersObject.upQueue = valuePhoneNumberscontent["UpQueue"].asString();
		if(!valuePhoneNumberscontent["NameStatus"].isNull())
			phoneNumbersObject.nameStatus = valuePhoneNumberscontent["NameStatus"].asString();
		if(!valuePhoneNumberscontent["UpCallbackUrl"].isNull())
			phoneNumbersObject.upCallbackUrl = valuePhoneNumberscontent["UpCallbackUrl"].asString();
		if(!valuePhoneNumberscontent["MessagingLimitTier"].isNull())
			phoneNumbersObject.messagingLimitTier = valuePhoneNumberscontent["MessagingLimitTier"].asString();
		if(!valuePhoneNumberscontent["StatusCallbackUrl"].isNull())
			phoneNumbersObject.statusCallbackUrl = valuePhoneNumberscontent["StatusCallbackUrl"].asString();
		phoneNumbers_.push_back(phoneNumbersObject);
	}
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ChatappSyncPhoneNumberResult::Content> ChatappSyncPhoneNumberResult::getPhoneNumbers()const
{
	return phoneNumbers_;
}

std::string ChatappSyncPhoneNumberResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string ChatappSyncPhoneNumberResult::getMessage()const
{
	return message_;
}

std::string ChatappSyncPhoneNumberResult::getCode()const
{
	return code_;
}

bool ChatappSyncPhoneNumberResult::getSuccess()const
{
	return success_;
}

