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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allPipelineList = value["PipelineList"]["Pipeline"];
	for (auto value : allPipelineList)
	{
		Pipeline pipelineListObject;
		if(!value["Id"].isNull())
			pipelineListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			pipelineListObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			pipelineListObject.state = value["State"].asString();
		if(!value["Speed"].isNull())
			pipelineListObject.speed = value["Speed"].asString();
		if(!value["SpeedLevel"].isNull())
			pipelineListObject.speedLevel = std::stol(value["SpeedLevel"].asString());
		if(!value["QuotaAllocate"].isNull())
			pipelineListObject.quotaAllocate = std::stol(value["QuotaAllocate"].asString());
		if(!value["Role"].isNull())
			pipelineListObject.role = value["Role"].asString();
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

