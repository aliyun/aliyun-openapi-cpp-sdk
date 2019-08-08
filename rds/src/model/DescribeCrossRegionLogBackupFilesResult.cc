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
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["CrossLogBackupId"].isNull())
			itemsObject.crossLogBackupId = std::stoi(value["CrossLogBackupId"].asString());
		if(!value["CrossBackupRegion"].isNull())
			itemsObject.crossBackupRegion = value["CrossBackupRegion"].asString();
		if(!value["CrossLogBackupSize"].isNull())
			itemsObject.crossLogBackupSize = std::stol(value["CrossLogBackupSize"].asString());
		if(!value["LogBeginTime"].isNull())
			itemsObject.logBeginTime = value["LogBeginTime"].asString();
		if(!value["LogEndTime"].isNull())
			itemsObject.logEndTime = value["LogEndTime"].asString();
		if(!value["CrossDownloadLink"].isNull())
			itemsObject.crossDownloadLink = value["CrossDownloadLink"].asString();
		if(!value["CrossIntranetDownloadLink"].isNull())
			itemsObject.crossIntranetDownloadLink = value["CrossIntranetDownloadLink"].asString();
		if(!value["LinkExpiredTime"].isNull())
			itemsObject.linkExpiredTime = value["LinkExpiredTime"].asString();
		if(!value["LogFileName"].isNull())
			itemsObject.logFileName = value["LogFileName"].asString();
		if(!value["InstanceId"].isNull())
			itemsObject.instanceId = std::stoi(value["InstanceId"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

