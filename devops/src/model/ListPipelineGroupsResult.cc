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

#include <alibabacloud/devops/model/ListPipelineGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListPipelineGroupsResult::ListPipelineGroupsResult() :
	ServiceResult()
{}

ListPipelineGroupsResult::ListPipelineGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPipelineGroupsResult::~ListPipelineGroupsResult()
{}

void ListPipelineGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allpipelineGroupsNode = value["pipelineGroups"]["pieplineGroup"];
	for (auto valuepipelineGroupspieplineGroup : allpipelineGroupsNode)
	{
		PieplineGroup pipelineGroupsObject;
		if(!valuepipelineGroupspieplineGroup["name"].isNull())
			pipelineGroupsObject.name = valuepipelineGroupspieplineGroup["name"].asString();
		if(!valuepipelineGroupspieplineGroup["id"].isNull())
			pipelineGroupsObject.id = std::stol(valuepipelineGroupspieplineGroup["id"].asString());
		if(!valuepipelineGroupspieplineGroup["createTime"].isNull())
			pipelineGroupsObject.createTime = std::stol(valuepipelineGroupspieplineGroup["createTime"].asString());
		pipelineGroups_.push_back(pipelineGroupsObject);
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

int ListPipelineGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPipelineGroupsResult::getRequestId()const
{
	return requestId_;
}

std::string ListPipelineGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListPipelineGroupsResult::PieplineGroup> ListPipelineGroupsResult::getpipelineGroups()const
{
	return pipelineGroups_;
}

std::string ListPipelineGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPipelineGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPipelineGroupsResult::getSuccess()const
{
	return success_;
}

