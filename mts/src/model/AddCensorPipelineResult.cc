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

#include <alibabacloud/mts/model/AddCensorPipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

AddCensorPipelineResult::AddCensorPipelineResult() :
	ServiceResult()
{}

AddCensorPipelineResult::AddCensorPipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddCensorPipelineResult::~AddCensorPipelineResult()
{}

void AddCensorPipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pipelineNode = value["Pipeline"];
	if(!pipelineNode["State"].isNull())
		pipeline_.state = pipelineNode["State"].asString();
	if(!pipelineNode["Priority"].isNull())
		pipeline_.priority = std::stoi(pipelineNode["Priority"].asString());
	if(!pipelineNode["Name"].isNull())
		pipeline_.name = pipelineNode["Name"].asString();
	if(!pipelineNode["Id"].isNull())
		pipeline_.id = pipelineNode["Id"].asString();
	auto notifyConfigNode = pipelineNode["NotifyConfig"];
	if(!notifyConfigNode["Topic"].isNull())
		pipeline_.notifyConfig.topic = notifyConfigNode["Topic"].asString();
	if(!notifyConfigNode["Queue"].isNull())
		pipeline_.notifyConfig.queue = notifyConfigNode["Queue"].asString();

}

AddCensorPipelineResult::Pipeline AddCensorPipelineResult::getPipeline()const
{
	return pipeline_;
}

