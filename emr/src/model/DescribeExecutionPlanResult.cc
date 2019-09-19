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
	auto allJobInfoListNode = value["JobInfoList"]["JobInfo"];
	for (auto valueJobInfoListJobInfo : allJobInfoListNode)
	{
		JobInfo jobInfoListObject;
		if(!valueJobInfoListJobInfo["Id"].isNull())
			jobInfoListObject.id = valueJobInfoListJobInfo["Id"].asString();
		if(!valueJobInfoListJobInfo["Name"].isNull())
			jobInfoListObject.name = valueJobInfoListJobInfo["Name"].asString();
		if(!valueJobInfoListJobInfo["Type"].isNull())
			jobInfoListObject.type = valueJobInfoListJobInfo["Type"].asString();
		if(!valueJobInfoListJobInfo["RunParameter"].isNull())
			jobInfoListObject.runParameter = valueJobInfoListJobInfo["RunParameter"].asString();
		if(!valueJobInfoListJobInfo["FailAct"].isNull())
			jobInfoListObject.failAct = valueJobInfoListJobInfo["FailAct"].asString();
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
	auto allEcsOrdersNode = clusterInfoNode["EcsOrders"]["EcsOrderInfo"];
	for (auto clusterInfoNodeEcsOrdersEcsOrderInfo : allEcsOrdersNode)
	{
		ClusterInfo::EcsOrderInfo ecsOrderInfoObject;
		if(!clusterInfoNodeEcsOrdersEcsOrderInfo["Index"].isNull())
			ecsOrderInfoObject.index = std::stoi(clusterInfoNodeEcsOrdersEcsOrderInfo["Index"].asString());
		if(!clusterInfoNodeEcsOrdersEcsOrderInfo["NodeCount"].isNull())
			ecsOrderInfoObject.nodeCount = std::stoi(clusterInfoNodeEcsOrdersEcsOrderInfo["NodeCount"].asString());
		if(!clusterInfoNodeEcsOrdersEcsOrderInfo["InstanceType"].isNull())
			ecsOrderInfoObject.instanceType = clusterInfoNodeEcsOrdersEcsOrderInfo["InstanceType"].asString();
		if(!clusterInfoNodeEcsOrdersEcsOrderInfo["DiskType"].isNull())
			ecsOrderInfoObject.diskType = clusterInfoNodeEcsOrdersEcsOrderInfo["DiskType"].asString();
		if(!clusterInfoNodeEcsOrdersEcsOrderInfo["DiskCapacity"].isNull())
			ecsOrderInfoObject.diskCapacity = std::stoi(clusterInfoNodeEcsOrdersEcsOrderInfo["DiskCapacity"].asString());
		if(!clusterInfoNodeEcsOrdersEcsOrderInfo["NodeType"].isNull())
			ecsOrderInfoObject.nodeType = clusterInfoNodeEcsOrdersEcsOrderInfo["NodeType"].asString();
		if(!clusterInfoNodeEcsOrdersEcsOrderInfo["DiskCount"].isNull())
			ecsOrderInfoObject.diskCount = std::stoi(clusterInfoNodeEcsOrdersEcsOrderInfo["DiskCount"].asString());
		clusterInfo_.ecsOrders.push_back(ecsOrderInfoObject);
	}
	auto allBootstrapActionListNode = clusterInfoNode["BootstrapActionList"]["BootstrapAction"];
	for (auto clusterInfoNodeBootstrapActionListBootstrapAction : allBootstrapActionListNode)
	{
		ClusterInfo::BootstrapAction bootstrapActionObject;
		if(!clusterInfoNodeBootstrapActionListBootstrapAction["Name"].isNull())
			bootstrapActionObject.name = clusterInfoNodeBootstrapActionListBootstrapAction["Name"].asString();
		if(!clusterInfoNodeBootstrapActionListBootstrapAction["Path"].isNull())
			bootstrapActionObject.path = clusterInfoNodeBootstrapActionListBootstrapAction["Path"].asString();
		if(!clusterInfoNodeBootstrapActionListBootstrapAction["Arg"].isNull())
			bootstrapActionObject.arg = clusterInfoNodeBootstrapActionListBootstrapAction["Arg"].asString();
		clusterInfo_.bootstrapActionList.push_back(bootstrapActionObject);
	}
	auto allConfigListNode = clusterInfoNode["ConfigList"]["Config"];
	for (auto clusterInfoNodeConfigListConfig : allConfigListNode)
	{
		ClusterInfo::Config configObject;
		if(!clusterInfoNodeConfigListConfig["ServiceName"].isNull())
			configObject.serviceName = clusterInfoNodeConfigListConfig["ServiceName"].asString();
		if(!clusterInfoNodeConfigListConfig["FileName"].isNull())
			configObject.fileName = clusterInfoNodeConfigListConfig["FileName"].asString();
		if(!clusterInfoNodeConfigListConfig["ConfigKey"].isNull())
			configObject.configKey = clusterInfoNodeConfigListConfig["ConfigKey"].asString();
		if(!clusterInfoNodeConfigListConfig["ConfigValue"].isNull())
			configObject.configValue = clusterInfoNodeConfigListConfig["ConfigValue"].asString();
		if(!clusterInfoNodeConfigListConfig["Encrypt"].isNull())
			configObject.encrypt = clusterInfoNodeConfigListConfig["Encrypt"].asString();
		clusterInfo_.configList.push_back(configObject);
	}
	auto softwareInfoNode = clusterInfoNode["SoftwareInfo"];
	if(!softwareInfoNode["EmrVer"].isNull())
		clusterInfo_.softwareInfo.emrVer = softwareInfoNode["EmrVer"].asString();
	if(!softwareInfoNode["ClusterType"].isNull())
		clusterInfo_.softwareInfo.clusterType = softwareInfoNode["ClusterType"].asString();
	auto allSoftwaresNode = softwareInfoNode["Softwares"]["Software"];
	for (auto softwareInfoNodeSoftwaresSoftware : allSoftwaresNode)
	{
		ClusterInfo::SoftwareInfo::Software softwareObject;
		if(!softwareInfoNodeSoftwaresSoftware["DisplayName"].isNull())
			softwareObject.displayName = softwareInfoNodeSoftwaresSoftware["DisplayName"].asString();
		if(!softwareInfoNodeSoftwaresSoftware["Name"].isNull())
			softwareObject.name = softwareInfoNodeSoftwaresSoftware["Name"].asString();
		if(!softwareInfoNodeSoftwaresSoftware["OnlyDisplay"].isNull())
			softwareObject.onlyDisplay = softwareInfoNodeSoftwaresSoftware["OnlyDisplay"].asString() == "true";
		if(!softwareInfoNodeSoftwaresSoftware["StartTpe"].isNull())
			softwareObject.startTpe = std::stoi(softwareInfoNodeSoftwaresSoftware["StartTpe"].asString());
		if(!softwareInfoNodeSoftwaresSoftware["Version"].isNull())
			softwareObject.version = softwareInfoNodeSoftwaresSoftware["Version"].asString();
		if(!softwareInfoNodeSoftwaresSoftware["Optional"].isNull())
			softwareObject.optional = softwareInfoNodeSoftwaresSoftware["Optional"].asString() == "true";
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

