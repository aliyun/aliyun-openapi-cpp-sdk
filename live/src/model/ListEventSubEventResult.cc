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

#include <alibabacloud/live/model/ListEventSubEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListEventSubEventResult::ListEventSubEventResult() :
	ServiceResult()
{}

ListEventSubEventResult::ListEventSubEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventSubEventResult::~ListEventSubEventResult()
{}

void ListEventSubEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsNode = value["Logs"]["logsItem"];
	for (auto valueLogslogsItem : allLogsNode)
	{
		LogsItem logsObject;
		if(!valueLogslogsItem["AppId"].isNull())
			logsObject.appId = valueLogslogsItem["AppId"].asString();
		if(!valueLogslogsItem["SubId"].isNull())
			logsObject.subId = valueLogslogsItem["SubId"].asString();
		if(!valueLogslogsItem["MessageId"].isNull())
			logsObject.messageId = valueLogslogsItem["MessageId"].asString();
		if(!valueLogslogsItem["Data"].isNull())
			logsObject.data = valueLogslogsItem["Data"].asString();
		if(!valueLogslogsItem["Cost"].isNull())
			logsObject.cost = std::stoi(valueLogslogsItem["Cost"].asString());
		if(!valueLogslogsItem["Time"].isNull())
			logsObject.time = valueLogslogsItem["Time"].asString();
		if(!valueLogslogsItem["Url"].isNull())
			logsObject.url = valueLogslogsItem["Url"].asString();
		if(!valueLogslogsItem["Code"].isNull())
			logsObject.code = std::stoi(valueLogslogsItem["Code"].asString());
		logs_.push_back(logsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());
	if(!value["HasMore"].isNull())
		hasMore_ = value["HasMore"].asString() == "true";

}

bool ListEventSubEventResult::getHasMore()const
{
	return hasMore_;
}

std::vector<ListEventSubEventResult::LogsItem> ListEventSubEventResult::getLogs()const
{
	return logs_;
}

long ListEventSubEventResult::getCount()const
{
	return count_;
}

