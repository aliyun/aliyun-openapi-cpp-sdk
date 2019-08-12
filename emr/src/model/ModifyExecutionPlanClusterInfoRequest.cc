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

#include <alibabacloud/emr/model/ModifyExecutionPlanClusterInfoRequest.h>

using AlibabaCloud::Emr::Model::ModifyExecutionPlanClusterInfoRequest;

ModifyExecutionPlanClusterInfoRequest::ModifyExecutionPlanClusterInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyExecutionPlanClusterInfo")
{}

ModifyExecutionPlanClusterInfoRequest::~ModifyExecutionPlanClusterInfoRequest()
{}

long ModifyExecutionPlanClusterInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyExecutionPlanClusterInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyExecutionPlanClusterInfoRequest::getLogPath()const
{
	return logPath_;
}

void ModifyExecutionPlanClusterInfoRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", logPath);
}

std::string ModifyExecutionPlanClusterInfoRequest::getClusterName()const
{
	return clusterName_;
}

void ModifyExecutionPlanClusterInfoRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setCoreParameter("ClusterName", clusterName);
}

std::string ModifyExecutionPlanClusterInfoRequest::getConfigurations()const
{
	return configurations_;
}

void ModifyExecutionPlanClusterInfoRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", configurations);
}

bool ModifyExecutionPlanClusterInfoRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyExecutionPlanClusterInfoRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string ModifyExecutionPlanClusterInfoRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyExecutionPlanClusterInfoRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool ModifyExecutionPlanClusterInfoRequest::getEasEnable()const
{
	return easEnable_;
}

void ModifyExecutionPlanClusterInfoRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable);
}

bool ModifyExecutionPlanClusterInfoRequest::getCreateClusterOnDemand()const
{
	return createClusterOnDemand_;
}

void ModifyExecutionPlanClusterInfoRequest::setCreateClusterOnDemand(bool createClusterOnDemand)
{
	createClusterOnDemand_ = createClusterOnDemand;
	setCoreParameter("CreateClusterOnDemand", createClusterOnDemand);
}

std::string ModifyExecutionPlanClusterInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyExecutionPlanClusterInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<ModifyExecutionPlanClusterInfoRequest::BootstrapAction> ModifyExecutionPlanClusterInfoRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void ModifyExecutionPlanClusterInfoRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
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

std::string ModifyExecutionPlanClusterInfoRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExecutionPlanClusterInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyExecutionPlanClusterInfoRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void ModifyExecutionPlanClusterInfoRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb);
}

std::string ModifyExecutionPlanClusterInfoRequest::getEmrVer()const
{
	return emrVer_;
}

void ModifyExecutionPlanClusterInfoRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", emrVer);
}

std::string ModifyExecutionPlanClusterInfoRequest::getId()const
{
	return id_;
}

void ModifyExecutionPlanClusterInfoRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

bool ModifyExecutionPlanClusterInfoRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ModifyExecutionPlanClusterInfoRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp);
}

std::string ModifyExecutionPlanClusterInfoRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyExecutionPlanClusterInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyExecutionPlanClusterInfoRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void ModifyExecutionPlanClusterInfoRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", instanceGeneration);
}

std::string ModifyExecutionPlanClusterInfoRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyExecutionPlanClusterInfoRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

std::string ModifyExecutionPlanClusterInfoRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyExecutionPlanClusterInfoRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::vector<std::string> ModifyExecutionPlanClusterInfoRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void ModifyExecutionPlanClusterInfoRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), std::to_string(optionSoftWareList.at(i)));
}

std::string ModifyExecutionPlanClusterInfoRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyExecutionPlanClusterInfoRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string ModifyExecutionPlanClusterInfoRequest::getNetType()const
{
	return netType_;
}

void ModifyExecutionPlanClusterInfoRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::vector<ModifyExecutionPlanClusterInfoRequest::EcsOrder> ModifyExecutionPlanClusterInfoRequest::getEcsOrder()const
{
	return ecsOrder_;
}

void ModifyExecutionPlanClusterInfoRequest::setEcsOrder(const std::vector<EcsOrder>& ecsOrder)
{
	ecsOrder_ = ecsOrder;
	int i = 0;
	for(int i = 0; i!= ecsOrder.size(); i++)	{
		auto obj = ecsOrder.at(i);
		std::string str ="EcsOrder."+ std::to_string(i);
		setCoreParameter(str + ".NodeType", std::to_string(obj.nodeType));
		setCoreParameter(str + ".DiskCount", obj.diskCount);
		setCoreParameter(str + ".NodeCount", obj.nodeCount);
		setCoreParameter(str + ".DiskCapacity", obj.diskCapacity);
		setCoreParameter(str + ".Index", obj.index);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".DiskType", std::to_string(obj.diskType));
	}
}

std::string ModifyExecutionPlanClusterInfoRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyExecutionPlanClusterInfoRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

bool ModifyExecutionPlanClusterInfoRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void ModifyExecutionPlanClusterInfoRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable);
}

bool ModifyExecutionPlanClusterInfoRequest::getLogEnable()const
{
	return logEnable_;
}

void ModifyExecutionPlanClusterInfoRequest::setLogEnable(bool logEnable)
{
	logEnable_ = logEnable;
	setCoreParameter("LogEnable", logEnable);
}

