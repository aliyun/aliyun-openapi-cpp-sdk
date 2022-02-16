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
	setParameter("AutoPayOrder", autoPayOrder ? "true" : "false");
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

bool CreateClusterV2Request::getSshEnable()const
{
	return sshEnable_;
}

void CreateClusterV2Request::setSshEnable(bool sshEnable)
{
	sshEnable_ = sshEnable;
	setParameter("SshEnable", sshEnable ? "true" : "false");
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

std::string CreateClusterV2Request::getMetaStoreType()const
{
	return metaStoreType_;
}

void CreateClusterV2Request::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setParameter("MetaStoreType", metaStoreType);
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

std::string CreateClusterV2Request::getMachineType()const
{
	return machineType_;
}

void CreateClusterV2Request::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setParameter("MachineType", machineType);
}

std::string CreateClusterV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateClusterV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
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
		std::string hostComponentInfoObjStr = "HostComponentInfo." + std::to_string(dep1 + 1);
		setParameter(hostComponentInfoObjStr + ".HostName", hostComponentInfoObj.hostName);
		for(int dep2 = 0; dep2!= hostComponentInfoObj.componentNameList.size(); dep2++) {
			setParameter(hostComponentInfoObjStr + ".ComponentNameList."+ std::to_string(dep2), hostComponentInfoObj.componentNameList.at(dep2));
		}
		setParameter(hostComponentInfoObjStr + ".ServiceName", hostComponentInfoObj.serviceName);
	}
}

std::string CreateClusterV2Request::getClickHouseConf()const
{
	return clickHouseConf_;
}

void CreateClusterV2Request::setClickHouseConf(const std::string& clickHouseConf)
{
	clickHouseConf_ = clickHouseConf;
	setParameter("ClickHouseConf", clickHouseConf);
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
		std::string bootstrapActionObjStr = "BootstrapAction." + std::to_string(dep1 + 1);
		setParameter(bootstrapActionObjStr + ".Path", bootstrapActionObj.path);
		setParameter(bootstrapActionObjStr + ".ExecutionTarget", bootstrapActionObj.executionTarget);
		setParameter(bootstrapActionObjStr + ".ExecutionMoment", bootstrapActionObj.executionMoment);
		setParameter(bootstrapActionObjStr + ".Arg", bootstrapActionObj.arg);
		setParameter(bootstrapActionObjStr + ".Name", bootstrapActionObj.name);
		setParameter(bootstrapActionObjStr + ".ExecutionFailStrategy", bootstrapActionObj.executionFailStrategy);
	}
}

std::string CreateClusterV2Request::getMetaStoreConf()const
{
	return metaStoreConf_;
}

void CreateClusterV2Request::setMetaStoreConf(const std::string& metaStoreConf)
{
	metaStoreConf_ = metaStoreConf;
	setParameter("MetaStoreConf", metaStoreConf);
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

std::vector<CreateClusterV2Request::Tag> CreateClusterV2Request::getTag()const
{
	return tag_;
}

void CreateClusterV2Request::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
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
	setParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
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

std::string CreateClusterV2Request::getExtraAttributes()const
{
	return extraAttributes_;
}

void CreateClusterV2Request::setExtraAttributes(const std::string& extraAttributes)
{
	extraAttributes_ = extraAttributes;
	setParameter("ExtraAttributes", extraAttributes);
}

bool CreateClusterV2Request::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterV2Request::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::vector<std::string> CreateClusterV2Request::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateClusterV2Request::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
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

std::string CreateClusterV2Request::getZoneId()const
{
	return zoneId_;
}

void CreateClusterV2Request::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

bool CreateClusterV2Request::getUseCustomHiveMetaDB()const
{
	return useCustomHiveMetaDB_;
}

void CreateClusterV2Request::setUseCustomHiveMetaDB(bool useCustomHiveMetaDB)
{
	useCustomHiveMetaDB_ = useCustomHiveMetaDB;
	setParameter("UseCustomHiveMetaDB", useCustomHiveMetaDB ? "true" : "false");
}

bool CreateClusterV2Request::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void CreateClusterV2Request::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
}

std::string CreateClusterV2Request::getClientToken()const
{
	return clientToken_;
}

void CreateClusterV2Request::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

bool CreateClusterV2Request::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateClusterV2Request::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized ? "true" : "false");
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

bool CreateClusterV2Request::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterV2Request::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", easEnable ? "true" : "false");
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

std::string CreateClusterV2Request::getDataDiskKMSKeyId()const
{
	return dataDiskKMSKeyId_;
}

void CreateClusterV2Request::setDataDiskKMSKeyId(const std::string& dataDiskKMSKeyId)
{
	dataDiskKMSKeyId_ = dataDiskKMSKeyId;
	setParameter("DataDiskKMSKeyId", dataDiskKMSKeyId);
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
	setParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
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
		std::string userInfoObjStr = "UserInfo." + std::to_string(dep1 + 1);
		setParameter(userInfoObjStr + ".Password", userInfoObj.password);
		setParameter(userInfoObjStr + ".UserId", userInfoObj.userId);
		setParameter(userInfoObjStr + ".UserName", userInfoObj.userName);
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

bool CreateClusterV2Request::getDataDiskEncrypted()const
{
	return dataDiskEncrypted_;
}

void CreateClusterV2Request::setDataDiskEncrypted(bool dataDiskEncrypted)
{
	dataDiskEncrypted_ = dataDiskEncrypted;
	setParameter("DataDiskEncrypted", dataDiskEncrypted ? "true" : "false");
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

std::string CreateClusterV2Request::getVpcId()const
{
	return vpcId_;
}

void CreateClusterV2Request::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::vector<CreateClusterV2Request::PromotionInfo> CreateClusterV2Request::getPromotionInfo()const
{
	return promotionInfo_;
}

void CreateClusterV2Request::setPromotionInfo(const std::vector<PromotionInfo>& promotionInfo)
{
	promotionInfo_ = promotionInfo;
	for(int dep1 = 0; dep1!= promotionInfo.size(); dep1++) {
		auto promotionInfoObj = promotionInfo.at(dep1);
		std::string promotionInfoObjStr = "PromotionInfo." + std::to_string(dep1 + 1);
		setParameter(promotionInfoObjStr + ".PromotionOptionCode", promotionInfoObj.promotionOptionCode);
		setParameter(promotionInfoObjStr + ".ProductCode", promotionInfoObj.productCode);
		setParameter(promotionInfoObjStr + ".PromotionOptionNo", promotionInfoObj.promotionOptionNo);
	}
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
		setParameter(hostGroupObjStr + ".GpuDriver", hostGroupObj.gpuDriver);
		setParameter(hostGroupObjStr + ".HostGroupId", hostGroupObj.hostGroupId);
		setParameter(hostGroupObjStr + ".NodeCount", std::to_string(hostGroupObj.nodeCount));
		setParameter(hostGroupObjStr + ".InstanceType", hostGroupObj.instanceType);
		setParameter(hostGroupObjStr + ".Comment", hostGroupObj.comment);
		setParameter(hostGroupObjStr + ".ChargeType", hostGroupObj.chargeType);
		setParameter(hostGroupObjStr + ".CreateType", hostGroupObj.createType);
		setParameter(hostGroupObjStr + ".HostGroupType", hostGroupObj.hostGroupType);
		setParameter(hostGroupObjStr + ".PrivatePoolOptionsMatchCriteria", hostGroupObj.privatePoolOptionsMatchCriteria);
	}
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

std::vector<CreateClusterV2Request::ServiceInfo> CreateClusterV2Request::getServiceInfo()const
{
	return serviceInfo_;
}

void CreateClusterV2Request::setServiceInfo(const std::vector<ServiceInfo>& serviceInfo)
{
	serviceInfo_ = serviceInfo;
	for(int dep1 = 0; dep1!= serviceInfo.size(); dep1++) {
		auto serviceInfoObj = serviceInfo.at(dep1);
		std::string serviceInfoObjStr = "ServiceInfo." + std::to_string(dep1 + 1);
		setParameter(serviceInfoObjStr + ".ServiceVersion", serviceInfoObj.serviceVersion);
		setParameter(serviceInfoObjStr + ".ServiceName", serviceInfoObj.serviceName);
	}
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
		std::string configObjStr = "Config." + std::to_string(dep1 + 1);
		setParameter(configObjStr + ".ConfigKey", configObj.configKey);
		setParameter(configObjStr + ".FileName", configObj.fileName);
		setParameter(configObjStr + ".Encrypt", configObj.encrypt);
		setParameter(configObjStr + ".Replace", configObj.replace);
		setParameter(configObjStr + ".ConfigValue", configObj.configValue);
		setParameter(configObjStr + ".ServiceName", configObj.serviceName);
	}
}

bool CreateClusterV2Request::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateClusterV2Request::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

