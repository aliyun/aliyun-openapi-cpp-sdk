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

#include <alibabacloud/ccc/model/ListOutboundPhoneNumberOfUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListOutboundPhoneNumberOfUserResult::ListOutboundPhoneNumberOfUserResult() :
	ServiceResult()
{}

ListOutboundPhoneNumberOfUserResult::ListOutboundPhoneNumberOfUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOutboundPhoneNumberOfUserResult::~ListOutboundPhoneNumberOfUserResult()
{}

void ListOutboundPhoneNumberOfUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOutboundPhoneNumbersNode = value["OutboundPhoneNumbers"]["PhoneNumber"];
	for (auto valueOutboundPhoneNumbersPhoneNumber : allOutboundPhoneNumbersNode)
	{
		PhoneNumber outboundPhoneNumbersObject;
		if(!valueOutboundPhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
			outboundPhoneNumbersObject.phoneNumberId = valueOutboundPhoneNumbersPhoneNumber["PhoneNumberId"].asString();
		if(!valueOutboundPhoneNumbersPhoneNumber["InstanceId"].isNull())
			outboundPhoneNumbersObject.instanceId = valueOutboundPhoneNumbersPhoneNumber["InstanceId"].asString();
		if(!valueOutboundPhoneNumbersPhoneNumber["Number"].isNull())
			outboundPhoneNumbersObject.number = valueOutboundPhoneNumbersPhoneNumber["Number"].asString();
		if(!valueOutboundPhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
			outboundPhoneNumbersObject.phoneNumberDescription = valueOutboundPhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
		if(!valueOutboundPhoneNumbersPhoneNumber["TestOnly"].isNull())
			outboundPhoneNumbersObject.testOnly = valueOutboundPhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
		if(!valueOutboundPhoneNumbersPhoneNumber["RemainingTime"].isNull())
			outboundPhoneNumbersObject.remainingTime = std::stoi(valueOutboundPhoneNumbersPhoneNumber["RemainingTime"].asString());
		if(!valueOutboundPhoneNumbersPhoneNumber["AllowOutbound"].isNull())
			outboundPhoneNumbersObject.allowOutbound = valueOutboundPhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
		if(!valueOutboundPhoneNumbersPhoneNumber["Usage"].isNull())
			outboundPhoneNumbersObject.usage = valueOutboundPhoneNumbersPhoneNumber["Usage"].asString();
		if(!valueOutboundPhoneNumbersPhoneNumber["Trunks"].isNull())
			outboundPhoneNumbersObject.trunks = std::stoi(valueOutboundPhoneNumbersPhoneNumber["Trunks"].asString());
		if(!valueOutboundPhoneNumbersPhoneNumber["City"].isNull())
			outboundPhoneNumbersObject.city = valueOutboundPhoneNumbersPhoneNumber["City"].asString();
		if(!valueOutboundPhoneNumbersPhoneNumber["Province"].isNull())
			outboundPhoneNumbersObject.province = valueOutboundPhoneNumbersPhoneNumber["Province"].asString();
		if(!valueOutboundPhoneNumbersPhoneNumber["PrivateFlag"].isNull())
			outboundPhoneNumbersObject.privateFlag = valueOutboundPhoneNumbersPhoneNumber["PrivateFlag"].asString() == "true";
		if(!valueOutboundPhoneNumbersPhoneNumber["SipTelX"].isNull())
			outboundPhoneNumbersObject.sipTelX = valueOutboundPhoneNumbersPhoneNumber["SipTelX"].asString();
		auto privacyNumberNode = value["PrivacyNumber"];
		if(!privacyNumberNode["PoolId"].isNull())
			outboundPhoneNumbersObject.privacyNumber.poolId = privacyNumberNode["PoolId"].asString();
		if(!privacyNumberNode["Type"].isNull())
			outboundPhoneNumbersObject.privacyNumber.type = privacyNumberNode["Type"].asString();
		if(!privacyNumberNode["TelX"].isNull())
			outboundPhoneNumbersObject.privacyNumber.telX = privacyNumberNode["TelX"].asString();
		if(!privacyNumberNode["PoolName"].isNull())
			outboundPhoneNumbersObject.privacyNumber.poolName = privacyNumberNode["PoolName"].asString();
		if(!privacyNumberNode["PhoneNumber"].isNull())
			outboundPhoneNumbersObject.privacyNumber.phoneNumber = privacyNumberNode["PhoneNumber"].asString();
		if(!privacyNumberNode["Extra"].isNull())
			outboundPhoneNumbersObject.privacyNumber.extra = privacyNumberNode["Extra"].asString();
		if(!privacyNumberNode["BizId"].isNull())
			outboundPhoneNumbersObject.privacyNumber.bizId = privacyNumberNode["BizId"].asString();
		if(!privacyNumberNode["SubId"].isNull())
			outboundPhoneNumbersObject.privacyNumber.subId = privacyNumberNode["SubId"].asString();
		if(!privacyNumberNode["RegionNameCity"].isNull())
			outboundPhoneNumbersObject.privacyNumber.regionNameCity = privacyNumberNode["RegionNameCity"].asString();
		outboundPhoneNumbers_.push_back(outboundPhoneNumbersObject);
	}
	auto allNumberList = value["NumberList"]["Number"];
	for (const auto &item : allNumberList)
		numberList_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListOutboundPhoneNumberOfUserResult::getMessage()const
{
	return message_;
}

int ListOutboundPhoneNumberOfUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> ListOutboundPhoneNumberOfUserResult::getNumberList()const
{
	return numberList_;
}

std::vector<ListOutboundPhoneNumberOfUserResult::PhoneNumber> ListOutboundPhoneNumberOfUserResult::getOutboundPhoneNumbers()const
{
	return outboundPhoneNumbers_;
}

std::string ListOutboundPhoneNumberOfUserResult::getCode()const
{
	return code_;
}

bool ListOutboundPhoneNumberOfUserResult::getSuccess()const
{
	return success_;
}

