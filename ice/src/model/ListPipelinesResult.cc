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

#include <alibabacloud/ice/model/ListPipelinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

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
	auto allPipelineListNode = value["PipelineList"]["Pipeline"];
	for (auto valuePipelineListPipeline : allPipelineListNode)
	{
		Pipeline pipelineListObject;
		if(!valuePipelineListPipeline["PipelineId"].isNull())
			pipelineListObject.pipelineId = valuePipelineListPipeline["PipelineId"].asString();
		if(!valuePipelineListPipeline["Name"].isNull())
			pipelineListObject.name = valuePipelineListPipeline["Name"].asString();
		if(!valuePipelineListPipeline["Speed"].isNull())
			pipelineListObject.speed = valuePipelineListPipeline["Speed"].asString();
		if(!valuePipelineListPipeline["Priority"].isNull())
			pipelineListObject.priority = std::stoi(valuePipelineListPipeline["Priority"].asString());
		if(!valuePipelineListPipeline["Status"].isNull())
			pipelineListObject.status = valuePipelineListPipeline["Status"].asString();
		if(!valuePipelineListPipeline["ExtendConfig"].isNull())
			pipelineListObject.extendConfig = valuePipelineListPipeline["ExtendConfig"].asString();
		if(!valuePipelineListPipeline["AppId"].isNull())
			pipelineListObject.appId = valuePipelineListPipeline["AppId"].asString();
		if(!valuePipelineListPipeline["CreateTime"].isNull())
			pipelineListObject.createTime = valuePipelineListPipeline["CreateTime"].asString();
		if(!valuePipelineListPipeline["ModifiedTime"].isNull())
			pipelineListObject.modifiedTime = valuePipelineListPipeline["ModifiedTime"].asString();
		pipelineList_.push_back(pipelineListObject);
	}

}

std::vector<ListPipelinesResult::Pipeline> ListPipelinesResult::getPipelineList()const
{
	return pipelineList_;
}

