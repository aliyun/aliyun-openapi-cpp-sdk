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

#include <alibabacloud/emr/model/ModifyClusterTemplateRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterTemplateRequest;

ModifyClusterTemplateRequest::ModifyClusterTemplateRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterTemplate")
{}

ModifyClusterTemplateRequest::~ModifyClusterTemplateRequest()
{}

long ModifyClusterTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterTemplateRequest::getLogPath()const
{
	return logPath_;
}

void ModifyClusterTemplateRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setParameter("LogPath", logPath);
}

std::string ModifyClusterTemplateRequest::getMasterPwd()const
{
	return masterPwd_;
}

void ModifyClusterTemplateRequest::setMasterPwd(const std::string& masterPwd)
{
	masterPwd_ = masterPwd;
	setParameter("MasterPwd", masterPwd);
}

std::string ModifyClusterTemplateRequest::getConfigurations()const
{
	return configurations_;
}

void ModifyClusterTemplateRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setParameter("Configurations", configurations);
}

bool ModifyClusterTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyClusterTemplateRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", std::to_string(ioOptimized));
}

std::string ModifyClusterTemplateRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyClusterTemplateRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool ModifyClusterTemplateRequest::getSshEnable()const
{
	return sshEnable_;
}

void ModifyClusterTemplateRequest::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setParameter("SshEnable", std::to_string(sshEnable));
}

bool ModifyClusterTemplateRequest::getEasEnable()const
{
	return easEnable_;
}

void ModifyClusterTemplateRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", std::to_string(easEnable));
}

std::string ModifyClusterTemplateRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void ModifyClusterTemplateRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

std::string ModifyClusterTemplateRequest::getDepositType()const
{
	return depositType_;
}

void ModifyClusterTemplateRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setParameter("DepositType", depositType);
}

std::string ModifyClusterTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterTemplateRequest::getMachineType()const
{
	return machineType_;
}

void ModifyClusterTemplateRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setParameter("MachineType", machineType);
}

std::vector<ModifyClusterTemplateRequest::BootstrapAction> ModifyClusterTemplateRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void ModifyClusterTemplateRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
{
	bootstrapAction_ = bootstrapAction;
	int i = 0;
	for(int i = 0; i!= bootstrapAction.size(); i++)	{
		auto obj = bootstrapAction.at(i);
		std::string str ="BootstrapAction."+ std::to_string(i);
		setParameter(str + ".Path", obj.path);
		setParameter(str + ".Arg", obj.arg);
		setParameter(str + ".Name", obj.name);
	}
}

std::string ModifyClusterTemplateRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifyClusterTemplateRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void ModifyClusterTemplateRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setParameter("UseLocalMetaDb", std::to_string(useLocalMetaDb));
}

std::string ModifyClusterTemplateRequest::getEmrVer()const
{
	return emrVer_;
}

void ModifyClusterTemplateRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setParameter("EmrVer", emrVer);
}

std::string ModifyClusterTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void ModifyClusterTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string ModifyClusterTemplateRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void ModifyClusterTemplateRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

bool ModifyClusterTemplateRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ModifyClusterTemplateRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", std::to_string(isOpenPublicIp));
}

int ModifyClusterTemplateRequest::getPeriod()const
{
	return period_;
}

void ModifyClusterTemplateRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string ModifyClusterTemplateRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void ModifyClusterTemplateRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setParameter("InstanceGeneration", instanceGeneration);
}

std::string ModifyClusterTemplateRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyClusterTemplateRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string ModifyClusterTemplateRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyClusterTemplateRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

bool ModifyClusterTemplateRequest::getAutoRenew()const
{
	return autoRenew_;
}

void ModifyClusterTemplateRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", std::to_string(autoRenew));
}

std::vector<std::string> ModifyClusterTemplateRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void ModifyClusterTemplateRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setParameter("OptionSoftWareList."+ std::to_string(i), optionSoftWareList.at(i));
}

std::string ModifyClusterTemplateRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyClusterTemplateRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string ModifyClusterTemplateRequest::getNetType()const
{
	return netType_;
}

void ModifyClusterTemplateRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

std::string ModifyClusterTemplateRequest::getBizId()const
{
	return bizId_;
}

void ModifyClusterTemplateRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::vector<ModifyClusterTemplateRequest::HostGroup> ModifyClusterTemplateRequest::getHostGroup()const
{
	return hostGroup_;
}

void ModifyClusterTemplateRequest::setHostGroup(const std::vector<HostGroup>& hostGroup)
{
	hostGroup_ = hostGroup;
	int i = 0;
	for(int i = 0; i!= hostGroup.size(); i++)	{
		auto obj = hostGroup.at(i);
		std::string str ="HostGroup."+ std::to_string(i);
		setParameter(str + ".Period", std::to_string(obj.period));
		setParameter(str + ".SysDiskCapacity", std::to_string(obj.sysDiskCapacity));
		setParameter(str + ".DiskCapacity", std::to_string(obj.diskCapacity));
		setParameter(str + ".SysDiskType", obj.sysDiskType);
		setParameter(str + ".ClusterId", obj.clusterId);
		setParameter(str + ".DiskType", obj.diskType);
		setParameter(str + ".HostGroupName", obj.hostGroupName);
		setParameter(str + ".VSwitchId", obj.vSwitchId);
		setParameter(str + ".DiskCount", std::to_string(obj.diskCount));
		setParameter(str + ".AutoRenew", std::to_string(obj.autoRenew));
		setParameter(str + ".HostGroupId", obj.hostGroupId);
		setParameter(str + ".NodeCount", std::to_string(obj.nodeCount));
		setParameter(str + ".InstanceType", obj.instanceType);
		setParameter(str + ".Comment", obj.comment);
		setParameter(str + ".ChargeType", obj.chargeType);
		setParameter(str + ".MultiInstanceTypes", obj.multiInstanceTypes);
		setParameter(str + ".CreateType", obj.createType);
		setParameter(str + ".HostGroupType", obj.hostGroupType);
	}
}

std::string ModifyClusterTemplateRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyClusterTemplateRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string ModifyClusterTemplateRequest::getChargeType()const
{
	return chargeType_;
}

void ModifyClusterTemplateRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

bool ModifyClusterTemplateRequest::getUseCustomHiveMetaDb()const
{
	return useCustomHiveMetaDb_;
}

void ModifyClusterTemplateRequest::setUseCustomHiveMetaDb(bool useCustomHiveMetaDb)
{
	useCustomHiveMetaDb_ = useCustomHiveMetaDb;
	setParameter("UseCustomHiveMetaDb", std::to_string(useCustomHiveMetaDb));
}

std::vector<ModifyClusterTemplateRequest::Config> ModifyClusterTemplateRequest::getConfig()const
{
	return config_;
}

void ModifyClusterTemplateRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	int i = 0;
	for(int i = 0; i!= config.size(); i++)	{
		auto obj = config.at(i);
		std::string str ="Config."+ std::to_string(i);
		setParameter(str + ".ConfigKey", obj.configKey);
		setParameter(str + ".FileName", obj.fileName);
		setParameter(str + ".Encrypt", obj.encrypt);
		setParameter(str + ".Replace", obj.replace);
		setParameter(str + ".ConfigValue", obj.configValue);
		setParameter(str + ".ServiceName", obj.serviceName);
	}
}

bool ModifyClusterTemplateRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void ModifyClusterTemplateRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", std::to_string(highAvailabilityEnable));
}

bool ModifyClusterTemplateRequest::getInitCustomHiveMetaDb()const
{
	return initCustomHiveMetaDb_;
}

void ModifyClusterTemplateRequest::setInitCustomHiveMetaDb(bool initCustomHiveMetaDb)
{
	initCustomHiveMetaDb_ = initCustomHiveMetaDb;
	setParameter("InitCustomHiveMetaDb", std::to_string(initCustomHiveMetaDb));
}

