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

#include <alibabacloud/mts/model/QueryCensorPipelineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryCensorPipelineListResult::QueryCensorPipelineListResult() :
	ServiceResult()
{}

QueryCensorPipelineListResult::QueryCensorPipelineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCensorPipelineListResult::~QueryCensorPipelineListResult()
{}

void QueryCensorPipelineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
		if(!value["Priority"].isNull())
			pipelineListObject.priority = value["Priority"].asString();
		auto notifyConfigNode = value["NotifyConfig"];
		if(!notifyConfigNode["Topic"].isNull())
			pipelineListObject.notifyConfig.topic = notifyConfigNode["Topic"].asString();
		if(!notifyConfigNode["Queue"].isNull())
			pipelineListObject.notifyConfig.queue = notifyConfigNode["Queue"].asString();
		pipelineList_.push_back(pipelineListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryCensorPipelineListResult::Pipeline> QueryCensorPipelineListResult::getPipelineList()const
{
	return pipelineList_;
}

std::vector<std::string> QueryCensorPipelineListResult::getNonExistIds()const
{
	return nonExistIds_;
}

