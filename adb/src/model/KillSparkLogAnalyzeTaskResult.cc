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

#include <alibabacloud/adb/model/KillSparkLogAnalyzeTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

KillSparkLogAnalyzeTaskResult::KillSparkLogAnalyzeTaskResult() :
	ServiceResult()
{}

KillSparkLogAnalyzeTaskResult::KillSparkLogAnalyzeTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

KillSparkLogAnalyzeTaskResult::~KillSparkLogAnalyzeTaskResult()
{}

void KillSparkLogAnalyzeTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskId"].isNull())
		data_.taskId = std::stol(dataNode["TaskId"].asString());
	if(!dataNode["UserId"].isNull())
		data_.userId = std::stol(dataNode["UserId"].asString());
	if(!dataNode["SubmittedTimeInMillis"].isNull())
		data_.submittedTimeInMillis = std::stol(dataNode["SubmittedTimeInMillis"].asString());
	if(!dataNode["TerminatedTimeInMillis"].isNull())
		data_.terminatedTimeInMillis = std::stol(dataNode["TerminatedTimeInMillis"].asString());
	if(!dataNode["TaskState"].isNull())
		data_.taskState = dataNode["TaskState"].asString();
	if(!dataNode["StartedTimeInMillis"].isNull())
		data_.startedTimeInMillis = std::stol(dataNode["StartedTimeInMillis"].asString());
	if(!dataNode["RuleMatched"].isNull())
		data_.ruleMatched = dataNode["RuleMatched"].asString() == "true";
	if(!dataNode["TaskErrMsg"].isNull())
		data_.taskErrMsg = dataNode["TaskErrMsg"].asString();
	if(!dataNode["DBClusterId"].isNull())
		data_.dBClusterId = dataNode["DBClusterId"].asString();
	auto resultNode = dataNode["Result"];
	if(!resultNode["AppErrorCode"].isNull())
		data_.result.appErrorCode = resultNode["AppErrorCode"].asString();
	if(!resultNode["AppErrorLog"].isNull())
		data_.result.appErrorLog = resultNode["AppErrorLog"].asString();
	if(!resultNode["AppErrorAdvice"].isNull())
		data_.result.appErrorAdvice = resultNode["AppErrorAdvice"].asString();

}

KillSparkLogAnalyzeTaskResult::Data KillSparkLogAnalyzeTaskResult::getData()const
{
	return data_;
}

