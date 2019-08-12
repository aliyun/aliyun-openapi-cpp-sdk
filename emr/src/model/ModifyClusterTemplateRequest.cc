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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyClusterTemplateRequest::getLogPath()const
{
	return logPath_;
}

void ModifyClusterTemplateRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", logPath);
}

std::string ModifyClusterTemplateRequest::getMasterPwd()const
{
	return masterPwd_;
}

void ModifyClusterTemplateRequest::setMasterPwd(const std::string& masterPwd)
{
	masterPwd_ = masterPwd;
	setCoreParameter("MasterPwd", masterPwd);
}

std::string ModifyClusterTemplateRequest::getConfigurations()const
{
	return configurations_;
}

void ModifyClusterTemplateRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", configurations);
}

bool ModifyClusterTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyClusterTemplateRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string ModifyClusterTemplateRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyClusterTemplateRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool ModifyClusterTemplateRequest::getSshEnable()const
{
	return sshEnable_;
}

void ModifyClusterTemplateRequest::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setCoreParameter("SshEnable", sshEnable);
}

bool ModifyClusterTemplateRequest::getEasEnable()const
{
	return easEnable_;
}

void ModifyClusterTemplateRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable);
}

std::string ModifyClusterTemplateRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ModifyClusterTemplateRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string ModifyClusterTemplateRequest::getMetaStoreType()const
{
	return metaStoreType_;
}

void ModifyClusterTemplateRequest::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setCoreParameter("MetaStoreType", metaStoreType);
}

std::string ModifyClusterTemplateRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void ModifyClusterTemplateRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", securityGroupName);
}

std::string ModifyClusterTemplateRequest::getDepositType()const
{
	return depositType_;
}

void ModifyClusterTemplateRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setCoreParameter("DepositType", depositType);
}

std::string ModifyClusterTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterTemplateRequest::getMachineType()const
{
	return machineType_;
}

void ModifyClusterTemplateRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setCoreParameter("MachineType", machineType);
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
		setCoreParameter(str + ".Path", std::to_string(obj.path));
		setCoreParameter(str + ".Arg", std::to_string(obj.arg));
		setCoreParameter(str + ".Name", std::to_string(obj.name));
	}
}

std::string ModifyClusterTemplateRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyClusterTemplateRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void ModifyClusterTemplateRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb);
}

std::string ModifyClusterTemplateRequest::getMetaStoreConf()const
{
	return metaStoreConf_;
}

void ModifyClusterTemplateRequest::setMetaStoreConf(const std::string& metaStoreConf)
{
	metaStoreConf_ = metaStoreConf;
	setCoreParameter("MetaStoreConf", metaStoreConf);
}

std::string ModifyClusterTemplateRequest::getEmrVer()const
{
	return emrVer_;
}

void ModifyClusterTemplateRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", emrVer);
}

std::string ModifyClusterTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void ModifyClusterTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setCoreParameter("TemplateName", templateName);
}

std::string ModifyClusterTemplateRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void ModifyClusterTemplateRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setCoreParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

bool ModifyClusterTemplateRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ModifyClusterTemplateRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp);
}

int ModifyClusterTemplateRequest::getPeriod()const
{
	return period_;
}

void ModifyClusterTemplateRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string ModifyClusterTemplateRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void ModifyClusterTemplateRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", instanceGeneration);
}

std::string ModifyClusterTemplateRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyClusterTemplateRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string ModifyClusterTemplateRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyClusterTemplateRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

bool ModifyClusterTemplateRequest::getAutoRenew()const
{
	return autoRenew_;
}

void ModifyClusterTemplateRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::vector<std::string> ModifyClusterTemplateRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void ModifyClusterTemplateRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), std::to_string(optionSoftWareList.at(i)));
}

std::string ModifyClusterTemplateRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyClusterTemplateRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string ModifyClusterTemplateRequest::getNetType()const
{
	return netType_;
}

void ModifyClusterTemplateRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::string ModifyClusterTemplateRequest::getBizId()const
{
	return bizId_;
}

void ModifyClusterTemplateRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
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
		setCoreParameter(str + ".Period", obj.period);
		setCoreParameter(str + ".SysDiskCapacity", obj.sysDiskCapacity);
		setCoreParameter(str + ".DiskCapacity", obj.diskCapacity);
		setCoreParameter(str + ".SysDiskType", std::to_string(obj.sysDiskType));
		setCoreParameter(str + ".ClusterId", std::to_string(obj.clusterId));
		setCoreParameter(str + ".DiskType", std::to_string(obj.diskType));
		setCoreParameter(str + ".HostGroupName", std::to_string(obj.hostGroupName));
		setCoreParameter(str + ".VSwitchId", std::to_string(obj.vSwitchId));
		setCoreParameter(str + ".DiskCount", obj.diskCount);
		setCoreParameter(str + ".AutoRenew", obj.autoRenew ? "true" : "false");
		setCoreParameter(str + ".HostGroupId", std::to_string(obj.hostGroupId));
		setCoreParameter(str + ".NodeCount", obj.nodeCount);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".Comment", std::to_string(obj.comment));
		setCoreParameter(str + ".ChargeType", std::to_string(obj.chargeType));
		setCoreParameter(str + ".MultiInstanceTypes", std::to_string(obj.multiInstanceTypes));
		setCoreParameter(str + ".CreateType", std::to_string(obj.createType));
		setCoreParameter(str + ".HostGroupType", std::to_string(obj.hostGroupType));
	}
}

std::string ModifyClusterTemplateRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyClusterTemplateRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string ModifyClusterTemplateRequest::getChargeType()const
{
	return chargeType_;
}

void ModifyClusterTemplateRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

bool ModifyClusterTemplateRequest::getUseCustomHiveMetaDb()const
{
	return useCustomHiveMetaDb_;
}

void ModifyClusterTemplateRequest::setUseCustomHiveMetaDb(bool useCustomHiveMetaDb)
{
	useCustomHiveMetaDb_ = useCustomHiveMetaDb;
	setCoreParameter("UseCustomHiveMetaDb", useCustomHiveMetaDb);
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
		setCoreParameter(str + ".ConfigKey", std::to_string(obj.configKey));
		setCoreParameter(str + ".FileName", std::to_string(obj.fileName));
		setCoreParameter(str + ".Encrypt", std::to_string(obj.encrypt));
		setCoreParameter(str + ".Replace", std::to_string(obj.replace));
		setCoreParameter(str + ".ConfigValue", std::to_string(obj.configValue));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
	}
}

bool ModifyClusterTemplateRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void ModifyClusterTemplateRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable);
}

bool ModifyClusterTemplateRequest::getInitCustomHiveMetaDb()const
{
	return initCustomHiveMetaDb_;
}

void ModifyClusterTemplateRequest::setInitCustomHiveMetaDb(bool initCustomHiveMetaDb)
{
	initCustomHiveMetaDb_ = initCustomHiveMetaDb;
	setCoreParameter("InitCustomHiveMetaDb", initCustomHiveMetaDb);
}

