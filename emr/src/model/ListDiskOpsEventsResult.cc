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

#include <alibabacloud/emr/model/ListDiskOpsEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListDiskOpsEventsResult::ListDiskOpsEventsResult() :
	ServiceResult()
{}

ListDiskOpsEventsResult::ListDiskOpsEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDiskOpsEventsResult::~ListDiskOpsEventsResult()
{}

void ListDiskOpsEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventListNode = value["EventList"]["DiskOpsEventInfo"];
	for (auto valueEventListDiskOpsEventInfo : allEventListNode)
	{
		DiskOpsEventInfo eventListObject;
		if(!valueEventListDiskOpsEventInfo["RegionId"].isNull())
			eventListObject.regionId = valueEventListDiskOpsEventInfo["RegionId"].asString();
		if(!valueEventListDiskOpsEventInfo["UserId"].isNull())
			eventListObject.userId = valueEventListDiskOpsEventInfo["UserId"].asString();
		if(!valueEventListDiskOpsEventInfo["ClusterBizId"].isNull())
			eventListObject.clusterBizId = valueEventListDiskOpsEventInfo["ClusterBizId"].asString();
		if(!valueEventListDiskOpsEventInfo["ClusterName"].isNull())
			eventListObject.clusterName = valueEventListDiskOpsEventInfo["ClusterName"].asString();
		if(!valueEventListDiskOpsEventInfo["InstanceId"].isNull())
			eventListObject.instanceId = valueEventListDiskOpsEventInfo["InstanceId"].asString();
		if(!valueEventListDiskOpsEventInfo["InstanceName"].isNull())
			eventListObject.instanceName = valueEventListDiskOpsEventInfo["InstanceName"].asString();
		if(!valueEventListDiskOpsEventInfo["InstanceStatus"].isNull())
			eventListObject.instanceStatus = valueEventListDiskOpsEventInfo["InstanceStatus"].asString();
		if(!valueEventListDiskOpsEventInfo["PrivateIp"].isNull())
			eventListObject.privateIp = valueEventListDiskOpsEventInfo["PrivateIp"].asString();
		if(!valueEventListDiskOpsEventInfo["DiskId"].isNull())
			eventListObject.diskId = valueEventListDiskOpsEventInfo["DiskId"].asString();
		if(!valueEventListDiskOpsEventInfo["DiskDevice"].isNull())
			eventListObject.diskDevice = valueEventListDiskOpsEventInfo["DiskDevice"].asString();
		if(!valueEventListDiskOpsEventInfo["DiskMountPoint"].isNull())
			eventListObject.diskMountPoint = valueEventListDiskOpsEventInfo["DiskMountPoint"].asString();
		if(!valueEventListDiskOpsEventInfo["EventId"].isNull())
			eventListObject.eventId = valueEventListDiskOpsEventInfo["EventId"].asString();
		if(!valueEventListDiskOpsEventInfo["EventType"].isNull())
			eventListObject.eventType = valueEventListDiskOpsEventInfo["EventType"].asString();
		if(!valueEventListDiskOpsEventInfo["EventTriggerTime"].isNull())
			eventListObject.eventTriggerTime = std::stol(valueEventListDiskOpsEventInfo["EventTriggerTime"].asString());
		if(!valueEventListDiskOpsEventInfo["CurrentActivity"].isNull())
			eventListObject.currentActivity = valueEventListDiskOpsEventInfo["CurrentActivity"].asString();
		if(!valueEventListDiskOpsEventInfo["CurrentActivityState"].isNull())
			eventListObject.currentActivityState = valueEventListDiskOpsEventInfo["CurrentActivityState"].asString();
		eventList_.push_back(eventListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListDiskOpsEventsResult::getTotalCount()const
{
	return totalCount_;
}

int ListDiskOpsEventsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListDiskOpsEventsResult::DiskOpsEventInfo> ListDiskOpsEventsResult::getEventList()const
{
	return eventList_;
}

int ListDiskOpsEventsResult::getPageNumber()const
{
	return pageNumber_;
}

