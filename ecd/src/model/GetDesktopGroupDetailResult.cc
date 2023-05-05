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

#include <alibabacloud/ecd/model/GetDesktopGroupDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

GetDesktopGroupDetailResult::GetDesktopGroupDetailResult() :
	ServiceResult()
{}

GetDesktopGroupDetailResult::GetDesktopGroupDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDesktopGroupDetailResult::~GetDesktopGroupDetailResult()
{}

void GetDesktopGroupDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto desktopsNode = value["Desktops"];
	if(!desktopsNode["Status"].isNull())
		desktops_.status = std::stoi(desktopsNode["Status"].asString());
	if(!desktopsNode["CreationTime"].isNull())
		desktops_.creationTime = desktopsNode["CreationTime"].asString();
	if(!desktopsNode["PayType"].isNull())
		desktops_.payType = desktopsNode["PayType"].asString();
	if(!desktopsNode["ResetType"].isNull())
		desktops_.resetType = std::stoi(desktopsNode["ResetType"].asString());
	if(!desktopsNode["LoadPolicy"].isNull())
		desktops_.loadPolicy = std::stoi(desktopsNode["LoadPolicy"].asString());
	if(!desktopsNode["PolicyGroupName"].isNull())
		desktops_.policyGroupName = desktopsNode["PolicyGroupName"].asString();
	if(!desktopsNode["Creator"].isNull())
		desktops_.creator = desktopsNode["Creator"].asString();
	if(!desktopsNode["MaxDesktopsCount"].isNull())
		desktops_.maxDesktopsCount = std::stoi(desktopsNode["MaxDesktopsCount"].asString());
	if(!desktopsNode["AllowAutoSetup"].isNull())
		desktops_.allowAutoSetup = std::stoi(desktopsNode["AllowAutoSetup"].asString());
	if(!desktopsNode["ResType"].isNull())
		desktops_.resType = std::stoi(desktopsNode["ResType"].asString());
	if(!desktopsNode["SystemDiskSize"].isNull())
		desktops_.systemDiskSize = std::stoi(desktopsNode["SystemDiskSize"].asString());
	if(!desktopsNode["PolicyGroupId"].isNull())
		desktops_.policyGroupId = desktopsNode["PolicyGroupId"].asString();
	if(!desktopsNode["OwnBundleId"].isNull())
		desktops_.ownBundleId = desktopsNode["OwnBundleId"].asString();
	if(!desktopsNode["GpuCount"].isNull())
		desktops_.gpuCount = std::stof(desktopsNode["GpuCount"].asString());
	if(!desktopsNode["AllowBufferCount"].isNull())
		desktops_.allowBufferCount = std::stoi(desktopsNode["AllowBufferCount"].asString());
	if(!desktopsNode["Memory"].isNull())
		desktops_.memory = std::stol(desktopsNode["Memory"].asString());
	if(!desktopsNode["GpuSpec"].isNull())
		desktops_.gpuSpec = desktopsNode["GpuSpec"].asString();
	if(!desktopsNode["DirectoryId"].isNull())
		desktops_.directoryId = desktopsNode["DirectoryId"].asString();
	if(!desktopsNode["OwnBundleName"].isNull())
		desktops_.ownBundleName = desktopsNode["OwnBundleName"].asString();
	if(!desktopsNode["DataDiskCategory"].isNull())
		desktops_.dataDiskCategory = desktopsNode["DataDiskCategory"].asString();
	if(!desktopsNode["DesktopGroupName"].isNull())
		desktops_.desktopGroupName = desktopsNode["DesktopGroupName"].asString();
	if(!desktopsNode["BindAmount"].isNull())
		desktops_.bindAmount = std::stoi(desktopsNode["BindAmount"].asString());
	if(!desktopsNode["OwnType"].isNull())
		desktops_.ownType = std::stoi(desktopsNode["OwnType"].asString());
	if(!desktopsNode["SystemDiskCategory"].isNull())
		desktops_.systemDiskCategory = desktopsNode["SystemDiskCategory"].asString();
	if(!desktopsNode["OfficeSiteId"].isNull())
		desktops_.officeSiteId = desktopsNode["OfficeSiteId"].asString();
	if(!desktopsNode["KeepDuration"].isNull())
		desktops_.keepDuration = std::stol(desktopsNode["KeepDuration"].asString());
	if(!desktopsNode["MinDesktopsCount"].isNull())
		desktops_.minDesktopsCount = std::stoi(desktopsNode["MinDesktopsCount"].asString());
	if(!desktopsNode["DataDiskSize"].isNull())
		desktops_.dataDiskSize = desktopsNode["DataDiskSize"].asString();
	if(!desktopsNode["DesktopGroupId"].isNull())
		desktops_.desktopGroupId = desktopsNode["DesktopGroupId"].asString();
	if(!desktopsNode["OfficeSiteName"].isNull())
		desktops_.officeSiteName = desktopsNode["OfficeSiteName"].asString();
	if(!desktopsNode["DirectoryType"].isNull())
		desktops_.directoryType = desktopsNode["DirectoryType"].asString();
	if(!desktopsNode["Cpu"].isNull())
		desktops_.cpu = std::stoi(desktopsNode["Cpu"].asString());
	if(!desktopsNode["ExpiredTime"].isNull())
		desktops_.expiredTime = desktopsNode["ExpiredTime"].asString();
	if(!desktopsNode["Comments"].isNull())
		desktops_.comments = desktopsNode["Comments"].asString();
	if(!desktopsNode["OfficeSiteType"].isNull())
		desktops_.officeSiteType = desktopsNode["OfficeSiteType"].asString();
	if(!desktopsNode["RatioThreshold"].isNull())
		desktops_.ratioThreshold = std::stof(desktopsNode["RatioThreshold"].asString());
	if(!desktopsNode["ConnectDuration"].isNull())
		desktops_.connectDuration = std::stol(desktopsNode["ConnectDuration"].asString());
	if(!desktopsNode["IdleDisconnectDuration"].isNull())
		desktops_.idleDisconnectDuration = std::stol(desktopsNode["IdleDisconnectDuration"].asString());
	if(!desktopsNode["Version"].isNull())
		desktops_.version = std::stol(desktopsNode["Version"].asString());
	if(!desktopsNode["StopDuration"].isNull())
		desktops_.stopDuration = std::stol(desktopsNode["StopDuration"].asString());
	if(!desktopsNode["ProfileFollowSwitch"].isNull())
		desktops_.profileFollowSwitch = desktopsNode["ProfileFollowSwitch"].asString() == "true";
	if(!desktopsNode["NasFileSystemID"].isNull())
		desktops_.nasFileSystemID = desktopsNode["NasFileSystemID"].asString();
	if(!desktopsNode["NasFileSystemName"].isNull())
		desktops_.nasFileSystemName = desktopsNode["NasFileSystemName"].asString();
	if(!desktopsNode["TimingStrategyInfo"].isNull())
		desktops_.timingStrategyInfo = desktopsNode["TimingStrategyInfo"].asString();
	if(!desktopsNode["BuyDesktopsCount"].isNull())
		desktops_.buyDesktopsCount = std::stoi(desktopsNode["BuyDesktopsCount"].asString());
	if(!desktopsNode["ImageId"].isNull())
		desktops_.imageId = desktopsNode["ImageId"].asString();
	auto allTimerInfosNode = desktopsNode["TimerInfos"]["TimerInfo"];
	for (auto desktopsNodeTimerInfosTimerInfo : allTimerInfosNode)
	{
		Desktops::TimerInfo timerInfoObject;
		if(!desktopsNodeTimerInfosTimerInfo["Status"].isNull())
			timerInfoObject.status = std::stoi(desktopsNodeTimerInfosTimerInfo["Status"].asString());
		if(!desktopsNodeTimerInfosTimerInfo["CronExpression"].isNull())
			timerInfoObject.cronExpression = desktopsNodeTimerInfosTimerInfo["CronExpression"].asString();
		if(!desktopsNodeTimerInfosTimerInfo["TimerType"].isNull())
			timerInfoObject.timerType = std::stoi(desktopsNodeTimerInfosTimerInfo["TimerType"].asString());
		if(!desktopsNodeTimerInfosTimerInfo["Forced"].isNull())
			timerInfoObject.forced = desktopsNodeTimerInfosTimerInfo["Forced"].asString() == "true";
		desktops_.timerInfos.push_back(timerInfoObject);
	}
	auto allScaleTimerInfosNode = desktopsNode["ScaleTimerInfos"]["ScaleTimerInfo"];
	for (auto desktopsNodeScaleTimerInfosScaleTimerInfo : allScaleTimerInfosNode)
	{
		Desktops::ScaleTimerInfo scaleTimerInfoObject;
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["Type"].isNull())
			scaleTimerInfoObject.type = desktopsNodeScaleTimerInfosScaleTimerInfo["Type"].asString();
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["Cron"].isNull())
			scaleTimerInfoObject.cron = desktopsNodeScaleTimerInfosScaleTimerInfo["Cron"].asString();
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["LoadPolicy"].isNull())
			scaleTimerInfoObject.loadPolicy = std::stoi(desktopsNodeScaleTimerInfosScaleTimerInfo["LoadPolicy"].asString());
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["BuyResAmount"].isNull())
			scaleTimerInfoObject.buyResAmount = std::stoi(desktopsNodeScaleTimerInfosScaleTimerInfo["BuyResAmount"].asString());
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["MinResAmount"].isNull())
			scaleTimerInfoObject.minResAmount = std::stoi(desktopsNodeScaleTimerInfosScaleTimerInfo["MinResAmount"].asString());
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["MaxResAmount"].isNull())
			scaleTimerInfoObject.maxResAmount = std::stoi(desktopsNodeScaleTimerInfosScaleTimerInfo["MaxResAmount"].asString());
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["KeepDuration"].isNull())
			scaleTimerInfoObject.keepDuration = std::stol(desktopsNodeScaleTimerInfosScaleTimerInfo["KeepDuration"].asString());
		if(!desktopsNodeScaleTimerInfosScaleTimerInfo["RatioThreshold"].isNull())
			scaleTimerInfoObject.ratioThreshold = std::stof(desktopsNodeScaleTimerInfosScaleTimerInfo["RatioThreshold"].asString());
		desktops_.scaleTimerInfos.push_back(scaleTimerInfoObject);
	}
		auto allPolicyGroupIds = desktopsNode["PolicyGroupIds"]["policyGroupId"];
		for (auto value : allPolicyGroupIds)
			desktops_.policyGroupIds.push_back(value.asString());
		auto allPolicyGroupNames = desktopsNode["PolicyGroupNames"]["policyGroupName"];
		for (auto value : allPolicyGroupNames)
			desktops_.policyGroupNames.push_back(value.asString());

}

GetDesktopGroupDetailResult::Desktops GetDesktopGroupDetailResult::getDesktops()const
{
	return desktops_;
}

