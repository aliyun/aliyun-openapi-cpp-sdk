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

#include <alibabacloud/vpc/model/DescribeFailoverTestJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeFailoverTestJobsResult::DescribeFailoverTestJobsResult() :
	ServiceResult()
{}

DescribeFailoverTestJobsResult::DescribeFailoverTestJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFailoverTestJobsResult::~DescribeFailoverTestJobsResult()
{}

void DescribeFailoverTestJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailoverTestJobListNode = value["FailoverTestJobList"]["FailoverTestJobListItem"];
	for (auto valueFailoverTestJobListFailoverTestJobListItem : allFailoverTestJobListNode)
	{
		FailoverTestJobListItem failoverTestJobListObject;
		if(!valueFailoverTestJobListFailoverTestJobListItem["JobId"].isNull())
			failoverTestJobListObject.jobId = valueFailoverTestJobListFailoverTestJobListItem["JobId"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["Name"].isNull())
			failoverTestJobListObject.name = valueFailoverTestJobListFailoverTestJobListItem["Name"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["Description"].isNull())
			failoverTestJobListObject.description = valueFailoverTestJobListFailoverTestJobListItem["Description"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["ResourceType"].isNull())
			failoverTestJobListObject.resourceType = valueFailoverTestJobListFailoverTestJobListItem["ResourceType"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["JobType"].isNull())
			failoverTestJobListObject.jobType = valueFailoverTestJobListFailoverTestJobListItem["JobType"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["JobDuration"].isNull())
			failoverTestJobListObject.jobDuration = valueFailoverTestJobListFailoverTestJobListItem["JobDuration"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["StartTime"].isNull())
			failoverTestJobListObject.startTime = valueFailoverTestJobListFailoverTestJobListItem["StartTime"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["StopTime"].isNull())
			failoverTestJobListObject.stopTime = valueFailoverTestJobListFailoverTestJobListItem["StopTime"].asString();
		if(!valueFailoverTestJobListFailoverTestJobListItem["Status"].isNull())
			failoverTestJobListObject.status = valueFailoverTestJobListFailoverTestJobListItem["Status"].asString();
		auto allResourceId = value["ResourceId"]["ResourceId"];
		for (auto value : allResourceId)
			failoverTestJobListObject.resourceId.push_back(value.asString());
		failoverTestJobList_.push_back(failoverTestJobListObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeFailoverTestJobsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeFailoverTestJobsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeFailoverTestJobsResult::getMaxResults()const
{
	return maxResults_;
}

int DescribeFailoverTestJobsResult::getCount()const
{
	return count_;
}

std::vector<DescribeFailoverTestJobsResult::FailoverTestJobListItem> DescribeFailoverTestJobsResult::getFailoverTestJobList()const
{
	return failoverTestJobList_;
}

