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

#include <alibabacloud/devops/model/ListPipelinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListPipelinesResult::ListPipelinesResult() :
	ServiceResult()
{}

ListPipelinesResult::ListPipelinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPipelinesResult::~ListPipelinesResult()
{}

void ListPipelinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allpipelinesNode = value["pipelines"]["Pipeline"];
	for (auto valuepipelinesPipeline : allpipelinesNode)
	{
		Pipeline pipelinesObject;
		if(!valuepipelinesPipeline["pipelineName"].isNull())
			pipelinesObject.pipelineName = valuepipelinesPipeline["pipelineName"].asString();
		if(!valuepipelinesPipeline["pipelineId"].isNull())
			pipelinesObject.pipelineId = std::stol(valuepipelinesPipeline["pipelineId"].asString());
		if(!valuepipelinesPipeline["createTime"].isNull())
			pipelinesObject.createTime = std::stol(valuepipelinesPipeline["createTime"].asString());
		if(!valuepipelinesPipeline["creatorAccountId"].isNull())
			pipelinesObject.creatorAccountId = valuepipelinesPipeline["creatorAccountId"].asString();
		if(!valuepipelinesPipeline["groupId"].isNull())
			pipelinesObject.groupId = std::stol(valuepipelinesPipeline["groupId"].asString());
		pipelines_.push_back(pipelinesObject);
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

long ListPipelinesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListPipelinesResult::Pipeline> ListPipelinesResult::getpipelines()const
{
	return pipelines_;
}

std::string ListPipelinesResult::getRequestId()const
{
	return requestId_;
}

std::string ListPipelinesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListPipelinesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPipelinesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPipelinesResult::getSuccess()const
{
	return success_;
}

