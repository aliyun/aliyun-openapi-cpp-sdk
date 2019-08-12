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

#include <alibabacloud/emr/model/ModifyExecutionPlanRequest.h>

using AlibabaCloud::Emr::Model::ModifyExecutionPlanRequest;

ModifyExecutionPlanRequest::ModifyExecutionPlanRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyExecutionPlan")
{}

ModifyExecutionPlanRequest::~ModifyExecutionPlanRequest()
{}

long ModifyExecutionPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyExecutionPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyExecutionPlanRequest::getLogPath()const
{
	return logPath_;
}

void ModifyExecutionPlanRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", std::to_string(logPath));
}

int ModifyExecutionPlanRequest::getTimeInterval()const
{
	return timeInterval_;
}

void ModifyExecutionPlanRequest::setTimeInterval(int timeInterval)
{
	timeInterval_ = timeInterval;
	setCoreParameter("TimeInterval", timeInterval);
}

std::string ModifyExecutionPlanRequest::getClusterName()const
{
	return clusterName_;
}

void ModifyExecutionPlanRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setCoreParameter("ClusterName", std::to_string(clusterName));
}

std::string ModifyExecutionPlanRequest::getConfigurations()const
{
	return configurations_;
}

void ModifyExecutionPlanRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", std::to_string(configurations));
}

bool ModifyExecutionPlanRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyExecutionPlanRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string ModifyExecutionPlanRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyExecutionPlanRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

bool ModifyExecutionPlanRequest::getEasEnable()const
{
	return easEnable_;
}

void ModifyExecutionPlanRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable ? "true" : "false");
}

bool ModifyExecutionPlanRequest::getCreateClusterOnDemand()const
{
	return createClusterOnDemand_;
}

void ModifyExecutionPlanRequest::setCreateClusterOnDemand(bool createClusterOnDemand)
{
	createClusterOnDemand_ = createClusterOnDemand;
	setCoreParameter("CreateClusterOnDemand", createClusterOnDemand ? "true" : "false");
}

long ModifyExecutionPlanRequest::getStartTime()const
{
	return startTime_;
}

void ModifyExecutionPlanRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::vector<std::string> ModifyExecutionPlanRequest::getJobIdList()const
{
	return jobIdList_;
}

void ModifyExecutionPlanRequest::setJobIdList(const std::vector<std::string>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int i = 0; i!= jobIdList.size(); i++)
		setCoreParameter("JobIdList."+ std::to_string(i), std::to_string(jobIdList.at(i)));
}

std::string ModifyExecutionPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyExecutionPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyExecutionPlanRequest::getDayOfMonth()const
{
	return dayOfMonth_;
}

void ModifyExecutionPlanRequest::setDayOfMonth(const std::string& dayOfMonth)
{
	dayOfMonth_ = dayOfMonth;
	setCoreParameter("DayOfMonth", std::to_string(dayOfMonth));
}

std::vector<ModifyExecutionPlanRequest::BootstrapAction> ModifyExecutionPlanRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void ModifyExecutionPlanRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
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

std::string ModifyExecutionPlanRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExecutionPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool ModifyExecutionPlanRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void ModifyExecutionPlanRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
}

std::string ModifyExecutionPlanRequest::getEmrVer()const
{
	return emrVer_;
}

void ModifyExecutionPlanRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", std::to_string(emrVer));
}

std::string ModifyExecutionPlanRequest::getId()const
{
	return id_;
}

void ModifyExecutionPlanRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ModifyExecutionPlanRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void ModifyExecutionPlanRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setCoreParameter("UserDefinedEmrEcsRole", std::to_string(userDefinedEmrEcsRole));
}

bool ModifyExecutionPlanRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ModifyExecutionPlanRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

long ModifyExecutionPlanRequest::getExecutionPlanVersion()const
{
	return executionPlanVersion_;
}

void ModifyExecutionPlanRequest::setExecutionPlanVersion(long executionPlanVersion)
{
	executionPlanVersion_ = executionPlanVersion;
	setCoreParameter("ExecutionPlanVersion", executionPlanVersion);
}

std::string ModifyExecutionPlanRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyExecutionPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string ModifyExecutionPlanRequest::getTimeUnit()const
{
	return timeUnit_;
}

void ModifyExecutionPlanRequest::setTimeUnit(const std::string& timeUnit)
{
	timeUnit_ = timeUnit;
	setCoreParameter("TimeUnit", std::to_string(timeUnit));
}

std::string ModifyExecutionPlanRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void ModifyExecutionPlanRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", std::to_string(instanceGeneration));
}

std::string ModifyExecutionPlanRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyExecutionPlanRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", std::to_string(clusterType));
}

std::string ModifyExecutionPlanRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyExecutionPlanRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::vector<std::string> ModifyExecutionPlanRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void ModifyExecutionPlanRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), std::to_string(optionSoftWareList.at(i)));
}

std::string ModifyExecutionPlanRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyExecutionPlanRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string ModifyExecutionPlanRequest::getNetType()const
{
	return netType_;
}

void ModifyExecutionPlanRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", std::to_string(netType));
}

std::string ModifyExecutionPlanRequest::getWorkflowDefinition()const
{
	return workflowDefinition_;
}

void ModifyExecutionPlanRequest::setWorkflowDefinition(const std::string& workflowDefinition)
{
	workflowDefinition_ = workflowDefinition;
	setCoreParameter("WorkflowDefinition", std::to_string(workflowDefinition));
}

std::vector<ModifyExecutionPlanRequest::EcsOrder> ModifyExecutionPlanRequest::getEcsOrder()const
{
	return ecsOrder_;
}

void ModifyExecutionPlanRequest::setEcsOrder(const std::vector<EcsOrder>& ecsOrder)
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

std::string ModifyExecutionPlanRequest::getName()const
{
	return name_;
}

void ModifyExecutionPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string ModifyExecutionPlanRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyExecutionPlanRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string ModifyExecutionPlanRequest::getDayOfWeek()const
{
	return dayOfWeek_;
}

void ModifyExecutionPlanRequest::setDayOfWeek(const std::string& dayOfWeek)
{
	dayOfWeek_ = dayOfWeek;
	setCoreParameter("DayOfWeek", std::to_string(dayOfWeek));
}

bool ModifyExecutionPlanRequest::getUseCustomHiveMetaDB()const
{
	return useCustomHiveMetaDB_;
}

void ModifyExecutionPlanRequest::setUseCustomHiveMetaDB(bool useCustomHiveMetaDB)
{
	useCustomHiveMetaDB_ = useCustomHiveMetaDB;
	setCoreParameter("UseCustomHiveMetaDB", useCustomHiveMetaDB ? "true" : "false");
}

std::string ModifyExecutionPlanRequest::getStrategy()const
{
	return strategy_;
}

void ModifyExecutionPlanRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setCoreParameter("Strategy", std::to_string(strategy));
}

std::vector<ModifyExecutionPlanRequest::Config> ModifyExecutionPlanRequest::getConfig()const
{
	return config_;
}

void ModifyExecutionPlanRequest::setConfig(const std::vector<Config>& config)
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

bool ModifyExecutionPlanRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void ModifyExecutionPlanRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

bool ModifyExecutionPlanRequest::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void ModifyExecutionPlanRequest::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setCoreParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
}

bool ModifyExecutionPlanRequest::getLogEnable()const
{
	return logEnable_;
}

void ModifyExecutionPlanRequest::setLogEnable(bool logEnable)
{
	logEnable_ = logEnable;
	setCoreParameter("LogEnable", logEnable ? "true" : "false");
}

