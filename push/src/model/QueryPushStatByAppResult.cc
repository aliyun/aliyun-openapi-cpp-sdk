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

#include <alibabacloud/push/model/QueryPushStatByAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryPushStatByAppResult::QueryPushStatByAppResult() :
	ServiceResult()
{}

QueryPushStatByAppResult::QueryPushStatByAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPushStatByAppResult::~QueryPushStatByAppResult()
{}

void QueryPushStatByAppResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAppPushStats = value["AppPushStats"]["AppPushStat"];
	for (auto value : allAppPushStats)
	{
		AppPushStat appPushStatsObject;
		if(!value["Time"].isNull())
			appPushStatsObject.time = value["Time"].asString();
		if(!value["AcceptCount"].isNull())
			appPushStatsObject.acceptCount = std::stol(value["AcceptCount"].asString());
		if(!value["SentCount"].isNull())
			appPushStatsObject.sentCount = std::stol(value["SentCount"].asString());
		if(!value["ReceivedCount"].isNull())
			appPushStatsObject.receivedCount = std::stol(value["ReceivedCount"].asString());
		if(!value["OpenedCount"].isNull())
			appPushStatsObject.openedCount = std::stol(value["OpenedCount"].asString());
		if(!value["DeletedCount"].isNull())
			appPushStatsObject.deletedCount = std::stol(value["DeletedCount"].asString());
		if(!value["SmsSentCount"].isNull())
			appPushStatsObject.smsSentCount = std::stol(value["SmsSentCount"].asString());
		if(!value["SmsSkipCount"].isNull())
			appPushStatsObject.smsSkipCount = std::stol(value["SmsSkipCount"].asString());
		if(!value["SmsFailedCount"].isNull())
			appPushStatsObject.smsFailedCount = std::stol(value["SmsFailedCount"].asString());
		if(!value["SmsReceiveSuccessCount"].isNull())
			appPushStatsObject.smsReceiveSuccessCount = std::stol(value["SmsReceiveSuccessCount"].asString());
		if(!value["SmsReceiveFailedCount"].isNull())
			appPushStatsObject.smsReceiveFailedCount = std::stol(value["SmsReceiveFailedCount"].asString());
		appPushStats_.push_back(appPushStatsObject);
	}

}

std::vector<QueryPushStatByAppResult::AppPushStat> QueryPushStatByAppResult::getAppPushStats()const
{
	return appPushStats_;
}

