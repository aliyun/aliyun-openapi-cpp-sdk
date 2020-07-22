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

#include <alibabacloud/elasticsearch/model/GetElastictaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

GetElastictaskResult::GetElastictaskResult() :
	ServiceResult()
{}

GetElastictaskResult::GetElastictaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetElastictaskResult::~GetElastictaskResult()
{}

void GetElastictaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto elasticExpansionTaskNode = resultNode["ElasticExpansionTask"];
	if(!elasticExpansionTaskNode["TriggerType"].isNull())
		result_.elasticExpansionTask.triggerType = elasticExpansionTaskNode["TriggerType"].asString();
	if(!elasticExpansionTaskNode["CronExpression"].isNull())
		result_.elasticExpansionTask.cronExpression = elasticExpansionTaskNode["CronExpression"].asString();
	if(!elasticExpansionTaskNode["ElasticNodeCount"].isNull())
		result_.elasticExpansionTask.elasticNodeCount = std::stoi(elasticExpansionTaskNode["ElasticNodeCount"].asString());
	if(!elasticExpansionTaskNode["ReplicaCount"].isNull())
		result_.elasticExpansionTask.replicaCount = std::stoi(elasticExpansionTaskNode["ReplicaCount"].asString());
		auto allTargetIndices = elasticExpansionTaskNode["TargetIndices"]["TargetIndices"];
		for (auto value : allTargetIndices)
			result_.elasticExpansionTask.targetIndices.push_back(value.asString());
	auto elasticShrinkTaskNode = resultNode["ElasticShrinkTask"];
	if(!elasticShrinkTaskNode["TriggerType"].isNull())
		result_.elasticShrinkTask.triggerType = elasticShrinkTaskNode["TriggerType"].asString();
	if(!elasticShrinkTaskNode["CronExpression"].isNull())
		result_.elasticShrinkTask.cronExpression = elasticShrinkTaskNode["CronExpression"].asString();
	if(!elasticShrinkTaskNode["ElasticNodeCount"].isNull())
		result_.elasticShrinkTask.elasticNodeCount = std::stoi(elasticShrinkTaskNode["ElasticNodeCount"].asString());
	if(!elasticShrinkTaskNode["ReplicaCount"].isNull())
		result_.elasticShrinkTask.replicaCount = std::stoi(elasticShrinkTaskNode["ReplicaCount"].asString());
		auto allTargetIndices1 = elasticShrinkTaskNode["TargetIndices"]["TargetIndices"];
		for (auto value : allTargetIndices1)
			result_.elasticShrinkTask.targetIndices1.push_back(value.asString());

}

GetElastictaskResult::Result GetElastictaskResult::getResult()const
{
	return result_;
}

