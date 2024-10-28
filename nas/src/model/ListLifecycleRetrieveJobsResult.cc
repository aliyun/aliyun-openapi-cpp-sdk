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

#include <alibabacloud/nas/model/ListLifecycleRetrieveJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

ListLifecycleRetrieveJobsResult::ListLifecycleRetrieveJobsResult() :
	ServiceResult()
{}

ListLifecycleRetrieveJobsResult::ListLifecycleRetrieveJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLifecycleRetrieveJobsResult::~ListLifecycleRetrieveJobsResult()
{}

void ListLifecycleRetrieveJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLifecycleRetrieveJobsNode = value["LifecycleRetrieveJobs"]["LifecycleRetrieveJob"];
	for (auto valueLifecycleRetrieveJobsLifecycleRetrieveJob : allLifecycleRetrieveJobsNode)
	{
		LifecycleRetrieveJob lifecycleRetrieveJobsObject;
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["FileSystemId"].isNull())
			lifecycleRetrieveJobsObject.fileSystemId = valueLifecycleRetrieveJobsLifecycleRetrieveJob["FileSystemId"].asString();
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["Status"].isNull())
			lifecycleRetrieveJobsObject.status = valueLifecycleRetrieveJobsLifecycleRetrieveJob["Status"].asString();
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["DiscoveredFileCount"].isNull())
			lifecycleRetrieveJobsObject.discoveredFileCount = std::stol(valueLifecycleRetrieveJobsLifecycleRetrieveJob["DiscoveredFileCount"].asString());
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["UpdateTime"].isNull())
			lifecycleRetrieveJobsObject.updateTime = valueLifecycleRetrieveJobsLifecycleRetrieveJob["UpdateTime"].asString();
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["RetrievedFileCount"].isNull())
			lifecycleRetrieveJobsObject.retrievedFileCount = std::stol(valueLifecycleRetrieveJobsLifecycleRetrieveJob["RetrievedFileCount"].asString());
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["JobId"].isNull())
			lifecycleRetrieveJobsObject.jobId = valueLifecycleRetrieveJobsLifecycleRetrieveJob["JobId"].asString();
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["CreateTime"].isNull())
			lifecycleRetrieveJobsObject.createTime = valueLifecycleRetrieveJobsLifecycleRetrieveJob["CreateTime"].asString();
		if(!valueLifecycleRetrieveJobsLifecycleRetrieveJob["StorageType"].isNull())
			lifecycleRetrieveJobsObject.storageType = valueLifecycleRetrieveJobsLifecycleRetrieveJob["StorageType"].asString();
		auto allPaths = value["Paths"]["Path"];
		for (auto value : allPaths)
			lifecycleRetrieveJobsObject.paths.push_back(value.asString());
		lifecycleRetrieveJobs_.push_back(lifecycleRetrieveJobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListLifecycleRetrieveJobsResult::getTotalCount()const
{
	return totalCount_;
}

int ListLifecycleRetrieveJobsResult::getPageSize()const
{
	return pageSize_;
}

int ListLifecycleRetrieveJobsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListLifecycleRetrieveJobsResult::LifecycleRetrieveJob> ListLifecycleRetrieveJobsResult::getLifecycleRetrieveJobs()const
{
	return lifecycleRetrieveJobs_;
}

