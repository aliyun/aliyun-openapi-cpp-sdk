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

#include <alibabacloud/ehpc/model/GetJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetJobResult::GetJobResult() :
	ServiceResult()
{}

GetJobResult::GetJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobResult::~GetJobResult()
{}

void GetJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobInfoNode = value["JobInfo"];
	if(!jobInfoNode["JobId"].isNull())
		jobInfo_.jobId = jobInfoNode["JobId"].asString();
	if(!jobInfoNode["JobName"].isNull())
		jobInfo_.jobName = jobInfoNode["JobName"].asString();
	if(!jobInfoNode["JobDescription"].isNull())
		jobInfo_.jobDescription = jobInfoNode["JobDescription"].asString();
	if(!jobInfoNode["JobScheduler"].isNull())
		jobInfo_.jobScheduler = jobInfoNode["JobScheduler"].asString();
	if(!jobInfoNode["CreateTime"].isNull())
		jobInfo_.createTime = jobInfoNode["CreateTime"].asString();
	if(!jobInfoNode["StartTime"].isNull())
		jobInfo_.startTime = jobInfoNode["StartTime"].asString();
	if(!jobInfoNode["EndTime"].isNull())
		jobInfo_.endTime = jobInfoNode["EndTime"].asString();
	if(!jobInfoNode["Status"].isNull())
		jobInfo_.status = jobInfoNode["Status"].asString();
	auto allTasksNode = jobInfoNode["Tasks"]["Task"];
	for (auto jobInfoNodeTasksTask : allTasksNode)
	{
		JobInfo::Task taskObject;
		if(!jobInfoNodeTasksTask["TaskName"].isNull())
			taskObject.taskName = jobInfoNodeTasksTask["TaskName"].asString();
		if(!jobInfoNodeTasksTask["TaskSustainable"].isNull())
			taskObject.taskSustainable = jobInfoNodeTasksTask["TaskSustainable"].asString() == "true";
		auto allExecutorStatusNode = jobInfoNodeTasksTask["ExecutorStatus"]["ExecutorStatusItem"];
		for (auto jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem : allExecutorStatusNode)
		{
			JobInfo::Task::ExecutorStatusItem executorStatusObject;
			if(!jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["ArrayId"].isNull())
				executorStatusObject.arrayId = std::stoi(jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["ArrayId"].asString());
			if(!jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["Status"].isNull())
				executorStatusObject.status = jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["Status"].asString();
			if(!jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["StatusReason"].isNull())
				executorStatusObject.statusReason = jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["StatusReason"].asString();
			if(!jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["CreateTime"].isNull())
				executorStatusObject.createTime = jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["CreateTime"].asString();
			if(!jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["StartTime"].isNull())
				executorStatusObject.startTime = jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["StartTime"].asString();
			if(!jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["EndTime"].isNull())
				executorStatusObject.endTime = jobInfoNodeTasksTaskExecutorStatusExecutorStatusItem["EndTime"].asString();
			taskObject.executorStatus.push_back(executorStatusObject);
		}
		auto taskSpecNode = value["TaskSpec"];
		if(!taskSpecNode["TaskDuration"].isNull())
			taskObject.taskSpec.taskDuration = taskSpecNode["TaskDuration"].asString();
		auto allTaskExecutorNode = taskSpecNode["TaskExecutor"]["TaskExecutorItem"];
		for (auto taskSpecNodeTaskExecutorTaskExecutorItem : allTaskExecutorNode)
		{
			JobInfo::Task::TaskSpec::TaskExecutorItem taskExecutorItemObject;
			auto containerNode = value["Container"];
			if(!containerNode["Image"].isNull())
				taskExecutorItemObject.container.image = containerNode["Image"].asString();
			if(!containerNode["WorkingDir"].isNull())
				taskExecutorItemObject.container.workingDir = containerNode["WorkingDir"].asString();
			if(!containerNode["Command"].isNull())
				taskExecutorItemObject.container.command = containerNode["Command"].asString();
			if(!containerNode["AppId"].isNull())
				taskExecutorItemObject.container.appId = containerNode["AppId"].asString();
			auto allEnvironmentVarsNode = containerNode["EnvironmentVars"]["EnvironmentVar"];
			for (auto containerNodeEnvironmentVarsEnvironmentVar : allEnvironmentVarsNode)
			{
				JobInfo::Task::TaskSpec::TaskExecutorItem::Container::EnvironmentVar environmentVarObject;
				if(!containerNodeEnvironmentVarsEnvironmentVar["Name"].isNull())
					environmentVarObject.name = containerNodeEnvironmentVarsEnvironmentVar["Name"].asString();
				if(!containerNodeEnvironmentVarsEnvironmentVar["Value"].isNull())
					environmentVarObject.value = containerNodeEnvironmentVarsEnvironmentVar["Value"].asString();
				taskExecutorItemObject.container.environmentVars.push_back(environmentVarObject);
			}
			auto vMNode = value["VM"];
			if(!vMNode["Image"].isNull())
				taskExecutorItemObject.vM.image = vMNode["Image"].asString();
			if(!vMNode["PrologScript"].isNull())
				taskExecutorItemObject.vM.prologScript = vMNode["PrologScript"].asString();
			if(!vMNode["Script"].isNull())
				taskExecutorItemObject.vM.script = vMNode["Script"].asString();
			if(!vMNode["AppId"].isNull())
				taskExecutorItemObject.vM.appId = vMNode["AppId"].asString();
			auto allEnvironmentVars1Node = vMNode["EnvironmentVars"]["EnvironmentVar"];
			for (auto vMNodeEnvironmentVarsEnvironmentVar : allEnvironmentVars1Node)
			{
				JobInfo::Task::TaskSpec::TaskExecutorItem::VM::EnvironmentVar2 environmentVar2Object;
				if(!vMNodeEnvironmentVarsEnvironmentVar["Name"].isNull())
					environmentVar2Object.name = vMNodeEnvironmentVarsEnvironmentVar["Name"].asString();
				if(!vMNodeEnvironmentVarsEnvironmentVar["Value"].isNull())
					environmentVar2Object.value = vMNodeEnvironmentVarsEnvironmentVar["Value"].asString();
				taskExecutorItemObject.vM.environmentVars1.push_back(environmentVar2Object);
			}
			taskObject.taskSpec.taskExecutor.push_back(taskExecutorItemObject);
		}
		auto allVolumeMountNode = taskSpecNode["VolumeMount"]["VolumeMountItem"];
		for (auto taskSpecNodeVolumeMountVolumeMountItem : allVolumeMountNode)
		{
			JobInfo::Task::TaskSpec::VolumeMountItem volumeMountItemObject;
			if(!taskSpecNodeVolumeMountVolumeMountItem["MountPath"].isNull())
				volumeMountItemObject.mountPath = taskSpecNodeVolumeMountVolumeMountItem["MountPath"].asString();
			if(!taskSpecNodeVolumeMountVolumeMountItem["VolumeDriver"].isNull())
				volumeMountItemObject.volumeDriver = taskSpecNodeVolumeMountVolumeMountItem["VolumeDriver"].asString();
			if(!taskSpecNodeVolumeMountVolumeMountItem["MountOptions"].isNull())
				volumeMountItemObject.mountOptions = taskSpecNodeVolumeMountVolumeMountItem["MountOptions"].asString();
			taskObject.taskSpec.volumeMount.push_back(volumeMountItemObject);
		}
		auto resourceNode = taskSpecNode["Resource"];
		if(!resourceNode["Cores"].isNull())
			taskObject.taskSpec.resource.cores = std::stof(resourceNode["Cores"].asString());
		if(!resourceNode["EnableHT"].isNull())
			taskObject.taskSpec.resource.enableHT = resourceNode["EnableHT"].asString() == "true";
		if(!resourceNode["Memory"].isNull())
			taskObject.taskSpec.resource.memory = std::stoi(resourceNode["Memory"].asString());
		auto allDisksNode = resourceNode["Disks"]["Disk"];
		for (auto resourceNodeDisksDisk : allDisksNode)
		{
			JobInfo::Task::TaskSpec::Resource::Disk diskObject;
			if(!resourceNodeDisksDisk["Type"].isNull())
				diskObject.type = resourceNodeDisksDisk["Type"].asString();
			if(!resourceNodeDisksDisk["Size"].isNull())
				diskObject.size = std::stoi(resourceNodeDisksDisk["Size"].asString());
			taskObject.taskSpec.resource.disks.push_back(diskObject);
		}
		auto retryPolicyNode = taskSpecNode["RetryPolicy"];
		if(!retryPolicyNode["RetryCount"].isNull())
			taskObject.taskSpec.retryPolicy.retryCount = std::stoi(retryPolicyNode["RetryCount"].asString());
		auto allExitCodeActionsNode = retryPolicyNode["ExitCodeActions"]["ExitCodeAction"];
		for (auto retryPolicyNodeExitCodeActionsExitCodeAction : allExitCodeActionsNode)
		{
			JobInfo::Task::TaskSpec::RetryPolicy::ExitCodeAction exitCodeActionObject;
			if(!retryPolicyNodeExitCodeActionsExitCodeAction["ExitCode"].isNull())
				exitCodeActionObject.exitCode = retryPolicyNodeExitCodeActionsExitCodeAction["ExitCode"].asString();
			if(!retryPolicyNodeExitCodeActionsExitCodeAction["Action"].isNull())
				exitCodeActionObject.action = retryPolicyNodeExitCodeActionsExitCodeAction["Action"].asString();
			taskObject.taskSpec.retryPolicy.exitCodeActions.push_back(exitCodeActionObject);
		}
		auto executorPolicyNode = value["ExecutorPolicy"];
		if(!executorPolicyNode["MaxCount"].isNull())
			taskObject.executorPolicy.maxCount = std::stoi(executorPolicyNode["MaxCount"].asString());
		if(!executorPolicyNode["Parallelism"].isNull())
			taskObject.executorPolicy.parallelism = std::stoi(executorPolicyNode["Parallelism"].asString());
		auto arraySpecNode = executorPolicyNode["ArraySpec"];
		if(!arraySpecNode["IndexStart"].isNull())
			taskObject.executorPolicy.arraySpec.indexStart = std::stoi(arraySpecNode["IndexStart"].asString());
		if(!arraySpecNode["IndexEnd"].isNull())
			taskObject.executorPolicy.arraySpec.indexEnd = std::stoi(arraySpecNode["IndexEnd"].asString());
		if(!arraySpecNode["IndexStep"].isNull())
			taskObject.executorPolicy.arraySpec.indexStep = std::stoi(arraySpecNode["IndexStep"].asString());
		jobInfo_.tasks.push_back(taskObject);
	}
	auto deploymentPolicyNode = jobInfoNode["DeploymentPolicy"];
	if(!deploymentPolicyNode["AllocationSpec"].isNull())
		jobInfo_.deploymentPolicy.allocationSpec = deploymentPolicyNode["AllocationSpec"].asString();
	auto allTagsNode = deploymentPolicyNode["Tags"]["Tag"];
	for (auto deploymentPolicyNodeTagsTag : allTagsNode)
	{
		JobInfo::DeploymentPolicy::Tag tagObject;
		if(!deploymentPolicyNodeTagsTag["Name"].isNull())
			tagObject.name = deploymentPolicyNodeTagsTag["Name"].asString();
		if(!deploymentPolicyNodeTagsTag["Value"].isNull())
			tagObject.value = deploymentPolicyNodeTagsTag["Value"].asString();
		jobInfo_.deploymentPolicy.tags.push_back(tagObject);
	}
	auto networkNode = deploymentPolicyNode["Network"];
	if(!networkNode["EnableERI"].isNull())
		jobInfo_.deploymentPolicy.network.enableERI = networkNode["EnableERI"].asString() == "true";
		auto allVswitch = networkNode["Vswitch"]["Vswitch"];
		for (auto value : allVswitch)
			jobInfo_.deploymentPolicy.network.vswitch.push_back(value.asString());
	auto securityPolicyNode = jobInfoNode["SecurityPolicy"];
	auto securityGroupNode = securityPolicyNode["SecurityGroup"];
		auto allSecurityGroupIds = securityGroupNode["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			jobInfo_.securityPolicy.securityGroup.securityGroupIds.push_back(value.asString());
	auto dependencyPolicyNode = jobInfoNode["DependencyPolicy"];
	auto allJobDependencyNode = dependencyPolicyNode["JobDependency"]["JobDependencyItem"];
	for (auto dependencyPolicyNodeJobDependencyJobDependencyItem : allJobDependencyNode)
	{
		JobInfo::DependencyPolicy::JobDependencyItem jobDependencyItemObject;
		if(!dependencyPolicyNodeJobDependencyJobDependencyItem["JobId"].isNull())
			jobDependencyItemObject.jobId = dependencyPolicyNodeJobDependencyJobDependencyItem["JobId"].asString();
		if(!dependencyPolicyNodeJobDependencyJobDependencyItem["Type"].isNull())
			jobDependencyItemObject.type = dependencyPolicyNodeJobDependencyJobDependencyItem["Type"].asString();
		jobInfo_.dependencyPolicy.jobDependency.push_back(jobDependencyItemObject);
	}
	auto monitorPolicyNode = jobInfoNode["MonitorPolicy"];
	auto notificationSpecNode = monitorPolicyNode["NotificationSpec"];
	auto allMNSTopicNode = notificationSpecNode["MNSTopic"]["MNSTopicItem"];
	for (auto notificationSpecNodeMNSTopicMNSTopicItem : allMNSTopicNode)
	{
		JobInfo::MonitorPolicy::NotificationSpec::MNSTopicItem mNSTopicItemObject;
		if(!notificationSpecNodeMNSTopicMNSTopicItem["TopicLocation"].isNull())
			mNSTopicItemObject.topicLocation = notificationSpecNodeMNSTopicMNSTopicItem["TopicLocation"].asString();
		auto allEvent = value["Event"]["Event"];
		for (auto value : allEvent)
			mNSTopicItemObject.event.push_back(value.asString());
		jobInfo_.monitorPolicy.notificationSpec.mNSTopic.push_back(mNSTopicItemObject);
	}
	auto logSpecNode = monitorPolicyNode["LogSpec"];
	if(!logSpecNode["Project"].isNull())
		jobInfo_.monitorPolicy.logSpec.project = logSpecNode["Project"].asString();
	if(!logSpecNode["Logstore"].isNull())
		jobInfo_.monitorPolicy.logSpec.logstore = logSpecNode["Logstore"].asString();
	if(!logSpecNode["MachineGroup"].isNull())
		jobInfo_.monitorPolicy.logSpec.machineGroup = logSpecNode["MachineGroup"].asString();
	if(!logSpecNode["Shard"].isNull())
		jobInfo_.monitorPolicy.logSpec.shard = logSpecNode["Shard"].asString();
	if(!logSpecNode["ExpireTime"].isNull())
		jobInfo_.monitorPolicy.logSpec.expireTime = logSpecNode["ExpireTime"].asString();

}

GetJobResult::JobInfo GetJobResult::getJobInfo()const
{
	return jobInfo_;
}

