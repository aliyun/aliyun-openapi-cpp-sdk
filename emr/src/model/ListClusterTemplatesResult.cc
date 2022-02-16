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

#include <alibabacloud/emr/model/ListClusterTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterTemplatesResult::ListClusterTemplatesResult() :
	ServiceResult()
{}

ListClusterTemplatesResult::ListClusterTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterTemplatesResult::~ListClusterTemplatesResult()
{}

void ListClusterTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateInfoListNode = value["TemplateInfoList"]["TemplateInfo"];
	for (auto valueTemplateInfoListTemplateInfo : allTemplateInfoListNode)
	{
		TemplateInfo templateInfoListObject;
		if(!valueTemplateInfoListTemplateInfo["Id"].isNull())
			templateInfoListObject.id = valueTemplateInfoListTemplateInfo["Id"].asString();
		if(!valueTemplateInfoListTemplateInfo["TemplateName"].isNull())
			templateInfoListObject.templateName = valueTemplateInfoListTemplateInfo["TemplateName"].asString();
		if(!valueTemplateInfoListTemplateInfo["LogEnable"].isNull())
			templateInfoListObject.logEnable = valueTemplateInfoListTemplateInfo["LogEnable"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["LogPath"].isNull())
			templateInfoListObject.logPath = valueTemplateInfoListTemplateInfo["LogPath"].asString();
		if(!valueTemplateInfoListTemplateInfo["UserId"].isNull())
			templateInfoListObject.userId = valueTemplateInfoListTemplateInfo["UserId"].asString();
		if(!valueTemplateInfoListTemplateInfo["UserDefinedEmrEcsRole"].isNull())
			templateInfoListObject.userDefinedEmrEcsRole = valueTemplateInfoListTemplateInfo["UserDefinedEmrEcsRole"].asString();
		if(!valueTemplateInfoListTemplateInfo["MasterNodeTotal"].isNull())
			templateInfoListObject.masterNodeTotal = std::stoi(valueTemplateInfoListTemplateInfo["MasterNodeTotal"].asString());
		if(!valueTemplateInfoListTemplateInfo["VpcId"].isNull())
			templateInfoListObject.vpcId = valueTemplateInfoListTemplateInfo["VpcId"].asString();
		if(!valueTemplateInfoListTemplateInfo["VSwitchId"].isNull())
			templateInfoListObject.vSwitchId = valueTemplateInfoListTemplateInfo["VSwitchId"].asString();
		if(!valueTemplateInfoListTemplateInfo["NetType"].isNull())
			templateInfoListObject.netType = valueTemplateInfoListTemplateInfo["NetType"].asString();
		if(!valueTemplateInfoListTemplateInfo["IoOptimized"].isNull())
			templateInfoListObject.ioOptimized = valueTemplateInfoListTemplateInfo["IoOptimized"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["InstanceGeneration"].isNull())
			templateInfoListObject.instanceGeneration = valueTemplateInfoListTemplateInfo["InstanceGeneration"].asString();
		if(!valueTemplateInfoListTemplateInfo["HighAvailabilityEnable"].isNull())
			templateInfoListObject.highAvailabilityEnable = valueTemplateInfoListTemplateInfo["HighAvailabilityEnable"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["EasEnable"].isNull())
			templateInfoListObject.easEnable = valueTemplateInfoListTemplateInfo["EasEnable"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["GmtCreate"].isNull())
			templateInfoListObject.gmtCreate = std::stol(valueTemplateInfoListTemplateInfo["GmtCreate"].asString());
		if(!valueTemplateInfoListTemplateInfo["GmtModified"].isNull())
			templateInfoListObject.gmtModified = std::stol(valueTemplateInfoListTemplateInfo["GmtModified"].asString());
		if(!valueTemplateInfoListTemplateInfo["ZoneId"].isNull())
			templateInfoListObject.zoneId = valueTemplateInfoListTemplateInfo["ZoneId"].asString();
		if(!valueTemplateInfoListTemplateInfo["ClusterType"].isNull())
			templateInfoListObject.clusterType = valueTemplateInfoListTemplateInfo["ClusterType"].asString();
		if(!valueTemplateInfoListTemplateInfo["SecurityGroupId"].isNull())
			templateInfoListObject.securityGroupId = valueTemplateInfoListTemplateInfo["SecurityGroupId"].asString();
		if(!valueTemplateInfoListTemplateInfo["SecurityGroupName"].isNull())
			templateInfoListObject.securityGroupName = valueTemplateInfoListTemplateInfo["SecurityGroupName"].asString();
		if(!valueTemplateInfoListTemplateInfo["Configurations"].isNull())
			templateInfoListObject.configurations = valueTemplateInfoListTemplateInfo["Configurations"].asString();
		if(!valueTemplateInfoListTemplateInfo["AllowNotebook"].isNull())
			templateInfoListObject.allowNotebook = valueTemplateInfoListTemplateInfo["AllowNotebook"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["CreateSource"].isNull())
			templateInfoListObject.createSource = valueTemplateInfoListTemplateInfo["CreateSource"].asString();
		if(!valueTemplateInfoListTemplateInfo["UseLocalMetaDb"].isNull())
			templateInfoListObject.useLocalMetaDb = valueTemplateInfoListTemplateInfo["UseLocalMetaDb"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["SshEnable"].isNull())
			templateInfoListObject.sshEnable = valueTemplateInfoListTemplateInfo["SshEnable"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["IsOpenPublicIp"].isNull())
			templateInfoListObject.isOpenPublicIp = valueTemplateInfoListTemplateInfo["IsOpenPublicIp"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["DepositType"].isNull())
			templateInfoListObject.depositType = valueTemplateInfoListTemplateInfo["DepositType"].asString();
		if(!valueTemplateInfoListTemplateInfo["MachineType"].isNull())
			templateInfoListObject.machineType = valueTemplateInfoListTemplateInfo["MachineType"].asString();
		if(!valueTemplateInfoListTemplateInfo["UseCustomHiveMetaDb"].isNull())
			templateInfoListObject.useCustomHiveMetaDb = valueTemplateInfoListTemplateInfo["UseCustomHiveMetaDb"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["InitCustomHiveMetaDb"].isNull())
			templateInfoListObject.initCustomHiveMetaDb = valueTemplateInfoListTemplateInfo["InitCustomHiveMetaDb"].asString() == "true";
		if(!valueTemplateInfoListTemplateInfo["KeyPairName"].isNull())
			templateInfoListObject.keyPairName = valueTemplateInfoListTemplateInfo["KeyPairName"].asString();
		if(!valueTemplateInfoListTemplateInfo["MetaStoreType"].isNull())
			templateInfoListObject.metaStoreType = valueTemplateInfoListTemplateInfo["MetaStoreType"].asString();
		if(!valueTemplateInfoListTemplateInfo["MetaStoreConf"].isNull())
			templateInfoListObject.metaStoreConf = valueTemplateInfoListTemplateInfo["MetaStoreConf"].asString();
		auto allBootstrapActionListNode = valueTemplateInfoListTemplateInfo["BootstrapActionList"]["BootstrapAction"];
		for (auto valueTemplateInfoListTemplateInfoBootstrapActionListBootstrapAction : allBootstrapActionListNode)
		{
			TemplateInfo::BootstrapAction bootstrapActionListObject;
			if(!valueTemplateInfoListTemplateInfoBootstrapActionListBootstrapAction["Name"].isNull())
				bootstrapActionListObject.name = valueTemplateInfoListTemplateInfoBootstrapActionListBootstrapAction["Name"].asString();
			if(!valueTemplateInfoListTemplateInfoBootstrapActionListBootstrapAction["Path"].isNull())
				bootstrapActionListObject.path = valueTemplateInfoListTemplateInfoBootstrapActionListBootstrapAction["Path"].asString();
			if(!valueTemplateInfoListTemplateInfoBootstrapActionListBootstrapAction["Arg"].isNull())
				bootstrapActionListObject.arg = valueTemplateInfoListTemplateInfoBootstrapActionListBootstrapAction["Arg"].asString();
			templateInfoListObject.bootstrapActionList.push_back(bootstrapActionListObject);
		}
		auto allHostGroupListNode = valueTemplateInfoListTemplateInfo["HostGroupList"]["HostGroup"];
		for (auto valueTemplateInfoListTemplateInfoHostGroupListHostGroup : allHostGroupListNode)
		{
			TemplateInfo::HostGroup hostGroupListObject;
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["HostGroupId"].isNull())
				hostGroupListObject.hostGroupId = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["HostGroupId"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["HostGroupName"].isNull())
				hostGroupListObject.hostGroupName = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["HostGroupName"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["HostGroupType"].isNull())
				hostGroupListObject.hostGroupType = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["HostGroupType"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["ChargeType"].isNull())
				hostGroupListObject.chargeType = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["ChargeType"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["Period"].isNull())
				hostGroupListObject.period = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["Period"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["NodeCount"].isNull())
				hostGroupListObject.nodeCount = std::stoi(valueTemplateInfoListTemplateInfoHostGroupListHostGroup["NodeCount"].asString());
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["InstanceType"].isNull())
				hostGroupListObject.instanceType = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["InstanceType"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["DiskType"].isNull())
				hostGroupListObject.diskType = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["DiskType"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["DiskCapacity"].isNull())
				hostGroupListObject.diskCapacity = std::stoi(valueTemplateInfoListTemplateInfoHostGroupListHostGroup["DiskCapacity"].asString());
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["DiskCount"].isNull())
				hostGroupListObject.diskCount = std::stoi(valueTemplateInfoListTemplateInfoHostGroupListHostGroup["DiskCount"].asString());
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["SysDiskType"].isNull())
				hostGroupListObject.sysDiskType = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["SysDiskType"].asString();
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["SysDiskCapacity"].isNull())
				hostGroupListObject.sysDiskCapacity = std::stoi(valueTemplateInfoListTemplateInfoHostGroupListHostGroup["SysDiskCapacity"].asString());
			if(!valueTemplateInfoListTemplateInfoHostGroupListHostGroup["MultiInstanceTypes"].isNull())
				hostGroupListObject.multiInstanceTypes = valueTemplateInfoListTemplateInfoHostGroupListHostGroup["MultiInstanceTypes"].asString();
			templateInfoListObject.hostGroupList.push_back(hostGroupListObject);
		}
		auto allConfigListNode = valueTemplateInfoListTemplateInfo["ConfigList"]["Config"];
		for (auto valueTemplateInfoListTemplateInfoConfigListConfig : allConfigListNode)
		{
			TemplateInfo::Config configListObject;
			if(!valueTemplateInfoListTemplateInfoConfigListConfig["ServiceName"].isNull())
				configListObject.serviceName = valueTemplateInfoListTemplateInfoConfigListConfig["ServiceName"].asString();
			if(!valueTemplateInfoListTemplateInfoConfigListConfig["FileName"].isNull())
				configListObject.fileName = valueTemplateInfoListTemplateInfoConfigListConfig["FileName"].asString();
			if(!valueTemplateInfoListTemplateInfoConfigListConfig["ConfigKey"].isNull())
				configListObject.configKey = valueTemplateInfoListTemplateInfoConfigListConfig["ConfigKey"].asString();
			if(!valueTemplateInfoListTemplateInfoConfigListConfig["ConfigValue"].isNull())
				configListObject.configValue = valueTemplateInfoListTemplateInfoConfigListConfig["ConfigValue"].asString();
			if(!valueTemplateInfoListTemplateInfoConfigListConfig["Encrypt"].isNull())
				configListObject.encrypt = valueTemplateInfoListTemplateInfoConfigListConfig["Encrypt"].asString();
			if(!valueTemplateInfoListTemplateInfoConfigListConfig["Replace"].isNull())
				configListObject.replace = valueTemplateInfoListTemplateInfoConfigListConfig["Replace"].asString();
			templateInfoListObject.configList.push_back(configListObject);
		}
		auto allSoftwareInfoList = value["SoftwareInfoList"]["SoftwareInfo"];
		for (auto value : allSoftwareInfoList)
			templateInfoListObject.softwareInfoList.push_back(value.asString());
		templateInfoList_.push_back(templateInfoListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListClusterTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterTemplatesResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterTemplatesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListClusterTemplatesResult::TemplateInfo> ListClusterTemplatesResult::getTemplateInfoList()const
{
	return templateInfoList_;
}

