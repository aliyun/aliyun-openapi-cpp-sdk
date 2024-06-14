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

#include <alibabacloud/live/model/ListRtcMPUEventSubRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListRtcMPUEventSubRecordResult::ListRtcMPUEventSubRecordResult() :
	ServiceResult()
{}

ListRtcMPUEventSubRecordResult::ListRtcMPUEventSubRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRtcMPUEventSubRecordResult::~ListRtcMPUEventSubRecordResult()
{}

void ListRtcMPUEventSubRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsNode = value["Logs"]["SubInfo"];
	for (auto valueLogsSubInfo : allLogsNode)
	{
		SubInfo logsObject;
		if(!valueLogsSubInfo["AppId"].isNull())
			logsObject.appId = valueLogsSubInfo["AppId"].asString();
		if(!valueLogsSubInfo["SubId"].isNull())
			logsObject.subId = valueLogsSubInfo["SubId"].asString();
		if(!valueLogsSubInfo["MsgId"].isNull())
			logsObject.msgId = valueLogsSubInfo["MsgId"].asString();
		if(!valueLogsSubInfo["Data"].isNull())
			logsObject.data = valueLogsSubInfo["Data"].asString();
		if(!valueLogsSubInfo["Time"].isNull())
			logsObject.time = valueLogsSubInfo["Time"].asString();
		if(!valueLogsSubInfo["Cost"].isNull())
			logsObject.cost = std::stol(valueLogsSubInfo["Cost"].asString());
		if(!valueLogsSubInfo["CallbackUrl"].isNull())
			logsObject.callbackUrl = valueLogsSubInfo["CallbackUrl"].asString();
		if(!valueLogsSubInfo["HTTPCode"].isNull())
			logsObject.hTTPCode = valueLogsSubInfo["HTTPCode"].asString();
		logs_.push_back(logsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());
	if(!value["HasMore"].isNull())
		hasMore_ = value["HasMore"].asString() == "true";

}

bool ListRtcMPUEventSubRecordResult::getHasMore()const
{
	return hasMore_;
}

std::vector<ListRtcMPUEventSubRecordResult::SubInfo> ListRtcMPUEventSubRecordResult::getLogs()const
{
	return logs_;
}

long ListRtcMPUEventSubRecordResult::getCount()const
{
	return count_;
}

