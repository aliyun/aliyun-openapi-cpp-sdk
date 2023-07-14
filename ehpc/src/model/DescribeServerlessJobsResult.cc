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

#include <alibabacloud/ehpc/model/DescribeServerlessJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeServerlessJobsResult::DescribeServerlessJobsResult() :
	ServiceResult()
{}

DescribeServerlessJobsResult::DescribeServerlessJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServerlessJobsResult::~DescribeServerlessJobsResult()
{}

void DescribeServerlessJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobInfosNode = value["JobInfos"]["JobInfo"];
	for (auto valueJobInfosJobInfo : allJobInfosNode)
	{
		JobInfo jobInfosObject;
		if(!valueJobInfosJobInfo["EndTime"].isNull())
			jobInfosObject.endTime = std::stol(valueJobInfosJobInfo["EndTime"].asString());
		if(!valueJobInfosJobInfo["Id"].isNull())
			jobInfosObject.id = valueJobInfosJobInfo["Id"].asString();
		if(!valueJobInfosJobInfo["IsArrayJob"].isNull())
			jobInfosObject.isArrayJob = valueJobInfosJobInfo["IsArrayJob"].asString() == "true";
		if(!valueJobInfosJobInfo["LastModifyTime"].isNull())
			jobInfosObject.lastModifyTime = std::stol(valueJobInfosJobInfo["LastModifyTime"].asString());
		if(!valueJobInfosJobInfo["Name"].isNull())
			jobInfosObject.name = valueJobInfosJobInfo["Name"].asString();
		if(!valueJobInfosJobInfo["Owner"].isNull())
			jobInfosObject.owner = valueJobInfosJobInfo["Owner"].asString();
		if(!valueJobInfosJobInfo["Priority"].isNull())
			jobInfosObject.priority = std::stol(valueJobInfosJobInfo["Priority"].asString());
		if(!valueJobInfosJobInfo["Queue"].isNull())
			jobInfosObject.queue = valueJobInfosJobInfo["Queue"].asString();
		if(!valueJobInfosJobInfo["StartTime"].isNull())
			jobInfosObject.startTime = std::stol(valueJobInfosJobInfo["StartTime"].asString());
		if(!valueJobInfosJobInfo["State"].isNull())
			jobInfosObject.state = valueJobInfosJobInfo["State"].asString();
		if(!valueJobInfosJobInfo["SubmitTime"].isNull())
			jobInfosObject.submitTime = std::stol(valueJobInfosJobInfo["SubmitTime"].asString());
		auto allContainerGroupsNode = valueJobInfosJobInfo["ContainerGroups"]["ContainerGroup"];
		for (auto valueJobInfosJobInfoContainerGroupsContainerGroup : allContainerGroupsNode)
		{
			JobInfo::ContainerGroup containerGroupsObject;
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["ContainerGroupId"].isNull())
				containerGroupsObject.containerGroupId = valueJobInfosJobInfoContainerGroupsContainerGroup["ContainerGroupId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["ContainerGroupName"].isNull())
				containerGroupsObject.containerGroupName = valueJobInfosJobInfoContainerGroupsContainerGroup["ContainerGroupName"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["Cpu"].isNull())
				containerGroupsObject.cpu = std::stof(valueJobInfosJobInfoContainerGroupsContainerGroup["Cpu"].asString());
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["CreationTime"].isNull())
				containerGroupsObject.creationTime = valueJobInfosJobInfoContainerGroupsContainerGroup["CreationTime"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["Discount"].isNull())
				containerGroupsObject.discount = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroup["Discount"].asString());
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["EniInstanceId"].isNull())
				containerGroupsObject.eniInstanceId = valueJobInfosJobInfoContainerGroupsContainerGroup["EniInstanceId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["EphemeralStorage"].isNull())
				containerGroupsObject.ephemeralStorage = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroup["EphemeralStorage"].asString());
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["ExpiredTime"].isNull())
				containerGroupsObject.expiredTime = valueJobInfosJobInfoContainerGroupsContainerGroup["ExpiredTime"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["FailedTime"].isNull())
				containerGroupsObject.failedTime = valueJobInfosJobInfoContainerGroupsContainerGroup["FailedTime"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["InstanceType"].isNull())
				containerGroupsObject.instanceType = valueJobInfosJobInfoContainerGroupsContainerGroup["InstanceType"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["InternetIp"].isNull())
				containerGroupsObject.internetIp = valueJobInfosJobInfoContainerGroupsContainerGroup["InternetIp"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["IntranetIp"].isNull())
				containerGroupsObject.intranetIp = valueJobInfosJobInfoContainerGroupsContainerGroup["IntranetIp"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["Ipv6Address"].isNull())
				containerGroupsObject.ipv6Address = valueJobInfosJobInfoContainerGroupsContainerGroup["Ipv6Address"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["Memory"].isNull())
				containerGroupsObject.memory = std::stof(valueJobInfosJobInfoContainerGroupsContainerGroup["Memory"].asString());
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["RamRoleName"].isNull())
				containerGroupsObject.ramRoleName = valueJobInfosJobInfoContainerGroupsContainerGroup["RamRoleName"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["RegionId"].isNull())
				containerGroupsObject.regionId = valueJobInfosJobInfoContainerGroupsContainerGroup["RegionId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["ResourceGroupId"].isNull())
				containerGroupsObject.resourceGroupId = valueJobInfosJobInfoContainerGroupsContainerGroup["ResourceGroupId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["RestartPolicy"].isNull())
				containerGroupsObject.restartPolicy = valueJobInfosJobInfoContainerGroupsContainerGroup["RestartPolicy"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["SecurityGroupId"].isNull())
				containerGroupsObject.securityGroupId = valueJobInfosJobInfoContainerGroupsContainerGroup["SecurityGroupId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["SpotPriceLimit"].isNull())
				containerGroupsObject.spotPriceLimit = std::stof(valueJobInfosJobInfoContainerGroupsContainerGroup["SpotPriceLimit"].asString());
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["SpotStrategy"].isNull())
				containerGroupsObject.spotStrategy = valueJobInfosJobInfoContainerGroupsContainerGroup["SpotStrategy"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["Status"].isNull())
				containerGroupsObject.status = valueJobInfosJobInfoContainerGroupsContainerGroup["Status"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["SucceededTime"].isNull())
				containerGroupsObject.succeededTime = valueJobInfosJobInfoContainerGroupsContainerGroup["SucceededTime"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["TenantEniInstanceId"].isNull())
				containerGroupsObject.tenantEniInstanceId = valueJobInfosJobInfoContainerGroupsContainerGroup["TenantEniInstanceId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["TenantEniIp"].isNull())
				containerGroupsObject.tenantEniIp = valueJobInfosJobInfoContainerGroupsContainerGroup["TenantEniIp"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["TenantSecurityGroupId"].isNull())
				containerGroupsObject.tenantSecurityGroupId = valueJobInfosJobInfoContainerGroupsContainerGroup["TenantSecurityGroupId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["TenantVSwitchId"].isNull())
				containerGroupsObject.tenantVSwitchId = valueJobInfosJobInfoContainerGroupsContainerGroup["TenantVSwitchId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["VSwitchId"].isNull())
				containerGroupsObject.vSwitchId = valueJobInfosJobInfoContainerGroupsContainerGroup["VSwitchId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["VpcId"].isNull())
				containerGroupsObject.vpcId = valueJobInfosJobInfoContainerGroupsContainerGroup["VpcId"].asString();
			if(!valueJobInfosJobInfoContainerGroupsContainerGroup["ZoneId"].isNull())
				containerGroupsObject.zoneId = valueJobInfosJobInfoContainerGroupsContainerGroup["ZoneId"].asString();
			auto allContainersNode = valueJobInfosJobInfoContainerGroupsContainerGroup["Containers"]["Container"];
			for (auto valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer : allContainersNode)
			{
				JobInfo::ContainerGroup::Container containersObject;
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Cpu"].isNull())
					containersObject.cpu = std::stof(valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Cpu"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Gpu"].isNull())
					containersObject.gpu = std::stoi(valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Gpu"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Image"].isNull())
					containersObject.image = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Image"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["ImagePullPolicy"].isNull())
					containersObject.imagePullPolicy = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["ImagePullPolicy"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Memory"].isNull())
					containersObject.memory = std::stof(valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Memory"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Name"].isNull())
					containersObject.name = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Name"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Ready"].isNull())
					containersObject.ready = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Ready"].asString() == "true";
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["RestartCount"].isNull())
					containersObject.restartCount = std::stoi(valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["RestartCount"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Stdin"].isNull())
					containersObject.stdin = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Stdin"].asString() == "true";
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["StdinOnce"].isNull())
					containersObject.stdinOnce = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["StdinOnce"].asString() == "true";
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Tty"].isNull())
					containersObject.tty = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Tty"].asString() == "true";
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["WorkingDir"].isNull())
					containersObject.workingDir = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["WorkingDir"].asString();
				auto allEnvironmentVarsNode = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["EnvironmentVars"]["EnvironmentVar"];
				for (auto valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerEnvironmentVarsEnvironmentVar : allEnvironmentVarsNode)
				{
					JobInfo::ContainerGroup::Container::EnvironmentVar environmentVarsObject;
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerEnvironmentVarsEnvironmentVar["Key"].isNull())
						environmentVarsObject.key = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerEnvironmentVarsEnvironmentVar["Key"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerEnvironmentVarsEnvironmentVar["Value"].isNull())
						environmentVarsObject.value = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerEnvironmentVarsEnvironmentVar["Value"].asString();
					auto valueFromNode = value["ValueFrom"];
					auto fieldRefNode = valueFromNode["FieldRef"];
					if(!fieldRefNode["FieldPath"].isNull())
						environmentVarsObject.valueFrom.fieldRef.fieldPath = fieldRefNode["FieldPath"].asString();
					containersObject.environmentVars.push_back(environmentVarsObject);
				}
				auto allPortsNode = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["Ports"]["Port"];
				for (auto valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerPortsPort : allPortsNode)
				{
					JobInfo::ContainerGroup::Container::Port portsObject;
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerPortsPort["Port"].isNull())
						portsObject.port = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerPortsPort["Port"].asString());
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerPortsPort["Protocol"].isNull())
						portsObject.protocol = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerPortsPort["Protocol"].asString();
					containersObject.ports.push_back(portsObject);
				}
				auto allVolumeMountsNode = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainer["VolumeMounts"]["VolumeMount"];
				for (auto valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount : allVolumeMountsNode)
				{
					JobInfo::ContainerGroup::Container::VolumeMount volumeMountsObject;
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["MountPath"].isNull())
						volumeMountsObject.mountPath = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["MountPath"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["MountPropagation"].isNull())
						volumeMountsObject.mountPropagation = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["MountPropagation"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["Name"].isNull())
						volumeMountsObject.name = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["Name"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["ReadOnly"].isNull())
						volumeMountsObject.readOnly = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["ReadOnly"].asString() == "true";
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["SubPath"].isNull())
						volumeMountsObject.subPath = valueJobInfosJobInfoContainerGroupsContainerGroupContainersContainerVolumeMountsVolumeMount["SubPath"].asString();
					containersObject.volumeMounts.push_back(volumeMountsObject);
				}
				auto currentStateNode = value["CurrentState"];
				if(!currentStateNode["DetailStatus"].isNull())
					containersObject.currentState.detailStatus = currentStateNode["DetailStatus"].asString();
				if(!currentStateNode["ExitCode"].isNull())
					containersObject.currentState.exitCode = std::stol(currentStateNode["ExitCode"].asString());
				if(!currentStateNode["FinishTime"].isNull())
					containersObject.currentState.finishTime = currentStateNode["FinishTime"].asString();
				if(!currentStateNode["Message"].isNull())
					containersObject.currentState.message = currentStateNode["Message"].asString();
				if(!currentStateNode["Reason"].isNull())
					containersObject.currentState.reason = currentStateNode["Reason"].asString();
				if(!currentStateNode["Signal"].isNull())
					containersObject.currentState.signal = std::stol(currentStateNode["Signal"].asString());
				if(!currentStateNode["StartTime"].isNull())
					containersObject.currentState.startTime = currentStateNode["StartTime"].asString();
				if(!currentStateNode["State"].isNull())
					containersObject.currentState.state = currentStateNode["State"].asString();
				auto livenessProbeNode = value["LivenessProbe"];
				if(!livenessProbeNode["FailureThreshold"].isNull())
					containersObject.livenessProbe.failureThreshold = std::stol(livenessProbeNode["FailureThreshold"].asString());
				if(!livenessProbeNode["InitialDelaySeconds"].isNull())
					containersObject.livenessProbe.initialDelaySeconds = std::stol(livenessProbeNode["InitialDelaySeconds"].asString());
				if(!livenessProbeNode["PeriodSeconds"].isNull())
					containersObject.livenessProbe.periodSeconds = std::stol(livenessProbeNode["PeriodSeconds"].asString());
				if(!livenessProbeNode["SuccessThreshold"].isNull())
					containersObject.livenessProbe.successThreshold = std::stol(livenessProbeNode["SuccessThreshold"].asString());
				if(!livenessProbeNode["TimeoutSeconds"].isNull())
					containersObject.livenessProbe.timeoutSeconds = std::stol(livenessProbeNode["TimeoutSeconds"].asString());
				auto httpGetNode = livenessProbeNode["HttpGet"];
				if(!httpGetNode["Path"].isNull())
					containersObject.livenessProbe.httpGet.path = httpGetNode["Path"].asString();
				if(!httpGetNode["Port"].isNull())
					containersObject.livenessProbe.httpGet.port = std::stol(httpGetNode["Port"].asString());
				if(!httpGetNode["Scheme"].isNull())
					containersObject.livenessProbe.httpGet.scheme = httpGetNode["Scheme"].asString();
				auto tcpSocketNode = livenessProbeNode["TcpSocket"];
				if(!tcpSocketNode["Host"].isNull())
					containersObject.livenessProbe.tcpSocket.host = tcpSocketNode["Host"].asString();
				if(!tcpSocketNode["Port"].isNull())
					containersObject.livenessProbe.tcpSocket.port = std::stol(tcpSocketNode["Port"].asString());
					auto allExecs = livenessProbeNode["Execs"]["Exec"];
					for (auto value : allExecs)
						containersObject.livenessProbe.execs.push_back(value.asString());
				auto previousStateNode = value["PreviousState"];
				if(!previousStateNode["DetailStatus"].isNull())
					containersObject.previousState.detailStatus = previousStateNode["DetailStatus"].asString();
				if(!previousStateNode["ExitCode"].isNull())
					containersObject.previousState.exitCode = std::stol(previousStateNode["ExitCode"].asString());
				if(!previousStateNode["FinishTime"].isNull())
					containersObject.previousState.finishTime = previousStateNode["FinishTime"].asString();
				if(!previousStateNode["Message"].isNull())
					containersObject.previousState.message = previousStateNode["Message"].asString();
				if(!previousStateNode["Reason"].isNull())
					containersObject.previousState.reason = previousStateNode["Reason"].asString();
				if(!previousStateNode["Signal"].isNull())
					containersObject.previousState.signal = std::stol(previousStateNode["Signal"].asString());
				if(!previousStateNode["StartTime"].isNull())
					containersObject.previousState.startTime = previousStateNode["StartTime"].asString();
				if(!previousStateNode["State"].isNull())
					containersObject.previousState.state = previousStateNode["State"].asString();
				auto readinessProbeNode = value["ReadinessProbe"];
				if(!readinessProbeNode["FailureThreshold"].isNull())
					containersObject.readinessProbe.failureThreshold = std::stol(readinessProbeNode["FailureThreshold"].asString());
				if(!readinessProbeNode["InitialDelaySeconds"].isNull())
					containersObject.readinessProbe.initialDelaySeconds = std::stol(readinessProbeNode["InitialDelaySeconds"].asString());
				if(!readinessProbeNode["PeriodSeconds"].isNull())
					containersObject.readinessProbe.periodSeconds = std::stol(readinessProbeNode["PeriodSeconds"].asString());
				if(!readinessProbeNode["SuccessThreshold"].isNull())
					containersObject.readinessProbe.successThreshold = std::stol(readinessProbeNode["SuccessThreshold"].asString());
				if(!readinessProbeNode["TimeoutSeconds"].isNull())
					containersObject.readinessProbe.timeoutSeconds = std::stol(readinessProbeNode["TimeoutSeconds"].asString());
				auto httpGet2Node = readinessProbeNode["HttpGet"];
				if(!httpGet2Node["Path"].isNull())
					containersObject.readinessProbe.httpGet2.path = httpGet2Node["Path"].asString();
				if(!httpGet2Node["Port"].isNull())
					containersObject.readinessProbe.httpGet2.port = std::stol(httpGet2Node["Port"].asString());
				if(!httpGet2Node["Scheme"].isNull())
					containersObject.readinessProbe.httpGet2.scheme = httpGet2Node["Scheme"].asString();
				auto tcpSocket3Node = readinessProbeNode["TcpSocket"];
				if(!tcpSocket3Node["Host"].isNull())
					containersObject.readinessProbe.tcpSocket3.host = tcpSocket3Node["Host"].asString();
				if(!tcpSocket3Node["Port"].isNull())
					containersObject.readinessProbe.tcpSocket3.port = std::stol(tcpSocket3Node["Port"].asString());
					auto allExecs1 = readinessProbeNode["Execs"]["Exec"];
					for (auto value : allExecs1)
						containersObject.readinessProbe.execs1.push_back(value.asString());
				auto securityContextNode = value["SecurityContext"];
				if(!securityContextNode["ReadOnlyRootFilesystem"].isNull())
					containersObject.securityContext.readOnlyRootFilesystem = securityContextNode["ReadOnlyRootFilesystem"].asString() == "true";
				if(!securityContextNode["RunAsUser"].isNull())
					containersObject.securityContext.runAsUser = std::stol(securityContextNode["RunAsUser"].asString());
				auto capabilityNode = securityContextNode["Capability"];
					auto allAdds = capabilityNode["Adds"]["Add"];
					for (auto value : allAdds)
						containersObject.securityContext.capability.adds.push_back(value.asString());
				auto allArgs = value["Args"]["Arg"];
				for (auto value : allArgs)
					containersObject.args.push_back(value.asString());
				auto allCommands = value["Commands"]["Command"];
				for (auto value : allCommands)
					containersObject.commands.push_back(value.asString());
				containerGroupsObject.containers.push_back(containersObject);
			}
			auto allEventsNode = valueJobInfosJobInfoContainerGroupsContainerGroup["Events"]["Event"];
			for (auto valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent : allEventsNode)
			{
				JobInfo::ContainerGroup::Event eventsObject;
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Count"].isNull())
					eventsObject.count = std::stoi(valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Count"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["FirstTimestamp"].isNull())
					eventsObject.firstTimestamp = valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["FirstTimestamp"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["LastTimestamp"].isNull())
					eventsObject.lastTimestamp = valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["LastTimestamp"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Message"].isNull())
					eventsObject.message = valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Message"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Name"].isNull())
					eventsObject.name = valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Name"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Reason"].isNull())
					eventsObject.reason = valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Reason"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Type"].isNull())
					eventsObject.type = valueJobInfosJobInfoContainerGroupsContainerGroupEventsEvent["Type"].asString();
				containerGroupsObject.events.push_back(eventsObject);
			}
			auto allHostAliasesNode = valueJobInfosJobInfoContainerGroupsContainerGroup["HostAliases"]["HostAlias"];
			for (auto valueJobInfosJobInfoContainerGroupsContainerGroupHostAliasesHostAlias : allHostAliasesNode)
			{
				JobInfo::ContainerGroup::HostAlias hostAliasesObject;
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupHostAliasesHostAlias["Ip"].isNull())
					hostAliasesObject.ip = valueJobInfosJobInfoContainerGroupsContainerGroupHostAliasesHostAlias["Ip"].asString();
				auto allHostnames = value["Hostnames"]["Hostname"];
				for (auto value : allHostnames)
					hostAliasesObject.hostnames.push_back(value.asString());
				containerGroupsObject.hostAliases.push_back(hostAliasesObject);
			}
			auto allInitContainersNode = valueJobInfosJobInfoContainerGroupsContainerGroup["InitContainers"]["InitContainer"];
			for (auto valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer : allInitContainersNode)
			{
				JobInfo::ContainerGroup::InitContainer initContainersObject;
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Cpu"].isNull())
					initContainersObject.cpu = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Cpu"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Gpu"].isNull())
					initContainersObject.gpu = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Gpu"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Image"].isNull())
					initContainersObject.image = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Image"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["ImagePullPolicy"].isNull())
					initContainersObject.imagePullPolicy = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["ImagePullPolicy"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Memory"].isNull())
					initContainersObject.memory = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Memory"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Name"].isNull())
					initContainersObject.name = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Name"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Ready"].isNull())
					initContainersObject.ready = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Ready"].asString() == "true";
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["RestartCount"].isNull())
					initContainersObject.restartCount = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["RestartCount"].asString());
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["WorkingDir"].isNull())
					initContainersObject.workingDir = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["WorkingDir"].asString();
				auto allEnvironmentVars8Node = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["EnvironmentVars"]["EnvironmentVar"];
				for (auto valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerEnvironmentVarsEnvironmentVar : allEnvironmentVars8Node)
				{
					JobInfo::ContainerGroup::InitContainer::EnvironmentVar11 environmentVars8Object;
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerEnvironmentVarsEnvironmentVar["Key"].isNull())
						environmentVars8Object.key = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerEnvironmentVarsEnvironmentVar["Key"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerEnvironmentVarsEnvironmentVar["Value"].isNull())
						environmentVars8Object.value = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerEnvironmentVarsEnvironmentVar["Value"].asString();
					auto valueFrom12Node = value["ValueFrom"];
					auto fieldRef13Node = valueFrom12Node["FieldRef"];
					if(!fieldRef13Node["FieldPath"].isNull())
						environmentVars8Object.valueFrom12.fieldRef13.fieldPath = fieldRef13Node["FieldPath"].asString();
					initContainersObject.environmentVars8.push_back(environmentVars8Object);
				}
				auto allPorts9Node = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["Ports"]["Port"];
				for (auto valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerPortsPort : allPorts9Node)
				{
					JobInfo::ContainerGroup::InitContainer::Port14 ports9Object;
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerPortsPort["Port"].isNull())
						ports9Object.port = std::stol(valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerPortsPort["Port"].asString());
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerPortsPort["Protocol"].isNull())
						ports9Object.protocol = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerPortsPort["Protocol"].asString();
					initContainersObject.ports9.push_back(ports9Object);
				}
				auto allVolumeMounts10Node = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainer["VolumeMounts"]["VolumeMount"];
				for (auto valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount : allVolumeMounts10Node)
				{
					JobInfo::ContainerGroup::InitContainer::VolumeMount15 volumeMounts10Object;
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["MountPath"].isNull())
						volumeMounts10Object.mountPath = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["MountPath"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["MountPropagation"].isNull())
						volumeMounts10Object.mountPropagation = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["MountPropagation"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["Name"].isNull())
						volumeMounts10Object.name = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["Name"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["ReadOnly"].isNull())
						volumeMounts10Object.readOnly = valueJobInfosJobInfoContainerGroupsContainerGroupInitContainersInitContainerVolumeMountsVolumeMount["ReadOnly"].asString() == "true";
					initContainersObject.volumeMounts10.push_back(volumeMounts10Object);
				}
				auto currentState5Node = value["CurrentState"];
				if(!currentState5Node["DetailStatus"].isNull())
					initContainersObject.currentState5.detailStatus = currentState5Node["DetailStatus"].asString();
				if(!currentState5Node["ExitCode"].isNull())
					initContainersObject.currentState5.exitCode = std::stol(currentState5Node["ExitCode"].asString());
				if(!currentState5Node["FinishTime"].isNull())
					initContainersObject.currentState5.finishTime = currentState5Node["FinishTime"].asString();
				if(!currentState5Node["Message"].isNull())
					initContainersObject.currentState5.message = currentState5Node["Message"].asString();
				if(!currentState5Node["Reason"].isNull())
					initContainersObject.currentState5.reason = currentState5Node["Reason"].asString();
				if(!currentState5Node["Signal"].isNull())
					initContainersObject.currentState5.signal = std::stol(currentState5Node["Signal"].asString());
				if(!currentState5Node["StartTime"].isNull())
					initContainersObject.currentState5.startTime = currentState5Node["StartTime"].asString();
				if(!currentState5Node["State"].isNull())
					initContainersObject.currentState5.state = currentState5Node["State"].asString();
				auto previousState6Node = value["PreviousState"];
				if(!previousState6Node["DetailStatus"].isNull())
					initContainersObject.previousState6.detailStatus = previousState6Node["DetailStatus"].asString();
				if(!previousState6Node["ExitCode"].isNull())
					initContainersObject.previousState6.exitCode = std::stol(previousState6Node["ExitCode"].asString());
				if(!previousState6Node["FinishTime"].isNull())
					initContainersObject.previousState6.finishTime = previousState6Node["FinishTime"].asString();
				if(!previousState6Node["Message"].isNull())
					initContainersObject.previousState6.message = previousState6Node["Message"].asString();
				if(!previousState6Node["Reason"].isNull())
					initContainersObject.previousState6.reason = previousState6Node["Reason"].asString();
				if(!previousState6Node["Signal"].isNull())
					initContainersObject.previousState6.signal = std::stol(previousState6Node["Signal"].asString());
				if(!previousState6Node["StartTime"].isNull())
					initContainersObject.previousState6.startTime = previousState6Node["StartTime"].asString();
				if(!previousState6Node["State"].isNull())
					initContainersObject.previousState6.state = previousState6Node["State"].asString();
				auto securityContext7Node = value["SecurityContext"];
				if(!securityContext7Node["ReadOnlyRootFilesystem"].isNull())
					initContainersObject.securityContext7.readOnlyRootFilesystem = securityContext7Node["ReadOnlyRootFilesystem"].asString() == "true";
				if(!securityContext7Node["RunAsUser"].isNull())
					initContainersObject.securityContext7.runAsUser = std::stol(securityContext7Node["RunAsUser"].asString());
				auto capability16Node = securityContext7Node["Capability"];
					auto allAdds17 = capability16Node["Adds"]["Add"];
					for (auto value : allAdds17)
						initContainersObject.securityContext7.capability16.adds17.push_back(value.asString());
				auto allArgs4 = value["Args"]["Arg"];
				for (auto value : allArgs4)
					initContainersObject.args4.push_back(value.asString());
				auto allCommand = value["Command"]["Command"];
				for (auto value : allCommand)
					initContainersObject.command.push_back(value.asString());
				containerGroupsObject.initContainers.push_back(initContainersObject);
			}
			auto allTagsNode = valueJobInfosJobInfoContainerGroupsContainerGroup["Tags"]["Tag"];
			for (auto valueJobInfosJobInfoContainerGroupsContainerGroupTagsTag : allTagsNode)
			{
				JobInfo::ContainerGroup::Tag tagsObject;
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupTagsTag["Key"].isNull())
					tagsObject.key = valueJobInfosJobInfoContainerGroupsContainerGroupTagsTag["Key"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupTagsTag["Value"].isNull())
					tagsObject.value = valueJobInfosJobInfoContainerGroupsContainerGroupTagsTag["Value"].asString();
				containerGroupsObject.tags.push_back(tagsObject);
			}
			auto allVolumesNode = valueJobInfosJobInfoContainerGroupsContainerGroup["Volumes"]["Volume"];
			for (auto valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume : allVolumesNode)
			{
				JobInfo::ContainerGroup::Volume volumesObject;
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["DiskVolumeDiskId"].isNull())
					volumesObject.diskVolumeDiskId = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["DiskVolumeDiskId"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["DiskVolumeFsType"].isNull())
					volumesObject.diskVolumeFsType = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["DiskVolumeFsType"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["EmptyDirVolumeMedium"].isNull())
					volumesObject.emptyDirVolumeMedium = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["EmptyDirVolumeMedium"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["EmptyDirVolumeSizeLimit"].isNull())
					volumesObject.emptyDirVolumeSizeLimit = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["EmptyDirVolumeSizeLimit"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["FlexVolumeDriver"].isNull())
					volumesObject.flexVolumeDriver = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["FlexVolumeDriver"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["FlexVolumeFsType"].isNull())
					volumesObject.flexVolumeFsType = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["FlexVolumeFsType"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["FlexVolumeOptions"].isNull())
					volumesObject.flexVolumeOptions = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["FlexVolumeOptions"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["NFSVolumePath"].isNull())
					volumesObject.nFSVolumePath = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["NFSVolumePath"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["NFSVolumeReadOnly"].isNull())
					volumesObject.nFSVolumeReadOnly = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["NFSVolumeReadOnly"].asString() == "true";
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["NFSVolumeServer"].isNull())
					volumesObject.nFSVolumeServer = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["NFSVolumeServer"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["Name"].isNull())
					volumesObject.name = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["Name"].asString();
				if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["Type"].isNull())
					volumesObject.type = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["Type"].asString();
				auto allConfigFileVolumeConfigFileToPathsNode = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolume["ConfigFileVolumeConfigFileToPaths"]["ConfigFileVolumeConfigFileToPath"];
				for (auto valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath : allConfigFileVolumeConfigFileToPathsNode)
				{
					JobInfo::ContainerGroup::Volume::ConfigFileVolumeConfigFileToPath configFileVolumeConfigFileToPathsObject;
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Content"].isNull())
						configFileVolumeConfigFileToPathsObject.content = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Content"].asString();
					if(!valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Path"].isNull())
						configFileVolumeConfigFileToPathsObject.path = valueJobInfosJobInfoContainerGroupsContainerGroupVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Path"].asString();
					volumesObject.configFileVolumeConfigFileToPaths.push_back(configFileVolumeConfigFileToPathsObject);
				}
				containerGroupsObject.volumes.push_back(volumesObject);
			}
			auto dnsConfigNode = value["DnsConfig"];
			auto allOptionsNode = dnsConfigNode["Options"]["Option"];
			for (auto dnsConfigNodeOptionsOption : allOptionsNode)
			{
				JobInfo::ContainerGroup::DnsConfig::Option optionObject;
				if(!dnsConfigNodeOptionsOption["Name"].isNull())
					optionObject.name = dnsConfigNodeOptionsOption["Name"].asString();
				if(!dnsConfigNodeOptionsOption["Value"].isNull())
					optionObject.value = dnsConfigNodeOptionsOption["Value"].asString();
				containerGroupsObject.dnsConfig.options.push_back(optionObject);
			}
				auto allNameServers = dnsConfigNode["NameServers"]["NameServer"];
				for (auto value : allNameServers)
					containerGroupsObject.dnsConfig.nameServers.push_back(value.asString());
				auto allSearches = dnsConfigNode["Searches"]["Search"];
				for (auto value : allSearches)
					containerGroupsObject.dnsConfig.searches.push_back(value.asString());
			auto eciSecurityContextNode = value["EciSecurityContext"];
			auto allSysctlsNode = eciSecurityContextNode["Sysctls"]["Sysctl"];
			for (auto eciSecurityContextNodeSysctlsSysctl : allSysctlsNode)
			{
				JobInfo::ContainerGroup::EciSecurityContext::Sysctl sysctlObject;
				if(!eciSecurityContextNodeSysctlsSysctl["Name"].isNull())
					sysctlObject.name = eciSecurityContextNodeSysctlsSysctl["Name"].asString();
				if(!eciSecurityContextNodeSysctlsSysctl["Value"].isNull())
					sysctlObject.value = eciSecurityContextNodeSysctlsSysctl["Value"].asString();
				containerGroupsObject.eciSecurityContext.sysctls.push_back(sysctlObject);
			}
			jobInfosObject.containerGroups.push_back(containerGroupsObject);
		}
		auto arrayPropertiesNode = value["ArrayProperties"];
		if(!arrayPropertiesNode["IndexStart"].isNull())
			jobInfosObject.arrayProperties.indexStart = std::stol(arrayPropertiesNode["IndexStart"].asString());
		if(!arrayPropertiesNode["IndexEnd"].isNull())
			jobInfosObject.arrayProperties.indexEnd = std::stol(arrayPropertiesNode["IndexEnd"].asString());
		if(!arrayPropertiesNode["IndexStep"].isNull())
			jobInfosObject.arrayProperties.indexStep = std::stol(arrayPropertiesNode["IndexStep"].asString());
		jobInfos_.push_back(jobInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeServerlessJobsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeServerlessJobsResult::JobInfo> DescribeServerlessJobsResult::getJobInfos()const
{
	return jobInfos_;
}

