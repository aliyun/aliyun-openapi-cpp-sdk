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

#include <alibabacloud/dbfs/model/DbfsRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

DbfsRecordResult::DbfsRecordResult() :
	ServiceResult()
{}

DbfsRecordResult::DbfsRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DbfsRecordResult::~DbfsRecordResult()
{}

void DbfsRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["RecordsItem"];
	for (auto valueRecordsRecordsItem : allRecordsNode)
	{
		RecordsItem recordsObject;
		if(!valueRecordsRecordsItem["Id"].isNull())
			recordsObject.id = std::stol(valueRecordsRecordsItem["Id"].asString());
		if(!valueRecordsRecordsItem["BatchStrategyNo"].isNull())
			recordsObject.batchStrategyNo = valueRecordsRecordsItem["BatchStrategyNo"].asString();
		if(!valueRecordsRecordsItem["AccountId"].isNull())
			recordsObject.accountId = valueRecordsRecordsItem["AccountId"].asString();
		if(!valueRecordsRecordsItem["DbfsId"].isNull())
			recordsObject.dbfsId = valueRecordsRecordsItem["DbfsId"].asString();
		if(!valueRecordsRecordsItem["EcsId"].isNull())
			recordsObject.ecsId = valueRecordsRecordsItem["EcsId"].asString();
		if(!valueRecordsRecordsItem["TaskId"].isNull())
			recordsObject.taskId = valueRecordsRecordsItem["TaskId"].asString();
		if(!valueRecordsRecordsItem["RegionId"].isNull())
			recordsObject.regionId = valueRecordsRecordsItem["RegionId"].asString();
		if(!valueRecordsRecordsItem["ZoneId"].isNull())
			recordsObject.zoneId = valueRecordsRecordsItem["ZoneId"].asString();
		if(!valueRecordsRecordsItem["State"].isNull())
			recordsObject.state = valueRecordsRecordsItem["State"].asString();
		if(!valueRecordsRecordsItem["CurrentVersion"].isNull())
			recordsObject.currentVersion = valueRecordsRecordsItem["CurrentVersion"].asString();
		if(!valueRecordsRecordsItem["TargetVersion"].isNull())
			recordsObject.targetVersion = valueRecordsRecordsItem["TargetVersion"].asString();
		if(!valueRecordsRecordsItem["UpgradeStartTime"].isNull())
			recordsObject.upgradeStartTime = std::stol(valueRecordsRecordsItem["UpgradeStartTime"].asString());
		if(!valueRecordsRecordsItem["UpgradeEndTime"].isNull())
			recordsObject.upgradeEndTime = std::stol(valueRecordsRecordsItem["UpgradeEndTime"].asString());
		if(!valueRecordsRecordsItem["TaskExecutionCounts"].isNull())
			recordsObject.taskExecutionCounts = std::stoi(valueRecordsRecordsItem["TaskExecutionCounts"].asString());
		if(!valueRecordsRecordsItem["TaskErrorReason"].isNull())
			recordsObject.taskErrorReason = valueRecordsRecordsItem["TaskErrorReason"].asString();
		if(!valueRecordsRecordsItem["CreateTime"].isNull())
			recordsObject.createTime = std::stol(valueRecordsRecordsItem["CreateTime"].asString());
		if(!valueRecordsRecordsItem["UpdateTime"].isNull())
			recordsObject.updateTime = std::stol(valueRecordsRecordsItem["UpdateTime"].asString());
		if(!valueRecordsRecordsItem["IsDel"].isNull())
			recordsObject.isDel = valueRecordsRecordsItem["IsDel"].asString();
		records_.push_back(recordsObject);
	}
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DbfsRecordResult::getPageSize()const
{
	return pageSize_;
}

long DbfsRecordResult::getTotal()const
{
	return total_;
}

long DbfsRecordResult::getPageNo()const
{
	return pageNo_;
}

std::vector<DbfsRecordResult::RecordsItem> DbfsRecordResult::getRecords()const
{
	return records_;
}

