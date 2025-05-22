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

#include <alibabacloud/rds/model/DescribeCrossRegionLogBackupFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCrossRegionLogBackupFilesResult::DescribeCrossRegionLogBackupFilesResult() :
	ServiceResult()
{}

DescribeCrossRegionLogBackupFilesResult::DescribeCrossRegionLogBackupFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCrossRegionLogBackupFilesResult::~DescribeCrossRegionLogBackupFilesResult()
{}

void DescribeCrossRegionLogBackupFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["CrossBackupRegion"].isNull())
			itemsObject.crossBackupRegion = valueItemsItem["CrossBackupRegion"].asString();
		if(!valueItemsItem["CrossDownloadLink"].isNull())
			itemsObject.crossDownloadLink = valueItemsItem["CrossDownloadLink"].asString();
		if(!valueItemsItem["CrossIntranetDownloadLink"].isNull())
			itemsObject.crossIntranetDownloadLink = valueItemsItem["CrossIntranetDownloadLink"].asString();
		if(!valueItemsItem["CrossLogBackupId"].isNull())
			itemsObject.crossLogBackupId = std::stoi(valueItemsItem["CrossLogBackupId"].asString());
		if(!valueItemsItem["CrossLogBackupSize"].isNull())
			itemsObject.crossLogBackupSize = std::stol(valueItemsItem["CrossLogBackupSize"].asString());
		if(!valueItemsItem["InstanceId"].isNull())
			itemsObject.instanceId = std::stoi(valueItemsItem["InstanceId"].asString());
		if(!valueItemsItem["LinkExpiredTime"].isNull())
			itemsObject.linkExpiredTime = valueItemsItem["LinkExpiredTime"].asString();
		if(!valueItemsItem["LogBeginTime"].isNull())
			itemsObject.logBeginTime = valueItemsItem["LogBeginTime"].asString();
		if(!valueItemsItem["LogEndTime"].isNull())
			itemsObject.logEndTime = valueItemsItem["LogEndTime"].asString();
		if(!valueItemsItem["LogFileName"].isNull())
			itemsObject.logFileName = valueItemsItem["LogFileName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeCrossRegionLogBackupFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeCrossRegionLogBackupFilesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeCrossRegionLogBackupFilesResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeCrossRegionLogBackupFilesResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeCrossRegionLogBackupFilesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeCrossRegionLogBackupFilesResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeCrossRegionLogBackupFilesResult::Item> DescribeCrossRegionLogBackupFilesResult::getItems()const
{
	return items_;
}

std::string DescribeCrossRegionLogBackupFilesResult::getRegionId()const
{
	return regionId_;
}

