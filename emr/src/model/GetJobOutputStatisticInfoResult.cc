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

#include <alibabacloud/emr/model/GetJobOutputStatisticInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetJobOutputStatisticInfoResult::GetJobOutputStatisticInfoResult() :
	ServiceResult()
{}

GetJobOutputStatisticInfoResult::GetJobOutputStatisticInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobOutputStatisticInfoResult::~GetJobOutputStatisticInfoResult()
{}

void GetJobOutputStatisticInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allJobOutputList = value["JobOutputList"]["ClusterStatJobOutput"];
	for (auto value : allJobOutputList)
	{
		ClusterStatJobOutput jobOutputListObject;
		if(!value["ApplicationId"].isNull())
			jobOutputListObject.applicationId = value["ApplicationId"].asString();
		if(!value["JobId"].isNull())
			jobOutputListObject.jobId = value["JobId"].asString();
		if(!value["StartTime"].isNull())
			jobOutputListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["FinishTime"].isNull())
			jobOutputListObject.finishTime = std::stol(value["FinishTime"].asString());
		if(!value["Name"].isNull())
			jobOutputListObject.name = value["Name"].asString();
		if(!value["Queue"].isNull())
			jobOutputListObject.queue = value["Queue"].asString();
		if(!value["User"].isNull())
			jobOutputListObject.user = value["User"].asString();
		if(!value["State"].isNull())
			jobOutputListObject.state = value["State"].asString();
		if(!value["BytesOutput"].isNull())
			jobOutputListObject.bytesOutput = std::stol(value["BytesOutput"].asString());
		jobOutputList_.push_back(jobOutputListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int GetJobOutputStatisticInfoResult::getPageSize()const
{
	return pageSize_;
}

int GetJobOutputStatisticInfoResult::getPageNumber()const
{
	return pageNumber_;
}

int GetJobOutputStatisticInfoResult::getTotal()const
{
	return total_;
}

std::vector<GetJobOutputStatisticInfoResult::ClusterStatJobOutput> GetJobOutputStatisticInfoResult::getJobOutputList()const
{
	return jobOutputList_;
}

