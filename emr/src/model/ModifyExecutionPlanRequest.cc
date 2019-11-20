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
{
	setMethod(HttpRequest::Method::Post);
}

ModifyExecutionPlanRequest::~ModifyExecutionPlanRequest()
{}

long ModifyExecutionPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyExecutionPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyExecutionPlanRequest::getLogPath()const
{
	return logPath_;
}

void ModifyExecutionPlanRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", logPath);
}

int ModifyExecutionPlanRequest::getTimeInterval()const
{
	return timeInterval_;
}

void ModifyExecutionPlanRequest::setTimeInterval(int timeInterval)
{
	timeInterval_ = timeInterval;
	setCoreParameter("TimeInterval", std::to_string(timeInterval));
}

std::string ModifyExecutionPlanRequest::getClusterName()const
{
	return clusterName_;
}

void ModifyExecutionPlanRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setCoreParameter("ClusterName", clusterName);
}

std::string ModifyExecutionPlanRequest::getConfigurations()const
{
	return configurations_;
}

void ModifyExecutionPlanRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", configurations);
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
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::vector<ModifyExecutionPlanRequest::BootstrapAction> ModifyExecutionPlanRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void ModifyExecutionPlanRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
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

std::string ModifyExecutionPlanRequest::getEmrVer()const
{
	return emrVer_;
}

void ModifyExecutionPlanRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", emrVer);
}

std::string ModifyExecutionPlanRequest::getId()const
{
	return id_;
}

void ModifyExecutionPlanRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
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
	setCoreParameter("ExecutionPlanVersion", std::to_string(executionPlanVersion));
}

std::string ModifyExecutionPlanRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void ModifyExecutionPlanRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", instanceGeneration);
}

std::string ModifyExecutionPlanRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyExecutionPlanRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

std::string ModifyExecutionPlanRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyExecutionPlanRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::vector<std::string> ModifyExecutionPlanRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void ModifyExecutionPlanRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setCoreParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
}

std::string ModifyExecutionPlanRequest::getNetType()const
{
	return netType_;
}

void ModifyExecutionPlanRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::vector<ModifyExecutionPlanRequest::EcsOrder> ModifyExecutionPlanRequest::getEcsOrder()const
{
	return ecsOrder_;
}

void ModifyExecutionPlanRequest::setEcsOrder(const std::vector<EcsOrder>& ecsOrder)
{
	ecsOrder_ = ecsOrder;
	for(int dep1 = 0; dep1!= ecsOrder.size(); dep1++) {
		auto ecsOrderObj = ecsOrder.at(dep1);
		std::string ecsOrderObjStr = "EcsOrder." + std::to_string(dep1);
		setCoreParameter(ecsOrderObjStr + ".NodeType", ecsOrderObj.nodeType);
		setCoreParameter(ecsOrderObjStr + ".DiskCount", std::to_string(ecsOrderObj.diskCount));
		setCoreParameter(ecsOrderObjStr + ".NodeCount", std::to_string(ecsOrderObj.nodeCount));
		setCoreParameter(ecsOrderObjStr + ".DiskCapacity", std::to_string(ecsOrderObj.diskCapacity));
		setCoreParameter(ecsOrderObjStr + ".Index", std::to_string(ecsOrderObj.index));
		setCoreParameter(ecsOrderObjStr + ".InstanceType", ecsOrderObj.instanceType);
		setCoreParameter(ecsOrderObjStr + ".DiskType", ecsOrderObj.diskType);
	}
}

std::string ModifyExecutionPlanRequest::getName()const
{
	return name_;
}

void ModifyExecutionPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyExecutionPlanRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyExecutionPlanRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
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

bool ModifyExecutionPlanRequest::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void ModifyExecutionPlanRequest::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setCoreParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
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
	setCoreParameter("SecurityGroupId", securityGroupId);
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

std::vector<std::string> ModifyExecutionPlanRequest::getJobIdList()const
{
	return jobIdList_;
}

void ModifyExecutionPlanRequest::setJobIdList(const std::vector<std::string>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int dep1 = 0; dep1!= jobIdList.size(); dep1++) {
		setCoreParameter("JobIdList."+ std::to_string(dep1), jobIdList.at(dep1));
	}
}

std::string ModifyExecutionPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyExecutionPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyExecutionPlanRequest::getDayOfMonth()const
{
	return dayOfMonth_;
}

void ModifyExecutionPlanRequest::setDayOfMonth(const std::string& dayOfMonth)
{
	dayOfMonth_ = dayOfMonth;
	setCoreParameter("DayOfMonth", dayOfMonth);
}

std::string ModifyExecutionPlanRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExecutionPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
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

std::string ModifyExecutionPlanRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void ModifyExecutionPlanRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setCoreParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

std::string ModifyExecutionPlanRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyExecutionPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyExecutionPlanRequest::getTimeUnit()const
{
	return timeUnit_;
}

void ModifyExecutionPlanRequest::setTimeUnit(const std::string& timeUnit)
{
	timeUnit_ = timeUnit;
	setCoreParameter("TimeUnit", timeUnit);
}

std::string ModifyExecutionPlanRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyExecutionPlanRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string ModifyExecutionPlanRequest::getWorkflowDefinition()const
{
	return workflowDefinition_;
}

void ModifyExecutionPlanRequest::setWorkflowDefinition(const std::string& workflowDefinition)
{
	workflowDefinition_ = workflowDefinition;
	setCoreParameter("WorkflowDefinition", workflowDefinition);
}

std::string ModifyExecutionPlanRequest::getDayOfWeek()const
{
	return dayOfWeek_;
}

void ModifyExecutionPlanRequest::setDayOfWeek(const std::string& dayOfWeek)
{
	dayOfWeek_ = dayOfWeek;
	setCoreParameter("DayOfWeek", dayOfWeek);
}

std::string ModifyExecutionPlanRequest::getStrategy()const
{
	return strategy_;
}

void ModifyExecutionPlanRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setCoreParameter("Strategy", strategy);
}

std::vector<ModifyExecutionPlanRequest::Config> ModifyExecutionPlanRequest::getConfig()const
{
	return config_;
}

void ModifyExecutionPlanRequest::setConfig(const std::vector<Config>& config)
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

bool ModifyExecutionPlanRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void ModifyExecutionPlanRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
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

