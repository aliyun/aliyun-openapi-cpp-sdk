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
	auto allRunSummarys = value["RunSummarys"]["RunSummary"];
	for (auto value : allRunSummarys)
	{
		RunSummary runSummarysObject;
		if(!value["Id"].isNull())
			runSummarysObject.id = std::stol(value["Id"].asString());
		if(!value["ActualState"].isNull())
			runSummarysObject.actualState = value["ActualState"].asString();
		if(!value["ExpectState"].isNull())
			runSummarysObject.expectState = value["ExpectState"].asString();
		if(!value["LastErrorTime"].isNull())
			runSummarysObject.lastErrorTime = std::stol(value["LastErrorTime"].asString());
		if(!value["LastErrorMessage"].isNull())
			runSummarysObject.lastErrorMessage = value["LastErrorMessage"].asString();
		if(!value["EngineJobHandler"].isNull())
			runSummarysObject.engineJobHandler = value["EngineJobHandler"].asString();
		if(!value["InputDelay"].isNull())
			runSummarysObject.inputDelay = std::stol(value["InputDelay"].asString());
		if(!value["JobName"].isNull())
			runSummarysObject.jobName = value["JobName"].asString();
		runSummarys_.push_back(runSummarysObject);
	}

}

std::vector<BatchGetInstanceRunSummaryResult::RunSummary> BatchGetInstanceRunSummaryResult::getRunSummarys()const
{
	return runSummarys_;
}

