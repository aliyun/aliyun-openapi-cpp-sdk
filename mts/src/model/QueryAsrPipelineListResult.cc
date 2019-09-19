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

#include <alibabacloud/mts/model/QueryAsrPipelineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryAsrPipelineListResult::QueryAsrPipelineListResult() :
	ServiceResult()
{}

QueryAsrPipelineListResult::QueryAsrPipelineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAsrPipelineListResult::~QueryAsrPipelineListResult()
{}

void QueryAsrPipelineListResult::parse(const std::string &payload)
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
		if(!valuePipelineListPipeline["Priority"].isNull())
			pipelineListObject.priority = valuePipelineListPipeline["Priority"].asString();
		auto notifyConfigNode = value["NotifyConfig"];
		if(!notifyConfigNode["Topic"].isNull())
			pipelineListObject.notifyConfig.topic = notifyConfigNode["Topic"].asString();
		if(!notifyConfigNode["QueueName"].isNull())
			pipelineListObject.notifyConfig.queueName = notifyConfigNode["QueueName"].asString();
		pipelineList_.push_back(pipelineListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryAsrPipelineListResult::Pipeline> QueryAsrPipelineListResult::getPipelineList()const
{
	return pipelineList_;
}

std::vector<std::string> QueryAsrPipelineListResult::getNonExistIds()const
{
	return nonExistIds_;
}

