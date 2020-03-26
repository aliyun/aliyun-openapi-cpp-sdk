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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyExecutionPlanRequest::getLogPath()const
{
	return logPath_;
}

void ModifyExecutionPlanRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setParameter("LogPath", logPath);
}

int ModifyExecutionPlanRequest::getTimeInterval()const
{
	return timeInterval_;
}

void ModifyExecutionPlanRequest::setTimeInterval(int timeInterval)
{
	timeInterval_ = timeInterval;
	setParameter("TimeInterval", std::to_string(timeInterval));
}

std::string ModifyExecutionPlanRequest::getClusterName()const
{
	return clusterName_;
}

void ModifyExecutionPlanRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ModifyExecutionPlanRequest::getConfigurations()const
{
	return configurations_;
}

void ModifyExecutionPlanRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setParameter("Configurations", configurations);
}

bool ModifyExecutionPlanRequest::getCreateClusterOnDemand()const
{
	return createClusterOnDemand_;
}

void ModifyExecutionPlanRequest::setCreateClusterOnDemand(bool createClusterOnDemand)
{
	createClusterOnDemand_ = createClusterOnDemand;
	setParameter("CreateClusterOnDemand", createClusterOnDemand ? "true" : "false");
}

long ModifyExecutionPlanRequest::getStartTime()const
{
	return startTime_;
}

void ModifyExecutionPlanRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
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
		std::string bootstrapActionObjStr = "BootstrapAction." + std::to_string(dep1 + 1);
		setParameter(bootstrapActionObjStr + ".Path", bootstrapActionObj.path);
		setParameter(bootstrapActionObjStr + ".Arg", bootstrapActionObj.arg);
		setParameter(bootstrapActionObjStr + ".Name", bootstrapActionObj.name);
	}
}

std::string ModifyExecutionPlanRequest::getEmrVer()const
{
	return emrVer_;
}

void ModifyExecutionPlanRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setParameter("EmrVer", emrVer);
}

std::string ModifyExecutionPlanRequest::getId()const
{
	return id_;
}

void ModifyExecutionPlanRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

bool ModifyExecutionPlanRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void ModifyExecutionPlanRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

long ModifyExecutionPlanRequest::getExecutionPlanVersion()const
{
	return executionPlanVersion_;
}

void ModifyExecutionPlanRequest::setExecutionPlanVersion(long executionPlanVersion)
{
	executionPlanVersion_ = executionPlanVersion;
	setParameter("ExecutionPlanVersion", std::to_string(executionPlanVersion));
}

std::string ModifyExecutionPlanRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void ModifyExecutionPlanRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setParameter("InstanceGeneration", instanceGeneration);
}

std::string ModifyExecutionPlanRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyExecutionPlanRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string ModifyExecutionPlanRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyExecutionPlanRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::vector<std::string> ModifyExecutionPlanRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void ModifyExecutionPlanRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
}

std::string ModifyExecutionPlanRequest::getNetType()const
{
	return netType_;
}

void ModifyExecutionPlanRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
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
		std::string ecsOrderObjStr = "EcsOrder." + std::to_string(dep1 + 1);
		setParameter(ecsOrderObjStr + ".NodeType", ecsOrderObj.nodeType);
		setParameter(ecsOrderObjStr + ".DiskCount", std::to_string(ecsOrderObj.diskCount));
		setParameter(ecsOrderObjStr + ".NodeCount", std::to_string(ecsOrderObj.nodeCount));
		setParameter(ecsOrderObjStr + ".DiskCapacity", std::to_string(ecsOrderObj.diskCapacity));
		setParameter(ecsOrderObjStr + ".Index", std::to_string(ecsOrderObj.index));
		setParameter(ecsOrderObjStr + ".InstanceType", ecsOrderObj.instanceType);
		setParameter(ecsOrderObjStr + ".DiskType", ecsOrderObj.diskType);
	}
}

std::string ModifyExecutionPlanRequest::getName()const
{
	return name_;
}

void ModifyExecutionPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyExecutionPlanRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyExecutionPlanRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

bool ModifyExecutionPlanRequest::getUseCustomHiveMetaDB()const
{
	return useCustomHiveMetaDB_;
}

void ModifyExecutionPlanRequest::setUseCustomHiveMetaDB(bool useCustomHiveMetaDB)
{
	useCustomHiveMetaDB_ = useCustomHiveMetaDB;
	setParameter("UseCustomHiveMetaDB", useCustomHiveMetaDB ? "true" : "false");
}

bool ModifyExecutionPlanRequest::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void ModifyExecutionPlanRequest::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
}

bool ModifyExecutionPlanRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyExecutionPlanRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string ModifyExecutionPlanRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyExecutionPlanRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool ModifyExecutionPlanRequest::getEasEnable()const
{
	return easEnable_;
}

void ModifyExecutionPlanRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", easEnable ? "true" : "false");
}

std::vector<std::string> ModifyExecutionPlanRequest::getJobIdList()const
{
	return jobIdList_;
}

void ModifyExecutionPlanRequest::setJobIdList(const std::vector<std::string>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int dep1 = 0; dep1!= jobIdList.size(); dep1++) {
		setParameter("JobIdList."+ std::to_string(dep1), jobIdList.at(dep1));
	}
}

std::string ModifyExecutionPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyExecutionPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyExecutionPlanRequest::getDayOfMonth()const
{
	return dayOfMonth_;
}

void ModifyExecutionPlanRequest::setDayOfMonth(const std::string& dayOfMonth)
{
	dayOfMonth_ = dayOfMonth;
	setParameter("DayOfMonth", dayOfMonth);
}

std::string ModifyExecutionPlanRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExecutionPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifyExecutionPlanRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void ModifyExecutionPlanRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
}

std::string ModifyExecutionPlanRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void ModifyExecutionPlanRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

std::string ModifyExecutionPlanRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyExecutionPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyExecutionPlanRequest::getTimeUnit()const
{
	return timeUnit_;
}

void ModifyExecutionPlanRequest::setTimeUnit(const std::string& timeUnit)
{
	timeUnit_ = timeUnit;
	setParameter("TimeUnit", timeUnit);
}

std::string ModifyExecutionPlanRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyExecutionPlanRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string ModifyExecutionPlanRequest::getWorkflowDefinition()const
{
	return workflowDefinition_;
}

void ModifyExecutionPlanRequest::setWorkflowDefinition(const std::string& workflowDefinition)
{
	workflowDefinition_ = workflowDefinition;
	setParameter("WorkflowDefinition", workflowDefinition);
}

std::string ModifyExecutionPlanRequest::getDayOfWeek()const
{
	return dayOfWeek_;
}

void ModifyExecutionPlanRequest::setDayOfWeek(const std::string& dayOfWeek)
{
	dayOfWeek_ = dayOfWeek;
	setParameter("DayOfWeek", dayOfWeek);
}

std::string ModifyExecutionPlanRequest::getStrategy()const
{
	return strategy_;
}

void ModifyExecutionPlanRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setParameter("Strategy", strategy);
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
		std::string configObjStr = "Config." + std::to_string(dep1 + 1);
		setParameter(configObjStr + ".ConfigKey", configObj.configKey);
		setParameter(configObjStr + ".FileName", configObj.fileName);
		setParameter(configObjStr + ".Encrypt", configObj.encrypt);
		setParameter(configObjStr + ".Replace", configObj.replace);
		setParameter(configObjStr + ".ConfigValue", configObj.configValue);
		setParameter(configObjStr + ".ServiceName", configObj.serviceName);
	}
}

bool ModifyExecutionPlanRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void ModifyExecutionPlanRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

bool ModifyExecutionPlanRequest::getLogEnable()const
{
	return logEnable_;
}

void ModifyExecutionPlanRequest::setLogEnable(bool logEnable)
{
	logEnable_ = logEnable;
	setParameter("LogEnable", logEnable ? "true" : "false");
}

