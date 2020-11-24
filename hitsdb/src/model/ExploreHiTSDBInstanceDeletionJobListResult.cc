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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDeletionJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

ExploreHiTSDBInstanceDeletionJobListResult::ExploreHiTSDBInstanceDeletionJobListResult() :
	ServiceResult()
{}

ExploreHiTSDBInstanceDeletionJobListResult::ExploreHiTSDBInstanceDeletionJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExploreHiTSDBInstanceDeletionJobListResult::~ExploreHiTSDBInstanceDeletionJobListResult()
{}

void ExploreHiTSDBInstanceDeletionJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["JobItem"];
	for (auto valueJobListJobItem : allJobListNode)
	{
		JobItem jobListObject;
		if(!valueJobListJobItem["Id"].isNull())
			jobListObject.id = std::stol(valueJobListJobItem["Id"].asString());
		if(!valueJobListJobItem["InstanceId"].isNull())
			jobListObject.instanceId = valueJobListJobItem["InstanceId"].asString();
		if(!valueJobListJobItem["Ip"].isNull())
			jobListObject.ip = valueJobListJobItem["Ip"].asString();
		if(!valueJobListJobItem["Port"].isNull())
			jobListObject.port = std::stoi(valueJobListJobItem["Port"].asString());
		if(!valueJobListJobItem["Metric"].isNull())
			jobListObject.metric = valueJobListJobItem["Metric"].asString();
		if(!valueJobListJobItem["Tags"].isNull())
			jobListObject.tags = valueJobListJobItem["Tags"].asString();
		if(!valueJobListJobItem["StartTime"].isNull())
			jobListObject.startTime = std::stol(valueJobListJobItem["StartTime"].asString());
		if(!valueJobListJobItem["EndTime"].isNull())
			jobListObject.endTime = std::stol(valueJobListJobItem["EndTime"].asString());
		if(!valueJobListJobItem["Status"].isNull())
			jobListObject.status = valueJobListJobItem["Status"].asString();
		if(!valueJobListJobItem["JobTyp"].isNull())
			jobListObject.jobTyp = valueJobListJobItem["JobTyp"].asString();
		if(!valueJobListJobItem["JobCreationTime"].isNull())
			jobListObject.jobCreationTime = std::stol(valueJobListJobItem["JobCreationTime"].asString());
		if(!valueJobListJobItem["JobStartTime"].isNull())
			jobListObject.jobStartTime = std::stol(valueJobListJobItem["JobStartTime"].asString());
		if(!valueJobListJobItem["JobEndTime"].isNull())
			jobListObject.jobEndTime = std::stol(valueJobListJobItem["JobEndTime"].asString());
		jobList_.push_back(jobListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

int ExploreHiTSDBInstanceDeletionJobListResult::getPageSize()const
{
	return pageSize_;
}

int ExploreHiTSDBInstanceDeletionJobListResult::getPageNumber()const
{
	return pageNumber_;
}

long ExploreHiTSDBInstanceDeletionJobListResult::getTotal()const
{
	return total_;
}

std::vector<ExploreHiTSDBInstanceDeletionJobListResult::JobItem> ExploreHiTSDBInstanceDeletionJobListResult::getJobList()const
{
	return jobList_;
}

