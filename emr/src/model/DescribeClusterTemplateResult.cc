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

#include <alibabacloud/emr/model/DescribeClusterTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterTemplateResult::DescribeClusterTemplateResult() :
	ServiceResult()
{}

DescribeClusterTemplateResult::DescribeClusterTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterTemplateResult::~DescribeClusterTemplateResult()
{}

void DescribeClusterTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto templateInfoNode = value["TemplateInfo"];
	if(!templateInfoNode["Id"].isNull())
		templateInfo_.id = templateInfoNode["Id"].asString();
	if(!templateInfoNode["TemplateName"].isNull())
		templateInfo_.templateName = templateInfoNode["TemplateName"].asString();
	if(!templateInfoNode["EmrVer"].isNull())
		templateInfo_.emrVer = templateInfoNode["EmrVer"].asString();
	if(!templateInfoNode["LogEnable"].isNull())
		templateInfo_.logEnable = templateInfoNode["LogEnable"].asString() == "true";
	if(!templateInfoNode["LogPath"].isNull())
		templateInfo_.logPath = templateInfoNode["LogPath"].asString();
	if(!templateInfoNode["UserId"].isNull())
		templateInfo_.userId = templateInfoNode["UserId"].asString();
	if(!templateInfoNode["UserDefinedEmrEcsRole"].isNull())
		templateInfo_.userDefinedEmrEcsRole = templateInfoNode["UserDefinedEmrEcsRole"].asString();
	if(!templateInfoNode["MasterNodeTotal"].isNull())
		templateInfo_.masterNodeTotal = std::stoi(templateInfoNode["MasterNodeTotal"].asString());
	if(!templateInfoNode["VpcId"].isNull())
		templateInfo_.vpcId = templateInfoNode["VpcId"].asString();
	if(!templateInfoNode["VSwitchId"].isNull())
		templateInfo_.vSwitchId = templateInfoNode["VSwitchId"].asString();
	if(!templateInfoNode["NetType"].isNull())
		templateInfo_.netType = templateInfoNode["NetType"].asString();
	if(!templateInfoNode["IoOptimized"].isNull())
		templateInfo_.ioOptimized = templateInfoNode["IoOptimized"].asString() == "true";
	if(!templateInfoNode["InstanceGeneration"].isNull())
		templateInfo_.instanceGeneration = templateInfoNode["InstanceGeneration"].asString();
	if(!templateInfoNode["HighAvailabilityEnable"].isNull())
		templateInfo_.highAvailabilityEnable = templateInfoNode["HighAvailabilityEnable"].asString() == "true";
	if(!templateInfoNode["EasEnable"].isNull())
		templateInfo_.easEnable = templateInfoNode["EasEnable"].asString() == "true";
	if(!templateInfoNode["GmtCreate"].isNull())
		templateInfo_.gmtCreate = std::stol(templateInfoNode["GmtCreate"].asString());
	if(!templateInfoNode["GmtModified"].isNull())
		templateInfo_.gmtModified = std::stol(templateInfoNode["GmtModified"].asString());
	if(!templateInfoNode["ZoneId"].isNull())
		templateInfo_.zoneId = templateInfoNode["ZoneId"].asString();
	if(!templateInfoNode["ClusterType"].isNull())
		templateInfo_.clusterType = templateInfoNode["ClusterType"].asString();
	if(!templateInfoNode["SecurityGroupId"].isNull())
		templateInfo_.securityGroupId = templateInfoNode["SecurityGroupId"].asString();
	if(!templateInfoNode["SecurityGroupName"].isNull())
		templateInfo_.securityGroupName = templateInfoNode["SecurityGroupName"].asString();
	if(!templateInfoNode["Configurations"].isNull())
		templateInfo_.configurations = templateInfoNode["Configurations"].asString();
	if(!templateInfoNode["AllowNotebook"].isNull())
		templateInfo_.allowNotebook = templateInfoNode["AllowNotebook"].asString() == "true";
	if(!templateInfoNode["CreateSource"].isNull())
		templateInfo_.createSource = templateInfoNode["CreateSource"].asString();
	if(!templateInfoNode["UseLocalMetaDb"].isNull())
		templateInfo_.useLocalMetaDb = templateInfoNode["UseLocalMetaDb"].asString() == "true";
	if(!templateInfoNode["SshEnable"].isNull())
		templateInfo_.sshEnable = templateInfoNode["SshEnable"].asString() == "true";
	if(!templateInfoNode["IsOpenPublicIp"].isNull())
		templateInfo_.isOpenPublicIp = templateInfoNode["IsOpenPublicIp"].asString() == "true";
	if(!templateInfoNode["DepositType"].isNull())
		templateInfo_.depositType = templateInfoNode["DepositType"].asString();
	if(!templateInfoNode["MachineType"].isNull())
		templateInfo_.machineType = templateInfoNode["MachineType"].asString();
	if(!templateInfoNode["UseCustomHiveMetaDb"].isNull())
		templateInfo_.useCustomHiveMetaDb = templateInfoNode["UseCustomHiveMetaDb"].asString() == "true";
	if(!templateInfoNode["InitCustomHiveMetaDb"].isNull())
		templateInfo_.initCustomHiveMetaDb = templateInfoNode["InitCustomHiveMetaDb"].asString() == "true";
	auto allBootstrapActionList = value["BootstrapActionList"]["BootstrapAction"];
	for (auto value : allBootstrapActionList)
	{
		TemplateInfo::BootstrapAction bootstrapActionObject;
		if(!value["Name"].isNull())
			bootstrapActionObject.name = value["Name"].asString();
		if(!value["Path"].isNull())
			bootstrapActionObject.path = value["Path"].asString();
		if(!value["Arg"].isNull())
			bootstrapActionObject.arg = value["Arg"].asString();
		templateInfo_.bootstrapActionList.push_back(bootstrapActionObject);
	}
	auto allHostGroupList = value["HostGroupList"]["HostGroup"];
	for (auto value : allHostGroupList)
	{
		TemplateInfo::HostGroup hostGroupObject;
		if(!value["HostGroupId"].isNull())
			hostGroupObject.hostGroupId = value["HostGroupId"].asString();
		if(!value["HostGroupName"].isNull())
			hostGroupObject.hostGroupName = value["HostGroupName"].asString();
		if(!value["HostGroupType"].isNull())
			hostGroupObject.hostGroupType = value["HostGroupType"].asString();
		if(!value["ChargeType"].isNull())
			hostGroupObject.chargeType = value["ChargeType"].asString();
		if(!value["Period"].isNull())
			hostGroupObject.period = value["Period"].asString();
		if(!value["NodeCount"].isNull())
			hostGroupObject.nodeCount = std::stoi(value["NodeCount"].asString());
		if(!value["InstanceType"].isNull())
			hostGroupObject.instanceType = value["InstanceType"].asString();
		if(!value["DiskType"].isNull())
			hostGroupObject.diskType = value["DiskType"].asString();
		if(!value["DiskCapacity"].isNull())
			hostGroupObject.diskCapacity = std::stoi(value["DiskCapacity"].asString());
		if(!value["DiskCount"].isNull())
			hostGroupObject.diskCount = std::stoi(value["DiskCount"].asString());
		if(!value["SysDiskType"].isNull())
			hostGroupObject.sysDiskType = value["SysDiskType"].asString();
		if(!value["SysDiskCapacity"].isNull())
			hostGroupObject.sysDiskCapacity = std::stoi(value["SysDiskCapacity"].asString());
		if(!value["MultiInstanceTypes"].isNull())
			hostGroupObject.multiInstanceTypes = value["MultiInstanceTypes"].asString();
		templateInfo_.hostGroupList.push_back(hostGroupObject);
	}
	auto allConfigList = value["ConfigList"]["Config"];
	for (auto value : allConfigList)
	{
		TemplateInfo::Config configObject;
		if(!value["ServiceName"].isNull())
			configObject.serviceName = value["ServiceName"].asString();
		if(!value["FileName"].isNull())
			configObject.fileName = value["FileName"].asString();
		if(!value["ConfigKey"].isNull())
			configObject.configKey = value["ConfigKey"].asString();
		if(!value["ConfigValue"].isNull())
			configObject.configValue = value["ConfigValue"].asString();
		if(!value["Encrypt"].isNull())
			configObject.encrypt = value["Encrypt"].asString();
		if(!value["Replace"].isNull())
			configObject.replace = value["Replace"].asString();
		templateInfo_.configList.push_back(configObject);
	}
		auto allSoftwareInfoList = templateInfoNode["SoftwareInfoList"]["SoftwareInfo"];
		for (auto value : allSoftwareInfoList)
			templateInfo_.softwareInfoList.push_back(value.asString());

}

DescribeClusterTemplateResult::TemplateInfo DescribeClusterTemplateResult::getTemplateInfo()const
{
	return templateInfo_;
}

