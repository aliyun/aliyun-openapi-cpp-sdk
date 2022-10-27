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

#include <alibabacloud/elasticsearch/model/DescribePipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribePipelineResult::DescribePipelineResult() :
	ServiceResult()
{}

DescribePipelineResult::DescribePipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePipelineResult::~DescribePipelineResult()
{}

void DescribePipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["pipelineId"].isNull())
		result_.pipelineId = resultNode["pipelineId"].asString();
	if(!resultNode["gmtUpdateTime"].isNull())
		result_.gmtUpdateTime = resultNode["gmtUpdateTime"].asString();
	if(!resultNode["queueType"].isNull())
		result_.queueType = resultNode["queueType"].asString();
	if(!resultNode["queueCheckPointWrites"].isNull())
		result_.queueCheckPointWrites = std::stoi(resultNode["queueCheckPointWrites"].asString());
	if(!resultNode["queueMaxBytes"].isNull())
		result_.queueMaxBytes = std::stoi(resultNode["queueMaxBytes"].asString());
	if(!resultNode["config"].isNull())
		result_.config = resultNode["config"].asString();
	if(!resultNode["batchDelay"].isNull())
		result_.batchDelay = std::stoi(resultNode["batchDelay"].asString());
	if(!resultNode["workers"].isNull())
		result_.workers = std::stoi(resultNode["workers"].asString());
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["gmtCreatedTime"].isNull())
		result_.gmtCreatedTime = resultNode["gmtCreatedTime"].asString();
	if(!resultNode["batchSize"].isNull())
		result_.batchSize = std::stoi(resultNode["batchSize"].asString());
	if(!resultNode["pipelineStatus"].isNull())
		result_.pipelineStatus = resultNode["pipelineStatus"].asString();

}

DescribePipelineResult::Result DescribePipelineResult::getResult()const
{
	return result_;
}

