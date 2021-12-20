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
{
	setMethod(HttpRequest::Method::Post);
}

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

bool ModifyClusterTemplateRequest::getSshEnable()const
{
	return sshEnable_;
}

void ModifyClusterTemplateRequest::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setParameter("SshEnable", sshEnable ? "true" : "false");
}

std::string ModifyClusterTemplateRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ModifyClusterTemplateRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::string ModifyClusterTemplateRequest::getMetaStoreType()const
{
	return metaStoreType_;
}

void ModifyClusterTemplateRequest::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setParameter("MetaStoreType", metaStoreType);
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

std::string ModifyClusterTemplateRequest::getMachineType()const
{
	return machineType_;
}

void ModifyClusterTemplateRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setParameter("MachineType", machineType);
}

std::string ModifyClusterTemplateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyClusterTemplateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::vector<ModifyClusterTemplateRequest::BootstrapAction> ModifyClusterTemplateRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void ModifyClusterTemplateRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
{
	bootstrapAction_ = bootstrapAction;
	for(int dep1 = 0; dep1!= bootstrapAction.size(); dep1++) {
		auto bootstrapActionObj = bootstrapAction.at(dep1);
		std::string bootstrapActionObjStr = "BootstrapAction." + std::to_string(dep1 + 1);
		setParameter(bootstrapActionObjStr + ".Path", bootstrapActionObj.path);
		setParameter(bootstrapActionObjStr + ".ExecutionTarget", bootstrapActionObj.executionTarget);
		setParameter(bootstrapActionObjStr + ".ExecutionMoment", bootstrapActionObj.executionMoment);
		setParameter(bootstrapActionObjStr + ".Arg", bootstrapActionObj.arg);
		setParameter(bootstrapActionObjStr + ".Name", bootstrapActionObj.name);
		setParameter(bootstrapActionObjStr + ".ExecutionFailStrategy", bootstrapActionObj.executionFailStrategy);
	}
}

std::string ModifyClusterTemplateRequest::getMetaStoreConf()const
{
	return metaStoreConf_;
}

void ModifyClusterTemplateRequest::setMetaStoreConf(const std::string& metaStoreConf)
{
	metaStoreConf_ = metaStoreConf;
	setParameter("MetaStoreConf", metaStoreConf);
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

std::vector<ModifyClusterTemplateRequest::Tag> ModifyClusterTemplateRequest::getTag()const
{
	return tag_;
}

void ModifyClusterTemplateRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

bool ModifyClusterTemplateRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ModifyClusterTemplateRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
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
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::vector<std::string> ModifyClusterTemplateRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void ModifyClusterTemplateRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
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

std::string ModifyClusterTemplateRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyClusterTemplateRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

bool ModifyClusterTemplateRequest::getUseCustomHiveMetaDb()const
{
	return useCustomHiveMetaDb_;
}

void ModifyClusterTemplateRequest::setUseCustomHiveMetaDb(bool useCustomHiveMetaDb)
{
	useCustomHiveMetaDb_ = useCustomHiveMetaDb;
	setParameter("UseCustomHiveMetaDb", useCustomHiveMetaDb ? "true" : "false");
}

bool ModifyClusterTemplateRequest::getInitCustomHiveMetaDb()const
{
	return initCustomHiveMetaDb_;
}

void ModifyClusterTemplateRequest::setInitCustomHiveMetaDb(bool initCustomHiveMetaDb)
{
	initCustomHiveMetaDb_ = initCustomHiveMetaDb;
	setParameter("InitCustomHiveMetaDb", initCustomHiveMetaDb ? "true" : "false");
}

bool ModifyClusterTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyClusterTemplateRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized ? "true" : "false");
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

bool ModifyClusterTemplateRequest::getEasEnable()const
{
	return easEnable_;
}

void ModifyClusterTemplateRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", easEnable ? "true" : "false");
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

std::string ModifyClusterTemplateRequest::getDataDiskKMSKeyId()const
{
	return dataDiskKMSKeyId_;
}

void ModifyClusterTemplateRequest::setDataDiskKMSKeyId(const std::string& dataDiskKMSKeyId)
{
	dataDiskKMSKeyId_ = dataDiskKMSKeyId;
	setParameter("DataDiskKMSKeyId", dataDiskKMSKeyId);
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
	setParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
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

bool ModifyClusterTemplateRequest::getDataDiskEncrypted()const
{
	return dataDiskEncrypted_;
}

void ModifyClusterTemplateRequest::setDataDiskEncrypted(bool dataDiskEncrypted)
{
	dataDiskEncrypted_ = dataDiskEncrypted;
	setParameter("DataDiskEncrypted", dataDiskEncrypted ? "true" : "false");
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
	for(int dep1 = 0; dep1!= hostGroup.size(); dep1++) {
		auto hostGroupObj = hostGroup.at(dep1);
		std::string hostGroupObjStr = "HostGroup." + std::to_string(dep1 + 1);
		setParameter(hostGroupObjStr + ".Period", std::to_string(hostGroupObj.period));
		setParameter(hostGroupObjStr + ".SysDiskCapacity", std::to_string(hostGroupObj.sysDiskCapacity));
		setParameter(hostGroupObjStr + ".DiskCapacity", std::to_string(hostGroupObj.diskCapacity));
		setParameter(hostGroupObjStr + ".SysDiskType", hostGroupObj.sysDiskType);
		setParameter(hostGroupObjStr + ".ClusterId", hostGroupObj.clusterId);
		setParameter(hostGroupObjStr + ".DiskType", hostGroupObj.diskType);
		setParameter(hostGroupObjStr + ".HostGroupName", hostGroupObj.hostGroupName);
		setParameter(hostGroupObjStr + ".VSwitchId", hostGroupObj.vSwitchId);
		setParameter(hostGroupObjStr + ".DiskCount", std::to_string(hostGroupObj.diskCount));
		setParameter(hostGroupObjStr + ".AutoRenew", hostGroupObj.autoRenew ? "true" : "false");
		setParameter(hostGroupObjStr + ".HostGroupId", hostGroupObj.hostGroupId);
		setParameter(hostGroupObjStr + ".NodeCount", std::to_string(hostGroupObj.nodeCount));
		setParameter(hostGroupObjStr + ".InstanceType", hostGroupObj.instanceType);
		setParameter(hostGroupObjStr + ".Comment", hostGroupObj.comment);
		setParameter(hostGroupObjStr + ".ChargeType", hostGroupObj.chargeType);
		setParameter(hostGroupObjStr + ".MultiInstanceTypes", hostGroupObj.multiInstanceTypes);
		setParameter(hostGroupObjStr + ".CreateType", hostGroupObj.createType);
		setParameter(hostGroupObjStr + ".HostGroupType", hostGroupObj.hostGroupType);
	}
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

std::vector<ModifyClusterTemplateRequest::Config> ModifyClusterTemplateRequest::getConfig()const
{
	return config_;
}

void ModifyClusterTemplateRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	for(int dep1 = 0; dep1!= config.size(); dep1++) {
		auto configObj = config.at(dep1);
		std::string configObjStr = "Config." + std::to_string(dep1 + 1);
		setParameter(configObjStr + ".ConfigKey", configObj.configKey);
		setParameter(configObjStr + ".FileName", configObj.fileName);
		setParameter(configObjStr + ".Encrypt", configObj.encrypt);
		setParameter(configObjStr + ".Replace", configObj.replace);
		setParameter(configObjStr + ".ConfigValue", configObj.configValue);
		setParameter(configObjStr + ".ServiceName", configObj.serviceName);
	}
}

bool ModifyClusterTemplateRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void ModifyClusterTemplateRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

