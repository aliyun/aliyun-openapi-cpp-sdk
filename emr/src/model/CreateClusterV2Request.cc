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
{
	setMethod(HttpRequest::Method::Post);
}

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

bool CreateClusterV2Request::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterV2Request::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setCoreParameter("SshEnable", sshEnable ? "true" : "false");
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
	for(int dep1 = 0; dep1!= hostComponentInfo.size(); dep1++) {
		auto hostComponentInfoObj = hostComponentInfo.at(dep1);
		std::string hostComponentInfoObjStr = "HostComponentInfo." + std::to_string(dep1);
		setCoreParameter(hostComponentInfoObjStr + ".HostName", hostComponentInfoObj.hostName);
		for(int dep2 = 0; dep2!= hostComponentInfoObj.componentNameList.size(); dep2++) {
			setCoreParameter(hostComponentInfoObjStr + ".ComponentNameList."+ std::to_string(dep2), hostComponentInfoObj.componentNameList.at(dep2));
		}
		setCoreParameter(hostComponentInfoObjStr + ".ServiceName", hostComponentInfoObj.serviceName);
	}
}

std::vector<CreateClusterV2Request::BootstrapAction> CreateClusterV2Request::getBootstrapAction()const
{
	return bootstrapAction_;
}

void CreateClusterV2Request::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
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
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setCoreParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
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

std::string CreateClusterV2Request::getZoneId()const
{
	return zoneId_;
}

void CreateClusterV2Request::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
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

bool CreateClusterV2Request::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void CreateClusterV2Request::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setCoreParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
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

bool CreateClusterV2Request::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterV2Request::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable ? "true" : "false");
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

std::vector<CreateClusterV2Request::UserInfo> CreateClusterV2Request::getUserInfo()const
{
	return userInfo_;
}

void CreateClusterV2Request::setUserInfo(const std::vector<UserInfo>& userInfo)
{
	userInfo_ = userInfo;
	for(int dep1 = 0; dep1!= userInfo.size(); dep1++) {
		auto userInfoObj = userInfo.at(dep1);
		std::string userInfoObjStr = "UserInfo." + std::to_string(dep1);
		setCoreParameter(userInfoObjStr + ".Password", userInfoObj.password);
		setCoreParameter(userInfoObjStr + ".UserId", userInfoObj.userId);
		setCoreParameter(userInfoObjStr + ".UserName", userInfoObj.userName);
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

std::string CreateClusterV2Request::getVpcId()const
{
	return vpcId_;
}

void CreateClusterV2Request::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::vector<CreateClusterV2Request::HostGroup> CreateClusterV2Request::getHostGroup()const
{
	return hostGroup_;
}

void CreateClusterV2Request::setHostGroup(const std::vector<HostGroup>& hostGroup)
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
		setCoreParameter(hostGroupObjStr + ".GpuDriver", hostGroupObj.gpuDriver);
		setCoreParameter(hostGroupObjStr + ".HostGroupId", hostGroupObj.hostGroupId);
		setCoreParameter(hostGroupObjStr + ".NodeCount", std::to_string(hostGroupObj.nodeCount));
		setCoreParameter(hostGroupObjStr + ".InstanceType", hostGroupObj.instanceType);
		setCoreParameter(hostGroupObjStr + ".Comment", hostGroupObj.comment);
		setCoreParameter(hostGroupObjStr + ".ChargeType", hostGroupObj.chargeType);
		setCoreParameter(hostGroupObjStr + ".CreateType", hostGroupObj.createType);
		setCoreParameter(hostGroupObjStr + ".HostGroupType", hostGroupObj.hostGroupType);
	}
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

std::vector<CreateClusterV2Request::Config> CreateClusterV2Request::getConfig()const
{
	return config_;
}

void CreateClusterV2Request::setConfig(const std::vector<Config>& config)
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

bool CreateClusterV2Request::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterV2Request::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

