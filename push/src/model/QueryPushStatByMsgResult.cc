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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allPushStats = value["PushStats"]["PushStat"];
	for (auto value : allPushStats)
	{
		PushStat pushStatsObject;
		if(!value["MessageId"].isNull())
			pushStatsObject.messageId = value["MessageId"].asString();
		if(!value["AcceptCount"].isNull())
			pushStatsObject.acceptCount = std::stol(value["AcceptCount"].asString());
		if(!value["SentCount"].isNull())
			pushStatsObject.sentCount = std::stol(value["SentCount"].asString());
		if(!value["ReceivedCount"].isNull())
			pushStatsObject.receivedCount = std::stol(value["ReceivedCount"].asString());
		if(!value["OpenedCount"].isNull())
			pushStatsObject.openedCount = std::stol(value["OpenedCount"].asString());
		if(!value["DeletedCount"].isNull())
			pushStatsObject.deletedCount = std::stol(value["DeletedCount"].asString());
		if(!value["SmsSentCount"].isNull())
			pushStatsObject.smsSentCount = std::stol(value["SmsSentCount"].asString());
		if(!value["SmsSkipCount"].isNull())
			pushStatsObject.smsSkipCount = std::stol(value["SmsSkipCount"].asString());
		if(!value["SmsFailedCount"].isNull())
			pushStatsObject.smsFailedCount = std::stol(value["SmsFailedCount"].asString());
		if(!value["SmsReceiveSuccessCount"].isNull())
			pushStatsObject.smsReceiveSuccessCount = std::stol(value["SmsReceiveSuccessCount"].asString());
		if(!value["SmsReceiveFailedCount"].isNull())
			pushStatsObject.smsReceiveFailedCount = std::stol(value["SmsReceiveFailedCount"].asString());
		pushStats_.push_back(pushStatsObject);
	}

}

std::vector<QueryPushStatByMsgResult::PushStat> QueryPushStatByMsgResult::getPushStats()const
{
	return pushStats_;
}

