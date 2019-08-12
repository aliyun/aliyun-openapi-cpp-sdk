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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateClusterV2Request::getLogPath()const
{
	return logPath_;
}

void CreateClusterV2Request::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", std::to_string(logPath));
}

std::string CreateClusterV2Request::getMasterPwd()const
{
	return masterPwd_;
}

void CreateClusterV2Request::setMasterPwd(const std::string& masterPwd)
{
	masterPwd_ = masterPwd;
	setCoreParameter("MasterPwd", std::to_string(masterPwd));
}

std::string CreateClusterV2Request::getConfigurations()const
{
	return configurations_;
}

void CreateClusterV2Request::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", std::to_string(configurations));
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
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
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
	setCoreParameter("KeyPairName", std::to_string(keyPairName));
}

std::string CreateClusterV2Request::getMetaStoreType()const
{
	return metaStoreType_;
}

void CreateClusterV2Request::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setCoreParameter("MetaStoreType", std::to_string(metaStoreType));
}

std::string CreateClusterV2Request::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateClusterV2Request::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", std::to_string(securityGroupName));
}

std::string CreateClusterV2Request::getDepositType()const
{
	return depositType_;
}

void CreateClusterV2Request::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setCoreParameter("DepositType", std::to_string(depositType));
}

std::string CreateClusterV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateClusterV2Request::getMachineType()const
{
	return machineType_;
}

void CreateClusterV2Request::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setCoreParameter("MachineType", std::to_string(machineType));
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
		setCoreParameter(str + ".HostName", std::to_string(obj.hostName));
		for(int i = 0; i!= obj.componentNameList.size(); i++)				setCoreParameter(str + ".ComponentNameList."+ std::to_string(i), std::to_string(obj.componentNameList.at(i)));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
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
		setCoreParameter(str + ".Path", std::to_string(obj.path));
		setCoreParameter(str + ".Arg", std::to_string(obj.arg));
		setCoreParameter(str + ".Name", std::to_string(obj.name));
	}
}

std::string CreateClusterV2Request::getRegionId()const
{
	return regionId_;
}

void CreateClusterV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
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
	setCoreParameter("MetaStoreConf", std::to_string(metaStoreConf));
}

std::string CreateClusterV2Request::getEmrVer()const
{
	return emrVer_;
}

void CreateClusterV2Request::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", std::to_string(emrVer));
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
		setCoreParameter(str + ".Password", std::to_string(obj.password));
		setCoreParameter(str + ".UserId", std::to_string(obj.userId));
		setCoreParameter(str + ".UserName", std::to_string(obj.userName));
	}
}

std::string CreateClusterV2Request::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateClusterV2Request::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setCoreParameter("UserDefinedEmrEcsRole", std::to_string(userDefinedEmrEcsRole));
}

std::string CreateClusterV2Request::getAuthorizeContent()const
{
	return authorizeContent_;
}

void CreateClusterV2Request::setAuthorizeContent(const std::string& authorizeContent)
{
	authorizeContent_ = authorizeContent;
	setCoreParameter("AuthorizeContent", std::to_string(authorizeContent));
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
	setCoreParameter("Period", period);
}

std::string CreateClusterV2Request::getWhiteListType()const
{
	return whiteListType_;
}

void CreateClusterV2Request::setWhiteListType(const std::string& whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", std::to_string(whiteListType));
}

std::string CreateClusterV2Request::getRelatedClusterId()const
{
	return relatedClusterId_;
}

void CreateClusterV2Request::setRelatedClusterId(const std::string& relatedClusterId)
{
	relatedClusterId_ = relatedClusterId;
	setCoreParameter("RelatedClusterId", std::to_string(relatedClusterId));
}

std::string CreateClusterV2Request::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void CreateClusterV2Request::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", std::to_string(instanceGeneration));
}

std::string CreateClusterV2Request::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterV2Request::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string CreateClusterV2Request::getClusterType()const
{
	return clusterType_;
}

void CreateClusterV2Request::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", std::to_string(clusterType));
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
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), std::to_string(optionSoftWareList.at(i)));
}

std::string CreateClusterV2Request::getVpcId()const
{
	return vpcId_;
}

void CreateClusterV2Request::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string CreateClusterV2Request::getNetType()const
{
	return netType_;
}

void CreateClusterV2Request::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", std::to_string(netType));
}

std::string CreateClusterV2Request::getName()const
{
	return name_;
}

void CreateClusterV2Request::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
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
		setCoreParameter(str + ".GpuDriver", std::to_string(obj.gpuDriver));
		setCoreParameter(str + ".HostGroupId", std::to_string(obj.hostGroupId));
		setCoreParameter(str + ".NodeCount", obj.nodeCount);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".Comment", std::to_string(obj.comment));
		setCoreParameter(str + ".ChargeType", std::to_string(obj.chargeType));
		setCoreParameter(str + ".CreateType", std::to_string(obj.createType));
		setCoreParameter(str + ".HostGroupType", std::to_string(obj.hostGroupType));
	}
}

std::string CreateClusterV2Request::getZoneId()const
{
	return zoneId_;
}

void CreateClusterV2Request::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string CreateClusterV2Request::getChargeType()const
{
	return chargeType_;
}

void CreateClusterV2Request::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", std::to_string(chargeType));
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
		setCoreParameter(str + ".ConfigKey", std::to_string(obj.configKey));
		setCoreParameter(str + ".FileName", std::to_string(obj.fileName));
		setCoreParameter(str + ".Encrypt", std::to_string(obj.encrypt));
		setCoreParameter(str + ".Replace", std::to_string(obj.replace));
		setCoreParameter(str + ".ConfigValue", std::to_string(obj.configValue));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
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

