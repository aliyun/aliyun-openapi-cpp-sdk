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

#include <alibabacloud/alb/model/ListAsynJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListAsynJobsResult::ListAsynJobsResult() :
	ServiceResult()
{}

ListAsynJobsResult::ListAsynJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAsynJobsResult::~ListAsynJobsResult()
{}

void ListAsynJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["Job"];
	for (auto valueJobsJob : allJobsNode)
	{
		Job jobsObject;
		if(!valueJobsJob["ApiName"].isNull())
			jobsObject.apiName = valueJobsJob["ApiName"].asString();
		if(!valueJobsJob["CreateTime"].isNull())
			jobsObject.createTime = std::stol(valueJobsJob["CreateTime"].asString());
		if(!valueJobsJob["ErrorCode"].isNull())
			jobsObject.errorCode = valueJobsJob["ErrorCode"].asString();
		if(!valueJobsJob["ErrorMessage"].isNull())
			jobsObject.errorMessage = valueJobsJob["ErrorMessage"].asString();
		if(!valueJobsJob["Id"].isNull())
			jobsObject.id = valueJobsJob["Id"].asString();
		if(!valueJobsJob["ModifyTime"].isNull())
			jobsObject.modifyTime = std::stol(valueJobsJob["ModifyTime"].asString());
		if(!valueJobsJob["OperateType"].isNull())
			jobsObject.operateType = valueJobsJob["OperateType"].asString();
		if(!valueJobsJob["ResourceId"].isNull())
			jobsObject.resourceId = valueJobsJob["ResourceId"].asString();
		if(!valueJobsJob["ResourceType"].isNull())
			jobsObject.resourceType = valueJobsJob["ResourceType"].asString();
		if(!valueJobsJob["Status"].isNull())
			jobsObject.status = valueJobsJob["Status"].asString();
		jobs_.push_back(jobsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListAsynJobsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAsynJobsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListAsynJobsResult::Job> ListAsynJobsResult::getJobs()const
{
	return jobs_;
}

long ListAsynJobsResult::getMaxResults()const
{
	return maxResults_;
}

