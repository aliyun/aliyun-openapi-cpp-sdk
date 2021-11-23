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

#include <alibabacloud/emr/model/CreateClusterTemplateRequest.h>

using AlibabaCloud::Emr::Model::CreateClusterTemplateRequest;

CreateClusterTemplateRequest::CreateClusterTemplateRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateClusterTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateClusterTemplateRequest::~CreateClusterTemplateRequest()
{}

long CreateClusterTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateClusterTemplateRequest::getLogPath()const
{
	return logPath_;
}

void CreateClusterTemplateRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setParameter("LogPath", logPath);
}

std::string CreateClusterTemplateRequest::getMasterPwd()const
{
	return masterPwd_;
}

void CreateClusterTemplateRequest::setMasterPwd(const std::string& masterPwd)
{
	masterPwd_ = masterPwd;
	setParameter("MasterPwd", masterPwd);
}

std::string CreateClusterTemplateRequest::getConfigurations()const
{
	return configurations_;
}

void CreateClusterTemplateRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setParameter("Configurations", configurations);
}

bool CreateClusterTemplateRequest::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterTemplateRequest::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setParameter("SshEnable", sshEnable ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateClusterTemplateRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::string CreateClusterTemplateRequest::getMetaStoreType()const
{
	return metaStoreType_;
}

void CreateClusterTemplateRequest::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setParameter("MetaStoreType", metaStoreType);
}

std::string CreateClusterTemplateRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateClusterTemplateRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

std::string CreateClusterTemplateRequest::getMachineType()const
{
	return machineType_;
}

void CreateClusterTemplateRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setParameter("MachineType", machineType);
}

std::string CreateClusterTemplateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateClusterTemplateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::vector<CreateClusterTemplateRequest::BootstrapAction> CreateClusterTemplateRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void CreateClusterTemplateRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
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

std::string CreateClusterTemplateRequest::getMetaStoreConf()const
{
	return metaStoreConf_;
}

void CreateClusterTemplateRequest::setMetaStoreConf(const std::string& metaStoreConf)
{
	metaStoreConf_ = metaStoreConf;
	setParameter("MetaStoreConf", metaStoreConf);
}

std::string CreateClusterTemplateRequest::getEmrVer()const
{
	return emrVer_;
}

void CreateClusterTemplateRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setParameter("EmrVer", emrVer);
}

std::vector<CreateClusterTemplateRequest::Tag> CreateClusterTemplateRequest::getTag()const
{
	return tag_;
}

void CreateClusterTemplateRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

bool CreateClusterTemplateRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateClusterTemplateRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

int CreateClusterTemplateRequest::getPeriod()const
{
	return period_;
}

void CreateClusterTemplateRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateClusterTemplateRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void CreateClusterTemplateRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setParameter("InstanceGeneration", instanceGeneration);
}

std::string CreateClusterTemplateRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterTemplateRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateClusterTemplateRequest::getClusterType()const
{
	return clusterType_;
}

void CreateClusterTemplateRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

bool CreateClusterTemplateRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterTemplateRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::vector<std::string> CreateClusterTemplateRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateClusterTemplateRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
}

std::string CreateClusterTemplateRequest::getNetType()const
{
	return netType_;
}

void CreateClusterTemplateRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

std::string CreateClusterTemplateRequest::getZoneId()const
{
	return zoneId_;
}

void CreateClusterTemplateRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

bool CreateClusterTemplateRequest::getUseCustomHiveMetaDb()const
{
	return useCustomHiveMetaDb_;
}

void CreateClusterTemplateRequest::setUseCustomHiveMetaDb(bool useCustomHiveMetaDb)
{
	useCustomHiveMetaDb_ = useCustomHiveMetaDb;
	setParameter("UseCustomHiveMetaDb", useCustomHiveMetaDb ? "true" : "false");
}

bool CreateClusterTemplateRequest::getInitCustomHiveMetaDb()const
{
	return initCustomHiveMetaDb_;
}

void CreateClusterTemplateRequest::setInitCustomHiveMetaDb(bool initCustomHiveMetaDb)
{
	initCustomHiveMetaDb_ = initCustomHiveMetaDb;
	setParameter("InitCustomHiveMetaDb", initCustomHiveMetaDb ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getClientToken()const
{
	return clientToken_;
}

void CreateClusterTemplateRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

bool CreateClusterTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateClusterTemplateRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateClusterTemplateRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool CreateClusterTemplateRequest::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterTemplateRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", easEnable ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getDepositType()const
{
	return depositType_;
}

void CreateClusterTemplateRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setParameter("DepositType", depositType);
}

std::string CreateClusterTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterTemplateRequest::getDataDiskKMSKeyId()const
{
	return dataDiskKMSKeyId_;
}

void CreateClusterTemplateRequest::setDataDiskKMSKeyId(const std::string& dataDiskKMSKeyId)
{
	dataDiskKMSKeyId_ = dataDiskKMSKeyId;
	setParameter("DataDiskKMSKeyId", dataDiskKMSKeyId);
}

std::string CreateClusterTemplateRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateClusterTemplateRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void CreateClusterTemplateRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void CreateClusterTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string CreateClusterTemplateRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateClusterTemplateRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

bool CreateClusterTemplateRequest::getDataDiskEncrypted()const
{
	return dataDiskEncrypted_;
}

void CreateClusterTemplateRequest::setDataDiskEncrypted(bool dataDiskEncrypted)
{
	dataDiskEncrypted_ = dataDiskEncrypted;
	setParameter("DataDiskEncrypted", dataDiskEncrypted ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getVpcId()const
{
	return vpcId_;
}

void CreateClusterTemplateRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::vector<CreateClusterTemplateRequest::HostGroup> CreateClusterTemplateRequest::getHostGroup()const
{
	return hostGroup_;
}

void CreateClusterTemplateRequest::setHostGroup(const std::vector<HostGroup>& hostGroup)
{
	hostGroup_ = hostGroup;
	for(int dep1 = 0; dep1!= hostGroup.size(); dep1++) {
		auto hostGroupObj = hostGroup.at(dep1);
		std::string hostGroupObjStr = "HostGroup." + std::to_string(dep1 + 1);
		setParameter(hostGroupObjStr + ".Period", std::to_string(hostGroupObj.period));
		setParameter(hostGroupObjStr + ".SysDiskCapacity", std::to_string(hostGroupObj.sysDiskCapacity));
		setParameter(hostGroupObjStr + ".PrivatePoolOptionsId", hostGroupObj.privatePoolOptionsId);
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
		setParameter(hostGroupObjStr + ".PrivatePoolOptionsMatchCriteria", hostGroupObj.privatePoolOptionsMatchCriteria);
	}
}

std::vector<CreateClusterTemplateRequest::Config> CreateClusterTemplateRequest::getConfig()const
{
	return config_;
}

void CreateClusterTemplateRequest::setConfig(const std::vector<Config>& config)
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

bool CreateClusterTemplateRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterTemplateRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

