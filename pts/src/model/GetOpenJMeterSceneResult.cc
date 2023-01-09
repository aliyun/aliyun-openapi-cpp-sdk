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

#include <alibabacloud/pts/model/GetOpenJMeterSceneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetOpenJMeterSceneResult::GetOpenJMeterSceneResult() :
	ServiceResult()
{}

GetOpenJMeterSceneResult::GetOpenJMeterSceneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOpenJMeterSceneResult::~GetOpenJMeterSceneResult()
{}

void GetOpenJMeterSceneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sceneNode = value["Scene"];
	if(!sceneNode["SceneName"].isNull())
		scene_.sceneName = sceneNode["SceneName"].asString();
	if(!sceneNode["SceneId"].isNull())
		scene_.sceneId = sceneNode["SceneId"].asString();
	if(!sceneNode["EnvironmentId"].isNull())
		scene_.environmentId = sceneNode["EnvironmentId"].asString();
	if(!sceneNode["TestFile"].isNull())
		scene_.testFile = sceneNode["TestFile"].asString();
	if(!sceneNode["IsVpcTest"].isNull())
		scene_.isVpcTest = sceneNode["IsVpcTest"].asString() == "true";
	if(!sceneNode["Duration"].isNull())
		scene_.duration = std::stoi(sceneNode["Duration"].asString());
	if(!sceneNode["Concurrency"].isNull())
		scene_.concurrency = std::stoi(sceneNode["Concurrency"].asString());
	if(!sceneNode["AgentCount"].isNull())
		scene_.agentCount = std::stoi(sceneNode["AgentCount"].asString());
	if(!sceneNode["RampUp"].isNull())
		scene_.rampUp = std::stoi(sceneNode["RampUp"].asString());
	if(!sceneNode["Steps"].isNull())
		scene_.steps = std::stoi(sceneNode["Steps"].asString());
	if(!sceneNode["RegionId"].isNull())
		scene_.regionId = sceneNode["RegionId"].asString();
	if(!sceneNode["VpcId"].isNull())
		scene_.vpcId = sceneNode["VpcId"].asString();
	if(!sceneNode["SecurityGroupId"].isNull())
		scene_.securityGroupId = sceneNode["SecurityGroupId"].asString();
	if(!sceneNode["VSwitchId"].isNull())
		scene_.vSwitchId = sceneNode["VSwitchId"].asString();
	if(!sceneNode["SyncTimerType"].isNull())
		scene_.syncTimerType = sceneNode["SyncTimerType"].asString();
	if(!sceneNode["ConstantThroughputTimerType"].isNull())
		scene_.constantThroughputTimerType = sceneNode["ConstantThroughputTimerType"].asString();
	if(!sceneNode["Pool"].isNull())
		scene_.pool = sceneNode["Pool"].asString();
	if(!sceneNode["Mode"].isNull())
		scene_.mode = sceneNode["Mode"].asString();
	if(!sceneNode["StartRps"].isNull())
		scene_.startRps = std::stoi(sceneNode["StartRps"].asString());
	if(!sceneNode["MaxRps"].isNull())
		scene_.maxRps = std::stoi(sceneNode["MaxRps"].asString());
	if(!sceneNode["StartConcurrency"].isNull())
		scene_.startConcurrency = std::stoi(sceneNode["StartConcurrency"].asString());
	auto allFileListNode = sceneNode["FileList"]["fileListItem"];
	for (auto sceneNodeFileListfileListItem : allFileListNode)
	{
		Scene::FileListItem fileListItemObject;
		if(!sceneNodeFileListfileListItem["Id"].isNull())
			fileListItemObject.id = std::stol(sceneNodeFileListfileListItem["Id"].asString());
		if(!sceneNodeFileListfileListItem["FileName"].isNull())
			fileListItemObject.fileName = sceneNodeFileListfileListItem["FileName"].asString();
		if(!sceneNodeFileListfileListItem["FileOssAddress"].isNull())
			fileListItemObject.fileOssAddress = sceneNodeFileListfileListItem["FileOssAddress"].asString();
		if(!sceneNodeFileListfileListItem["SplitCsv"].isNull())
			fileListItemObject.splitCsv = sceneNodeFileListfileListItem["SplitCsv"].asString() == "true";
		if(!sceneNodeFileListfileListItem["Md5"].isNull())
			fileListItemObject.md5 = sceneNodeFileListfileListItem["Md5"].asString();
		if(!sceneNodeFileListfileListItem["FileSize"].isNull())
			fileListItemObject.fileSize = std::stol(sceneNodeFileListfileListItem["FileSize"].asString());
		if(!sceneNodeFileListfileListItem["FileType"].isNull())
			fileListItemObject.fileType = sceneNodeFileListfileListItem["FileType"].asString();
		scene_.fileList.push_back(fileListItemObject);
	}
	auto baseInfoNode = sceneNode["BaseInfo"];
	if(!baseInfoNode["Remark"].isNull())
		scene_.baseInfo.remark = baseInfoNode["Remark"].asString();
	if(!baseInfoNode["Principal"].isNull())
		scene_.baseInfo.principal = baseInfoNode["Principal"].asString();
	if(!baseInfoNode["Resource"].isNull())
		scene_.baseInfo.resource = baseInfoNode["Resource"].asString();
	if(!baseInfoNode["CreateName"].isNull())
		scene_.baseInfo.createName = baseInfoNode["CreateName"].asString();
	if(!baseInfoNode["ModifyName"].isNull())
		scene_.baseInfo.modifyName = baseInfoNode["ModifyName"].asString();
	if(!baseInfoNode["OperateType"].isNull())
		scene_.baseInfo.operateType = baseInfoNode["OperateType"].asString();
	auto dnsCacheConfigNode = sceneNode["DnsCacheConfig"];
	if(!dnsCacheConfigNode["ClearCacheEachIteration"].isNull())
		scene_.dnsCacheConfig.clearCacheEachIteration = dnsCacheConfigNode["ClearCacheEachIteration"].asString() == "true";
	if(!dnsCacheConfigNode["HostTable"].isNull())
		scene_.dnsCacheConfig.hostTable = dnsCacheConfigNode["HostTable"].asString();
		auto allDnsServers = dnsCacheConfigNode["DnsServers"]["dnsServers"];
		for (auto value : allDnsServers)
			scene_.dnsCacheConfig.dnsServers.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetOpenJMeterSceneResult::getMessage()const
{
	return message_;
}

int GetOpenJMeterSceneResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetOpenJMeterSceneResult::Scene GetOpenJMeterSceneResult::getScene()const
{
	return scene_;
}

std::string GetOpenJMeterSceneResult::getCode()const
{
	return code_;
}

bool GetOpenJMeterSceneResult::getSuccess()const
{
	return success_;
}

