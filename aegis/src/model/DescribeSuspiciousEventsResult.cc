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

#include <alibabacloud/aegis/model/DescribeSuspiciousEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSuspiciousEventsResult::DescribeSuspiciousEventsResult() :
	ServiceResult()
{}

DescribeSuspiciousEventsResult::DescribeSuspiciousEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspiciousEventsResult::~DescribeSuspiciousEventsResult()
{}

void DescribeSuspiciousEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogListNode = value["LogList"]["LogListItem"];
	for (auto valueLogListLogListItem : allLogListNode)
	{
		LogListItem logListObject;
		if(!valueLogListLogListItem["AliasEventType"].isNull())
			logListObject.aliasEventType = valueLogListLogListItem["AliasEventType"].asString();
		if(!valueLogListLogListItem["LastTime"].isNull())
			logListObject.lastTime = std::stol(valueLogListLogListItem["LastTime"].asString());
		if(!valueLogListLogListItem["Level"].isNull())
			logListObject.level = valueLogListLogListItem["Level"].asString();
		if(!valueLogListLogListItem["InstanceName"].isNull())
			logListObject.instanceName = valueLogListLogListItem["InstanceName"].asString();
		if(!valueLogListLogListItem["GroupId"].isNull())
			logListObject.groupId = std::stol(valueLogListLogListItem["GroupId"].asString());
		if(!valueLogListLogListItem["Ip"].isNull())
			logListObject.ip = valueLogListLogListItem["Ip"].asString();
		if(!valueLogListLogListItem["EventType"].isNull())
			logListObject.eventType = valueLogListLogListItem["EventType"].asString();
		if(!valueLogListLogListItem["Uuid"].isNull())
			logListObject.uuid = valueLogListLogListItem["Uuid"].asString();
		if(!valueLogListLogListItem["FirstTime"].isNull())
			logListObject.firstTime = std::stol(valueLogListLogListItem["FirstTime"].asString());
		if(!valueLogListLogListItem["InstanceId"].isNull())
			logListObject.instanceId = valueLogListLogListItem["InstanceId"].asString();
		if(!valueLogListLogListItem["Tag"].isNull())
			logListObject.tag = valueLogListLogListItem["Tag"].asString();
		if(!valueLogListLogListItem["AliasEventName"].isNull())
			logListObject.aliasEventName = valueLogListLogListItem["AliasEventName"].asString();
		if(!valueLogListLogListItem["OsVersion"].isNull())
			logListObject.osVersion = valueLogListLogListItem["OsVersion"].asString();
		if(!valueLogListLogListItem["ClientIp"].isNull())
			logListObject.clientIp = valueLogListLogListItem["ClientIp"].asString();
		if(!valueLogListLogListItem["EventName"].isNull())
			logListObject.eventName = valueLogListLogListItem["EventName"].asString();
		auto allDetailListNode = allLogListNode["DetailList"]["DetailListItem"];
		for (auto allLogListNodeDetailListDetailListItem : allDetailListNode)
		{
			LogListItem::DetailListItem detailListObject;
			if(!allLogListNodeDetailListDetailListItem["Name"].isNull())
				detailListObject.name = allLogListNodeDetailListDetailListItem["Name"].asString();
			if(!allLogListNodeDetailListDetailListItem["Type"].isNull())
				detailListObject.type = allLogListNodeDetailListDetailListItem["Type"].asString();
			if(!allLogListNodeDetailListDetailListItem["Value"].isNull())
				detailListObject.value = allLogListNodeDetailListDetailListItem["Value"].asString();
			if(!allLogListNodeDetailListDetailListItem["InfoType"].isNull())
				detailListObject.infoType = allLogListNodeDetailListDetailListItem["InfoType"].asString();
			logListObject.detailList.push_back(detailListObject);
		}
		logList_.push_back(logListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

std::vector<DescribeSuspiciousEventsResult::LogListItem> DescribeSuspiciousEventsResult::getLogList()const
{
	return logList_;
}

int DescribeSuspiciousEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSuspiciousEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSuspiciousEventsResult::getCurrentPage()const
{
	return currentPage_;
}

