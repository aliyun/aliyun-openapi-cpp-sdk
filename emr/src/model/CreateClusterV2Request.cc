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

#include <alibabacloud/emr/model/CreateClusterV2Request.h>

using AlibabaCloud::Emr::Model::CreateClusterV2Request;

CreateClusterV2Request::CreateClusterV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "CreateClusterV2")
{}

CreateClusterV2Request::~CreateClusterV2Request()
{}

bool CreateClusterV2Request::getAutoPayOrder()const
{
	return autoPayOrder_;
}

void CreateClusterV2Request::setAutoPayOrder(bool autoPayOrder)
{
	autoPayOrder_ = autoPayOrder;
	setParameter("AutoPayOrder", std::to_string(autoPayOrder));
}

long CreateClusterV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateClusterV2Request::getLogPath()const
{
	return logPath_;
}

void CreateClusterV2Request::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setParameter("LogPath", logPath);
}

std::string CreateClusterV2Request::getMasterPwd()const
{
	return masterPwd_;
}

void CreateClusterV2Request::setMasterPwd(const std::string& masterPwd)
{
	masterPwd_ = masterPwd;
	setParameter("MasterPwd", masterPwd);
}

std::string CreateClusterV2Request::getConfigurations()const
{
	return configurations_;
}

void CreateClusterV2Request::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setParameter("Configurations", configurations);
}

bool CreateClusterV2Request::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateClusterV2Request::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", std::to_string(ioOptimized));
}

std::string CreateClusterV2Request::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateClusterV2Request::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool CreateClusterV2Request::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterV2Request::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setParameter("SshEnable", std::to_string(sshEnable));
}

bool CreateClusterV2Request::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterV2Request::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", std::to_string(easEnable));
}

std::string CreateClusterV2Request::getKeyPairName()const
{
	return keyPairName_;
}

void CreateClusterV2Request::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::string CreateClusterV2Request::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateClusterV2Request::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

std::string CreateClusterV2Request::getDepositType()const
{
	return depositType_;
}

void CreateClusterV2Request::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setParameter("DepositType", depositType);
}

std::string CreateClusterV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterV2Request::getMachineType()const
{
	return machineType_;
}

void CreateClusterV2Request::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setParameter("MachineType", machineType);
}

std::vector<CreateClusterV2Request::HostComponentInfo> CreateClusterV2Request::getHostComponentInfo()const
{
	return hostComponentInfo_;
}

void CreateClusterV2Request::setHostComponentInfo(const std::vector<HostComponentInfo>& hostComponentInfo)
{
	hostComponentInfo_ = hostComponentInfo;
	int i = 0;
	for(int i = 0; i!= hostComponentInfo.size(); i++)	{
		auto obj = hostComponentInfo.at(i);
		std::string str ="HostComponentInfo."+ std::to_string(i);
		setParameter(str + ".HostName", obj.hostName);
		for(int i = 0; i!= obj.componentNameList.size(); i++)				setParameter(str + ".ComponentNameList."+ std::to_string(i), obj.componentNameList.at(i));
		setParameter(str + ".ServiceName", obj.serviceName);
	}
}

std::vector<CreateClusterV2Request::BootstrapAction> CreateClusterV2Request::getBootstrapAction()const
{
	return bootstrapAction_;
}

void CreateClusterV2Request::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
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

std::string CreateClusterV2Request::getRegionId()const
{
	return regionId_;
}

void CreateClusterV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateClusterV2Request::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void CreateClusterV2Request::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setParameter("UseLocalMetaDb", std::to_string(useLocalMetaDb));
}

std::string CreateClusterV2Request::getEmrVer()const
{
	return emrVer_;
}

void CreateClusterV2Request::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setParameter("EmrVer", emrVer);
}

std::vector<CreateClusterV2Request::UserInfo> CreateClusterV2Request::getUserInfo()const
{
	return userInfo_;
}

void CreateClusterV2Request::setUserInfo(const std::vector<UserInfo>& userInfo)
{
	userInfo_ = userInfo;
	int i = 0;
	for(int i = 0; i!= userInfo.size(); i++)	{
		auto obj = userInfo.at(i);
		std::string str ="UserInfo."+ std::to_string(i);
		setParameter(str + ".Password", obj.password);
		setParameter(str + ".UserId", obj.userId);
		setParameter(str + ".UserName", obj.userName);
	}
}

std::string CreateClusterV2Request::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateClusterV2Request::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

std::string CreateClusterV2Request::getAuthorizeContent()const
{
	return authorizeContent_;
}

void CreateClusterV2Request::setAuthorizeContent(const std::string& authorizeContent)
{
	authorizeContent_ = authorizeContent;
	setParameter("AuthorizeContent", authorizeContent);
}

bool CreateClusterV2Request::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateClusterV2Request::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", std::to_string(isOpenPublicIp));
}

int CreateClusterV2Request::getPeriod()const
{
	return period_;
}

void CreateClusterV2Request::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateClusterV2Request::getWhiteListType()const
{
	return whiteListType_;
}

void CreateClusterV2Request::setWhiteListType(const std::string& whiteListType)
{
	whiteListType_ = whiteListType;
	setParameter("WhiteListType", whiteListType);
}

std::string CreateClusterV2Request::getRelatedClusterId()const
{
	return relatedClusterId_;
}

void CreateClusterV2Request::setRelatedClusterId(const std::string& relatedClusterId)
{
	relatedClusterId_ = relatedClusterId;
	setParameter("RelatedClusterId", relatedClusterId);
}

std::string CreateClusterV2Request::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void CreateClusterV2Request::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setParameter("InstanceGeneration", instanceGeneration);
}

std::string CreateClusterV2Request::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterV2Request::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateClusterV2Request::getClusterType()const
{
	return clusterType_;
}

void CreateClusterV2Request::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

bool CreateClusterV2Request::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterV2Request::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", std::to_string(autoRenew));
}

std::vector<std::string> CreateClusterV2Request::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateClusterV2Request::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setParameter("OptionSoftWareList."+ std::to_string(i), optionSoftWareList.at(i));
}

std::string CreateClusterV2Request::getVpcId()const
{
	return vpcId_;
}

void CreateClusterV2Request::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateClusterV2Request::getNetType()const
{
	return netType_;
}

void CreateClusterV2Request::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

std::string CreateClusterV2Request::getName()const
{
	return name_;
}

void CreateClusterV2Request::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<CreateClusterV2Request::HostGroup> CreateClusterV2Request::getHostGroup()const
{
	return hostGroup_;
}

void CreateClusterV2Request::setHostGroup(const std::vector<HostGroup>& hostGroup)
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
		setParameter(str + ".GpuDriver", obj.gpuDriver);
		setParameter(str + ".HostGroupId", obj.hostGroupId);
		setParameter(str + ".NodeCount", std::to_string(obj.nodeCount));
		setParameter(str + ".InstanceType", obj.instanceType);
		setParameter(str + ".Comment", obj.comment);
		setParameter(str + ".ChargeType", obj.chargeType);
		setParameter(str + ".CreateType", obj.createType);
		setParameter(str + ".HostGroupType", obj.hostGroupType);
	}
}

std::string CreateClusterV2Request::getZoneId()const
{
	return zoneId_;
}

void CreateClusterV2Request::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateClusterV2Request::getChargeType()const
{
	return chargeType_;
}

void CreateClusterV2Request::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

bool CreateClusterV2Request::getUseCustomHiveMetaDB()const
{
	return useCustomHiveMetaDB_;
}

void CreateClusterV2Request::setUseCustomHiveMetaDB(bool useCustomHiveMetaDB)
{
	useCustomHiveMetaDB_ = useCustomHiveMetaDB;
	setParameter("UseCustomHiveMetaDB", std::to_string(useCustomHiveMetaDB));
}

std::vector<CreateClusterV2Request::Config> CreateClusterV2Request::getConfig()const
{
	return config_;
}

void CreateClusterV2Request::setConfig(const std::vector<Config>& config)
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

bool CreateClusterV2Request::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterV2Request::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", std::to_string(highAvailabilityEnable));
}

bool CreateClusterV2Request::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void CreateClusterV2Request::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setParameter("InitCustomHiveMetaDB", std::to_string(initCustomHiveMetaDB));
}

