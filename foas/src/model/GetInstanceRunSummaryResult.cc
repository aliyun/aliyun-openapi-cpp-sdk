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

#include <alibabacloud/foas/model/GetInstanceRunSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetInstanceRunSummaryResult::GetInstanceRunSummaryResult() :
	ServiceResult()
{}

GetInstanceRunSummaryResult::GetInstanceRunSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceRunSummaryResult::~GetInstanceRunSummaryResult()
{}

void GetInstanceRunSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto runSummaryNode = value["RunSummary"];
	if(!runSummaryNode["Id"].isNull())
		runSummary_.id = std::stol(runSummaryNode["Id"].asString());
	if(!runSummaryNode["ActualState"].isNull())
		runSummary_.actualState = runSummaryNode["ActualState"].asString();
	if(!runSummaryNode["ExpectState"].isNull())
		runSummary_.expectState = runSummaryNode["ExpectState"].asString();
	if(!runSummaryNode["LastErrorTime"].isNull())
		runSummary_.lastErrorTime = std::stol(runSummaryNode["LastErrorTime"].asString());
	if(!runSummaryNode["LastErrorMessage"].isNull())
		runSummary_.lastErrorMessage = runSummaryNode["LastErrorMessage"].asString();
	if(!runSummaryNode["EngineJobHandler"].isNull())
		runSummary_.engineJobHandler = runSummaryNode["EngineJobHandler"].asString();
	if(!runSummaryNode["InputDelay"].isNull())
		runSummary_.inputDelay = std::stol(runSummaryNode["InputDelay"].asString());
	if(!runSummaryNode["JobName"].isNull())
		runSummary_.jobName = runSummaryNode["JobName"].asString();

}

GetInstanceRunSummaryResult::RunSummary GetInstanceRunSummaryResult::getRunSummary()const
{
	return runSummary_;
}

