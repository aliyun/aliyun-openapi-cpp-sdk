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

#include <alibabacloud/emr/model/OperateExistsNodeClusterRequest.h>

using AlibabaCloud::Emr::Model::OperateExistsNodeClusterRequest;

OperateExistsNodeClusterRequest::OperateExistsNodeClusterRequest() :
	RpcServiceRequest("emr", "2016-04-08", "OperateExistsNodeCluster")
{}

OperateExistsNodeClusterRequest::~OperateExistsNodeClusterRequest()
{}

long OperateExistsNodeClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OperateExistsNodeClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string OperateExistsNodeClusterRequest::getLogPath()const
{
	return logPath_;
}

void OperateExistsNodeClusterRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", logPath);
}

std::vector<std::string> OperateExistsNodeClusterRequest::getMasterInstanceIdList()const
{
	return masterInstanceIdList_;
}

void OperateExistsNodeClusterRequest::setMasterInstanceIdList(const std::vector<std::string>& masterInstanceIdList)
{
	masterInstanceIdList_ = masterInstanceIdList;
	for(int i = 0; i!= masterInstanceIdList.size(); i++)
		setCoreParameter("MasterInstanceIdList."+ std::to_string(i), std::to_string(masterInstanceIdList.at(i)));
}

bool OperateExistsNodeClusterRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void OperateExistsNodeClusterRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string OperateExistsNodeClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void OperateExistsNodeClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool OperateExistsNodeClusterRequest::getEasEnable()const
{
	return easEnable_;
}

void OperateExistsNodeClusterRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable);
}

bool OperateExistsNodeClusterRequest::getIsResize()const
{
	return isResize_;
}

void OperateExistsNodeClusterRequest::setIsResize(bool isResize)
{
	isResize_ = isResize;
	setCoreParameter("IsResize", isResize);
}

std::string OperateExistsNodeClusterRequest::getDepositType()const
{
	return depositType_;
}

void OperateExistsNodeClusterRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setCoreParameter("DepositType", depositType);
}

std::string OperateExistsNodeClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OperateExistsNodeClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string OperateExistsNodeClusterRequest::getMachineType()const
{
	return machineType_;
}

void OperateExistsNodeClusterRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setCoreParameter("MachineType", machineType);
}

std::string OperateExistsNodeClusterRequest::getRegionId()const
{
	return regionId_;
}

void OperateExistsNodeClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool OperateExistsNodeClusterRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void OperateExistsNodeClusterRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb);
}

std::string OperateExistsNodeClusterRequest::getEmrVer()const
{
	return emrVer_;
}

void OperateExistsNodeClusterRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", emrVer);
}

int OperateExistsNodeClusterRequest::getPeriod()const
{
	return period_;
}

void OperateExistsNodeClusterRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string OperateExistsNodeClusterRequest::getClusterId()const
{
	return clusterId_;
}

void OperateExistsNodeClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string OperateExistsNodeClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void OperateExistsNodeClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string OperateExistsNodeClusterRequest::getClusterType()const
{
	return clusterType_;
}

void OperateExistsNodeClusterRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

std::vector<std::string> OperateExistsNodeClusterRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void OperateExistsNodeClusterRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), std::to_string(optionSoftWareList.at(i)));
}

std::vector<std::string> OperateExistsNodeClusterRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void OperateExistsNodeClusterRequest::setInstanceIdList(const std::vector<std::string>& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	for(int i = 0; i!= instanceIdList.size(); i++)
		setCoreParameter("InstanceIdList."+ std::to_string(i), std::to_string(instanceIdList.at(i)));
}

std::string OperateExistsNodeClusterRequest::getVpcId()const
{
	return vpcId_;
}

void OperateExistsNodeClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string OperateExistsNodeClusterRequest::getNetType()const
{
	return netType_;
}

void OperateExistsNodeClusterRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::string OperateExistsNodeClusterRequest::getName()const
{
	return name_;
}

void OperateExistsNodeClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string OperateExistsNodeClusterRequest::getZoneId()const
{
	return zoneId_;
}

void OperateExistsNodeClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string OperateExistsNodeClusterRequest::getChargeType()const
{
	return chargeType_;
}

void OperateExistsNodeClusterRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

std::string OperateExistsNodeClusterRequest::getOperateType()const
{
	return operateType_;
}

void OperateExistsNodeClusterRequest::setOperateType(const std::string& operateType)
{
	operateType_ = operateType;
	setCoreParameter("OperateType", operateType);
}

bool OperateExistsNodeClusterRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void OperateExistsNodeClusterRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable);
}

