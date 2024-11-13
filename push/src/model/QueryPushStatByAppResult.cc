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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppPushStatsNode = value["AppPushStats"]["AppPushStat"];
	for (auto valueAppPushStatsAppPushStat : allAppPushStatsNode)
	{
		AppPushStat appPushStatsObject;
		if(!valueAppPushStatsAppPushStat["AcceptCount"].isNull())
			appPushStatsObject.acceptCount = std::stol(valueAppPushStatsAppPushStat["AcceptCount"].asString());
		if(!valueAppPushStatsAppPushStat["DeletedCount"].isNull())
			appPushStatsObject.deletedCount = std::stol(valueAppPushStatsAppPushStat["DeletedCount"].asString());
		if(!valueAppPushStatsAppPushStat["OpenedCount"].isNull())
			appPushStatsObject.openedCount = std::stol(valueAppPushStatsAppPushStat["OpenedCount"].asString());
		if(!valueAppPushStatsAppPushStat["ReceivedCount"].isNull())
			appPushStatsObject.receivedCount = std::stol(valueAppPushStatsAppPushStat["ReceivedCount"].asString());
		if(!valueAppPushStatsAppPushStat["SentCount"].isNull())
			appPushStatsObject.sentCount = std::stol(valueAppPushStatsAppPushStat["SentCount"].asString());
		if(!valueAppPushStatsAppPushStat["SmsFailedCount"].isNull())
			appPushStatsObject.smsFailedCount = std::stol(valueAppPushStatsAppPushStat["SmsFailedCount"].asString());
		if(!valueAppPushStatsAppPushStat["SmsReceiveFailedCount"].isNull())
			appPushStatsObject.smsReceiveFailedCount = std::stol(valueAppPushStatsAppPushStat["SmsReceiveFailedCount"].asString());
		if(!valueAppPushStatsAppPushStat["SmsReceiveSuccessCount"].isNull())
			appPushStatsObject.smsReceiveSuccessCount = std::stol(valueAppPushStatsAppPushStat["SmsReceiveSuccessCount"].asString());
		if(!valueAppPushStatsAppPushStat["SmsSentCount"].isNull())
			appPushStatsObject.smsSentCount = std::stol(valueAppPushStatsAppPushStat["SmsSentCount"].asString());
		if(!valueAppPushStatsAppPushStat["SmsSkipCount"].isNull())
			appPushStatsObject.smsSkipCount = std::stol(valueAppPushStatsAppPushStat["SmsSkipCount"].asString());
		if(!valueAppPushStatsAppPushStat["Time"].isNull())
			appPushStatsObject.time = valueAppPushStatsAppPushStat["Time"].asString();
		appPushStats_.push_back(appPushStatsObject);
	}

}

std::vector<QueryPushStatByAppResult::AppPushStat> QueryPushStatByAppResult::getAppPushStats()const
{
	return appPushStats_;
}

