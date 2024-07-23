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

#include <alibabacloud/mts/model/AddPipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

AddPipelineResult::AddPipelineResult() :
	ServiceResult()
{}

AddPipelineResult::AddPipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddPipelineResult::~AddPipelineResult()
{}

void AddPipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pipelineNode = value["Pipeline"];
	if(!pipelineNode["Speed"].isNull())
		pipeline_.speed = pipelineNode["Speed"].asString();
	if(!pipelineNode["State"].isNull())
		pipeline_.state = pipelineNode["State"].asString();
	if(!pipelineNode["SpeedLevel"].isNull())
		pipeline_.speedLevel = std::stol(pipelineNode["SpeedLevel"].asString());
	if(!pipelineNode["Role"].isNull())
		pipeline_.role = pipelineNode["Role"].asString();
	if(!pipelineNode["Name"].isNull())
		pipeline_.name = pipelineNode["Name"].asString();
	if(!pipelineNode["Id"].isNull())
		pipeline_.id = pipelineNode["Id"].asString();
	if(!pipelineNode["QuotaAllocate"].isNull())
		pipeline_.quotaAllocate = std::stol(pipelineNode["QuotaAllocate"].asString());
	auto notifyConfigNode = pipelineNode["NotifyConfig"];
	if(!notifyConfigNode["MqTopic"].isNull())
		pipeline_.notifyConfig.mqTopic = notifyConfigNode["MqTopic"].asString();
	if(!notifyConfigNode["QueueName"].isNull())
		pipeline_.notifyConfig.queueName = notifyConfigNode["QueueName"].asString();
	if(!notifyConfigNode["MqTag"].isNull())
		pipeline_.notifyConfig.mqTag = notifyConfigNode["MqTag"].asString();
	if(!notifyConfigNode["Topic"].isNull())
		pipeline_.notifyConfig.topic = notifyConfigNode["Topic"].asString();
	auto extendConfigNode = pipelineNode["ExtendConfig"];
	if(!extendConfigNode["IsBoostNew"].isNull())
		pipeline_.extendConfig.isBoostNew = extendConfigNode["IsBoostNew"].asString() == "true";
	if(!extendConfigNode["MaxMultiSpeed"].isNull())
		pipeline_.extendConfig.maxMultiSpeed = std::stoi(extendConfigNode["MaxMultiSpeed"].asString());
	if(!extendConfigNode["MultiSpeedDowngradePolicy"].isNull())
		pipeline_.extendConfig.multiSpeedDowngradePolicy = extendConfigNode["MultiSpeedDowngradePolicy"].asString();

}

AddPipelineResult::Pipeline AddPipelineResult::getPipeline()const
{
	return pipeline_;
}

