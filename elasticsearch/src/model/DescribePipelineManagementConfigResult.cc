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

#include <alibabacloud/elasticsearch/model/DescribePipelineManagementConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribePipelineManagementConfigResult::DescribePipelineManagementConfigResult() :
	ServiceResult()
{}

DescribePipelineManagementConfigResult::DescribePipelineManagementConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePipelineManagementConfigResult::~DescribePipelineManagementConfigResult()
{}

void DescribePipelineManagementConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["endpoints"].isNull())
		result_.endpoints = resultNode["endpoints"].asString();
	if(!resultNode["userName"].isNull())
		result_.userName = resultNode["userName"].asString();
	if(!resultNode["pipelineManagementType"].isNull())
		result_.pipelineManagementType = resultNode["pipelineManagementType"].asString();
	if(!resultNode["esInstanceId"].isNull())
		result_.esInstanceId = resultNode["esInstanceId"].asString();
		auto allPipelineIds = resultNode["pipelineIds"]["pipelineid"];
		for (auto value : allPipelineIds)
			result_.pipelineIds.push_back(value.asString());

}

DescribePipelineManagementConfigResult::Result DescribePipelineManagementConfigResult::getResult()const
{
	return result_;
}

