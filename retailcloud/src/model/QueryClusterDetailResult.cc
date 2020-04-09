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

#include <alibabacloud/retailcloud/model/QueryClusterDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

QueryClusterDetailResult::QueryClusterDetailResult() :
	ServiceResult()
{}

QueryClusterDetailResult::QueryClusterDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryClusterDetailResult::~QueryClusterDetailResult()
{}

void QueryClusterDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto basicInfoNode = resultNode["BasicInfo"];
	if(!basicInfoNode["BusinessCode"].isNull())
		result_.basicInfo.businessCode = basicInfoNode["BusinessCode"].asString();
	if(!basicInfoNode["ClusterId"].isNull())
		result_.basicInfo.clusterId = std::stol(basicInfoNode["ClusterId"].asString());
	if(!basicInfoNode["ClusterInstanceId"].isNull())
		result_.basicInfo.clusterInstanceId = basicInfoNode["ClusterInstanceId"].asString();
	if(!basicInfoNode["ClusterName"].isNull())
		result_.basicInfo.clusterName = basicInfoNode["ClusterName"].asString();
	if(!basicInfoNode["EnvType"].isNull())
		result_.basicInfo.envType = basicInfoNode["EnvType"].asString();
	if(!basicInfoNode["HasInstallArmsPilot"].isNull())
		result_.basicInfo.hasInstallArmsPilot = basicInfoNode["HasInstallArmsPilot"].asString() == "true";
	if(!basicInfoNode["HasInstallLogController"].isNull())
		result_.basicInfo.hasInstallLogController = basicInfoNode["HasInstallLogController"].asString() == "true";
	if(!basicInfoNode["InstallArmsInProcess"].isNull())
		result_.basicInfo.installArmsInProcess = basicInfoNode["InstallArmsInProcess"].asString() == "true";
	if(!basicInfoNode["InstallLogInProcess"].isNull())
		result_.basicInfo.installLogInProcess = basicInfoNode["InstallLogInProcess"].asString() == "true";
	if(!basicInfoNode["MainUserId"].isNull())
		result_.basicInfo.mainUserId = basicInfoNode["MainUserId"].asString();
	if(!basicInfoNode["RegionId"].isNull())
		result_.basicInfo.regionId = basicInfoNode["RegionId"].asString();
	if(!basicInfoNode["RegionName"].isNull())
		result_.basicInfo.regionName = basicInfoNode["RegionName"].asString();
	if(!basicInfoNode["UserNick"].isNull())
		result_.basicInfo.userNick = basicInfoNode["UserNick"].asString();
	if(!basicInfoNode["VpcId"].isNull())
		result_.basicInfo.vpcId = basicInfoNode["VpcId"].asString();
		auto allEcsIds = basicInfoNode["EcsIds"]["String"];
		for (auto value : allEcsIds)
			result_.basicInfo.ecsIds.push_back(value.asString());
		auto allVswitchs = basicInfoNode["Vswitchs"]["String"];
		for (auto value : allVswitchs)
			result_.basicInfo.vswitchs.push_back(value.asString());
	auto instanceInfoNode = resultNode["InstanceInfo"];
	if(!instanceInfoNode["AllocatePodCount"].isNull())
		result_.instanceInfo.allocatePodCount = std::stoi(instanceInfoNode["AllocatePodCount"].asString());
	if(!instanceInfoNode["AppCount"].isNull())
		result_.instanceInfo.appCount = std::stoi(instanceInfoNode["AppCount"].asString());
		auto allAllocatedPodInfoList = instanceInfoNode["AllocatedPodInfoList"]["AllocatedPodInstanceInfo"];
		for (auto value : allAllocatedPodInfoList)
			result_.instanceInfo.allocatedPodInfoList.push_back(value.asString());
		auto allAvailablePodInfoList = instanceInfoNode["AvailablePodInfoList"]["AvailablePodInstanceInfo"];
		for (auto value : allAvailablePodInfoList)
			result_.instanceInfo.availablePodInfoList.push_back(value.asString());
	auto netInfoNode = resultNode["NetInfo"];
	if(!netInfoNode["NetPlugType"].isNull())
		result_.netInfo.netPlugType = netInfoNode["NetPlugType"].asString();
	if(!netInfoNode["ProdCIDR"].isNull())
		result_.netInfo.prodCIDR = netInfoNode["ProdCIDR"].asString();
	if(!netInfoNode["ServiceCIDR"].isNull())
		result_.netInfo.serviceCIDR = netInfoNode["ServiceCIDR"].asString();
	auto workLoadNode = resultNode["WorkLoad"];
	if(!workLoadNode["AllNodeCount"].isNull())
		result_.workLoad.allNodeCount = std::stoi(workLoadNode["AllNodeCount"].asString());
	if(!workLoadNode["AllocateAllPodCount"].isNull())
		result_.workLoad.allocateAllPodCount = std::stoi(workLoadNode["AllocateAllPodCount"].asString());
	if(!workLoadNode["AllocateAppPodCount"].isNull())
		result_.workLoad.allocateAppPodCount = std::stoi(workLoadNode["AllocateAppPodCount"].asString());
	if(!workLoadNode["CpuCapacityTotal"].isNull())
		result_.workLoad.cpuCapacityTotal = workLoadNode["CpuCapacityTotal"].asString();
	if(!workLoadNode["CpuLevel"].isNull())
		result_.workLoad.cpuLevel = workLoadNode["CpuLevel"].asString();
	if(!workLoadNode["CpuRequest"].isNull())
		result_.workLoad.cpuRequest = workLoadNode["CpuRequest"].asString();
	if(!workLoadNode["CpuRequestPercent"].isNull())
		result_.workLoad.cpuRequestPercent = workLoadNode["CpuRequestPercent"].asString();
	if(!workLoadNode["CpuTotal"].isNull())
		result_.workLoad.cpuTotal = workLoadNode["CpuTotal"].asString();
	if(!workLoadNode["CpuUse"].isNull())
		result_.workLoad.cpuUse = workLoadNode["CpuUse"].asString();
	if(!workLoadNode["CpuUsePercent"].isNull())
		result_.workLoad.cpuUsePercent = workLoadNode["CpuUsePercent"].asString();
	if(!workLoadNode["MemCapacityTotal"].isNull())
		result_.workLoad.memCapacityTotal = workLoadNode["MemCapacityTotal"].asString();
	if(!workLoadNode["MemLevel"].isNull())
		result_.workLoad.memLevel = workLoadNode["MemLevel"].asString();
	if(!workLoadNode["MemRequest"].isNull())
		result_.workLoad.memRequest = workLoadNode["MemRequest"].asString();
	if(!workLoadNode["MemRequestPercent"].isNull())
		result_.workLoad.memRequestPercent = workLoadNode["MemRequestPercent"].asString();
	if(!workLoadNode["MemTotal"].isNull())
		result_.workLoad.memTotal = workLoadNode["MemTotal"].asString();
	if(!workLoadNode["MemUse"].isNull())
		result_.workLoad.memUse = workLoadNode["MemUse"].asString();
	if(!workLoadNode["MemUsePercent"].isNull())
		result_.workLoad.memUsePercent = workLoadNode["MemUsePercent"].asString();
		auto allNodeWorkLoadList = resultNode["NodeWorkLoadList"]["ClusterNodeWorkLoad"];
		for (auto value : allNodeWorkLoadList)
			result_.nodeWorkLoadList.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryClusterDetailResult::getErrMsg()const
{
	return errMsg_;
}

int QueryClusterDetailResult::getCode()const
{
	return code_;
}

bool QueryClusterDetailResult::getSuccess()const
{
	return success_;
}

QueryClusterDetailResult::Result QueryClusterDetailResult::getResult()const
{
	return result_;
}

