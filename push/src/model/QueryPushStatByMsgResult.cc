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

#include <alibabacloud/push/model/QueryPushStatByMsgResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryPushStatByMsgResult::QueryPushStatByMsgResult() :
	ServiceResult()
{}

QueryPushStatByMsgResult::QueryPushStatByMsgResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPushStatByMsgResult::~QueryPushStatByMsgResult()
{}

void QueryPushStatByMsgResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPushStatsNode = value["PushStats"]["PushStat"];
	for (auto valuePushStatsPushStat : allPushStatsNode)
	{
		PushStat pushStatsObject;
		if(!valuePushStatsPushStat["AcceptCount"].isNull())
			pushStatsObject.acceptCount = std::stol(valuePushStatsPushStat["AcceptCount"].asString());
		if(!valuePushStatsPushStat["DeletedCount"].isNull())
			pushStatsObject.deletedCount = std::stol(valuePushStatsPushStat["DeletedCount"].asString());
		if(!valuePushStatsPushStat["MessageId"].isNull())
			pushStatsObject.messageId = valuePushStatsPushStat["MessageId"].asString();
		if(!valuePushStatsPushStat["OpenedCount"].isNull())
			pushStatsObject.openedCount = std::stol(valuePushStatsPushStat["OpenedCount"].asString());
		if(!valuePushStatsPushStat["ReceivedCount"].isNull())
			pushStatsObject.receivedCount = std::stol(valuePushStatsPushStat["ReceivedCount"].asString());
		if(!valuePushStatsPushStat["SentCount"].isNull())
			pushStatsObject.sentCount = std::stol(valuePushStatsPushStat["SentCount"].asString());
		if(!valuePushStatsPushStat["SmsFailedCount"].isNull())
			pushStatsObject.smsFailedCount = std::stol(valuePushStatsPushStat["SmsFailedCount"].asString());
		if(!valuePushStatsPushStat["SmsReceiveFailedCount"].isNull())
			pushStatsObject.smsReceiveFailedCount = std::stol(valuePushStatsPushStat["SmsReceiveFailedCount"].asString());
		if(!valuePushStatsPushStat["SmsReceiveSuccessCount"].isNull())
			pushStatsObject.smsReceiveSuccessCount = std::stol(valuePushStatsPushStat["SmsReceiveSuccessCount"].asString());
		if(!valuePushStatsPushStat["SmsSentCount"].isNull())
			pushStatsObject.smsSentCount = std::stol(valuePushStatsPushStat["SmsSentCount"].asString());
		if(!valuePushStatsPushStat["SmsSkipCount"].isNull())
			pushStatsObject.smsSkipCount = std::stol(valuePushStatsPushStat["SmsSkipCount"].asString());
		pushStats_.push_back(pushStatsObject);
	}

}

std::vector<QueryPushStatByMsgResult::PushStat> QueryPushStatByMsgResult::getPushStats()const
{
	return pushStats_;
}

