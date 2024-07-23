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

#include <alibabacloud/mts/model/QueryPipelineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryPipelineListResult::QueryPipelineListResult() :
	ServiceResult()
{}

QueryPipelineListResult::QueryPipelineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPipelineListResult::~QueryPipelineListResult()
{}

void QueryPipelineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPipelineListNode = value["PipelineList"]["Pipeline"];
	for (auto valuePipelineListPipeline : allPipelineListNode)
	{
		Pipeline pipelineListObject;
		if(!valuePipelineListPipeline["Speed"].isNull())
			pipelineListObject.speed = valuePipelineListPipeline["Speed"].asString();
		if(!valuePipelineListPipeline["State"].isNull())
			pipelineListObject.state = valuePipelineListPipeline["State"].asString();
		if(!valuePipelineListPipeline["SpeedLevel"].isNull())
			pipelineListObject.speedLevel = std::stol(valuePipelineListPipeline["SpeedLevel"].asString());
		if(!valuePipelineListPipeline["Role"].isNull())
			pipelineListObject.role = valuePipelineListPipeline["Role"].asString();
		if(!valuePipelineListPipeline["Name"].isNull())
			pipelineListObject.name = valuePipelineListPipeline["Name"].asString();
		if(!valuePipelineListPipeline["Id"].isNull())
			pipelineListObject.id = valuePipelineListPipeline["Id"].asString();
		if(!valuePipelineListPipeline["QuotaAllocate"].isNull())
			pipelineListObject.quotaAllocate = std::stol(valuePipelineListPipeline["QuotaAllocate"].asString());
		auto notifyConfigNode = value["NotifyConfig"];
		if(!notifyConfigNode["MqTopic"].isNull())
			pipelineListObject.notifyConfig.mqTopic = notifyConfigNode["MqTopic"].asString();
		if(!notifyConfigNode["QueueName"].isNull())
			pipelineListObject.notifyConfig.queueName = notifyConfigNode["QueueName"].asString();
		if(!notifyConfigNode["MqTag"].isNull())
			pipelineListObject.notifyConfig.mqTag = notifyConfigNode["MqTag"].asString();
		if(!notifyConfigNode["Topic"].isNull())
			pipelineListObject.notifyConfig.topic = notifyConfigNode["Topic"].asString();
		auto extendConfigNode = value["ExtendConfig"];
		if(!extendConfigNode["IsBoostNew"].isNull())
			pipelineListObject.extendConfig.isBoostNew = extendConfigNode["IsBoostNew"].asString() == "true";
		if(!extendConfigNode["MaxMultiSpeed"].isNull())
			pipelineListObject.extendConfig.maxMultiSpeed = std::stoi(extendConfigNode["MaxMultiSpeed"].asString());
		if(!extendConfigNode["MultiSpeedDowngradePolicy"].isNull())
			pipelineListObject.extendConfig.multiSpeedDowngradePolicy = extendConfigNode["MultiSpeedDowngradePolicy"].asString();
		pipelineList_.push_back(pipelineListObject);
	}
	auto allNonExistPids = value["NonExistPids"]["String"];
	for (const auto &item : allNonExistPids)
		nonExistPids_.push_back(item.asString());

}

std::vector<QueryPipelineListResult::Pipeline> QueryPipelineListResult::getPipelineList()const
{
	return pipelineList_;
}

std::vector<std::string> QueryPipelineListResult::getNonExistPids()const
{
	return nonExistPids_;
}

