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

#include <alibabacloud/quickbi-public/model/QueryCubeOptimizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryCubeOptimizationResult::QueryCubeOptimizationResult() :
	ServiceResult()
{}

QueryCubeOptimizationResult::QueryCubeOptimizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCubeOptimizationResult::~QueryCubeOptimizationResult()
{}

void QueryCubeOptimizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["AdviceType"].isNull())
			resultObject.adviceType = valueResultData["AdviceType"].asString();
		auto cubePerformanceDiagnoseModelNode = value["CubePerformanceDiagnoseModel"];
		if(!cubePerformanceDiagnoseModelNode["CacheCostTimeAvg"].isNull())
			resultObject.cubePerformanceDiagnoseModel.cacheCostTimeAvg = cubePerformanceDiagnoseModelNode["CacheCostTimeAvg"].asString();
		if(!cubePerformanceDiagnoseModelNode["CacheQueryCount"].isNull())
			resultObject.cubePerformanceDiagnoseModel.cacheQueryCount = std::stoi(cubePerformanceDiagnoseModelNode["CacheQueryCount"].asString());
		if(!cubePerformanceDiagnoseModelNode["CostTimeAvg"].isNull())
			resultObject.cubePerformanceDiagnoseModel.costTimeAvg = cubePerformanceDiagnoseModelNode["CostTimeAvg"].asString();
		if(!cubePerformanceDiagnoseModelNode["CubeId"].isNull())
			resultObject.cubePerformanceDiagnoseModel.cubeId = cubePerformanceDiagnoseModelNode["CubeId"].asString();
		if(!cubePerformanceDiagnoseModelNode["CubeName"].isNull())
			resultObject.cubePerformanceDiagnoseModel.cubeName = cubePerformanceDiagnoseModelNode["CubeName"].asString();
		if(!cubePerformanceDiagnoseModelNode["QueryCount"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryCount = std::stoi(cubePerformanceDiagnoseModelNode["QueryCount"].asString());
		if(!cubePerformanceDiagnoseModelNode["QueryCountAvg"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryCountAvg = cubePerformanceDiagnoseModelNode["QueryCountAvg"].asString();
		if(!cubePerformanceDiagnoseModelNode["QueryOverFivePercentNum"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryOverFivePercentNum = cubePerformanceDiagnoseModelNode["QueryOverFivePercentNum"].asString();
		if(!cubePerformanceDiagnoseModelNode["QueryOverFiveSecPercent"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryOverFiveSecPercent = cubePerformanceDiagnoseModelNode["QueryOverFiveSecPercent"].asString();
		if(!cubePerformanceDiagnoseModelNode["QueryOverTenSecPercent"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryOverTenSecPercent = cubePerformanceDiagnoseModelNode["QueryOverTenSecPercent"].asString();
		if(!cubePerformanceDiagnoseModelNode["QueryOverTenSecPercentNum"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryOverTenSecPercentNum = cubePerformanceDiagnoseModelNode["QueryOverTenSecPercentNum"].asString();
		if(!cubePerformanceDiagnoseModelNode["QueryTimeoutCount"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryTimeoutCount = std::stoi(cubePerformanceDiagnoseModelNode["QueryTimeoutCount"].asString());
		if(!cubePerformanceDiagnoseModelNode["QueryTimeoutCountPercent"].isNull())
			resultObject.cubePerformanceDiagnoseModel.queryTimeoutCountPercent = cubePerformanceDiagnoseModelNode["QueryTimeoutCountPercent"].asString();
		if(!cubePerformanceDiagnoseModelNode["QuickIndexCostTimeAvg"].isNull())
			resultObject.cubePerformanceDiagnoseModel.quickIndexCostTimeAvg = cubePerformanceDiagnoseModelNode["QuickIndexCostTimeAvg"].asString();
		if(!cubePerformanceDiagnoseModelNode["QuickIndexQueryCount"].isNull())
			resultObject.cubePerformanceDiagnoseModel.quickIndexQueryCount = std::stoi(cubePerformanceDiagnoseModelNode["QuickIndexQueryCount"].asString());
		if(!cubePerformanceDiagnoseModelNode["RepeatQueryPercent"].isNull())
			resultObject.cubePerformanceDiagnoseModel.repeatQueryPercent = cubePerformanceDiagnoseModelNode["RepeatQueryPercent"].asString();
		if(!cubePerformanceDiagnoseModelNode["RepeatQueryPercentNum"].isNull())
			resultObject.cubePerformanceDiagnoseModel.repeatQueryPercentNum = cubePerformanceDiagnoseModelNode["RepeatQueryPercentNum"].asString();
		if(!cubePerformanceDiagnoseModelNode["RepeatSqlQueryCount"].isNull())
			resultObject.cubePerformanceDiagnoseModel.repeatSqlQueryCount = std::stoi(cubePerformanceDiagnoseModelNode["RepeatSqlQueryCount"].asString());
		if(!cubePerformanceDiagnoseModelNode["RepeatSqlQueryPercent"].isNull())
			resultObject.cubePerformanceDiagnoseModel.repeatSqlQueryPercent = cubePerformanceDiagnoseModelNode["RepeatSqlQueryPercent"].asString();
		if(!cubePerformanceDiagnoseModelNode["WorkspaceId"].isNull())
			resultObject.cubePerformanceDiagnoseModel.workspaceId = cubePerformanceDiagnoseModelNode["WorkspaceId"].asString();
		if(!cubePerformanceDiagnoseModelNode["WorkspaceName"].isNull())
			resultObject.cubePerformanceDiagnoseModel.workspaceName = cubePerformanceDiagnoseModelNode["WorkspaceName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryCubeOptimizationResult::getSuccess()const
{
	return success_;
}

std::vector<QueryCubeOptimizationResult::Data> QueryCubeOptimizationResult::getResult()const
{
	return result_;
}

