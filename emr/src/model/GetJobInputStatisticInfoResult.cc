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

#include <alibabacloud/emr/model/GetJobInputStatisticInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetJobInputStatisticInfoResult::GetJobInputStatisticInfoResult() :
	ServiceResult()
{}

GetJobInputStatisticInfoResult::GetJobInputStatisticInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobInputStatisticInfoResult::~GetJobInputStatisticInfoResult()
{}

void GetJobInputStatisticInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allJobInputList = value["JobInputList"]["ClusterStatJobInput"];
	for (auto value : allJobInputList)
	{
		ClusterStatJobInput jobInputListObject;
		if(!value["ApplicationId"].isNull())
			jobInputListObject.applicationId = value["ApplicationId"].asString();
		if(!value["JobId"].isNull())
			jobInputListObject.jobId = value["JobId"].asString();
		if(!value["StartTime"].isNull())
			jobInputListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["FinishTime"].isNull())
			jobInputListObject.finishTime = std::stol(value["FinishTime"].asString());
		if(!value["Name"].isNull())
			jobInputListObject.name = value["Name"].asString();
		if(!value["Queue"].isNull())
			jobInputListObject.queue = value["Queue"].asString();
		if(!value["User"].isNull())
			jobInputListObject.user = value["User"].asString();
		if(!value["State"].isNull())
			jobInputListObject.state = value["State"].asString();
		if(!value["BytesInput"].isNull())
			jobInputListObject.bytesInput = std::stol(value["BytesInput"].asString());
		jobInputList_.push_back(jobInputListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int GetJobInputStatisticInfoResult::getPageSize()const
{
	return pageSize_;
}

int GetJobInputStatisticInfoResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<GetJobInputStatisticInfoResult::ClusterStatJobInput> GetJobInputStatisticInfoResult::getJobInputList()const
{
	return jobInputList_;
}

int GetJobInputStatisticInfoResult::getTotal()const
{
	return total_;
}

