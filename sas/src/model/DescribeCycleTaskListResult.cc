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

#include <alibabacloud/sas/model/DescribeCycleTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCycleTaskListResult::DescribeCycleTaskListResult() :
	ServiceResult()
{}

DescribeCycleTaskListResult::DescribeCycleTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCycleTaskListResult::~DescribeCycleTaskListResult()
{}

void DescribeCycleTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCycleScheduleResponseListNode = value["CycleScheduleResponseList"]["CycleScheduleResponse"];
	for (auto valueCycleScheduleResponseListCycleScheduleResponse : allCycleScheduleResponseListNode)
	{
		CycleScheduleResponse cycleScheduleResponseListObject;
		if(!valueCycleScheduleResponseListCycleScheduleResponse["LastTaskId"].isNull())
			cycleScheduleResponseListObject.lastTaskId = valueCycleScheduleResponseListCycleScheduleResponse["LastTaskId"].asString();
		if(!valueCycleScheduleResponseListCycleScheduleResponse["ConfigId"].isNull())
			cycleScheduleResponseListObject.configId = valueCycleScheduleResponseListCycleScheduleResponse["ConfigId"].asString();
		if(!valueCycleScheduleResponseListCycleScheduleResponse["TargetEndTime"].isNull())
			cycleScheduleResponseListObject.targetEndTime = std::stoi(valueCycleScheduleResponseListCycleScheduleResponse["TargetEndTime"].asString());
		if(!valueCycleScheduleResponseListCycleScheduleResponse["NextStartTimeStr"].isNull())
			cycleScheduleResponseListObject.nextStartTimeStr = std::stol(valueCycleScheduleResponseListCycleScheduleResponse["NextStartTimeStr"].asString());
		if(!valueCycleScheduleResponseListCycleScheduleResponse["TaskName"].isNull())
			cycleScheduleResponseListObject.taskName = valueCycleScheduleResponseListCycleScheduleResponse["TaskName"].asString();
		if(!valueCycleScheduleResponseListCycleScheduleResponse["TaskType"].isNull())
			cycleScheduleResponseListObject.taskType = valueCycleScheduleResponseListCycleScheduleResponse["TaskType"].asString();
		if(!valueCycleScheduleResponseListCycleScheduleResponse["IntervalPeriod"].isNull())
			cycleScheduleResponseListObject.intervalPeriod = std::stoi(valueCycleScheduleResponseListCycleScheduleResponse["IntervalPeriod"].asString());
		if(!valueCycleScheduleResponseListCycleScheduleResponse["FirstDateStr"].isNull())
			cycleScheduleResponseListObject.firstDateStr = std::stol(valueCycleScheduleResponseListCycleScheduleResponse["FirstDateStr"].asString());
		if(!valueCycleScheduleResponseListCycleScheduleResponse["Param"].isNull())
			cycleScheduleResponseListObject.param = valueCycleScheduleResponseListCycleScheduleResponse["Param"].asString();
		if(!valueCycleScheduleResponseListCycleScheduleResponse["PeriodUnit"].isNull())
			cycleScheduleResponseListObject.periodUnit = valueCycleScheduleResponseListCycleScheduleResponse["PeriodUnit"].asString();
		if(!valueCycleScheduleResponseListCycleScheduleResponse["TargetStartTime"].isNull())
			cycleScheduleResponseListObject.targetStartTime = std::stoi(valueCycleScheduleResponseListCycleScheduleResponse["TargetStartTime"].asString());
		if(!valueCycleScheduleResponseListCycleScheduleResponse["Enable"].isNull())
			cycleScheduleResponseListObject.enable = std::stoi(valueCycleScheduleResponseListCycleScheduleResponse["Enable"].asString());
		cycleScheduleResponseList_.push_back(cycleScheduleResponseListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribeCycleTaskListResult::CycleScheduleResponse> DescribeCycleTaskListResult::getCycleScheduleResponseList()const
{
	return cycleScheduleResponseList_;
}

DescribeCycleTaskListResult::PageInfo DescribeCycleTaskListResult::getPageInfo()const
{
	return pageInfo_;
}

