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

#include <alibabacloud/arms/model/GetConsistencySnapshotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetConsistencySnapshotResult::GetConsistencySnapshotResult() :
	ServiceResult()
{}

GetConsistencySnapshotResult::GetConsistencySnapshotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConsistencySnapshotResult::~GetConsistencySnapshotResult()
{}

void GetConsistencySnapshotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto consistencyResultNode = value["ConsistencyResult"];
	if(!consistencyResultNode["JudgeTimestamp"].isNull())
		consistencyResult_.judgeTimestamp = std::stol(consistencyResultNode["JudgeTimestamp"].asString());
	if(!consistencyResultNode["LastSlsShardWatermarkTimestamp"].isNull())
		consistencyResult_.lastSlsShardWatermarkTimestamp = std::stol(consistencyResultNode["LastSlsShardWatermarkTimestamp"].asString());
	if(!consistencyResultNode["LastAgentInfoTimestamp"].isNull())
		consistencyResult_.lastAgentInfoTimestamp = std::stol(consistencyResultNode["LastAgentInfoTimestamp"].asString());
	if(!consistencyResultNode["BarrierPointsLastTimestampMap"].isNull())
		consistencyResult_.barrierPointsLastTimestampMap = consistencyResultNode["BarrierPointsLastTimestampMap"].asString();
	if(!consistencyResultNode["LastBarrierTimestamp"].isNull())
		consistencyResult_.lastBarrierTimestamp = std::stol(consistencyResultNode["LastBarrierTimestamp"].asString());
	auto allAgentHeartbeatInfosNode = consistencyResultNode["AgentHeartbeatInfos"]["AgentHeartbeatInfo"];
	for (auto consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo : allAgentHeartbeatInfosNode)
	{
		ConsistencyResult::AgentHeartbeatInfo agentHeartbeatInfoObject;
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["RegionId"].isNull())
			agentHeartbeatInfoObject.regionId = consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["RegionId"].asString();
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["AppType"].isNull())
			agentHeartbeatInfoObject.appType = consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["AppType"].asString();
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["Pid"].isNull())
			agentHeartbeatInfoObject.pid = consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["Pid"].asString();
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["Ip"].isNull())
			agentHeartbeatInfoObject.ip = consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["Ip"].asString();
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["StartTimestamp"].isNull())
			agentHeartbeatInfoObject.startTimestamp = std::stol(consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["StartTimestamp"].asString());
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["Hostname"].isNull())
			agentHeartbeatInfoObject.hostname = consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["Hostname"].asString();
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["ProcId"].isNull())
			agentHeartbeatInfoObject.procId = consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["ProcId"].asString();
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["AgentVersion"].isNull())
			agentHeartbeatInfoObject.agentVersion = consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["AgentVersion"].asString();
		if(!consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["LastHeartbeatTime"].isNull())
			agentHeartbeatInfoObject.lastHeartbeatTime = std::stol(consistencyResultNodeAgentHeartbeatInfosAgentHeartbeatInfo["LastHeartbeatTime"].asString());
		consistencyResult_.agentHeartbeatInfos.push_back(agentHeartbeatInfoObject);
	}
	auto slsShardWatermarkBeanNode = consistencyResultNode["SlsShardWatermarkBean"];
	if(!slsShardWatermarkBeanNode["Pid"].isNull())
		consistencyResult_.slsShardWatermarkBean.pid = slsShardWatermarkBeanNode["Pid"].asString();
	if(!slsShardWatermarkBeanNode["UserId"].isNull())
		consistencyResult_.slsShardWatermarkBean.userId = slsShardWatermarkBeanNode["UserId"].asString();
	if(!slsShardWatermarkBeanNode["RegionId"].isNull())
		consistencyResult_.slsShardWatermarkBean.regionId = slsShardWatermarkBeanNode["RegionId"].asString();
	if(!slsShardWatermarkBeanNode["AppType"].isNull())
		consistencyResult_.slsShardWatermarkBean.appType = slsShardWatermarkBeanNode["AppType"].asString();
	auto allCheckPointResponsesNode = slsShardWatermarkBeanNode["CheckPointResponses"]["CheckPointResponse"];
	for (auto slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse : allCheckPointResponsesNode)
	{
		ConsistencyResult::SlsShardWatermarkBean::CheckPointResponse checkPointResponseObject;
		if(!slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["Shard"].isNull())
			checkPointResponseObject.shard = std::stoi(slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["Shard"].asString());
		if(!slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["CheckPoint"].isNull())
			checkPointResponseObject.checkPoint = slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["CheckPoint"].asString();
		if(!slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["UpdateTime"].isNull())
			checkPointResponseObject.updateTime = std::stol(slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["UpdateTime"].asString());
		if(!slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["Consumer"].isNull())
			checkPointResponseObject.consumer = slsShardWatermarkBeanNodeCheckPointResponsesCheckPointResponse["Consumer"].asString();
		consistencyResult_.slsShardWatermarkBean.checkPointResponses.push_back(checkPointResponseObject);
	}
		auto allCursorUpdateTimes = slsShardWatermarkBeanNode["CursorUpdateTimes"]["CursorUpdateTime"];
		for (auto value : allCursorUpdateTimes)
			consistencyResult_.slsShardWatermarkBean.cursorUpdateTimes.push_back(value.asString());

}

GetConsistencySnapshotResult::ConsistencyResult GetConsistencySnapshotResult::getConsistencyResult()const
{
	return consistencyResult_;
}

