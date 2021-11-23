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
	if(!templateInfoNode["KeyPairName"].isNull())
		templateInfo_.keyPairName = templateInfoNode["KeyPairName"].asString();
	if(!templateInfoNode["MasterPwd"].isNull())
		templateInfo_.masterPwd = templateInfoNode["MasterPwd"].asString();
	if(!templateInfoNode["MetaStoreType"].isNull())
		templateInfo_.metaStoreType = templateInfoNode["MetaStoreType"].asString();
	if(!templateInfoNode["MetaStoreConf"].isNull())
		templateInfo_.metaStoreConf = templateInfoNode["MetaStoreConf"].asString();
	if(!templateInfoNode["DataDiskEncrypted"].isNull())
		templateInfo_.dataDiskEncrypted = templateInfoNode["DataDiskEncrypted"].asString() == "true";
	if(!templateInfoNode["DataDiskKMSKeyId"].isNull())
		templateInfo_.dataDiskKMSKeyId = templateInfoNode["DataDiskKMSKeyId"].asString();
	auto allBootstrapActionListNode = templateInfoNode["BootstrapActionList"]["BootstrapAction"];
	for (auto templateInfoNodeBootstrapActionListBootstrapAction : allBootstrapActionListNode)
	{
		TemplateInfo::BootstrapAction bootstrapActionObject;
		if(!templateInfoNodeBootstrapActionListBootstrapAction["Name"].isNull())
			bootstrapActionObject.name = templateInfoNodeBootstrapActionListBootstrapAction["Name"].asString();
		if(!templateInfoNodeBootstrapActionListBootstrapAction["Path"].isNull())
			bootstrapActionObject.path = templateInfoNodeBootstrapActionListBootstrapAction["Path"].asString();
		if(!templateInfoNodeBootstrapActionListBootstrapAction["Arg"].isNull())
			bootstrapActionObject.arg = templateInfoNodeBootstrapActionListBootstrapAction["Arg"].asString();
		templateInfo_.bootstrapActionList.push_back(bootstrapActionObject);
	}
	auto allHostGroupListNode = templateInfoNode["HostGroupList"]["HostGroup"];
	for (auto templateInfoNodeHostGroupListHostGroup : allHostGroupListNode)
	{
		TemplateInfo::HostGroup hostGroupObject;
		if(!templateInfoNodeHostGroupListHostGroup["HostGroupId"].isNull())
			hostGroupObject.hostGroupId = templateInfoNodeHostGroupListHostGroup["HostGroupId"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["HostGroupName"].isNull())
			hostGroupObject.hostGroupName = templateInfoNodeHostGroupListHostGroup["HostGroupName"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["HostGroupType"].isNull())
			hostGroupObject.hostGroupType = templateInfoNodeHostGroupListHostGroup["HostGroupType"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["ChargeType"].isNull())
			hostGroupObject.chargeType = templateInfoNodeHostGroupListHostGroup["ChargeType"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["Period"].isNull())
			hostGroupObject.period = templateInfoNodeHostGroupListHostGroup["Period"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["NodeCount"].isNull())
			hostGroupObject.nodeCount = std::stoi(templateInfoNodeHostGroupListHostGroup["NodeCount"].asString());
		if(!templateInfoNodeHostGroupListHostGroup["InstanceType"].isNull())
			hostGroupObject.instanceType = templateInfoNodeHostGroupListHostGroup["InstanceType"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["DiskType"].isNull())
			hostGroupObject.diskType = templateInfoNodeHostGroupListHostGroup["DiskType"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["DiskCapacity"].isNull())
			hostGroupObject.diskCapacity = std::stoi(templateInfoNodeHostGroupListHostGroup["DiskCapacity"].asString());
		if(!templateInfoNodeHostGroupListHostGroup["DiskCount"].isNull())
			hostGroupObject.diskCount = std::stoi(templateInfoNodeHostGroupListHostGroup["DiskCount"].asString());
		if(!templateInfoNodeHostGroupListHostGroup["SysDiskType"].isNull())
			hostGroupObject.sysDiskType = templateInfoNodeHostGroupListHostGroup["SysDiskType"].asString();
		if(!templateInfoNodeHostGroupListHostGroup["SysDiskCapacity"].isNull())
			hostGroupObject.sysDiskCapacity = std::stoi(templateInfoNodeHostGroupListHostGroup["SysDiskCapacity"].asString());
		if(!templateInfoNodeHostGroupListHostGroup["MultiInstanceTypes"].isNull())
			hostGroupObject.multiInstanceTypes = templateInfoNodeHostGroupListHostGroup["MultiInstanceTypes"].asString();
		templateInfo_.hostGroupList.push_back(hostGroupObject);
	}
	auto allConfigListNode = templateInfoNode["ConfigList"]["Config"];
	for (auto templateInfoNodeConfigListConfig : allConfigListNode)
	{
		TemplateInfo::Config configObject;
		if(!templateInfoNodeConfigListConfig["ServiceName"].isNull())
			configObject.serviceName = templateInfoNodeConfigListConfig["ServiceName"].asString();
		if(!templateInfoNodeConfigListConfig["FileName"].isNull())
			configObject.fileName = templateInfoNodeConfigListConfig["FileName"].asString();
		if(!templateInfoNodeConfigListConfig["ConfigKey"].isNull())
			configObject.configKey = templateInfoNodeConfigListConfig["ConfigKey"].asString();
		if(!templateInfoNodeConfigListConfig["ConfigValue"].isNull())
			configObject.configValue = templateInfoNodeConfigListConfig["ConfigValue"].asString();
		if(!templateInfoNodeConfigListConfig["Encrypt"].isNull())
			configObject.encrypt = templateInfoNodeConfigListConfig["Encrypt"].asString();
		if(!templateInfoNodeConfigListConfig["Replace"].isNull())
			configObject.replace = templateInfoNodeConfigListConfig["Replace"].asString();
		templateInfo_.configList.push_back(configObject);
	}
	auto allTagsNode = templateInfoNode["Tags"]["Tag"];
	for (auto templateInfoNodeTagsTag : allTagsNode)
	{
		TemplateInfo::Tag tagObject;
		if(!templateInfoNodeTagsTag["TagKey"].isNull())
			tagObject.tagKey = templateInfoNodeTagsTag["TagKey"].asString();
		if(!templateInfoNodeTagsTag["TagValue"].isNull())
			tagObject.tagValue = templateInfoNodeTagsTag["TagValue"].asString();
		templateInfo_.tags.push_back(tagObject);
	}
		auto allSoftwareInfoList = templateInfoNode["SoftwareInfoList"]["SoftwareInfo"];
		for (auto value : allSoftwareInfoList)
			templateInfo_.softwareInfoList.push_back(value.asString());

}

DescribeClusterTemplateResult::TemplateInfo DescribeClusterTemplateResult::getTemplateInfo()const
{
	return templateInfo_;
}

