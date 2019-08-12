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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allProjects = value["Projects"]["Project"];
	for (auto value : allProjects)
	{
		Project projectsObject;
		if(!value["ProjectId"].isNull())
			projectsObject.projectId = value["ProjectId"].asString();
		if(!value["Name"].isNull())
			projectsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			projectsObject.description = value["Description"].asString();
		if(!value["ProType"].isNull())
			projectsObject.proType = value["ProType"].asString();
		if(!value["IterCount"].isNull())
			projectsObject.iterCount = std::stoi(value["IterCount"].asString());
		if(!value["CreationTime"].isNull())
			projectsObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			projectsObject.status = value["Status"].asString();
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

