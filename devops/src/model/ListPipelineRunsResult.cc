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

#include <alibabacloud/devops/model/ListPipelineRunsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListPipelineRunsResult::ListPipelineRunsResult() :
	ServiceResult()
{}

ListPipelineRunsResult::ListPipelineRunsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPipelineRunsResult::~ListPipelineRunsResult()
{}

void ListPipelineRunsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allpipelineRunsNode = value["pipelineRuns"]["PipelineRun"];
	for (auto valuepipelineRunsPipelineRun : allpipelineRunsNode)
	{
		PipelineRun pipelineRunsObject;
		if(!valuepipelineRunsPipelineRun["pipelineId"].isNull())
			pipelineRunsObject.pipelineId = std::stol(valuepipelineRunsPipelineRun["pipelineId"].asString());
		if(!valuepipelineRunsPipelineRun["startTime"].isNull())
			pipelineRunsObject.startTime = std::stol(valuepipelineRunsPipelineRun["startTime"].asString());
		if(!valuepipelineRunsPipelineRun["creatorAccountId"].isNull())
			pipelineRunsObject.creatorAccountId = valuepipelineRunsPipelineRun["creatorAccountId"].asString();
		if(!valuepipelineRunsPipelineRun["endTime"].isNull())
			pipelineRunsObject.endTime = std::stol(valuepipelineRunsPipelineRun["endTime"].asString());
		if(!valuepipelineRunsPipelineRun["pipelineRunId"].isNull())
			pipelineRunsObject.pipelineRunId = std::stol(valuepipelineRunsPipelineRun["pipelineRunId"].asString());
		if(!valuepipelineRunsPipelineRun["triggerMode"].isNull())
			pipelineRunsObject.triggerMode = std::stol(valuepipelineRunsPipelineRun["triggerMode"].asString());
		if(!valuepipelineRunsPipelineRun["status"].isNull())
			pipelineRunsObject.status = valuepipelineRunsPipelineRun["status"].asString();
		pipelineRuns_.push_back(pipelineRunsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["totalCount"].isNull())
		totalCount_ = std::stol(value["totalCount"].asString());
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();

}

long ListPipelineRunsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPipelineRunsResult::getRequestId()const
{
	return requestId_;
}

std::string ListPipelineRunsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListPipelineRunsResult::PipelineRun> ListPipelineRunsResult::getpipelineRuns()const
{
	return pipelineRuns_;
}

std::string ListPipelineRunsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPipelineRunsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPipelineRunsResult::getSuccess()const
{
	return success_;
}

