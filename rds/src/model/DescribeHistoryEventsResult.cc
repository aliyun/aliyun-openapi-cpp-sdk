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

#include <alibabacloud/rds/model/DescribeHistoryEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeHistoryEventsResult::DescribeHistoryEventsResult() :
	ServiceResult()
{}

DescribeHistoryEventsResult::DescribeHistoryEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHistoryEventsResult::~DescribeHistoryEventsResult()
{}

void DescribeHistoryEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Id"].isNull())
			itemsObject.id = valueItemsItemsItem["Id"].asString();
		if(!valueItemsItemsItem["Region"].isNull())
			itemsObject.region = valueItemsItemsItem["Region"].asString();
		if(!valueItemsItemsItem["Source"].isNull())
			itemsObject.source = valueItemsItemsItem["Source"].asString();
		if(!valueItemsItemsItem["Specversion"].isNull())
			itemsObject.specversion = valueItemsItemsItem["Specversion"].asString();
		if(!valueItemsItemsItem["Subject"].isNull())
			itemsObject.subject = valueItemsItemsItem["Subject"].asString();
		if(!valueItemsItemsItem["Time"].isNull())
			itemsObject.time = valueItemsItemsItem["Time"].asString();
		if(!valueItemsItemsItem["Type"].isNull())
			itemsObject.type = valueItemsItemsItem["Type"].asString();
		auto dataNode = value["Data"];
		if(!dataNode["CmsProduct"].isNull())
			itemsObject.data.cmsProduct = dataNode["CmsProduct"].asString();
		if(!dataNode["DbType"].isNull())
			itemsObject.data.dbType = dataNode["DbType"].asString();
		if(!dataNode["DetailImpact"].isNull())
			itemsObject.data.detailImpact = dataNode["DetailImpact"].asString();
		if(!dataNode["DetailReason"].isNull())
			itemsObject.data.detailReason = dataNode["DetailReason"].asString();
		if(!dataNode["EndTime"].isNull())
			itemsObject.data.endTime = dataNode["EndTime"].asString();
		if(!dataNode["EventCategory"].isNull())
			itemsObject.data.eventCategory = dataNode["EventCategory"].asString();
		if(!dataNode["EventCode"].isNull())
			itemsObject.data.eventCode = dataNode["EventCode"].asString();
		if(!dataNode["EventDetail"].isNull())
			itemsObject.data.eventDetail = dataNode["EventDetail"].asString();
		if(!dataNode["EventId"].isNull())
			itemsObject.data.eventId = dataNode["EventId"].asString();
		if(!dataNode["EventImpact"].isNull())
			itemsObject.data.eventImpact = dataNode["EventImpact"].asString();
		if(!dataNode["EventLevel"].isNull())
			itemsObject.data.eventLevel = dataNode["EventLevel"].asString();
		if(!dataNode["EventReason"].isNull())
			itemsObject.data.eventReason = dataNode["EventReason"].asString();
		if(!dataNode["EventStatus"].isNull())
			itemsObject.data.eventStatus = dataNode["EventStatus"].asString();
		if(!dataNode["EventType"].isNull())
			itemsObject.data.eventType = dataNode["EventType"].asString();
		if(!dataNode["GmtCreated"].isNull())
			itemsObject.data.gmtCreated = dataNode["GmtCreated"].asString();
		if(!dataNode["GmtModified"].isNull())
			itemsObject.data.gmtModified = dataNode["GmtModified"].asString();
		if(!dataNode["HandleStatus"].isNull())
			itemsObject.data.handleStatus = dataNode["HandleStatus"].asString();
		if(!dataNode["HasLifeCycle"].isNull())
			itemsObject.data.hasLifeCycle = std::stoi(dataNode["HasLifeCycle"].asString());
		if(!dataNode["InstanceId"].isNull())
			itemsObject.data.instanceId = dataNode["InstanceId"].asString();
		if(!dataNode["InstanceName"].isNull())
			itemsObject.data.instanceName = dataNode["InstanceName"].asString();
		if(!dataNode["IsClosed"].isNull())
			itemsObject.data.isClosed = std::stoi(dataNode["IsClosed"].asString());
		if(!dataNode["Product"].isNull())
			itemsObject.data.product = dataNode["Product"].asString();
		if(!dataNode["RegionId"].isNull())
			itemsObject.data.regionId = dataNode["RegionId"].asString();
		if(!dataNode["ResourceType"].isNull())
			itemsObject.data.resourceType = dataNode["ResourceType"].asString();
		if(!dataNode["SourceType"].isNull())
			itemsObject.data.sourceType = dataNode["SourceType"].asString();
		if(!dataNode["StartTime"].isNull())
			itemsObject.data.startTime = dataNode["StartTime"].asString();
		if(!dataNode["Uid"].isNull())
			itemsObject.data.uid = dataNode["Uid"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeHistoryEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeHistoryEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHistoryEventsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeHistoryEventsResult::ItemsItem> DescribeHistoryEventsResult::getItems()const
{
	return items_;
}

