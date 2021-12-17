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

#include <alibabacloud/nas/model/ListRecycleBinJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

ListRecycleBinJobsResult::ListRecycleBinJobsResult() :
	ServiceResult()
{}

ListRecycleBinJobsResult::ListRecycleBinJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecycleBinJobsResult::~ListRecycleBinJobsResult()
{}

void ListRecycleBinJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["Job"];
	for (auto valueJobsJob : allJobsNode)
	{
		Job jobsObject;
		if(!valueJobsJob["Id"].isNull())
			jobsObject.id = valueJobsJob["Id"].asString();
		if(!valueJobsJob["Type"].isNull())
			jobsObject.type = valueJobsJob["Type"].asString();
		if(!valueJobsJob["FileId"].isNull())
			jobsObject.fileId = valueJobsJob["FileId"].asString();
		if(!valueJobsJob["Status"].isNull())
			jobsObject.status = valueJobsJob["Status"].asString();
		if(!valueJobsJob["ErrorCode"].isNull())
			jobsObject.errorCode = valueJobsJob["ErrorCode"].asString();
		if(!valueJobsJob["Progress"].isNull())
			jobsObject.progress = valueJobsJob["Progress"].asString();
		if(!valueJobsJob["CreateTime"].isNull())
			jobsObject.createTime = valueJobsJob["CreateTime"].asString();
		if(!valueJobsJob["FileName"].isNull())
			jobsObject.fileName = valueJobsJob["FileName"].asString();
		if(!valueJobsJob["ErrorMessage"].isNull())
			jobsObject.errorMessage = valueJobsJob["ErrorMessage"].asString();
		jobs_.push_back(jobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListRecycleBinJobsResult::getTotalCount()const
{
	return totalCount_;
}

long ListRecycleBinJobsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListRecycleBinJobsResult::Job> ListRecycleBinJobsResult::getJobs()const
{
	return jobs_;
}

long ListRecycleBinJobsResult::getPageNumber()const
{
	return pageNumber_;
}

