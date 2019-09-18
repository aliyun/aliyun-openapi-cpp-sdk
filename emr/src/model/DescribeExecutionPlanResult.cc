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

#include <alibabacloud/emr/model/DescribeExecutionPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeExecutionPlanResult::DescribeExecutionPlanResult() :
	ServiceResult()
{}

DescribeExecutionPlanResult::DescribeExecutionPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExecutionPlanResult::~DescribeExecutionPlanResult()
{}

void DescribeExecutionPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobInfoList = value["JobInfoList"]["JobInfo"];
	for (auto value : allJobInfoList)
	{
		JobInfo jobInfoListObject;
		if(!value["Id"].isNull())
			jobInfoListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			jobInfoListObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			jobInfoListObject.type = value["Type"].asString();
		if(!value["RunParameter"].isNull())
			jobInfoListObject.runParameter = value["RunParameter"].asString();
		if(!value["FailAct"].isNull())
			jobInfoListObject.failAct = value["FailAct"].asString();
		jobInfoList_.push_back(jobInfoListObject);
	}
	auto clusterInfoNode = value["ClusterInfo"];
	if(!clusterInfoNode["Name"].isNull())
		clusterInfo_.name = clusterInfoNode["Name"].asString();
	if(!clusterInfoNode["ZoneId"].isNull())
		clusterInfo_.zoneId = clusterInfoNode["ZoneId"].asString();
	if(!clusterInfoNode["LogEnable"].isNull())
		clusterInfo_.logEnable = clusterInfoNode["LogEnable"].asString() == "true";
	if(!clusterInfoNode["LogPath"].isNull())
		clusterInfo_.logPath = clusterInfoNode["LogPath"].asString();
	if(!clusterInfoNode["SecurityGroupId"].isNull())
		clusterInfo_.securityGroupId = clusterInfoNode["SecurityGroupId"].asString();
	if(!clusterInfoNode["EmrVer"].isNull())
		clusterInfo_.emrVer = clusterInfoNode["EmrVer"].asString();
	if(!clusterInfoNode["ClusterType"].isNull())
		clusterInfo_.clusterType = clusterInfoNode["ClusterType"].asString();
	if(!clusterInfoNode["HighAvailabilityEnable"].isNull())
		clusterInfo_.highAvailabilityEnable = clusterInfoNode["HighAvailabilityEnable"].asString() == "true";
	if(!clusterInfoNode["VpcId"].isNull())
		clusterInfo_.vpcId = clusterInfoNode["VpcId"].asString();
	if(!clusterInfoNode["VSwitchId"].isNull())
		clusterInfo_.vSwitchId = clusterInfoNode["VSwitchId"].asString();
	if(!clusterInfoNode["NetType"].isNull())
		clusterInfo_.netType = clusterInfoNode["NetType"].asString();
	if(!clusterInfoNode["IoOptimized"].isNull())
		clusterInfo_.ioOptimized = clusterInfoNode["IoOptimized"].asString() == "true";
	if(!clusterInfoNode["InstanceGeneration"].isNull())
		clusterInfo_.instanceGeneration = clusterInfoNode["InstanceGeneration"].asString();
	if(!clusterInfoNode["Configurations"].isNull())
		clusterInfo_.configurations = clusterInfoNode["Configurations"].asString();
	if(!clusterInfoNode["EasEnable"].isNull())
		clusterInfo_.easEnable = clusterInfoNode["EasEnable"].asString() == "true";
	if(!clusterInfoNode["UseCustomHiveMetaDB"].isNull())
		clusterInfo_.useCustomHiveMetaDB = clusterInfoNode["UseCustomHiveMetaDB"].asString() == "true";
	if(!clusterInfoNode["InitCustomHiveMetaDB"].isNull())
		clusterInfo_.initCustomHiveMetaDB = clusterInfoNode["InitCustomHiveMetaDB"].asString() == "true";
	if(!clusterInfoNode["UserDefinedEmrEcsRole"].isNull())
		clusterInfo_.userDefinedEmrEcsRole = clusterInfoNode["UserDefinedEmrEcsRole"].asString();
	if(!clusterInfoNode["UseLocalMetaDb"].isNull())
		clusterInfo_.useLocalMetaDb = clusterInfoNode["UseLocalMetaDb"].asString() == "true";
	auto allEcsOrders = value["EcsOrders"]["EcsOrderInfo"];
	for (auto value : allEcsOrders)
	{
		ClusterInfo::EcsOrderInfo ecsOrderInfoObject;
		if(!value["Index"].isNull())
			ecsOrderInfoObject.index = std::stoi(value["Index"].asString());
		if(!value["NodeCount"].isNull())
			ecsOrderInfoObject.nodeCount = std::stoi(value["NodeCount"].asString());
		if(!value["InstanceType"].isNull())
			ecsOrderInfoObject.instanceType = value["InstanceType"].asString();
		if(!value["DiskType"].isNull())
			ecsOrderInfoObject.diskType = value["DiskType"].asString();
		if(!value["DiskCapacity"].isNull())
			ecsOrderInfoObject.diskCapacity = std::stoi(value["DiskCapacity"].asString());
		if(!value["NodeType"].isNull())
			ecsOrderInfoObject.nodeType = value["NodeType"].asString();
		if(!value["DiskCount"].isNull())
			ecsOrderInfoObject.diskCount = std::stoi(value["DiskCount"].asString());
		clusterInfo_.ecsOrders.push_back(ecsOrderInfoObject);
	}
	auto allBootstrapActionList = value["BootstrapActionList"]["BootstrapAction"];
	for (auto value : allBootstrapActionList)
	{
		ClusterInfo::BootstrapAction bootstrapActionObject;
		if(!value["Name"].isNull())
			bootstrapActionObject.name = value["Name"].asString();
		if(!value["Path"].isNull())
			bootstrapActionObject.path = value["Path"].asString();
		if(!value["Arg"].isNull())
			bootstrapActionObject.arg = value["Arg"].asString();
		clusterInfo_.bootstrapActionList.push_back(bootstrapActionObject);
	}
	auto allConfigList = value["ConfigList"]["Config"];
	for (auto value : allConfigList)
	{
		ClusterInfo::Config configObject;
		if(!value["ServiceName"].isNull())
			configObject.serviceName = value["ServiceName"].asString();
		if(!value["FileName"].isNull())
			configObject.fileName = value["FileName"].asString();
		if(!value["ConfigKey"].isNull())
			configObject.configKey = value["ConfigKey"].asString();
		if(!value["ConfigValue"].isNull())
			configObject.configValue = value["ConfigValue"].asString();
		if(!value["Encrypt"].isNull())
			configObject.encrypt = value["Encrypt"].asString();
		clusterInfo_.configList.push_back(configObject);
	}
	auto softwareInfoNode = clusterInfoNode["SoftwareInfo"];
	if(!softwareInfoNode["EmrVer"].isNull())
		clusterInfo_.softwareInfo.emrVer = softwareInfoNode["EmrVer"].asString();
	if(!softwareInfoNode["ClusterType"].isNull())
		clusterInfo_.softwareInfo.clusterType = softwareInfoNode["ClusterType"].asString();
	auto allSoftwares = value["Softwares"]["Software"];
	for (auto value : allSoftwares)
	{
		ClusterInfo::SoftwareInfo::Software softwareObject;
		if(!value["DisplayName"].isNull())
			softwareObject.displayName = value["DisplayName"].asString();
		if(!value["Name"].isNull())
			softwareObject.name = value["Name"].asString();
		if(!value["OnlyDisplay"].isNull())
			softwareObject.onlyDisplay = value["OnlyDisplay"].asString() == "true";
		if(!value["StartTpe"].isNull())
			softwareObject.startTpe = std::stoi(value["StartTpe"].asString());
		if(!value["Version"].isNull())
			softwareObject.version = value["Version"].asString();
		if(!value["Optional"].isNull())
			softwareObject.optional = value["Optional"].asString() == "true";
		clusterInfo_.softwareInfo.softwares.push_back(softwareObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Strategy"].isNull())
		strategy_ = value["Strategy"].asString();
	if(!value["TimeInterval"].isNull())
		timeInterval_ = std::stoi(value["TimeInterval"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["TimeUnit"].isNull())
		timeUnit_ = value["TimeUnit"].asString();
	if(!value["DayOfWeek"].isNull())
		dayOfWeek_ = value["DayOfWeek"].asString();
	if(!value["DayOfMonth"].isNull())
		dayOfMonth_ = value["DayOfMonth"].asString();
	if(!value["CreateClusterOnDemand"].isNull())
		createClusterOnDemand_ = value["CreateClusterOnDemand"].asString() == "true";
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();
	if(!value["WorkflowApp"].isNull())
		workflowApp_ = value["WorkflowApp"].asString();
	if(!value["ExecutionPlanVersion"].isNull())
		executionPlanVersion_ = std::stol(value["ExecutionPlanVersion"].asString());

}

std::string DescribeExecutionPlanResult::getStatus()const
{
	return status_;
}

std::string DescribeExecutionPlanResult::getWorkflowApp()const
{
	return workflowApp_;
}

std::string DescribeExecutionPlanResult::getDayOfWeek()const
{
	return dayOfWeek_;
}

int DescribeExecutionPlanResult::getTimeInterval()const
{
	return timeInterval_;
}

std::string DescribeExecutionPlanResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeExecutionPlanResult::getDayOfMonth()const
{
	return dayOfMonth_;
}

long DescribeExecutionPlanResult::getStartTime()const
{
	return startTime_;
}

long DescribeExecutionPlanResult::getExecutionPlanVersion()const
{
	return executionPlanVersion_;
}

std::string DescribeExecutionPlanResult::getName()const
{
	return name_;
}

std::vector<DescribeExecutionPlanResult::JobInfo> DescribeExecutionPlanResult::getJobInfoList()const
{
	return jobInfoList_;
}

DescribeExecutionPlanResult::ClusterInfo DescribeExecutionPlanResult::getClusterInfo()const
{
	return clusterInfo_;
}

std::string DescribeExecutionPlanResult::getStrategy()const
{
	return strategy_;
}

std::string DescribeExecutionPlanResult::getTimeUnit()const
{
	return timeUnit_;
}

std::string DescribeExecutionPlanResult::getClusterName()const
{
	return clusterName_;
}

std::string DescribeExecutionPlanResult::getId()const
{
	return id_;
}

bool DescribeExecutionPlanResult::getCreateClusterOnDemand()const
{
	return createClusterOnDemand_;
}

