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
	auto allLogList = value["LogList"]["LogListItem"];
	for (auto value : allLogList)
	{
		LogListItem logListObject;
		if(!value["AliasEventType"].isNull())
			logListObject.aliasEventType = value["AliasEventType"].asString();
		if(!value["LastTime"].isNull())
			logListObject.lastTime = std::stol(value["LastTime"].asString());
		if(!value["Level"].isNull())
			logListObject.level = value["Level"].asString();
		if(!value["InstanceName"].isNull())
			logListObject.instanceName = value["InstanceName"].asString();
		if(!value["GroupId"].isNull())
			logListObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Ip"].isNull())
			logListObject.ip = value["Ip"].asString();
		if(!value["EventType"].isNull())
			logListObject.eventType = value["EventType"].asString();
		if(!value["Uuid"].isNull())
			logListObject.uuid = value["Uuid"].asString();
		if(!value["FirstTime"].isNull())
			logListObject.firstTime = std::stol(value["FirstTime"].asString());
		if(!value["InstanceId"].isNull())
			logListObject.instanceId = value["InstanceId"].asString();
		if(!value["Tag"].isNull())
			logListObject.tag = value["Tag"].asString();
		if(!value["AliasEventName"].isNull())
			logListObject.aliasEventName = value["AliasEventName"].asString();
		if(!value["OsVersion"].isNull())
			logListObject.osVersion = value["OsVersion"].asString();
		if(!value["ClientIp"].isNull())
			logListObject.clientIp = value["ClientIp"].asString();
		if(!value["EventName"].isNull())
			logListObject.eventName = value["EventName"].asString();
		auto allDetailList = value["DetailList"]["DetailListItem"];
		for (auto value : allDetailList)
		{
			LogListItem::DetailListItem detailListObject;
			if(!value["Name"].isNull())
				detailListObject.name = value["Name"].asString();
			if(!value["Type"].isNull())
				detailListObject.type = value["Type"].asString();
			if(!value["Value"].isNull())
				detailListObject.value = value["Value"].asString();
			if(!value["InfoType"].isNull())
				detailListObject.infoType = value["InfoType"].asString();
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

