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
	auto allJobOutputListNode = value["JobOutputList"]["ClusterStatJobOutput"];
	for (auto valueJobOutputListClusterStatJobOutput : allJobOutputListNode)
	{
		ClusterStatJobOutput jobOutputListObject;
		if(!valueJobOutputListClusterStatJobOutput["ApplicationId"].isNull())
			jobOutputListObject.applicationId = valueJobOutputListClusterStatJobOutput["ApplicationId"].asString();
		if(!valueJobOutputListClusterStatJobOutput["JobId"].isNull())
			jobOutputListObject.jobId = valueJobOutputListClusterStatJobOutput["JobId"].asString();
		if(!valueJobOutputListClusterStatJobOutput["StartTime"].isNull())
			jobOutputListObject.startTime = std::stol(valueJobOutputListClusterStatJobOutput["StartTime"].asString());
		if(!valueJobOutputListClusterStatJobOutput["FinishTime"].isNull())
			jobOutputListObject.finishTime = std::stol(valueJobOutputListClusterStatJobOutput["FinishTime"].asString());
		if(!valueJobOutputListClusterStatJobOutput["Name"].isNull())
			jobOutputListObject.name = valueJobOutputListClusterStatJobOutput["Name"].asString();
		if(!valueJobOutputListClusterStatJobOutput["Queue"].isNull())
			jobOutputListObject.queue = valueJobOutputListClusterStatJobOutput["Queue"].asString();
		if(!valueJobOutputListClusterStatJobOutput["User"].isNull())
			jobOutputListObject.user = valueJobOutputListClusterStatJobOutput["User"].asString();
		if(!valueJobOutputListClusterStatJobOutput["State"].isNull())
			jobOutputListObject.state = valueJobOutputListClusterStatJobOutput["State"].asString();
		if(!valueJobOutputListClusterStatJobOutput["BytesOutput"].isNull())
			jobOutputListObject.bytesOutput = std::stol(valueJobOutputListClusterStatJobOutput["BytesOutput"].asString());
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

