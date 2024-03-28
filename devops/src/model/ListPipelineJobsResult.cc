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

#include <alibabacloud/devops/model/ListPipelineJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListPipelineJobsResult::ListPipelineJobsResult() :
	ServiceResult()
{}

ListPipelineJobsResult::ListPipelineJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPipelineJobsResult::~ListPipelineJobsResult()
{}

void ListPipelineJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alljobsNode = value["jobs"]["job"];
	for (auto valuejobsjob : alljobsNode)
	{
		Job jobsObject;
		if(!valuejobsjob["jobName"].isNull())
			jobsObject.jobName = valuejobsjob["jobName"].asString();
		if(!valuejobsjob["identifier"].isNull())
			jobsObject.identifier = valuejobsjob["identifier"].asString();
		if(!valuejobsjob["lastJobId"].isNull())
			jobsObject.lastJobId = std::stol(valuejobsjob["lastJobId"].asString());
		if(!valuejobsjob["lastJobParams"].isNull())
			jobsObject.lastJobParams = valuejobsjob["lastJobParams"].asString();
		jobs_.push_back(jobsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::string ListPipelineJobsResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListPipelineJobsResult::Job> ListPipelineJobsResult::getjobs()const
{
	return jobs_;
}

std::string ListPipelineJobsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPipelineJobsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPipelineJobsResult::getSuccess()const
{
	return success_;
}

