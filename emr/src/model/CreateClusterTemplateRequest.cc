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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateClusterTemplateRequest::getLogPath()const
{
	return logPath_;
}

void CreateClusterTemplateRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", logPath);
}

std::string CreateClusterTemplateRequest::getMasterPwd()const
{
	return masterPwd_;
}

void CreateClusterTemplateRequest::setMasterPwd(const std::string& masterPwd)
{
	masterPwd_ = masterPwd;
	setCoreParameter("MasterPwd", masterPwd);
}

std::string CreateClusterTemplateRequest::getConfigurations()const
{
	return configurations_;
}

void CreateClusterTemplateRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", configurations);
}

bool CreateClusterTemplateRequest::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterTemplateRequest::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setCoreParameter("SshEnable", sshEnable ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateClusterTemplateRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string CreateClusterTemplateRequest::getMetaStoreType()const
{
	return metaStoreType_;
}

void CreateClusterTemplateRequest::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setCoreParameter("MetaStoreType", metaStoreType);
}

std::string CreateClusterTemplateRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateClusterTemplateRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", securityGroupName);
}

std::string CreateClusterTemplateRequest::getMachineType()const
{
	return machineType_;
}

void CreateClusterTemplateRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setCoreParameter("MachineType", machineType);
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
		std::string bootstrapActionObjStr = "BootstrapAction." + std::to_string(dep1);
		setCoreParameter(bootstrapActionObjStr + ".Path", bootstrapActionObj.path);
		setCoreParameter(bootstrapActionObjStr + ".Arg", bootstrapActionObj.arg);
		setCoreParameter(bootstrapActionObjStr + ".Name", bootstrapActionObj.name);
	}
}

std::string CreateClusterTemplateRequest::getMetaStoreConf()const
{
	return metaStoreConf_;
}

void CreateClusterTemplateRequest::setMetaStoreConf(const std::string& metaStoreConf)
{
	metaStoreConf_ = metaStoreConf;
	setCoreParameter("MetaStoreConf", metaStoreConf);
}

std::string CreateClusterTemplateRequest::getEmrVer()const
{
	return emrVer_;
}

void CreateClusterTemplateRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", emrVer);
}

bool CreateClusterTemplateRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateClusterTemplateRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

int CreateClusterTemplateRequest::getPeriod()const
{
	return period_;
}

void CreateClusterTemplateRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string CreateClusterTemplateRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void CreateClusterTemplateRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", instanceGeneration);
}

std::string CreateClusterTemplateRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterTemplateRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateClusterTemplateRequest::getClusterType()const
{
	return clusterType_;
}

void CreateClusterTemplateRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

bool CreateClusterTemplateRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterTemplateRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::vector<std::string> CreateClusterTemplateRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateClusterTemplateRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setCoreParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
}

std::string CreateClusterTemplateRequest::getNetType()const
{
	return netType_;
}

void CreateClusterTemplateRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::string CreateClusterTemplateRequest::getZoneId()const
{
	return zoneId_;
}

void CreateClusterTemplateRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

bool CreateClusterTemplateRequest::getUseCustomHiveMetaDb()const
{
	return useCustomHiveMetaDb_;
}

void CreateClusterTemplateRequest::setUseCustomHiveMetaDb(bool useCustomHiveMetaDb)
{
	useCustomHiveMetaDb_ = useCustomHiveMetaDb;
	setCoreParameter("UseCustomHiveMetaDb", useCustomHiveMetaDb ? "true" : "false");
}

bool CreateClusterTemplateRequest::getInitCustomHiveMetaDb()const
{
	return initCustomHiveMetaDb_;
}

void CreateClusterTemplateRequest::setInitCustomHiveMetaDb(bool initCustomHiveMetaDb)
{
	initCustomHiveMetaDb_ = initCustomHiveMetaDb;
	setCoreParameter("InitCustomHiveMetaDb", initCustomHiveMetaDb ? "true" : "false");
}

bool CreateClusterTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateClusterTemplateRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateClusterTemplateRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool CreateClusterTemplateRequest::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterTemplateRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getDepositType()const
{
	return depositType_;
}

void CreateClusterTemplateRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setCoreParameter("DepositType", depositType);
}

std::string CreateClusterTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterTemplateRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool CreateClusterTemplateRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void CreateClusterTemplateRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
}

std::string CreateClusterTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void CreateClusterTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setCoreParameter("TemplateName", templateName);
}

std::string CreateClusterTemplateRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateClusterTemplateRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setCoreParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

std::string CreateClusterTemplateRequest::getVpcId()const
{
	return vpcId_;
}

void CreateClusterTemplateRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
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
		std::string hostGroupObjStr = "HostGroup." + std::to_string(dep1);
		setCoreParameter(hostGroupObjStr + ".Period", std::to_string(hostGroupObj.period));
		setCoreParameter(hostGroupObjStr + ".SysDiskCapacity", std::to_string(hostGroupObj.sysDiskCapacity));
		setCoreParameter(hostGroupObjStr + ".DiskCapacity", std::to_string(hostGroupObj.diskCapacity));
		setCoreParameter(hostGroupObjStr + ".SysDiskType", hostGroupObj.sysDiskType);
		setCoreParameter(hostGroupObjStr + ".ClusterId", hostGroupObj.clusterId);
		setCoreParameter(hostGroupObjStr + ".DiskType", hostGroupObj.diskType);
		setCoreParameter(hostGroupObjStr + ".HostGroupName", hostGroupObj.hostGroupName);
		setCoreParameter(hostGroupObjStr + ".VSwitchId", hostGroupObj.vSwitchId);
		setCoreParameter(hostGroupObjStr + ".DiskCount", std::to_string(hostGroupObj.diskCount));
		setCoreParameter(hostGroupObjStr + ".AutoRenew", hostGroupObj.autoRenew ? "true" : "false");
		setCoreParameter(hostGroupObjStr + ".HostGroupId", hostGroupObj.hostGroupId);
		setCoreParameter(hostGroupObjStr + ".NodeCount", std::to_string(hostGroupObj.nodeCount));
		setCoreParameter(hostGroupObjStr + ".InstanceType", hostGroupObj.instanceType);
		setCoreParameter(hostGroupObjStr + ".Comment", hostGroupObj.comment);
		setCoreParameter(hostGroupObjStr + ".ChargeType", hostGroupObj.chargeType);
		setCoreParameter(hostGroupObjStr + ".MultiInstanceTypes", hostGroupObj.multiInstanceTypes);
		setCoreParameter(hostGroupObjStr + ".CreateType", hostGroupObj.createType);
		setCoreParameter(hostGroupObjStr + ".HostGroupType", hostGroupObj.hostGroupType);
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
		std::string configObjStr = "Config." + std::to_string(dep1);
		setCoreParameter(configObjStr + ".ConfigKey", configObj.configKey);
		setCoreParameter(configObjStr + ".FileName", configObj.fileName);
		setCoreParameter(configObjStr + ".Encrypt", configObj.encrypt);
		setCoreParameter(configObjStr + ".Replace", configObj.replace);
		setCoreParameter(configObjStr + ".ConfigValue", configObj.configValue);
		setCoreParameter(configObjStr + ".ServiceName", configObj.serviceName);
	}
}

bool CreateClusterTemplateRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterTemplateRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

