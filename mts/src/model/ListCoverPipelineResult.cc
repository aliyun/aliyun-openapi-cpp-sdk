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

#include <alibabacloud/mts/model/ListCoverPipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListCoverPipelineResult::ListCoverPipelineResult() :
	ServiceResult()
{}

ListCoverPipelineResult::ListCoverPipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCoverPipelineResult::~ListCoverPipelineResult()
{}

void ListCoverPipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPipelineListNode = value["PipelineList"]["Pipeline"];
	for (auto valuePipelineListPipeline : allPipelineListNode)
	{
		Pipeline pipelineListObject;
		if(!valuePipelineListPipeline["UserId"].isNull())
			pipelineListObject.userId = std::stol(valuePipelineListPipeline["UserId"].asString());
		if(!valuePipelineListPipeline["PipelineId"].isNull())
			pipelineListObject.pipelineId = valuePipelineListPipeline["PipelineId"].asString();
		if(!valuePipelineListPipeline["Name"].isNull())
			pipelineListObject.name = valuePipelineListPipeline["Name"].asString();
		if(!valuePipelineListPipeline["State"].isNull())
			pipelineListObject.state = valuePipelineListPipeline["State"].asString();
		if(!valuePipelineListPipeline["Priority"].isNull())
			pipelineListObject.priority = valuePipelineListPipeline["Priority"].asString();
		if(!valuePipelineListPipeline["quotaNum"].isNull())
			pipelineListObject.quotaNum = std::stoi(valuePipelineListPipeline["quotaNum"].asString());
		if(!valuePipelineListPipeline["quotaUsed"].isNull())
			pipelineListObject.quotaUsed = std::stoi(valuePipelineListPipeline["quotaUsed"].asString());
		if(!valuePipelineListPipeline["NotifyConfig"].isNull())
			pipelineListObject.notifyConfig = valuePipelineListPipeline["NotifyConfig"].asString();
		if(!valuePipelineListPipeline["Role"].isNull())
			pipelineListObject.role = valuePipelineListPipeline["Role"].asString();
		if(!valuePipelineListPipeline["ExtendConfig"].isNull())
			pipelineListObject.extendConfig = valuePipelineListPipeline["ExtendConfig"].asString();
		pipelineList_.push_back(pipelineListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListCoverPipelineResult::getTotalCount()const
{
	return totalCount_;
}

long ListCoverPipelineResult::getPageSize()const
{
	return pageSize_;
}

long ListCoverPipelineResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCoverPipelineResult::Pipeline> ListCoverPipelineResult::getPipelineList()const
{
	return pipelineList_;
}

