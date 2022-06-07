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

#include <alibabacloud/adb/model/DescribeSQLPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeSQLPlanResult::DescribeSQLPlanResult() :
	ServiceResult()
{}

DescribeSQLPlanResult::DescribeSQLPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLPlanResult::~DescribeSQLPlanResult()
{}

void DescribeSQLPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStageListNode = value["StageList"]["SqlPlanStage"];
	for (auto valueStageListSqlPlanStage : allStageListNode)
	{
		SqlPlanStage stageListObject;
		if(!valueStageListSqlPlanStage["State"].isNull())
			stageListObject.state = valueStageListSqlPlanStage["State"].asString();
		if(!valueStageListSqlPlanStage["CPUTimeAvg"].isNull())
			stageListObject.cPUTimeAvg = std::stol(valueStageListSqlPlanStage["CPUTimeAvg"].asString());
		if(!valueStageListSqlPlanStage["CPUTimeMax"].isNull())
			stageListObject.cPUTimeMax = std::stol(valueStageListSqlPlanStage["CPUTimeMax"].asString());
		if(!valueStageListSqlPlanStage["OperatorCost"].isNull())
			stageListObject.operatorCost = std::stol(valueStageListSqlPlanStage["OperatorCost"].asString());
		if(!valueStageListSqlPlanStage["ScanTimeMax"].isNull())
			stageListObject.scanTimeMax = std::stol(valueStageListSqlPlanStage["ScanTimeMax"].asString());
		if(!valueStageListSqlPlanStage["InputSizeMax"].isNull())
			stageListObject.inputSizeMax = std::stol(valueStageListSqlPlanStage["InputSizeMax"].asString());
		if(!valueStageListSqlPlanStage["StageId"].isNull())
			stageListObject.stageId = std::stoi(valueStageListSqlPlanStage["StageId"].asString());
		if(!valueStageListSqlPlanStage["ScanSizeMax"].isNull())
			stageListObject.scanSizeMax = std::stol(valueStageListSqlPlanStage["ScanSizeMax"].asString());
		if(!valueStageListSqlPlanStage["CPUTimeMin"].isNull())
			stageListObject.cPUTimeMin = std::stol(valueStageListSqlPlanStage["CPUTimeMin"].asString());
		if(!valueStageListSqlPlanStage["ScanTimeMin"].isNull())
			stageListObject.scanTimeMin = std::stol(valueStageListSqlPlanStage["ScanTimeMin"].asString());
		if(!valueStageListSqlPlanStage["ScanSizeMin"].isNull())
			stageListObject.scanSizeMin = std::stol(valueStageListSqlPlanStage["ScanSizeMin"].asString());
		if(!valueStageListSqlPlanStage["InputSizeMin"].isNull())
			stageListObject.inputSizeMin = std::stol(valueStageListSqlPlanStage["InputSizeMin"].asString());
		if(!valueStageListSqlPlanStage["PeakMemory"].isNull())
			stageListObject.peakMemory = std::stol(valueStageListSqlPlanStage["PeakMemory"].asString());
		if(!valueStageListSqlPlanStage["ScanTimeAvg"].isNull())
			stageListObject.scanTimeAvg = std::stol(valueStageListSqlPlanStage["ScanTimeAvg"].asString());
		if(!valueStageListSqlPlanStage["ScanSizeAvg"].isNull())
			stageListObject.scanSizeAvg = std::stol(valueStageListSqlPlanStage["ScanSizeAvg"].asString());
		if(!valueStageListSqlPlanStage["InputSizeAvg"].isNull())
			stageListObject.inputSizeAvg = std::stol(valueStageListSqlPlanStage["InputSizeAvg"].asString());
		stageList_.push_back(stageListObject);
	}
	auto detailNode = value["Detail"];
	if(!detailNode["SQL"].isNull())
		detail_.sQL = detailNode["SQL"].asString();
	if(!detailNode["OutputSize"].isNull())
		detail_.outputSize = std::stol(detailNode["OutputSize"].asString());
	if(!detailNode["State"].isNull())
		detail_.state = detailNode["State"].asString();
	if(!detailNode["OutputRows"].isNull())
		detail_.outputRows = std::stol(detailNode["OutputRows"].asString());
	if(!detailNode["User"].isNull())
		detail_.user = detailNode["User"].asString();
	if(!detailNode["StartTime"].isNull())
		detail_.startTime = detailNode["StartTime"].asString();
	if(!detailNode["TotalStage"].isNull())
		detail_.totalStage = std::stol(detailNode["TotalStage"].asString());
	if(!detailNode["QueuedTime"].isNull())
		detail_.queuedTime = std::stol(detailNode["QueuedTime"].asString());
	if(!detailNode["TotalTime"].isNull())
		detail_.totalTime = std::stol(detailNode["TotalTime"].asString());
	if(!detailNode["TotalTask"].isNull())
		detail_.totalTask = std::stol(detailNode["TotalTask"].asString());
	if(!detailNode["Database"].isNull())
		detail_.database = detailNode["Database"].asString();
	if(!detailNode["PeakMemory"].isNull())
		detail_.peakMemory = std::stol(detailNode["PeakMemory"].asString());
	if(!detailNode["ClientIP"].isNull())
		detail_.clientIP = detailNode["ClientIP"].asString();
	if(!detailNode["PlanningTime"].isNull())
		detail_.planningTime = std::stol(detailNode["PlanningTime"].asString());
	if(!detailNode["CPUTime"].isNull())
		detail_.cPUTime = std::stol(detailNode["CPUTime"].asString());
	if(!value["OriginInfo"].isNull())
		originInfo_ = value["OriginInfo"].asString();

}

std::vector<DescribeSQLPlanResult::SqlPlanStage> DescribeSQLPlanResult::getStageList()const
{
	return stageList_;
}

std::string DescribeSQLPlanResult::getOriginInfo()const
{
	return originInfo_;
}

DescribeSQLPlanResult::Detail DescribeSQLPlanResult::getDetail()const
{
	return detail_;
}

