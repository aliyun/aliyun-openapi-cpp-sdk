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

#include <alibabacloud/dataworks-public/model/ListDIJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDIJobsResult::ListDIJobsResult() :
	ServiceResult()
{}

ListDIJobsResult::ListDIJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDIJobsResult::~ListDIJobsResult()
{}

void ListDIJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dIJobPagingNode = value["DIJobPaging"];
	if(!dIJobPagingNode["TotalCount"].isNull())
		dIJobPaging_.totalCount = std::stoi(dIJobPagingNode["TotalCount"].asString());
	if(!dIJobPagingNode["PageNumber"].isNull())
		dIJobPaging_.pageNumber = std::stoi(dIJobPagingNode["PageNumber"].asString());
	if(!dIJobPagingNode["PageSize"].isNull())
		dIJobPaging_.pageSize = std::stoi(dIJobPagingNode["PageSize"].asString());
	auto allDIJobsNode = dIJobPagingNode["DIJobs"]["DIJob"];
	for (auto dIJobPagingNodeDIJobsDIJob : allDIJobsNode)
	{
		DIJobPaging::DIJob dIJobObject;
		if(!dIJobPagingNodeDIJobsDIJob["DIJobId"].isNull())
			dIJobObject.dIJobId = std::stol(dIJobPagingNodeDIJobsDIJob["DIJobId"].asString());
		if(!dIJobPagingNodeDIJobsDIJob["ProjectId"].isNull())
			dIJobObject.projectId = std::stol(dIJobPagingNodeDIJobsDIJob["ProjectId"].asString());
		if(!dIJobPagingNodeDIJobsDIJob["JobName"].isNull())
			dIJobObject.jobName = dIJobPagingNodeDIJobsDIJob["JobName"].asString();
		if(!dIJobPagingNodeDIJobsDIJob["MigrationType"].isNull())
			dIJobObject.migrationType = dIJobPagingNodeDIJobsDIJob["MigrationType"].asString();
		if(!dIJobPagingNodeDIJobsDIJob["SourceDataSourceType"].isNull())
			dIJobObject.sourceDataSourceType = dIJobPagingNodeDIJobsDIJob["SourceDataSourceType"].asString();
		if(!dIJobPagingNodeDIJobsDIJob["DestinationDataSourceType"].isNull())
			dIJobObject.destinationDataSourceType = dIJobPagingNodeDIJobsDIJob["DestinationDataSourceType"].asString();
		if(!dIJobPagingNodeDIJobsDIJob["JobStatus"].isNull())
			dIJobObject.jobStatus = dIJobPagingNodeDIJobsDIJob["JobStatus"].asString();
		dIJobPaging_.dIJobs.push_back(dIJobObject);
	}

}

ListDIJobsResult::DIJobPaging ListDIJobsResult::getDIJobPaging()const
{
	return dIJobPaging_;
}

