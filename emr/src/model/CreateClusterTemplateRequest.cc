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
{}

CreateClusterTemplateRequest::~CreateClusterTemplateRequest()
{}

long CreateClusterTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
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

bool CreateClusterTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateClusterTemplateRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
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

bool CreateClusterTemplateRequest::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterTemplateRequest::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setCoreParameter("SshEnable", sshEnable);
}

bool CreateClusterTemplateRequest::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterTemplateRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable);
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
	int i = 0;
	for(int i = 0; i!= bootstrapAction.size(); i++)	{
		auto obj = bootstrapAction.at(i);
		std::string str ="BootstrapAction."+ std::to_string(i);
		setCoreParameter(str + ".Path", std::to_string(obj.path));
		setCoreParameter(str + ".Arg", std::to_string(obj.arg));
		setCoreParameter(str + ".Name", std::to_string(obj.name));
	}
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
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb);
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

bool CreateClusterTemplateRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateClusterTemplateRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp);
}

int CreateClusterTemplateRequest::getPeriod()const
{
	return period_;
}

void CreateClusterTemplateRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
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
	setCoreParameter("AutoRenew", autoRenew);
}

std::vector<std::string> CreateClusterTemplateRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateClusterTemplateRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), std::to_string(optionSoftWareList.at(i)));
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

std::string CreateClusterTemplateRequest::getNetType()const
{
	return netType_;
}

void CreateClusterTemplateRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::vector<CreateClusterTemplateRequest::HostGroup> CreateClusterTemplateRequest::getHostGroup()const
{
	return hostGroup_;
}

void CreateClusterTemplateRequest::setHostGroup(const std::vector<HostGroup>& hostGroup)
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
	setCoreParameter("UseCustomHiveMetaDb", useCustomHiveMetaDb);
}

std::vector<CreateClusterTemplateRequest::Config> CreateClusterTemplateRequest::getConfig()const
{
	return config_;
}

void CreateClusterTemplateRequest::setConfig(const std::vector<Config>& config)
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

bool CreateClusterTemplateRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterTemplateRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable);
}

bool CreateClusterTemplateRequest::getInitCustomHiveMetaDb()const
{
	return initCustomHiveMetaDb_;
}

void CreateClusterTemplateRequest::setInitCustomHiveMetaDb(bool initCustomHiveMetaDb)
{
	initCustomHiveMetaDb_ = initCustomHiveMetaDb;
	setCoreParameter("InitCustomHiveMetaDb", initCustomHiveMetaDb);
}

