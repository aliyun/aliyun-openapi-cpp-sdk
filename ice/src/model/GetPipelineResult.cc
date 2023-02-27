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

#include <alibabacloud/ice/model/GetPipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetPipelineResult::GetPipelineResult() :
	ServiceResult()
{}

GetPipelineResult::GetPipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPipelineResult::~GetPipelineResult()
{}

void GetPipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pipelineNode = value["Pipeline"];
	if(!pipelineNode["PipelineId"].isNull())
		pipeline_.pipelineId = pipelineNode["PipelineId"].asString();
	if(!pipelineNode["Name"].isNull())
		pipeline_.name = pipelineNode["Name"].asString();
	if(!pipelineNode["Speed"].isNull())
		pipeline_.speed = pipelineNode["Speed"].asString();
	if(!pipelineNode["Priority"].isNull())
		pipeline_.priority = std::stoi(pipelineNode["Priority"].asString());
	if(!pipelineNode["Status"].isNull())
		pipeline_.status = pipelineNode["Status"].asString();
	if(!pipelineNode["ExtendConfig"].isNull())
		pipeline_.extendConfig = pipelineNode["ExtendConfig"].asString();
	if(!pipelineNode["AppId"].isNull())
		pipeline_.appId = pipelineNode["AppId"].asString();
	if(!pipelineNode["CreateTime"].isNull())
		pipeline_.createTime = pipelineNode["CreateTime"].asString();
	if(!pipelineNode["ModifiedTime"].isNull())
		pipeline_.modifiedTime = pipelineNode["ModifiedTime"].asString();

}

GetPipelineResult::Pipeline GetPipelineResult::getPipeline()const
{
	return pipeline_;
}

