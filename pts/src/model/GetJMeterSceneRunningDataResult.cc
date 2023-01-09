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

#include <alibabacloud/pts/model/GetJMeterSceneRunningDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetJMeterSceneRunningDataResult::GetJMeterSceneRunningDataResult() :
	ServiceResult()
{}

GetJMeterSceneRunningDataResult::GetJMeterSceneRunningDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJMeterSceneRunningDataResult::~GetJMeterSceneRunningDataResult()
{}

void GetJMeterSceneRunningDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto runningDataNode = value["RunningData"];
	if(!runningDataNode["SceneId"].isNull())
		runningData_.sceneId = runningDataNode["SceneId"].asString();
	if(!runningDataNode["SceneName"].isNull())
		runningData_.sceneName = runningDataNode["SceneName"].asString();
	if(!runningDataNode["HoldFor"].isNull())
		runningData_.holdFor = std::stoi(runningDataNode["HoldFor"].asString());
	if(!runningDataNode["AgentCount"].isNull())
		runningData_.agentCount = std::stoi(runningDataNode["AgentCount"].asString());
	if(!runningDataNode["Concurrency"].isNull())
		runningData_.concurrency = std::stoi(runningDataNode["Concurrency"].asString());
	if(!runningDataNode["HasReport"].isNull())
		runningData_.hasReport = runningDataNode["HasReport"].asString() == "true";
	if(!runningDataNode["IsDebugging"].isNull())
		runningData_.isDebugging = runningDataNode["IsDebugging"].asString() == "true";
	if(!runningDataNode["Status"].isNull())
		runningData_.status = runningDataNode["Status"].asString();
	if(!runningDataNode["Vum"].isNull())
		runningData_.vum = std::stol(runningDataNode["Vum"].asString());
	if(!runningDataNode["StartTimeTS"].isNull())
		runningData_.startTimeTS = std::stol(runningDataNode["StartTimeTS"].asString());
	if(!runningDataNode["StageName"].isNull())
		runningData_.stageName = runningDataNode["StageName"].asString();
	if(!runningDataNode["AllSampleStat"].isNull())
		runningData_.allSampleStat = runningDataNode["AllSampleStat"].asString();
		auto allAgentIdList = runningDataNode["AgentIdList"]["agentIdList"];
		for (auto value : allAgentIdList)
			runningData_.agentIdList.push_back(value.asString());
		auto allSampleStatList = runningDataNode["SampleStatList"]["sampleStatList"];
		for (auto value : allSampleStatList)
			runningData_.sampleStatList.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DocumentUrl"].isNull())
		documentUrl_ = value["DocumentUrl"].asString();

}

GetJMeterSceneRunningDataResult::RunningData GetJMeterSceneRunningDataResult::getRunningData()const
{
	return runningData_;
}

std::string GetJMeterSceneRunningDataResult::getMessage()const
{
	return message_;
}

int GetJMeterSceneRunningDataResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetJMeterSceneRunningDataResult::getDocumentUrl()const
{
	return documentUrl_;
}

std::string GetJMeterSceneRunningDataResult::getCode()const
{
	return code_;
}

bool GetJMeterSceneRunningDataResult::getSuccess()const
{
	return success_;
}

