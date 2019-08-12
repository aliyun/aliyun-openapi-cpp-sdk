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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int CreateExecutionPlanRequest::getTimeInterval()const
{
	return timeInterval_;
}

void CreateExecutionPlanRequest::setTimeInterval(int timeInterval)
{
	timeInterval_ = timeInterval;
	setCoreParameter("TimeInterval", timeInterval);
}

std::string CreateExecutionPlanRequest::getLogPath()const
{
	return logPath_;
}

void CreateExecutionPlanRequest::setLogPath(const std::string& logPath)
{
	logPath_ = logPath;
	setCoreParameter("LogPath", std::to_string(logPath));
}

std::string CreateExecutionPlanRequest::getClusterName()const
{
	return clusterName_;
}

void CreateExecutionPlanRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setCoreParameter("ClusterName", std::to_string(clusterName));
}

std::string CreateExecutionPlanRequest::getConfigurations()const
{
	return configurations_;
}

void CreateExecutionPlanRequest::setConfigurations(const std::string& configurations)
{
	configurations_ = configurations;
	setCoreParameter("Configurations", std::to_string(configurations));
}

bool CreateExecutionPlanRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateExecutionPlanRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string CreateExecutionPlanRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateExecutionPlanRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

bool CreateExecutionPlanRequest::getEasEnable()const
{
	return easEnable_;
}

void CreateExecutionPlanRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable ? "true" : "false");
}

bool CreateExecutionPlanRequest::getCreateClusterOnDemand()const
{
	return createClusterOnDemand_;
}

void CreateExecutionPlanRequest::setCreateClusterOnDemand(bool createClusterOnDemand)
{
	createClusterOnDemand_ = createClusterOnDemand;
	setCoreParameter("CreateClusterOnDemand", createClusterOnDemand ? "true" : "false");
}

long CreateExecutionPlanRequest::getStartTime()const
{
	return startTime_;
}

void CreateExecutionPlanRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::vector<std::string> CreateExecutionPlanRequest::getJobIdList()const
{
	return jobIdList_;
}

void CreateExecutionPlanRequest::setJobIdList(const std::vector<std::string>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int i = 0; i!= jobIdList.size(); i++)
		setCoreParameter("JobIdList."+ std::to_string(i), std::to_string(jobIdList.at(i)));
}

std::string CreateExecutionPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateExecutionPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateExecutionPlanRequest::getDayOfMonth()const
{
	return dayOfMonth_;
}

void CreateExecutionPlanRequest::setDayOfMonth(const std::string& dayOfMonth)
{
	dayOfMonth_ = dayOfMonth;
	setCoreParameter("DayOfMonth", std::to_string(dayOfMonth));
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
		setCoreParameter(str + ".Path", std::to_string(obj.path));
		setCoreParameter(str + ".Arg", std::to_string(obj.arg));
		setCoreParameter(str + ".Name", std::to_string(obj.name));
	}
}

std::string CreateExecutionPlanRequest::getRegionId()const
{
	return regionId_;
}

void CreateExecutionPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool CreateExecutionPlanRequest::getUseLocalMetaDb()const
{
	return useLocalMetaDb_;
}

void CreateExecutionPlanRequest::setUseLocalMetaDb(bool useLocalMetaDb)
{
	useLocalMetaDb_ = useLocalMetaDb;
	setCoreParameter("UseLocalMetaDb", useLocalMetaDb ? "true" : "false");
}

std::string CreateExecutionPlanRequest::getEmrVer()const
{
	return emrVer_;
}

void CreateExecutionPlanRequest::setEmrVer(const std::string& emrVer)
{
	emrVer_ = emrVer;
	setCoreParameter("EmrVer", std::to_string(emrVer));
}

std::string CreateExecutionPlanRequest::getUserDefinedEmrEcsRole()const
{
	return userDefinedEmrEcsRole_;
}

void CreateExecutionPlanRequest::setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole)
{
	userDefinedEmrEcsRole_ = userDefinedEmrEcsRole;
	setCoreParameter("UserDefinedEmrEcsRole", std::to_string(userDefinedEmrEcsRole));
}

bool CreateExecutionPlanRequest::getIsOpenPublicIp()const
{
	return isOpenPublicIp_;
}

void CreateExecutionPlanRequest::setIsOpenPublicIp(bool isOpenPublicIp)
{
	isOpenPublicIp_ = isOpenPublicIp;
	setCoreParameter("IsOpenPublicIp", isOpenPublicIp ? "true" : "false");
}

std::string CreateExecutionPlanRequest::getClusterId()const
{
	return clusterId_;
}

void CreateExecutionPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string CreateExecutionPlanRequest::getTimeUnit()const
{
	return timeUnit_;
}

void CreateExecutionPlanRequest::setTimeUnit(const std::string& timeUnit)
{
	timeUnit_ = timeUnit;
	setCoreParameter("TimeUnit", std::to_string(timeUnit));
}

std::string CreateExecutionPlanRequest::getInstanceGeneration()const
{
	return instanceGeneration_;
}

void CreateExecutionPlanRequest::setInstanceGeneration(const std::string& instanceGeneration)
{
	instanceGeneration_ = instanceGeneration;
	setCoreParameter("InstanceGeneration", std::to_string(instanceGeneration));
}

std::string CreateExecutionPlanRequest::getClusterType()const
{
	return clusterType_;
}

void CreateExecutionPlanRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", std::to_string(clusterType));
}

std::string CreateExecutionPlanRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateExecutionPlanRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::vector<std::string> CreateExecutionPlanRequest::getOptionSoftWareList()const
{
	return optionSoftWareList_;
}

void CreateExecutionPlanRequest::setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList)
{
	optionSoftWareList_ = optionSoftWareList;
	for(int i = 0; i!= optionSoftWareList.size(); i++)
		setCoreParameter("OptionSoftWareList."+ std::to_string(i), std::to_string(optionSoftWareList.at(i)));
}

std::string CreateExecutionPlanRequest::getVpcId()const
{
	return vpcId_;
}

void CreateExecutionPlanRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string CreateExecutionPlanRequest::getNetType()const
{
	return netType_;
}

void CreateExecutionPlanRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", std::to_string(netType));
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
		setCoreParameter(str + ".NodeType", std::to_string(obj.nodeType));
		setCoreParameter(str + ".DiskCount", obj.diskCount);
		setCoreParameter(str + ".NodeCount", obj.nodeCount);
		setCoreParameter(str + ".DiskCapacity", obj.diskCapacity);
		setCoreParameter(str + ".Index", obj.index);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".DiskType", std::to_string(obj.diskType));
	}
}

std::string CreateExecutionPlanRequest::getWorkflowDefinition()const
{
	return workflowDefinition_;
}

void CreateExecutionPlanRequest::setWorkflowDefinition(const std::string& workflowDefinition)
{
	workflowDefinition_ = workflowDefinition;
	setCoreParameter("WorkflowDefinition", std::to_string(workflowDefinition));
}

std::string CreateExecutionPlanRequest::getName()const
{
	return name_;
}

void CreateExecutionPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateExecutionPlanRequest::getDayOfWeek()const
{
	return dayOfWeek_;
}

void CreateExecutionPlanRequest::setDayOfWeek(const std::string& dayOfWeek)
{
	dayOfWeek_ = dayOfWeek;
	setCoreParameter("DayOfWeek", std::to_string(dayOfWeek));
}

std::string CreateExecutionPlanRequest::getZoneId()const
{
	return zoneId_;
}

void CreateExecutionPlanRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

bool CreateExecutionPlanRequest::getUseCustomHiveMetaDB()const
{
	return useCustomHiveMetaDB_;
}

void CreateExecutionPlanRequest::setUseCustomHiveMetaDB(bool useCustomHiveMetaDB)
{
	useCustomHiveMetaDB_ = useCustomHiveMetaDB;
	setCoreParameter("UseCustomHiveMetaDB", useCustomHiveMetaDB ? "true" : "false");
}

std::string CreateExecutionPlanRequest::getStrategy()const
{
	return strategy_;
}

void CreateExecutionPlanRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setCoreParameter("Strategy", std::to_string(strategy));
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
		setCoreParameter(str + ".ConfigKey", std::to_string(obj.configKey));
		setCoreParameter(str + ".FileName", std::to_string(obj.fileName));
		setCoreParameter(str + ".Encrypt", std::to_string(obj.encrypt));
		setCoreParameter(str + ".Replace", std::to_string(obj.replace));
		setCoreParameter(str + ".ConfigValue", std::to_string(obj.configValue));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
	}
}

bool CreateExecutionPlanRequest::getHighAvailabilityEnable()const
{
	return highAvailabilityEnable_;
}

void CreateExecutionPlanRequest::setHighAvailabilityEnable(bool highAvailabilityEnable)
{
	highAvailabilityEnable_ = highAvailabilityEnable;
	setCoreParameter("HighAvailabilityEnable", highAvailabilityEnable ? "true" : "false");
}

bool CreateExecutionPlanRequest::getInitCustomHiveMetaDB()const
{
	return initCustomHiveMetaDB_;
}

void CreateExecutionPlanRequest::setInitCustomHiveMetaDB(bool initCustomHiveMetaDB)
{
	initCustomHiveMetaDB_ = initCustomHiveMetaDB;
	setCoreParameter("InitCustomHiveMetaDB", initCustomHiveMetaDB ? "true" : "false");
}

bool CreateExecutionPlanRequest::getLogEnable()const
{
	return logEnable_;
}

void CreateExecutionPlanRequest::setLogEnable(bool logEnable)
{
	logEnable_ = logEnable;
	setCoreParameter("LogEnable", logEnable ? "true" : "false");
}

