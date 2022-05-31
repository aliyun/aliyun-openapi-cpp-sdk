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

#include <alibabacloud/cloudesl/model/DescribeStoreConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeStoreConfigResult::DescribeStoreConfigResult() :
	ServiceResult()
{}

DescribeStoreConfigResult::DescribeStoreConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStoreConfigResult::~DescribeStoreConfigResult()
{}

void DescribeStoreConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto storeConfigInfoNode = value["StoreConfigInfo"];
	if(!storeConfigInfoNode["StoreId"].isNull())
		storeConfigInfo_.storeId = storeConfigInfoNode["StoreId"].asString();
	if(!storeConfigInfoNode["EnableNotification"].isNull())
		storeConfigInfo_.enableNotification = storeConfigInfoNode["EnableNotification"].asString() == "true";
	if(!storeConfigInfoNode["NotificationWebHook"].isNull())
		storeConfigInfo_.notificationWebHook = storeConfigInfoNode["NotificationWebHook"].asString();
	if(!storeConfigInfoNode["NotificationSilentTimes"].isNull())
		storeConfigInfo_.notificationSilentTimes = storeConfigInfoNode["NotificationSilentTimes"].asString();
	auto allSubscribeContentsNode = storeConfigInfoNode["SubscribeContents"]["subscribeContent"];
	for (auto storeConfigInfoNodeSubscribeContentssubscribeContent : allSubscribeContentsNode)
	{
		StoreConfigInfo::SubscribeContent subscribeContentObject;
		if(!storeConfigInfoNodeSubscribeContentssubscribeContent["Category"].isNull())
			subscribeContentObject.category = storeConfigInfoNodeSubscribeContentssubscribeContent["Category"].asString();
		if(!storeConfigInfoNodeSubscribeContentssubscribeContent["Enable"].isNull())
			subscribeContentObject.enable = storeConfigInfoNodeSubscribeContentssubscribeContent["Enable"].asString() == "true";
		if(!storeConfigInfoNodeSubscribeContentssubscribeContent["Threshold"].isNull())
			subscribeContentObject.threshold = storeConfigInfoNodeSubscribeContentssubscribeContent["Threshold"].asString();
		if(!storeConfigInfoNodeSubscribeContentssubscribeContent["AtAll"].isNull())
			subscribeContentObject.atAll = storeConfigInfoNodeSubscribeContentssubscribeContent["AtAll"].asString() == "true";
		if(!storeConfigInfoNodeSubscribeContentssubscribeContent["AtMobileList"].isNull())
			subscribeContentObject.atMobileList = storeConfigInfoNodeSubscribeContentssubscribeContent["AtMobileList"].asString();
		storeConfigInfo_.subscribeContents.push_back(subscribeContentObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

DescribeStoreConfigResult::StoreConfigInfo DescribeStoreConfigResult::getStoreConfigInfo()const
{
	return storeConfigInfo_;
}

std::string DescribeStoreConfigResult::getMessage()const
{
	return message_;
}

std::string DescribeStoreConfigResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeStoreConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeStoreConfigResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeStoreConfigResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeStoreConfigResult::getCode()const
{
	return code_;
}

bool DescribeStoreConfigResult::getSuccess()const
{
	return success_;
}

