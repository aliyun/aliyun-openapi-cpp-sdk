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

#include <alibabacloud/ivision/model/DescribeProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeProjectsResult::DescribeProjectsResult() :
	ServiceResult()
{}

DescribeProjectsResult::DescribeProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProjectsResult::~DescribeProjectsResult()
{}

void DescribeProjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProjectsNode = value["Projects"]["Project"];
	for (auto valueProjectsProject : allProjectsNode)
	{
		Project projectsObject;
		if(!valueProjectsProject["ProjectId"].isNull())
			projectsObject.projectId = valueProjectsProject["ProjectId"].asString();
		if(!valueProjectsProject["Name"].isNull())
			projectsObject.name = valueProjectsProject["Name"].asString();
		if(!valueProjectsProject["Description"].isNull())
			projectsObject.description = valueProjectsProject["Description"].asString();
		if(!valueProjectsProject["ProType"].isNull())
			projectsObject.proType = valueProjectsProject["ProType"].asString();
		if(!valueProjectsProject["IterCount"].isNull())
			projectsObject.iterCount = std::stoi(valueProjectsProject["IterCount"].asString());
		if(!valueProjectsProject["CreationTime"].isNull())
			projectsObject.creationTime = valueProjectsProject["CreationTime"].asString();
		if(!valueProjectsProject["Status"].isNull())
			projectsObject.status = valueProjectsProject["Status"].asString();
		projects_.push_back(projectsObject);
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

long DescribeProjectsResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeProjectsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeProjectsResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeProjectsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<DescribeProjectsResult::Project> DescribeProjectsResult::getProjects()const
{
	return projects_;
}

