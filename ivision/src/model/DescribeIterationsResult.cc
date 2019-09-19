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
	auto allIterationsNode = value["Iterations"]["Iteration"];
	for (auto valueIterationsIteration : allIterationsNode)
	{
		Iteration iterationsObject;
		if(!valueIterationsIteration["ProjectId"].isNull())
			iterationsObject.projectId = valueIterationsIteration["ProjectId"].asString();
		if(!valueIterationsIteration["IterationId"].isNull())
			iterationsObject.iterationId = valueIterationsIteration["IterationId"].asString();
		if(!valueIterationsIteration["IterationName"].isNull())
			iterationsObject.iterationName = valueIterationsIteration["IterationName"].asString();
		if(!valueIterationsIteration["Status"].isNull())
			iterationsObject.status = valueIterationsIteration["Status"].asString();
		if(!valueIterationsIteration["CreationTime"].isNull())
			iterationsObject.creationTime = valueIterationsIteration["CreationTime"].asString();
		if(!valueIterationsIteration["FinishTime"].isNull())
			iterationsObject.finishTime = valueIterationsIteration["FinishTime"].asString();
		if(!valueIterationsIteration["ModelId"].isNull())
			iterationsObject.modelId = valueIterationsIteration["ModelId"].asString();
		if(!valueIterationsIteration["Precision"].isNull())
			iterationsObject.precision = valueIterationsIteration["Precision"].asString();
		if(!valueIterationsIteration["Recall"].isNull())
			iterationsObject.recall = valueIterationsIteration["Recall"].asString();
		if(!valueIterationsIteration["MAP"].isNull())
			iterationsObject.mAP = valueIterationsIteration["MAP"].asString();
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

