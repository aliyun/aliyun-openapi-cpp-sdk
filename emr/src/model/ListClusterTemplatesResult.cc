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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTemplateInfoList = value["TemplateInfoList"]["TemplateInfo"];
	for (auto value : allTemplateInfoList)
	{
		TemplateInfo templateInfoListObject;
		if(!value["Id"].isNull())
			templateInfoListObject.id = value["Id"].asString();
		if(!value["TemplateName"].isNull())
			templateInfoListObject.templateName = value["TemplateName"].asString();
		if(!value["LogEnable"].isNull())
			templateInfoListObject.logEnable = value["LogEnable"].asString() == "true";
		if(!value["LogPath"].isNull())
			templateInfoListObject.logPath = value["LogPath"].asString();
		if(!value["UserId"].isNull())
			templateInfoListObject.userId = value["UserId"].asString();
		if(!value["UserDefinedEmrEcsRole"].isNull())
			templateInfoListObject.userDefinedEmrEcsRole = value["UserDefinedEmrEcsRole"].asString();
		if(!value["MasterNodeTotal"].isNull())
			templateInfoListObject.masterNodeTotal = std::stoi(value["MasterNodeTotal"].asString());
		if(!value["VpcId"].isNull())
			templateInfoListObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			templateInfoListObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["NetType"].isNull())
			templateInfoListObject.netType = value["NetType"].asString();
		if(!value["IoOptimized"].isNull())
			templateInfoListObject.ioOptimized = value["IoOptimized"].asString() == "true";
		if(!value["InstanceGeneration"].isNull())
			templateInfoListObject.instanceGeneration = value["InstanceGeneration"].asString();
		if(!value["HighAvailabilityEnable"].isNull())
			templateInfoListObject.highAvailabilityEnable = value["HighAvailabilityEnable"].asString() == "true";
		if(!value["EasEnable"].isNull())
			templateInfoListObject.easEnable = value["EasEnable"].asString() == "true";
		if(!value["GmtCreate"].isNull())
			templateInfoListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			templateInfoListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["ZoneId"].isNull())
			templateInfoListObject.zoneId = value["ZoneId"].asString();
		if(!value["ClusterType"].isNull())
			templateInfoListObject.clusterType = value["ClusterType"].asString();
		if(!value["SecurityGroupId"].isNull())
			templateInfoListObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["SecurityGroupName"].isNull())
			templateInfoListObject.securityGroupName = value["SecurityGroupName"].asString();
		if(!value["Configurations"].isNull())
			templateInfoListObject.configurations = value["Configurations"].asString();
		if(!value["AllowNotebook"].isNull())
			templateInfoListObject.allowNotebook = value["AllowNotebook"].asString() == "true";
		if(!value["CreateSource"].isNull())
			templateInfoListObject.createSource = value["CreateSource"].asString();
		if(!value["UseLocalMetaDb"].isNull())
			templateInfoListObject.useLocalMetaDb = value["UseLocalMetaDb"].asString() == "true";
		if(!value["SshEnable"].isNull())
			templateInfoListObject.sshEnable = value["SshEnable"].asString() == "true";
		if(!value["IsOpenPublicIp"].isNull())
			templateInfoListObject.isOpenPublicIp = value["IsOpenPublicIp"].asString() == "true";
		if(!value["DepositType"].isNull())
			templateInfoListObject.depositType = value["DepositType"].asString();
		if(!value["MachineType"].isNull())
			templateInfoListObject.machineType = value["MachineType"].asString();
		if(!value["UseCustomHiveMetaDb"].isNull())
			templateInfoListObject.useCustomHiveMetaDb = value["UseCustomHiveMetaDb"].asString() == "true";
		if(!value["InitCustomHiveMetaDb"].isNull())
			templateInfoListObject.initCustomHiveMetaDb = value["InitCustomHiveMetaDb"].asString() == "true";
		if(!value["KeyPairName"].isNull())
			templateInfoListObject.keyPairName = value["KeyPairName"].asString();
		if(!value["MetaStoreType"].isNull())
			templateInfoListObject.metaStoreType = value["MetaStoreType"].asString();
		if(!value["MetaStoreConf"].isNull())
			templateInfoListObject.metaStoreConf = value["MetaStoreConf"].asString();
		auto allBootstrapActionList = value["BootstrapActionList"]["BootstrapAction"];
		for (auto value : allBootstrapActionList)
		{
			TemplateInfo::BootstrapAction bootstrapActionListObject;
			if(!value["Name"].isNull())
				bootstrapActionListObject.name = value["Name"].asString();
			if(!value["Path"].isNull())
				bootstrapActionListObject.path = value["Path"].asString();
			if(!value["Arg"].isNull())
				bootstrapActionListObject.arg = value["Arg"].asString();
			templateInfoListObject.bootstrapActionList.push_back(bootstrapActionListObject);
		}
		auto allHostGroupList = value["HostGroupList"]["HostGroup"];
		for (auto value : allHostGroupList)
		{
			TemplateInfo::HostGroup hostGroupListObject;
			if(!value["HostGroupId"].isNull())
				hostGroupListObject.hostGroupId = value["HostGroupId"].asString();
			if(!value["HostGroupName"].isNull())
				hostGroupListObject.hostGroupName = value["HostGroupName"].asString();
			if(!value["HostGroupType"].isNull())
				hostGroupListObject.hostGroupType = value["HostGroupType"].asString();
			if(!value["ChargeType"].isNull())
				hostGroupListObject.chargeType = value["ChargeType"].asString();
			if(!value["Period"].isNull())
				hostGroupListObject.period = value["Period"].asString();
			if(!value["NodeCount"].isNull())
				hostGroupListObject.nodeCount = std::stoi(value["NodeCount"].asString());
			if(!value["InstanceType"].isNull())
				hostGroupListObject.instanceType = value["InstanceType"].asString();
			if(!value["DiskType"].isNull())
				hostGroupListObject.diskType = value["DiskType"].asString();
			if(!value["DiskCapacity"].isNull())
				hostGroupListObject.diskCapacity = std::stoi(value["DiskCapacity"].asString());
			if(!value["DiskCount"].isNull())
				hostGroupListObject.diskCount = std::stoi(value["DiskCount"].asString());
			if(!value["SysDiskType"].isNull())
				hostGroupListObject.sysDiskType = value["SysDiskType"].asString();
			if(!value["SysDiskCapacity"].isNull())
				hostGroupListObject.sysDiskCapacity = std::stoi(value["SysDiskCapacity"].asString());
			if(!value["MultiInstanceTypes"].isNull())
				hostGroupListObject.multiInstanceTypes = value["MultiInstanceTypes"].asString();
			templateInfoListObject.hostGroupList.push_back(hostGroupListObject);
		}
		auto allConfigList = value["ConfigList"]["Config"];
		for (auto value : allConfigList)
		{
			TemplateInfo::Config configListObject;
			if(!value["ServiceName"].isNull())
				configListObject.serviceName = value["ServiceName"].asString();
			if(!value["FileName"].isNull())
				configListObject.fileName = value["FileName"].asString();
			if(!value["ConfigKey"].isNull())
				configListObject.configKey = value["ConfigKey"].asString();
			if(!value["ConfigValue"].isNull())
				configListObject.configValue = value["ConfigValue"].asString();
			if(!value["Encrypt"].isNull())
				configListObject.encrypt = value["Encrypt"].asString();
			if(!value["Replace"].isNull())
				configListObject.replace = value["Replace"].asString();
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

