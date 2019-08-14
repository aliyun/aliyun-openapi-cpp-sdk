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
	setCoreParameter("AutoPayOrder", autoPayOrder ? "true" : "false");
}

long CreateClusterV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateClusterV2Request::getLogPath()const
{
	return logPath_;
}

void CreateClusterV2Request::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", logPath);
}

std::string CreateClusterV2Request::getMasterPwd()const
{
	return masterPwd_;
}

void CreateClusterV2Request::setMasterPwd(const std::string& masterPwd)
{
	masterPwd_ = masterPwd;
	setCoreParameter("MasterPwd", masterPwd);
}

std::string CreateClusterV2Request::getConfigurations()const
{
	return configurations_;
}

void CreateClusterV2Request::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", configurations);
}

bool CreateClusterV2Request::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateClusterV2Request::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string CreateClusterV2Request::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateClusterV2Request::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool CreateClusterV2Request::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterV2Request::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setCoreParameter("SshEnable", sshEnable ? "true" : "false");
}

bool CreateClusterV2Request::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterV2Request::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable ? "true" : "false");
}

std::string CreateClusterV2Request::getKeyPairName()const
{
	return keyPairName_;
}

void CreateClusterV2Request::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string CreateClusterV2Request::getMetaStoreType()const
{
	return metaStoreType_;
}

void CreateClusterV2Request::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setCoreParameter("MetaStoreType", metaStoreType);
}

std::string CreateClusterV2Request::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateClusterV2Request::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", securityGroupName);
}

std::string CreateClusterV2Request::getDepositType()const
{
	return depositType_;
}

void CreateClusterV2Request::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setCoreParameter("DepositType", depositType);
}

std::string CreateClusterV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterV2Request::getMachineType()const
{
	return machineType_;
}

void CreateClusterV2Request::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setCoreParameter("MachineType", machineType);
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
		setCoreParameter(str + ".HostName", obj.hostName);
		for(int i = 0; i!= obj.componentNameList.size(); i++)				setCoreParameter(str + ".ComponentNameList."+ std::to_string(i), obj.componentNameList.at(i));
		setCoreParameter(str + ".ServiceName", obj.serviceName);
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
		setCoreParameter(str + ".Path", obj.path);
		setCoreParameter(str + ".Arg", obj.arg);
		setCoreParameter(str + ".Name", obj.name);
	}
}

std::string CreateClusterV2Request::getRegionId()const
{
	return regionId_;
}

void CreateClusterV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool CreateClusterV2Request::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void CreateClusterV2Request::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
}

std::string CreateClusterV2Request::getMetaStoreConf()const
{
	return metaStoreConf_;
}

void CreateClusterV2Request::setMetaStoreConf(const std::string& metaStoreConf)
{
	metaStoreConf_ = metaStoreConf;
	setCoreParameter("MetaStoreConf", metaStoreConf);
}

std::string CreateClusterV2Request::getEmrVer()const
{
	return emrVer_;
}

void CreateClusterV2Request::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", emrVer);
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
		setCoreParameter(str + ".Password", obj.password);
		setCoreParameter(str + ".UserId", obj.userId);
		setCoreParameter(str + ".UserName", obj.userName);
	}
}

std::string CreateClusterV2Request::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateClusterV2Request::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setCoreParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

std::string CreateClusterV2Request::getAuthorizeContent()const
{
	return authorizeContent_;
}

void CreateClusterV2Request::setAuthorizeContent(const std::string& authorizeContent)
{
	authorizeContent_ = authorizeContent;
	setCoreParameter("AuthorizeContent", authorizeContent);
}

bool CreateClusterV2Request::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateClusterV2Request::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

int CreateClusterV2Request::getPeriod()const
{
	return period_;
}

void CreateClusterV2Request::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string CreateClusterV2Request::getWhiteListType()const
{
	return whiteListType_;
}

void CreateClusterV2Request::setWhiteListType(const std::string& whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", whiteListType);
}

std::string CreateClusterV2Request::getRelatedClusterId()const
{
	return relatedClusterId_;
}

void CreateClusterV2Request::setRelatedClusterId(const std::string& relatedClusterId)
{
	relatedClusterId_ = relatedClusterId;
	setCoreParameter("RelatedClusterId", relatedClusterId);
}

std::string CreateClusterV2Request::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void CreateClusterV2Request::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", instanceGeneration);
}

std::string CreateClusterV2Request::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterV2Request::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateClusterV2Request::getClusterType()const
{
	return clusterType_;
}

void CreateClusterV2Request::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

bool CreateClusterV2Request::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterV2Request::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::vector<std::string> CreateClusterV2Request::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateClusterV2Request::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), optionSoftWareList.at(i));
}

std::string CreateClusterV2Request::getVpcId()const
{
	return vpcId_;
}

void CreateClusterV2Request::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateClusterV2Request::getNetType()const
{
	return netType_;
}

void CreateClusterV2Request::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::string CreateClusterV2Request::getName()const
{
	return name_;
}

void CreateClusterV2Request::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
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
		setCoreParameter(str + ".Period", std::to_string(obj.period));
		setCoreParameter(str + ".SysDiskCapacity", std::to_string(obj.sysDiskCapacity));
		setCoreParameter(str + ".DiskCapacity", std::to_string(obj.diskCapacity));
		setCoreParameter(str + ".SysDiskType", obj.sysDiskType);
		setCoreParameter(str + ".ClusterId", obj.clusterId);
		setCoreParameter(str + ".DiskType", obj.diskType);
		setCoreParameter(str + ".HostGroupName", obj.hostGroupName);
		setCoreParameter(str + ".VSwitchId", obj.vSwitchId);
		setCoreParameter(str + ".DiskCount", std::to_string(obj.diskCount));
		setCoreParameter(str + ".AutoRenew", obj.autoRenew ? "true" : "false");
		setCoreParameter(str + ".GpuDriver", obj.gpuDriver);
		setCoreParameter(str + ".HostGroupId", obj.hostGroupId);
		setCoreParameter(str + ".NodeCount", std::to_string(obj.nodeCount));
		setCoreParameter(str + ".InstanceType", obj.instanceType);
		setCoreParameter(str + ".Comment", obj.comment);
		setCoreParameter(str + ".ChargeType", obj.chargeType);
		setCoreParameter(str + ".CreateType", obj.createType);
		setCoreParameter(str + ".HostGroupType", obj.hostGroupType);
	}
}

std::string CreateClusterV2Request::getZoneId()const
{
	return zoneId_;
}

void CreateClusterV2Request::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateClusterV2Request::getChargeType()const
{
	return chargeType_;
}

void CreateClusterV2Request::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

bool CreateClusterV2Request::getUseCustomHiveMetaDB()const
{
	return useCustomHiveMetaDB_;
}

void CreateClusterV2Request::setUseCustomHiveMetaDB(bool useCustomHiveMetaDB)
{
	useCustomHiveMetaDB_ = useCustomHiveMetaDB;
	setCoreParameter("UseCustomHiveMetaDB", useCustomHiveMetaDB ? "true" : "false");
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
		setCoreParameter(str + ".ConfigKey", obj.configKey);
		setCoreParameter(str + ".FileName", obj.fileName);
		setCoreParameter(str + ".Encrypt", obj.encrypt);
		setCoreParameter(str + ".Replace", obj.replace);
		setCoreParameter(str + ".ConfigValue", obj.configValue);
		setCoreParameter(str + ".ServiceName", obj.serviceName);
	}
}

bool CreateClusterV2Request::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterV2Request::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

bool CreateClusterV2Request::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void CreateClusterV2Request::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setCoreParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
}

