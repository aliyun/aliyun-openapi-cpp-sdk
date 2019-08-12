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

#include <alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeCacheAnalysisReportListResult::DescribeCacheAnalysisReportListResult() :
	ServiceResult()
{}

DescribeCacheAnalysisReportListResult::DescribeCacheAnalysisReportListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCacheAnalysisReportListResult::~DescribeCacheAnalysisReportListResult()
{}

void DescribeCacheAnalysisReportListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDailyTasks = value["DailyTasks"]["DailyTask"];
	for (auto value : allDailyTasks)
	{
		DailyTask dailyTasksObject;
		if(!value["Date"].isNull())
			dailyTasksObject.date = value["Date"].asString();
		auto allTasks = value["Tasks"]["Task"];
		for (auto value : allTasks)
		{
			DailyTask::Task tasksObject;
			if(!value["TaskId"].isNull())
				tasksObject.taskId = value["TaskId"].asString();
			if(!value["NodeId"].isNull())
				tasksObject.nodeId = value["NodeId"].asString();
			if(!value["StartTime"].isNull())
				tasksObject.startTime = value["StartTime"].asString();
			if(!value["Status"].isNull())
				tasksObject.status = value["Status"].asString();
			dailyTasksObject.tasks.push_back(tasksObject);
		}
		dailyTasks_.push_back(dailyTasksObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumbers"].isNull())
		pageNumbers_ = std::stoi(value["PageNumbers"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeCacheAnalysisReportListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeCacheAnalysisReportListResult::DailyTask> DescribeCacheAnalysisReportListResult::getDailyTasks()const
{
	return dailyTasks_;
}

int DescribeCacheAnalysisReportListResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeCacheAnalysisReportListResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeCacheAnalysisReportListResult::getPageNumbers()const
{
	return pageNumbers_;
}

