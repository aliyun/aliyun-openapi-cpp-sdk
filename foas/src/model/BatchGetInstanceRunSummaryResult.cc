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

#include <alibabacloud/foas/model/BatchGetInstanceRunSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

BatchGetInstanceRunSummaryResult::BatchGetInstanceRunSummaryResult() :
	ServiceResult()
{}

BatchGetInstanceRunSummaryResult::BatchGetInstanceRunSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetInstanceRunSummaryResult::~BatchGetInstanceRunSummaryResult()
{}

void BatchGetInstanceRunSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRunSummarysNode = value["RunSummarys"]["RunSummary"];
	for (auto valueRunSummarysRunSummary : allRunSummarysNode)
	{
		RunSummary runSummarysObject;
		if(!valueRunSummarysRunSummary["Id"].isNull())
			runSummarysObject.id = std::stol(valueRunSummarysRunSummary["Id"].asString());
		if(!valueRunSummarysRunSummary["ActualState"].isNull())
			runSummarysObject.actualState = valueRunSummarysRunSummary["ActualState"].asString();
		if(!valueRunSummarysRunSummary["ExpectState"].isNull())
			runSummarysObject.expectState = valueRunSummarysRunSummary["ExpectState"].asString();
		if(!valueRunSummarysRunSummary["LastErrorTime"].isNull())
			runSummarysObject.lastErrorTime = std::stol(valueRunSummarysRunSummary["LastErrorTime"].asString());
		if(!valueRunSummarysRunSummary["LastErrorMessage"].isNull())
			runSummarysObject.lastErrorMessage = valueRunSummarysRunSummary["LastErrorMessage"].asString();
		if(!valueRunSummarysRunSummary["EngineJobHandler"].isNull())
			runSummarysObject.engineJobHandler = valueRunSummarysRunSummary["EngineJobHandler"].asString();
		if(!valueRunSummarysRunSummary["InputDelay"].isNull())
			runSummarysObject.inputDelay = std::stol(valueRunSummarysRunSummary["InputDelay"].asString());
		if(!valueRunSummarysRunSummary["JobName"].isNull())
			runSummarysObject.jobName = valueRunSummarysRunSummary["JobName"].asString();
		runSummarys_.push_back(runSummarysObject);
	}

}

std::vector<BatchGetInstanceRunSummaryResult::RunSummary> BatchGetInstanceRunSummaryResult::getRunSummarys()const
{
	return runSummarys_;
}

