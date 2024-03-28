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

#include <alibabacloud/devops/model/ListPipelineGroupPipelinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListPipelineGroupPipelinesResult::ListPipelineGroupPipelinesResult() :
	ServiceResult()
{}

ListPipelineGroupPipelinesResult::ListPipelineGroupPipelinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPipelineGroupPipelinesResult::~ListPipelineGroupPipelinesResult()
{}

void ListPipelineGroupPipelinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allpipelinesNode = value["pipelines"]["pipeline"];
	for (auto valuepipelinespipeline : allpipelinesNode)
	{
		Pipeline pipelinesObject;
		if(!valuepipelinespipeline["pipelineName"].isNull())
			pipelinesObject.pipelineName = valuepipelinespipeline["pipelineName"].asString();
		if(!valuepipelinespipeline["createTime"].isNull())
			pipelinesObject.createTime = std::stol(valuepipelinespipeline["createTime"].asString());
		if(!valuepipelinespipeline["pipelineId"].isNull())
			pipelinesObject.pipelineId = std::stol(valuepipelinespipeline["pipelineId"].asString());
		pipelines_.push_back(pipelinesObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();

}

int ListPipelineGroupPipelinesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListPipelineGroupPipelinesResult::Pipeline> ListPipelineGroupPipelinesResult::getpipelines()const
{
	return pipelines_;
}

std::string ListPipelineGroupPipelinesResult::getRequestId()const
{
	return requestId_;
}

std::string ListPipelineGroupPipelinesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListPipelineGroupPipelinesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPipelineGroupPipelinesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPipelineGroupPipelinesResult::getSuccess()const
{
	return success_;
}

