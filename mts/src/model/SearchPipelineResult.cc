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

#include <alibabacloud/mts/model/SearchPipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SearchPipelineResult::SearchPipelineResult() :
	ServiceResult()
{}

SearchPipelineResult::SearchPipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchPipelineResult::~SearchPipelineResult()
{}

void SearchPipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPipelineListNode = value["PipelineList"]["Pipeline"];
	for (auto valuePipelineListPipeline : allPipelineListNode)
	{
		Pipeline pipelineListObject;
		if(!valuePipelineListPipeline["Id"].isNull())
			pipelineListObject.id = valuePipelineListPipeline["Id"].asString();
		if(!valuePipelineListPipeline["Name"].isNull())
			pipelineListObject.name = valuePipelineListPipeline["Name"].asString();
		if(!valuePipelineListPipeline["State"].isNull())
			pipelineListObject.state = valuePipelineListPipeline["State"].asString();
		if(!valuePipelineListPipeline["Speed"].isNull())
			pipelineListObject.speed = valuePipelineListPipeline["Speed"].asString();
		if(!valuePipelineListPipeline["SpeedLevel"].isNull())
			pipelineListObject.speedLevel = std::stol(valuePipelineListPipeline["SpeedLevel"].asString());
		if(!valuePipelineListPipeline["QuotaAllocate"].isNull())
			pipelineListObject.quotaAllocate = std::stol(valuePipelineListPipeline["QuotaAllocate"].asString());
		if(!valuePipelineListPipeline["Role"].isNull())
			pipelineListObject.role = valuePipelineListPipeline["Role"].asString();
		auto notifyConfigNode = value["NotifyConfig"];
		if(!notifyConfigNode["Topic"].isNull())
			pipelineListObject.notifyConfig.topic = notifyConfigNode["Topic"].asString();
		if(!notifyConfigNode["QueueName"].isNull())
			pipelineListObject.notifyConfig.queueName = notifyConfigNode["QueueName"].asString();
		if(!notifyConfigNode["MqTopic"].isNull())
			pipelineListObject.notifyConfig.mqTopic = notifyConfigNode["MqTopic"].asString();
		if(!notifyConfigNode["MqTag"].isNull())
			pipelineListObject.notifyConfig.mqTag = notifyConfigNode["MqTag"].asString();
		pipelineList_.push_back(pipelineListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long SearchPipelineResult::getTotalCount()const
{
	return totalCount_;
}

long SearchPipelineResult::getPageSize()const
{
	return pageSize_;
}

long SearchPipelineResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<SearchPipelineResult::Pipeline> SearchPipelineResult::getPipelineList()const
{
	return pipelineList_;
}

