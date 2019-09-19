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

#include <alibabacloud/emr/model/GetJobRunningTimeStatisticInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetJobRunningTimeStatisticInfoResult::GetJobRunningTimeStatisticInfoResult() :
	ServiceResult()
{}

GetJobRunningTimeStatisticInfoResult::GetJobRunningTimeStatisticInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobRunningTimeStatisticInfoResult::~GetJobRunningTimeStatisticInfoResult()
{}

void GetJobRunningTimeStatisticInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRunningTimeListNode = value["RunningTimeList"]["ClusterStatJobRunningTime"];
	for (auto valueRunningTimeListClusterStatJobRunningTime : allRunningTimeListNode)
	{
		ClusterStatJobRunningTime runningTimeListObject;
		if(!valueRunningTimeListClusterStatJobRunningTime["ApplicationId"].isNull())
			runningTimeListObject.applicationId = valueRunningTimeListClusterStatJobRunningTime["ApplicationId"].asString();
		if(!valueRunningTimeListClusterStatJobRunningTime["JobId"].isNull())
			runningTimeListObject.jobId = valueRunningTimeListClusterStatJobRunningTime["JobId"].asString();
		if(!valueRunningTimeListClusterStatJobRunningTime["StartTime"].isNull())
			runningTimeListObject.startTime = std::stol(valueRunningTimeListClusterStatJobRunningTime["StartTime"].asString());
		if(!valueRunningTimeListClusterStatJobRunningTime["FinishTime"].isNull())
			runningTimeListObject.finishTime = std::stol(valueRunningTimeListClusterStatJobRunningTime["FinishTime"].asString());
		if(!valueRunningTimeListClusterStatJobRunningTime["Name"].isNull())
			runningTimeListObject.name = valueRunningTimeListClusterStatJobRunningTime["Name"].asString();
		if(!valueRunningTimeListClusterStatJobRunningTime["Queue"].isNull())
			runningTimeListObject.queue = valueRunningTimeListClusterStatJobRunningTime["Queue"].asString();
		if(!valueRunningTimeListClusterStatJobRunningTime["User"].isNull())
			runningTimeListObject.user = valueRunningTimeListClusterStatJobRunningTime["User"].asString();
		if(!valueRunningTimeListClusterStatJobRunningTime["State"].isNull())
			runningTimeListObject.state = valueRunningTimeListClusterStatJobRunningTime["State"].asString();
		if(!valueRunningTimeListClusterStatJobRunningTime["RunningTime"].isNull())
			runningTimeListObject.runningTime = std::stol(valueRunningTimeListClusterStatJobRunningTime["RunningTime"].asString());
		runningTimeList_.push_back(runningTimeListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int GetJobRunningTimeStatisticInfoResult::getPageSize()const
{
	return pageSize_;
}

int GetJobRunningTimeStatisticInfoResult::getPageNumber()const
{
	return pageNumber_;
}

int GetJobRunningTimeStatisticInfoResult::getTotal()const
{
	return total_;
}

std::vector<GetJobRunningTimeStatisticInfoResult::ClusterStatJobRunningTime> GetJobRunningTimeStatisticInfoResult::getRunningTimeList()const
{
	return runningTimeList_;
}

