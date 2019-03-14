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

bool CreateClusterTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateClusterTemplateRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", std::to_string(ioOptimized));
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

bool CreateClusterTemplateRequest::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterTemplateRequest::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setParameter("SshEnable", std::to_string(sshEnable));
}

bool CreateClusterTemplateRequest::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterTemplateRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", std::to_string(easEnable));
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

std::string CreateClusterTemplateRequest::getMachineType()const
{
	return machineType_;
}

void CreateClusterTemplateRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setParameter("MachineType", machineType);
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
		setParameter(str + ".Path", obj.path);
		setParameter(str + ".Arg", obj.arg);
		setParameter(str + ".Name", obj.name);
	}
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
	setParameter("UseLocalMetaDb", std::to_string(useLocalMetaDb));
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

bool CreateClusterTemplateRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateClusterTemplateRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", std::to_string(isOpenPublicIp));
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
	setParameter("AutoRenew", std::to_string(autoRenew));
}

std::vector<std::string> CreateClusterTemplateRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateClusterTemplateRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setParameter("OptionSoftWareList."+ std::to_string(i), optionSoftWareList.at(i));
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

std::string CreateClusterTemplateRequest::getNetType()const
{
	return netType_;
}

void CreateClusterTemplateRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
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
	setParameter("UseCustomHiveMetaDb", std::to_string(useCustomHiveMetaDb));
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
		setParameter(str + ".ConfigKey", obj.configKey);
		setParameter(str + ".FileName", obj.fileName);
		setParameter(str + ".Encrypt", obj.encrypt);
		setParameter(str + ".Replace", obj.replace);
		setParameter(str + ".ConfigValue", obj.configValue);
		setParameter(str + ".ServiceName", obj.serviceName);
	}
}

bool CreateClusterTemplateRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterTemplateRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", std::to_string(highAvailabilityEnable));
}

bool CreateClusterTemplateRequest::getInitCustomHiveMetaDb()const
{
	return initCustomHiveMetaDb_;
}

void CreateClusterTemplateRequest::setInitCustomHiveMetaDb(bool initCustomHiveMetaDb)
{
	initCustomHiveMetaDb_ = initCustomHiveMetaDb;
	setParameter("InitCustomHiveMetaDb", std::to_string(initCustomHiveMetaDb));
}

