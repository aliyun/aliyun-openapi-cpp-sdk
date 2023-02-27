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

#include <alibabacloud/ice/model/ListLiveSnapshotJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveSnapshotJobsResult::ListLiveSnapshotJobsResult() :
	ServiceResult()
{}

ListLiveSnapshotJobsResult::ListLiveSnapshotJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveSnapshotJobsResult::~ListLiveSnapshotJobsResult()
{}

void ListLiveSnapshotJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["JobInfo"];
	for (auto valueJobListJobInfo : allJobListNode)
	{
		JobInfo jobListObject;
		if(!valueJobListJobInfo["JobId"].isNull())
			jobListObject.jobId = valueJobListJobInfo["JobId"].asString();
		if(!valueJobListJobInfo["JobName"].isNull())
			jobListObject.jobName = valueJobListJobInfo["JobName"].asString();
		if(!valueJobListJobInfo["TemplateId"].isNull())
			jobListObject.templateId = valueJobListJobInfo["TemplateId"].asString();
		if(!valueJobListJobInfo["TemplateName"].isNull())
			jobListObject.templateName = valueJobListJobInfo["TemplateName"].asString();
		if(!valueJobListJobInfo["Status"].isNull())
			jobListObject.status = valueJobListJobInfo["Status"].asString();
		if(!valueJobListJobInfo["TimeInterval"].isNull())
			jobListObject.timeInterval = std::stoi(valueJobListJobInfo["TimeInterval"].asString());
		if(!valueJobListJobInfo["CreateTime"].isNull())
			jobListObject.createTime = valueJobListJobInfo["CreateTime"].asString();
		auto snapshotOutputNode = value["SnapshotOutput"];
		if(!snapshotOutputNode["StorageType"].isNull())
			jobListObject.snapshotOutput.storageType = snapshotOutputNode["StorageType"].asString();
		if(!snapshotOutputNode["Endpoint"].isNull())
			jobListObject.snapshotOutput.endpoint = snapshotOutputNode["Endpoint"].asString();
		if(!snapshotOutputNode["Bucket"].isNull())
			jobListObject.snapshotOutput.bucket = snapshotOutputNode["Bucket"].asString();
		jobList_.push_back(jobListObject);
	}
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["SortBy"].isNull())
		sortBy_ = value["SortBy"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListLiveSnapshotJobsResult::getTotalCount()const
{
	return totalCount_;
}

int ListLiveSnapshotJobsResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLiveSnapshotJobsResult::getSortBy()const
{
	return sortBy_;
}

int ListLiveSnapshotJobsResult::getPageNo()const
{
	return pageNo_;
}

std::vector<ListLiveSnapshotJobsResult::JobInfo> ListLiveSnapshotJobsResult::getJobList()const
{
	return jobList_;
}

