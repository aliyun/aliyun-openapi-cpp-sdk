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

#include <alibabacloud/cams/model/QueryChatappPhoneNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

QueryChatappPhoneNumbersResult::QueryChatappPhoneNumbersResult() :
	ServiceResult()
{}

QueryChatappPhoneNumbersResult::QueryChatappPhoneNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryChatappPhoneNumbersResult::~QueryChatappPhoneNumbersResult()
{}

void QueryChatappPhoneNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPhoneNumbersNode = value["PhoneNumbers"]["phoneNumbersItem"];
	for (auto valuePhoneNumbersphoneNumbersItem : allPhoneNumbersNode)
	{
		PhoneNumbersItem phoneNumbersObject;
		if(!valuePhoneNumbersphoneNumbersItem["UpQueue"].isNull())
			phoneNumbersObject.upQueue = valuePhoneNumbersphoneNumbersItem["UpQueue"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["PhoneNumber"].isNull())
			phoneNumbersObject.phoneNumber = valuePhoneNumbersphoneNumbersItem["PhoneNumber"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["StatusQueue"].isNull())
			phoneNumbersObject.statusQueue = valuePhoneNumbersphoneNumbersItem["StatusQueue"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["VerifiedName"].isNull())
			phoneNumbersObject.verifiedName = valuePhoneNumbersphoneNumbersItem["VerifiedName"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["StatusCallbackUrl"].isNull())
			phoneNumbersObject.statusCallbackUrl = valuePhoneNumbersphoneNumbersItem["StatusCallbackUrl"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["UpCallbackUrl"].isNull())
			phoneNumbersObject.upCallbackUrl = valuePhoneNumbersphoneNumbersItem["UpCallbackUrl"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["QualityRating"].isNull())
			phoneNumbersObject.qualityRating = valuePhoneNumbersphoneNumbersItem["QualityRating"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["Status"].isNull())
			phoneNumbersObject.status = valuePhoneNumbersphoneNumbersItem["Status"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["CodeVerificationStatus"].isNull())
			phoneNumbersObject.codeVerificationStatus = valuePhoneNumbersphoneNumbersItem["CodeVerificationStatus"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["NameStatus"].isNull())
			phoneNumbersObject.nameStatus = valuePhoneNumbersphoneNumbersItem["NameStatus"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["MessagingLimitTier"].isNull())
			phoneNumbersObject.messagingLimitTier = valuePhoneNumbersphoneNumbersItem["MessagingLimitTier"].asString();
		if(!valuePhoneNumbersphoneNumbersItem["NewNameStatus"].isNull())
			phoneNumbersObject.newNameStatus = valuePhoneNumbersphoneNumbersItem["NewNameStatus"].asString();
		phoneNumbers_.push_back(phoneNumbersObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::vector<QueryChatappPhoneNumbersResult::PhoneNumbersItem> QueryChatappPhoneNumbersResult::getPhoneNumbers()const
{
	return phoneNumbers_;
}

std::string QueryChatappPhoneNumbersResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string QueryChatappPhoneNumbersResult::getMessage()const
{
	return message_;
}

std::string QueryChatappPhoneNumbersResult::getCode()const
{
	return code_;
}

