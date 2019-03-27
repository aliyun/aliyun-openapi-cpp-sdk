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

#include <alibabacloud/ivision/model/DescribeIterationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeIterationsResult::DescribeIterationsResult() :
	ServiceResult()
{}

DescribeIterationsResult::DescribeIterationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIterationsResult::~DescribeIterationsResult()
{}

void DescribeIterationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allIterations = value["Iterations"]["Iteration"];
	for (auto value : allIterations)
	{
		Iteration iterationsObject;
		if(!value["ProjectId"].isNull())
			iterationsObject.projectId = value["ProjectId"].asString();
		if(!value["IterationId"].isNull())
			iterationsObject.iterationId = value["IterationId"].asString();
		if(!value["IterationName"].isNull())
			iterationsObject.iterationName = value["IterationName"].asString();
		if(!value["Status"].isNull())
			iterationsObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			iterationsObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishTime"].isNull())
			iterationsObject.finishTime = value["FinishTime"].asString();
		if(!value["ModelId"].isNull())
			iterationsObject.modelId = value["ModelId"].asString();
		if(!value["Precision"].isNull())
			iterationsObject.precision = value["Precision"].asString();
		if(!value["Recall"].isNull())
			iterationsObject.recall = value["Recall"].asString();
		if(!value["MAP"].isNull())
			iterationsObject.mAP = value["MAP"].asString();
		iterations_.push_back(iterationsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

long DescribeIterationsResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeIterationsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeIterationsResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeIterationsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<DescribeIterationsResult::Iteration> DescribeIterationsResult::getIterations()const
{
	return iterations_;
}

