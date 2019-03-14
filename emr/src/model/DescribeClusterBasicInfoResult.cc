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

#include <alibabacloud/emr/model/DescribeClusterBasicInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterBasicInfoResult::DescribeClusterBasicInfoResult() :
	ServiceResult()
{}

DescribeClusterBasicInfoResult::DescribeClusterBasicInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterBasicInfoResult::~DescribeClusterBasicInfoResult()
{}

void DescribeClusterBasicInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto clusterInfoNode = value["ClusterInfo"];
	if(!clusterInfoNode["Id"].isNull())
		clusterInfo_.id = clusterInfoNode["Id"].asString();
	if(!clusterInfoNode["BizId"].isNull())
		clusterInfo_.bizId = clusterInfoNode["BizId"].asString();
	if(!clusterInfoNode["RegionId"].isNull())
		clusterInfo_.regionId = clusterInfoNode["RegionId"].asString();
	if(!clusterInfoNode["ZoneId"].isNull())
		clusterInfo_.zoneId = clusterInfoNode["ZoneId"].asString();
	if(!clusterInfoNode["Name"].isNull())
		clusterInfo_.name = clusterInfoNode["Name"].asString();
	if(!clusterInfoNode["CreateType"].isNull())
		clusterInfo_.createType = clusterInfoNode["CreateType"].asString();
	if(!clusterInfoNode["StartTime"].isNull())
		clusterInfo_.startTime = std::stol(clusterInfoNode["StartTime"].asString());
	if(!clusterInfoNode["StopTime"].isNull())
		clusterInfo_.stopTime = std::stol(clusterInfoNode["StopTime"].asString());
	if(!clusterInfoNode["LogEnable"].isNull())
		clusterInfo_.logEnable = clusterInfoNode["LogEnable"].asString() == "true";
	if(!clusterInfoNode["LogPath"].isNull())
		clusterInfo_.logPath = clusterInfoNode["LogPath"].asString();
	if(!clusterInfoNode["Status"].isNull())
		clusterInfo_.status = clusterInfoNode["Status"].asString();
	if(!clusterInfoNode["HighAvailabilityEnable"].isNull())
		clusterInfo_.highAvailabilityEnable = clusterInfoNode["HighAvailabilityEnable"].asString() == "true";
	if(!clusterInfoNode["ChargeType"].isNull())
		clusterInfo_.chargeType = clusterInfoNode["ChargeType"].asString();
	if(!clusterInfoNode["ExpiredTime"].isNull())
		clusterInfo_.expiredTime = std::stol(clusterInfoNode["ExpiredTime"].asString());
	if(!clusterInfoNode["Period"].isNull())
		clusterInfo_.period = std::stoi(clusterInfoNode["Period"].asString());
	if(!clusterInfoNode["RunningTime"].isNull())
		clusterInfo_.runningTime = std::stoi(clusterInfoNode["RunningTime"].asString());
	if(!clusterInfoNode["MasterNodeTotal"].isNull())
		clusterInfo_.masterNodeTotal = std::stoi(clusterInfoNode["MasterNodeTotal"].asString());
	if(!clusterInfoNode["MasterNodeInService"].isNull())
		clusterInfo_.masterNodeInService = std::stoi(clusterInfoNode["MasterNodeInService"].asString());
	if(!clusterInfoNode["CoreNodeTotal"].isNull())
		clusterInfo_.coreNodeTotal = std::stoi(clusterInfoNode["CoreNodeTotal"].asString());
	if(!clusterInfoNode["CoreNodeInService"].isNull())
		clusterInfo_.coreNodeInService = std::stoi(clusterInfoNode["CoreNodeInService"].asString());
	if(!clusterInfoNode["TaskNodeTotal"].isNull())
		clusterInfo_.taskNodeTotal = std::stoi(clusterInfoNode["TaskNodeTotal"].asString());
	if(!clusterInfoNode["TaskNodeInService"].isNull())
		clusterInfo_.taskNodeInService = std::stoi(clusterInfoNode["TaskNodeInService"].asString());
	if(!clusterInfoNode["ShowSoftwareInterface"].isNull())
		clusterInfo_.showSoftwareInterface = clusterInfoNode["ShowSoftwareInterface"].asString() == "true";
	if(!clusterInfoNode["VpcId"].isNull())
		clusterInfo_.vpcId = clusterInfoNode["VpcId"].asString();
	if(!clusterInfoNode["VSwitchId"].isNull())
		clusterInfo_.vSwitchId = clusterInfoNode["VSwitchId"].asString();
	if(!clusterInfoNode["NetType"].isNull())
		clusterInfo_.netType = clusterInfoNode["NetType"].asString();
	if(!clusterInfoNode["UserDefinedEmrEcsRole"].isNull())
		clusterInfo_.userDefinedEmrEcsRole = clusterInfoNode["UserDefinedEmrEcsRole"].asString();
	if(!clusterInfoNode["IoOptimized"].isNull())
		clusterInfo_.ioOptimized = clusterInfoNode["IoOptimized"].asString() == "true";
	if(!clusterInfoNode["InstanceGeneration"].isNull())
		clusterInfo_.instanceGeneration = clusterInfoNode["InstanceGeneration"].asString();
	if(!clusterInfoNode["BootstrapFailed"].isNull())
		clusterInfo_.bootstrapFailed = clusterInfoNode["BootstrapFailed"].asString() == "true";
	if(!clusterInfoNode["Configurations"].isNull())
		clusterInfo_.configurations = clusterInfoNode["Configurations"].asString();
	if(!clusterInfoNode["ImageId"].isNull())
		clusterInfo_.imageId = clusterInfoNode["ImageId"].asString();
	if(!clusterInfoNode["SecurityGroupId"].isNull())
		clusterInfo_.securityGroupId = clusterInfoNode["SecurityGroupId"].asString();
	if(!clusterInfoNode["SecurityGroupName"].isNull())
		clusterInfo_.securityGroupName = clusterInfoNode["SecurityGroupName"].asString();
	if(!clusterInfoNode["EasEnable"].isNull())
		clusterInfo_.easEnable = clusterInfoNode["EasEnable"].asString() == "true";
	if(!clusterInfoNode["ClusterType"].isNull())
		clusterInfo_.clusterType = clusterInfoNode["ClusterType"].asString();
	auto allBootstrapActionList = value["BootstrapActionList"]["BootstrapAction"];
	for (auto value : allBootstrapActionList)
	{
		ClusterInfo::BootstrapAction bootstrapActionObject;
		if(!value["Name"].isNull())
			bootstrapActionObject.name = value["Name"].asString();
		if(!value["Path"].isNull())
			bootstrapActionObject.path = value["Path"].asString();
		if(!value["Arg"].isNull())
			bootstrapActionObject.arg = value["Arg"].asString();
		clusterInfo_.bootstrapActionList.push_back(bootstrapActionObject);
	}
	auto softwareInfoNode = clusterInfoNode["SoftwareInfo"];
	if(!softwareInfoNode["EmrVer"].isNull())
		clusterInfo_.softwareInfo.emrVer = softwareInfoNode["EmrVer"].asString();
	if(!softwareInfoNode["ClusterType"].isNull())
		clusterInfo_.softwareInfo.clusterType = softwareInfoNode["ClusterType"].asString();
	auto allSoftwares = value["Softwares"]["Software"];
	for (auto value : allSoftwares)
	{
		ClusterInfo::SoftwareInfo::Software softwareObject;
		if(!value["DisplayName"].isNull())
			softwareObject.displayName = value["DisplayName"].asString();
		if(!value["Name"].isNull())
			softwareObject.name = value["Name"].asString();
		if(!value["OnlyDisplay"].isNull())
			softwareObject.onlyDisplay = value["OnlyDisplay"].asString() == "true";
		if(!value["StartTpe"].isNull())
			softwareObject.startTpe = std::stoi(value["StartTpe"].asString());
		if(!value["Version"].isNull())
			softwareObject.version = value["Version"].asString();
		clusterInfo_.softwareInfo.softwares.push_back(softwareObject);
	}
	auto failReasonNode = clusterInfoNode["FailReason"];
	if(!failReasonNode["ErrorCode"].isNull())
		clusterInfo_.failReason.errorCode = failReasonNode["ErrorCode"].asString();
	if(!failReasonNode["ErrorMsg"].isNull())
		clusterInfo_.failReason.errorMsg = failReasonNode["ErrorMsg"].asString();
	if(!failReasonNode["RequestId"].isNull())
		clusterInfo_.failReason.requestId = failReasonNode["RequestId"].asString();

}

DescribeClusterBasicInfoResult::ClusterInfo DescribeClusterBasicInfoResult::getClusterInfo()const
{
	return clusterInfo_;
}

