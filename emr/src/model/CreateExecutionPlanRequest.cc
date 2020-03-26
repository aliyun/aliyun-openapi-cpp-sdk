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

#include <alibabacloud/emr/model/CreateExecutionPlanRequest.h>

using AlibabaCloud::Emr::Model::CreateExecutionPlanRequest;

CreateExecutionPlanRequest::CreateExecutionPlanRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateExecutionPlan")
{
	setMethod(HttpRequest::Method::Post);
}

CreateExecutionPlanRequest::~CreateExecutionPlanRequest()
{}

long CreateExecutionPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateExecutionPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateExecutionPlanRequest::getTimeInterval()const
{
	return timeInterval_;
}

void CreateExecutionPlanRequest::setTimeInterval(int timeInterval)
{
	timeInterval_ = timeInterval;
	setParameter("TimeInterval", std::to_string(timeInterval));
}

std::string CreateExecutionPlanRequest::getLogPath()const
{
	return logPath_;
}

void CreateExecutionPlanRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setParameter("LogPath", logPath);
}

std::string CreateExecutionPlanRequest::getClusterName()const
{
	return clusterName_;
}

void CreateExecutionPlanRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string CreateExecutionPlanRequest::getConfigurations()const
{
	return configurations_;
}

void CreateExecutionPlanRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setParameter("Configurations", configurations);
}

bool CreateExecutionPlanRequest::getCreateClusterOnDemand()const
{
	return createClusterOnDemand_;
}

void CreateExecutionPlanRequest::setCreateClusterOnDemand(bool createClusterOnDemand)
{
	createClusterOnDemand_ = createClusterOnDemand;
	setParameter("CreateClusterOnDemand", createClusterOnDemand ? "true" : "false");
}

long CreateExecutionPlanRequest::getStartTime()const
{
	return startTime_;
}

void CreateExecutionPlanRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::vector<CreateExecutionPlanRequest::BootstrapAction> CreateExecutionPlanRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void CreateExecutionPlanRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
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

std::string CreateExecutionPlanRequest::getEmrVer()const
{
	return emrVer_;
}

void CreateExecutionPlanRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setParameter("EmrVer", emrVer);
}

bool CreateExecutionPlanRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateExecutionPlanRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

std::string CreateExecutionPlanRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void CreateExecutionPlanRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setParameter("InstanceGeneration", instanceGeneration);
}

std::string CreateExecutionPlanRequest::getClusterType()const
{
	return clusterType_;
}

void CreateExecutionPlanRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string CreateExecutionPlanRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateExecutionPlanRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::vector<std::string> CreateExecutionPlanRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateExecutionPlanRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int dep1 = 0; dep1!= optionSoftWareList.size(); dep1++) {
		setParameter("OptionSoftWareList."+ std::to_string(dep1), optionSoftWareList.at(dep1));
	}
}

std::string CreateExecutionPlanRequest::getNetType()const
{
	return netType_;
}

void CreateExecutionPlanRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

std::vector<CreateExecutionPlanRequest::EcsOrder> CreateExecutionPlanRequest::getEcsOrder()const
{
	return ecsOrder_;
}

void CreateExecutionPlanRequest::setEcsOrder(const std::vector<EcsOrder>& ecsOrder)
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

std::string CreateExecutionPlanRequest::getName()const
{
	return name_;
}

void CreateExecutionPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateExecutionPlanRequest::getZoneId()const
{
	return zoneId_;
}

void CreateExecutionPlanRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

bool CreateExecutionPlanRequest::getUseCustomHiveMetaDB()const
{
	return useCustomHiveMetaDB_;
}

void CreateExecutionPlanRequest::setUseCustomHiveMetaDB(bool useCustomHiveMetaDB)
{
	useCustomHiveMetaDB_ = useCustomHiveMetaDB;
	setParameter("UseCustomHiveMetaDB", useCustomHiveMetaDB ? "true" : "false");
}

bool CreateExecutionPlanRequest::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void CreateExecutionPlanRequest::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
}

bool CreateExecutionPlanRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateExecutionPlanRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string CreateExecutionPlanRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateExecutionPlanRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool CreateExecutionPlanRequest::getEasEnable()const
{
	return easEnable_;
}

void CreateExecutionPlanRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setParameter("EasEnable", easEnable ? "true" : "false");
}

std::vector<std::string> CreateExecutionPlanRequest::getJobIdList()const
{
	return jobIdList_;
}

void CreateExecutionPlanRequest::setJobIdList(const std::vector<std::string>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int dep1 = 0; dep1!= jobIdList.size(); dep1++) {
		setParameter("JobIdList."+ std::to_string(dep1), jobIdList.at(dep1));
	}
}

std::string CreateExecutionPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateExecutionPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateExecutionPlanRequest::getDayOfMonth()const
{
	return dayOfMonth_;
}

void CreateExecutionPlanRequest::setDayOfMonth(const std::string& dayOfMonth)
{
	dayOfMonth_ = dayOfMonth;
	setParameter("DayOfMonth", dayOfMonth);
}

std::string CreateExecutionPlanRequest::getRegionId()const
{
	return regionId_;
}

void CreateExecutionPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateExecutionPlanRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void CreateExecutionPlanRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
}

std::string CreateExecutionPlanRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateExecutionPlanRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

std::string CreateExecutionPlanRequest::getClusterId()const
{
	return clusterId_;
}

void CreateExecutionPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateExecutionPlanRequest::getTimeUnit()const
{
	return timeUnit_;
}

void CreateExecutionPlanRequest::setTimeUnit(const std::string& timeUnit)
{
	timeUnit_ = timeUnit;
	setParameter("TimeUnit", timeUnit);
}

std::string CreateExecutionPlanRequest::getVpcId()const
{
	return vpcId_;
}

void CreateExecutionPlanRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateExecutionPlanRequest::getWorkflowDefinition()const
{
	return workflowDefinition_;
}

void CreateExecutionPlanRequest::setWorkflowDefinition(const std::string& workflowDefinition)
{
	workflowDefinition_ = workflowDefinition;
	setParameter("WorkflowDefinition", workflowDefinition);
}

std::string CreateExecutionPlanRequest::getDayOfWeek()const
{
	return dayOfWeek_;
}

void CreateExecutionPlanRequest::setDayOfWeek(const std::string& dayOfWeek)
{
	dayOfWeek_ = dayOfWeek;
	setParameter("DayOfWeek", dayOfWeek);
}

std::string CreateExecutionPlanRequest::getStrategy()const
{
	return strategy_;
}

void CreateExecutionPlanRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setParameter("Strategy", strategy);
}

std::vector<CreateExecutionPlanRequest::Config> CreateExecutionPlanRequest::getConfig()const
{
	return config_;
}

void CreateExecutionPlanRequest::setConfig(const std::vector<Config>& config)
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

bool CreateExecutionPlanRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateExecutionPlanRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

bool CreateExecutionPlanRequest::getLogEnable()const
{
	return logEnable_;
}

void CreateExecutionPlanRequest::setLogEnable(bool logEnable)
{
	logEnable_ = logEnable;
	setParameter("LogEnable", logEnable ? "true" : "false");
}

