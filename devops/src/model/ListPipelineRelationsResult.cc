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

#include <alibabacloud/devops/model/ListPipelineRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListPipelineRelationsResult::ListPipelineRelationsResult() :
	ServiceResult()
{}

ListPipelineRelationsResult::ListPipelineRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPipelineRelationsResult::~ListPipelineRelationsResult()
{}

void ListPipelineRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allpipelineRelationsNode = value["pipelineRelations"]["pipelineRelation"];
	for (auto valuepipelineRelationspipelineRelation : allpipelineRelationsNode)
	{
		PipelineRelation pipelineRelationsObject;
		if(!valuepipelineRelationspipelineRelation["refObjectId"].isNull())
			pipelineRelationsObject.refObjectId = std::stol(valuepipelineRelationspipelineRelation["refObjectId"].asString());
		pipelineRelations_.push_back(pipelineRelationsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string ListPipelineRelationsResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListPipelineRelationsResult::PipelineRelation> ListPipelineRelationsResult::getpipelineRelations()const
{
	return pipelineRelations_;
}

std::string ListPipelineRelationsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPipelineRelationsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPipelineRelationsResult::getSuccess()const
{
	return success_;
}

