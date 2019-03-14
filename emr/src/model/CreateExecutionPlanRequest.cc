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
{}

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

bool CreateExecutionPlanRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateExecutionPlanRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", std::to_string(ioOptimized));
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
	setParameter("EasEnable", std::to_string(easEnable));
}

bool CreateExecutionPlanRequest::getCreateClusterOnDemand()const
{
	return createClusterOnDemand_;
}

void CreateExecutionPlanRequest::setCreateClusterOnDemand(bool createClusterOnDemand)
{
	createClusterOnDemand_ = createClusterOnDemand;
	setParameter("CreateClusterOnDemand", std::to_string(createClusterOnDemand));
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

std::vector<std::string> CreateExecutionPlanRequest::getJobIdList()const
{
	return jobIdList_;
}

void CreateExecutionPlanRequest::setJobIdList(const std::vector<std::string>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int i = 0; i!= jobIdList.size(); i++)
		setParameter("JobIdList."+ std::to_string(i), jobIdList.at(i));
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

std::vector<CreateExecutionPlanRequest::BootstrapAction> CreateExecutionPlanRequest::getBootstrapAction()const
{
	return bootstrapAction_;
}

void CreateExecutionPlanRequest::setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction)
{
	bootstrapAction_ = bootstrapAction;
	int i = 0;
	for(int i = 0; i!= bootstrapAction.size(); i++)	{
		auto obj = bootstrapAction.at(i);
		std::string str ="BootstrapAction."+ std::to_string(i);
		setParameter(str + ".Path", obj.path);
		setParameter(str + ".Arg", obj.arg);
		setParameter(str + ".Name", obj.name);
	}
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
	setParameter("UseLocalMetaDb", std::to_string(useLocalMetaDb));
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

std::string CreateExecutionPlanRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateExecutionPlanRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setParameter("UserDefinedEmrEcsRole", userDefinedEmrEcsRole);
}

bool CreateExecutionPlanRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateExecutionPlanRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setParameter("IsOpenPublicIp", std::to_string(isOpenPublicIp));
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
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setParameter("OptionSoftWareList."+ std::to_string(i), optionSoftWareList.at(i));
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
	int i = 0;
	for(int i = 0; i!= ecsOrder.size(); i++)	{
		auto obj = ecsOrder.at(i);
		std::string str ="EcsOrder."+ std::to_string(i);
		setParameter(str + ".NodeType", obj.nodeType);
		setParameter(str + ".DiskCount", std::to_string(obj.diskCount));
		setParameter(str + ".NodeCount", std::to_string(obj.nodeCount));
		setParameter(str + ".DiskCapacity", std::to_string(obj.diskCapacity));
		setParameter(str + ".Index", std::to_string(obj.index));
		setParameter(str + ".InstanceType", obj.instanceType);
		setParameter(str + ".DiskType", obj.diskType);
	}
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

std::string CreateExecutionPlanRequest::getName()const
{
	return name_;
}

void CreateExecutionPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
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
	setParameter("UseCustomHiveMetaDB", std::to_string(useCustomHiveMetaDB));
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
	int i = 0;
	for(int i = 0; i!= config.size(); i++)	{
		auto obj = config.at(i);
		std::string str ="Config."+ std::to_string(i);
		setParameter(str + ".ConfigKey", obj.configKey);
		setParameter(str + ".FileName", obj.fileName);
		setParameter(str + ".Encrypt", obj.encrypt);
		setParameter(str + ".Replace", obj.replace);
		setParameter(str + ".ConfigValue", obj.configValue);
		setParameter(str + ".ServiceName", obj.serviceName);
	}
}

bool CreateExecutionPlanRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateExecutionPlanRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setParameter("HighAvailabilityEnable", std::to_string(highAvailabilityEnable));
}

bool CreateExecutionPlanRequest::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void CreateExecutionPlanRequest::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setParameter("InitCustomHiveMetaDB", std::to_string(initCustomHiveMetaDB));
}

bool CreateExecutionPlanRequest::getLogEnable()const
{
	return logEnable_;
}

void CreateExecutionPlanRequest::setLogEnable(bool logEnable)
{
	logEnable_ = logEnable;
	setParameter("LogEnable", std::to_string(logEnable));
}

