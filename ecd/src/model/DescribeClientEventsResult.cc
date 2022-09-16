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

#include <alibabacloud/ecd/model/DescribeClientEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeClientEventsResult::DescribeClientEventsResult() :
	ServiceResult()
{}

DescribeClientEventsResult::DescribeClientEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClientEventsResult::~DescribeClientEventsResult()
{}

void DescribeClientEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventsNode = value["Events"]["Event"];
	for (auto valueEventsEvent : allEventsNode)
	{
		Event eventsObject;
		if(!valueEventsEvent["Status"].isNull())
			eventsObject.status = valueEventsEvent["Status"].asString();
		if(!valueEventsEvent["BytesReceived"].isNull())
			eventsObject.bytesReceived = valueEventsEvent["BytesReceived"].asString();
		if(!valueEventsEvent["DesktopIp"].isNull())
			eventsObject.desktopIp = valueEventsEvent["DesktopIp"].asString();
		if(!valueEventsEvent["EventTime"].isNull())
			eventsObject.eventTime = valueEventsEvent["EventTime"].asString();
		if(!valueEventsEvent["BytesSend"].isNull())
			eventsObject.bytesSend = valueEventsEvent["BytesSend"].asString();
		if(!valueEventsEvent["OfficeSiteId"].isNull())
			eventsObject.officeSiteId = valueEventsEvent["OfficeSiteId"].asString();
		if(!valueEventsEvent["AliUid"].isNull())
			eventsObject.aliUid = valueEventsEvent["AliUid"].asString();
		if(!valueEventsEvent["DesktopId"].isNull())
			eventsObject.desktopId = valueEventsEvent["DesktopId"].asString();
		if(!valueEventsEvent["RegionId"].isNull())
			eventsObject.regionId = valueEventsEvent["RegionId"].asString();
		if(!valueEventsEvent["EventId"].isNull())
			eventsObject.eventId = valueEventsEvent["EventId"].asString();
		if(!valueEventsEvent["DirectoryType"].isNull())
			eventsObject.directoryType = valueEventsEvent["DirectoryType"].asString();
		if(!valueEventsEvent["EventType"].isNull())
			eventsObject.eventType = valueEventsEvent["EventType"].asString();
		if(!valueEventsEvent["EndUserId"].isNull())
			eventsObject.endUserId = valueEventsEvent["EndUserId"].asString();
		if(!valueEventsEvent["ClientIp"].isNull())
			eventsObject.clientIp = valueEventsEvent["ClientIp"].asString();
		if(!valueEventsEvent["ClientOS"].isNull())
			eventsObject.clientOS = valueEventsEvent["ClientOS"].asString();
		if(!valueEventsEvent["OfficeSiteType"].isNull())
			eventsObject.officeSiteType = valueEventsEvent["OfficeSiteType"].asString();
		if(!valueEventsEvent["DirectoryId"].isNull())
			eventsObject.directoryId = valueEventsEvent["DirectoryId"].asString();
		if(!valueEventsEvent["ClientVersion"].isNull())
			eventsObject.clientVersion = valueEventsEvent["ClientVersion"].asString();
		if(!valueEventsEvent["OfficeSiteName"].isNull())
			eventsObject.officeSiteName = valueEventsEvent["OfficeSiteName"].asString();
		if(!valueEventsEvent["DesktopName"].isNull())
			eventsObject.desktopName = valueEventsEvent["DesktopName"].asString();
		if(!valueEventsEvent["DesktopGroupId"].isNull())
			eventsObject.desktopGroupId = valueEventsEvent["DesktopGroupId"].asString();
		if(!valueEventsEvent["DesktopGroupName"].isNull())
			eventsObject.desktopGroupName = valueEventsEvent["DesktopGroupName"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeClientEventsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeClientEventsResult::Event> DescribeClientEventsResult::getEvents()const
{
	return events_;
}

