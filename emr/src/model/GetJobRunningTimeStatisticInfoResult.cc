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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRunningTimeList = value["RunningTimeList"]["ClusterStatJobRunningTime"];
	for (auto value : allRunningTimeList)
	{
		ClusterStatJobRunningTime runningTimeListObject;
		if(!value["ApplicationId"].isNull())
			runningTimeListObject.applicationId = value["ApplicationId"].asString();
		if(!value["JobId"].isNull())
			runningTimeListObject.jobId = value["JobId"].asString();
		if(!value["StartTime"].isNull())
			runningTimeListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["FinishTime"].isNull())
			runningTimeListObject.finishTime = std::stol(value["FinishTime"].asString());
		if(!value["Name"].isNull())
			runningTimeListObject.name = value["Name"].asString();
		if(!value["Queue"].isNull())
			runningTimeListObject.queue = value["Queue"].asString();
		if(!value["User"].isNull())
			runningTimeListObject.user = value["User"].asString();
		if(!value["State"].isNull())
			runningTimeListObject.state = value["State"].asString();
		if(!value["RunningTime"].isNull())
			runningTimeListObject.runningTime = std::stol(value["RunningTime"].asString());
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

