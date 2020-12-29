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

#include <alibabacloud/ehpc/model/GetHealthMonitorLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetHealthMonitorLogsResult::GetHealthMonitorLogsResult() :
	ServiceResult()
{}

GetHealthMonitorLogsResult::GetHealthMonitorLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHealthMonitorLogsResult::~GetHealthMonitorLogsResult()
{}

void GetHealthMonitorLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogInfoNode = value["LogInfo"]["Logs"];
	for (auto valueLogInfoLogs : allLogInfoNode)
	{
		Logs logInfoObject;
		if(!valueLogInfoLogs["HealthId"].isNull())
			logInfoObject.healthId = valueLogInfoLogs["HealthId"].asString();
		if(!valueLogInfoLogs["HostName"].isNull())
			logInfoObject.hostName = valueLogInfoLogs["HostName"].asString();
		if(!valueLogInfoLogs["InstanceId"].isNull())
			logInfoObject.instanceId = valueLogInfoLogs["InstanceId"].asString();
		if(!valueLogInfoLogs["ItemDescription"].isNull())
			logInfoObject.itemDescription = valueLogInfoLogs["ItemDescription"].asString();
		if(!valueLogInfoLogs["ItemName"].isNull())
			logInfoObject.itemName = valueLogInfoLogs["ItemName"].asString();
		if(!valueLogInfoLogs["Level"].isNull())
			logInfoObject.level = valueLogInfoLogs["Level"].asString();
		if(!valueLogInfoLogs["SceneDescription"].isNull())
			logInfoObject.sceneDescription = valueLogInfoLogs["SceneDescription"].asString();
		if(!valueLogInfoLogs["SceneName"].isNull())
			logInfoObject.sceneName = valueLogInfoLogs["SceneName"].asString();
		if(!valueLogInfoLogs["Time"].isNull())
			logInfoObject.time = std::stoi(valueLogInfoLogs["Time"].asString());
		auto allCheckListNode = valueLogInfoLogs["CheckList"]["CheckListItem"];
		for (auto valueLogInfoLogsCheckListCheckListItem : allCheckListNode)
		{
			Logs::CheckListItem checkListObject;
			if(!valueLogInfoLogsCheckListCheckListItem["CheckDescription"].isNull())
				checkListObject.checkDescription = valueLogInfoLogsCheckListCheckListItem["CheckDescription"].asString();
			if(!valueLogInfoLogsCheckListCheckListItem["CheckInfo"].isNull())
				checkListObject.checkInfo = valueLogInfoLogsCheckListCheckListItem["CheckInfo"].asString();
			if(!valueLogInfoLogsCheckListCheckListItem["CheckName"].isNull())
				checkListObject.checkName = valueLogInfoLogsCheckListCheckListItem["CheckName"].asString();
			if(!valueLogInfoLogsCheckListCheckListItem["CheckSolution"].isNull())
				checkListObject.checkSolution = valueLogInfoLogsCheckListCheckListItem["CheckSolution"].asString();
			logInfoObject.checkList.push_back(checkListObject);
		}
		logInfo_.push_back(logInfoObject);
	}

}

std::vector<GetHealthMonitorLogsResult::Logs> GetHealthMonitorLogsResult::getLogInfo()const
{
	return logInfo_;
}

