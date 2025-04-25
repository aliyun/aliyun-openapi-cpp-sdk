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

#include <alibabacloud/ess/model/DescribeEciScalingConfigurationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeEciScalingConfigurationsResult::DescribeEciScalingConfigurationsResult() :
	ServiceResult()
{}

DescribeEciScalingConfigurationsResult::DescribeEciScalingConfigurationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEciScalingConfigurationsResult::~DescribeEciScalingConfigurationsResult()
{}

void DescribeEciScalingConfigurationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingConfigurationsNode = value["ScalingConfigurations"]["ScalingConfiguration"];
	for (auto valueScalingConfigurationsScalingConfiguration : allScalingConfigurationsNode)
	{
		ScalingConfiguration scalingConfigurationsObject;
		if(!valueScalingConfigurationsScalingConfiguration["CreationTime"].isNull())
			scalingConfigurationsObject.creationTime = valueScalingConfigurationsScalingConfiguration["CreationTime"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ScalingConfigurationName"].isNull())
			scalingConfigurationsObject.scalingConfigurationName = valueScalingConfigurationsScalingConfiguration["ScalingConfigurationName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SecurityGroupId"].isNull())
			scalingConfigurationsObject.securityGroupId = valueScalingConfigurationsScalingConfiguration["SecurityGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ActiveDeadlineSeconds"].isNull())
			scalingConfigurationsObject.activeDeadlineSeconds = std::stoi(valueScalingConfigurationsScalingConfiguration["ActiveDeadlineSeconds"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["SpotStrategy"].isNull())
			scalingConfigurationsObject.spotStrategy = valueScalingConfigurationsScalingConfiguration["SpotStrategy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["AutoCreateEip"].isNull())
			scalingConfigurationsObject.autoCreateEip = valueScalingConfigurationsScalingConfiguration["AutoCreateEip"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["ScalingGroupId"].isNull())
			scalingConfigurationsObject.scalingGroupId = valueScalingConfigurationsScalingConfiguration["ScalingGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["EphemeralStorage"].isNull())
			scalingConfigurationsObject.ephemeralStorage = std::stoi(valueScalingConfigurationsScalingConfiguration["EphemeralStorage"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["Ipv6AddressCount"].isNull())
			scalingConfigurationsObject.ipv6AddressCount = std::stoi(valueScalingConfigurationsScalingConfiguration["Ipv6AddressCount"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["Description"].isNull())
			scalingConfigurationsObject.description = valueScalingConfigurationsScalingConfiguration["Description"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["EipBandwidth"].isNull())
			scalingConfigurationsObject.eipBandwidth = std::stoi(valueScalingConfigurationsScalingConfiguration["EipBandwidth"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["ImageSnapshotId"].isNull())
			scalingConfigurationsObject.imageSnapshotId = valueScalingConfigurationsScalingConfiguration["ImageSnapshotId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["Memory"].isNull())
			scalingConfigurationsObject.memory = std::stof(valueScalingConfigurationsScalingConfiguration["Memory"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["RestartPolicy"].isNull())
			scalingConfigurationsObject.restartPolicy = valueScalingConfigurationsScalingConfiguration["RestartPolicy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SpotPriceLimit"].isNull())
			scalingConfigurationsObject.spotPriceLimit = std::stof(valueScalingConfigurationsScalingConfiguration["SpotPriceLimit"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["IngressBandwidth"].isNull())
			scalingConfigurationsObject.ingressBandwidth = std::stol(valueScalingConfigurationsScalingConfiguration["IngressBandwidth"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["CpuOptionsThreadsPerCore"].isNull())
			scalingConfigurationsObject.cpuOptionsThreadsPerCore = std::stoi(valueScalingConfigurationsScalingConfiguration["CpuOptionsThreadsPerCore"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["TerminationGracePeriodSeconds"].isNull())
			scalingConfigurationsObject.terminationGracePeriodSeconds = std::stoi(valueScalingConfigurationsScalingConfiguration["TerminationGracePeriodSeconds"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["LoadBalancerWeight"].isNull())
			scalingConfigurationsObject.loadBalancerWeight = std::stoi(valueScalingConfigurationsScalingConfiguration["LoadBalancerWeight"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["DnsPolicy"].isNull())
			scalingConfigurationsObject.dnsPolicy = valueScalingConfigurationsScalingConfiguration["DnsPolicy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["HostName"].isNull())
			scalingConfigurationsObject.hostName = valueScalingConfigurationsScalingConfiguration["HostName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["EgressBandwidth"].isNull())
			scalingConfigurationsObject.egressBandwidth = std::stol(valueScalingConfigurationsScalingConfiguration["EgressBandwidth"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["RegionId"].isNull())
			scalingConfigurationsObject.regionId = valueScalingConfigurationsScalingConfiguration["RegionId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["RamRoleName"].isNull())
			scalingConfigurationsObject.ramRoleName = valueScalingConfigurationsScalingConfiguration["RamRoleName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["Cpu"].isNull())
			scalingConfigurationsObject.cpu = std::stof(valueScalingConfigurationsScalingConfiguration["Cpu"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["AutoMatchImageCache"].isNull())
			scalingConfigurationsObject.autoMatchImageCache = valueScalingConfigurationsScalingConfiguration["AutoMatchImageCache"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["ResourceGroupId"].isNull())
			scalingConfigurationsObject.resourceGroupId = valueScalingConfigurationsScalingConfiguration["ResourceGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ContainerGroupName"].isNull())
			scalingConfigurationsObject.containerGroupName = valueScalingConfigurationsScalingConfiguration["ContainerGroupName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ScalingConfigurationId"].isNull())
			scalingConfigurationsObject.scalingConfigurationId = valueScalingConfigurationsScalingConfiguration["ScalingConfigurationId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["CpuOptionsCore"].isNull())
			scalingConfigurationsObject.cpuOptionsCore = std::stoi(valueScalingConfigurationsScalingConfiguration["CpuOptionsCore"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["SlsEnable"].isNull())
			scalingConfigurationsObject.slsEnable = valueScalingConfigurationsScalingConfiguration["SlsEnable"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["LifecycleState"].isNull())
			scalingConfigurationsObject.lifecycleState = valueScalingConfigurationsScalingConfiguration["LifecycleState"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["CostOptimization"].isNull())
			scalingConfigurationsObject.costOptimization = valueScalingConfigurationsScalingConfiguration["CostOptimization"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["InstanceFamilyLevel"].isNull())
			scalingConfigurationsObject.instanceFamilyLevel = valueScalingConfigurationsScalingConfiguration["InstanceFamilyLevel"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["DataCacheBucket"].isNull())
			scalingConfigurationsObject.dataCacheBucket = valueScalingConfigurationsScalingConfiguration["DataCacheBucket"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["DataCachePL"].isNull())
			scalingConfigurationsObject.dataCachePL = valueScalingConfigurationsScalingConfiguration["DataCachePL"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["DataCacheProvisionedIops"].isNull())
			scalingConfigurationsObject.dataCacheProvisionedIops = std::stoi(valueScalingConfigurationsScalingConfiguration["DataCacheProvisionedIops"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["DataCacheBurstingEnabled"].isNull())
			scalingConfigurationsObject.dataCacheBurstingEnabled = valueScalingConfigurationsScalingConfiguration["DataCacheBurstingEnabled"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["GpuDriverVersion"].isNull())
			scalingConfigurationsObject.gpuDriverVersion = valueScalingConfigurationsScalingConfiguration["GpuDriverVersion"].asString();
		auto allContainersNode = valueScalingConfigurationsScalingConfiguration["Containers"]["Container"];
		for (auto valueScalingConfigurationsScalingConfigurationContainersContainer : allContainersNode)
		{
			ScalingConfiguration::Container containersObject;
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeHttpGetPath"].isNull())
				containersObject.readinessProbeHttpGetPath = valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeHttpGetPath"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeSuccessThreshold"].isNull())
				containersObject.readinessProbeSuccessThreshold = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeSuccessThreshold"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbePeriodSeconds"].isNull())
				containersObject.livenessProbePeriodSeconds = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbePeriodSeconds"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeTcpSocketPort"].isNull())
				containersObject.livenessProbeTcpSocketPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeTcpSocketPort"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeHttpGetScheme"].isNull())
				containersObject.livenessProbeHttpGetScheme = valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeHttpGetScheme"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["WorkingDir"].isNull())
				containersObject.workingDir = valueScalingConfigurationsScalingConfigurationContainersContainer["WorkingDir"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["Tty"].isNull())
				containersObject.tty = valueScalingConfigurationsScalingConfigurationContainersContainer["Tty"].asString() == "true";
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeHttpGetPort"].isNull())
				containersObject.livenessProbeHttpGetPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeHttpGetPort"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["Gpu"].isNull())
				containersObject.gpu = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["Gpu"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeInitialDelaySeconds"].isNull())
				containersObject.readinessProbeInitialDelaySeconds = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeInitialDelaySeconds"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["Stdin"].isNull())
				containersObject.stdin = valueScalingConfigurationsScalingConfigurationContainersContainer["Stdin"].asString() == "true";
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["Memory"].isNull())
				containersObject.memory = std::stof(valueScalingConfigurationsScalingConfigurationContainersContainer["Memory"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["Name"].isNull())
				containersObject.name = valueScalingConfigurationsScalingConfigurationContainersContainer["Name"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["SecurityContextReadOnlyRootFilesystem"].isNull())
				containersObject.securityContextReadOnlyRootFilesystem = valueScalingConfigurationsScalingConfigurationContainersContainer["SecurityContextReadOnlyRootFilesystem"].asString() == "true";
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeHttpGetPath"].isNull())
				containersObject.livenessProbeHttpGetPath = valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeHttpGetPath"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["Image"].isNull())
				containersObject.image = valueScalingConfigurationsScalingConfigurationContainersContainer["Image"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeTcpSocketPort"].isNull())
				containersObject.readinessProbeTcpSocketPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeTcpSocketPort"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeHttpGetScheme"].isNull())
				containersObject.readinessProbeHttpGetScheme = valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeHttpGetScheme"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeHttpGetPort"].isNull())
				containersObject.readinessProbeHttpGetPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeHttpGetPort"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeSuccessThreshold"].isNull())
				containersObject.livenessProbeSuccessThreshold = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeSuccessThreshold"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeTimeoutSeconds"].isNull())
				containersObject.readinessProbeTimeoutSeconds = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeTimeoutSeconds"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["SecurityContextRunAsUser"].isNull())
				containersObject.securityContextRunAsUser = std::stol(valueScalingConfigurationsScalingConfigurationContainersContainer["SecurityContextRunAsUser"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeInitialDelaySeconds"].isNull())
				containersObject.livenessProbeInitialDelaySeconds = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeInitialDelaySeconds"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbePeriodSeconds"].isNull())
				containersObject.readinessProbePeriodSeconds = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbePeriodSeconds"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ImagePullPolicy"].isNull())
				containersObject.imagePullPolicy = valueScalingConfigurationsScalingConfigurationContainersContainer["ImagePullPolicy"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["StdinOnce"].isNull())
				containersObject.stdinOnce = valueScalingConfigurationsScalingConfigurationContainersContainer["StdinOnce"].asString() == "true";
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["Cpu"].isNull())
				containersObject.cpu = std::stof(valueScalingConfigurationsScalingConfigurationContainersContainer["Cpu"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeTimeoutSeconds"].isNull())
				containersObject.livenessProbeTimeoutSeconds = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeTimeoutSeconds"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeFailureThreshold"].isNull())
				containersObject.readinessProbeFailureThreshold = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["ReadinessProbeFailureThreshold"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeFailureThreshold"].isNull())
				containersObject.livenessProbeFailureThreshold = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LivenessProbeFailureThreshold"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetHost"].isNull())
				containersObject.lifecyclePostStartHandlerHttpGetHost = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetHost"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetPort"].isNull())
				containersObject.lifecyclePostStartHandlerHttpGetPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetPort"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetPath"].isNull())
				containersObject.lifecyclePostStartHandlerHttpGetPath = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetPath"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetScheme"].isNull())
				containersObject.lifecyclePostStartHandlerHttpGetScheme = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerHttpGetScheme"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerTcpSocketHost"].isNull())
				containersObject.lifecyclePostStartHandlerTcpSocketHost = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerTcpSocketHost"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerTcpSocketPort"].isNull())
				containersObject.lifecyclePostStartHandlerTcpSocketPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePostStartHandlerTcpSocketPort"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetHost"].isNull())
				containersObject.lifecyclePreStopHandlerHttpGetHost = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetHost"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetPort"].isNull())
				containersObject.lifecyclePreStopHandlerHttpGetPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetPort"].asString());
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetPath"].isNull())
				containersObject.lifecyclePreStopHandlerHttpGetPath = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetPath"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetScheme"].isNull())
				containersObject.lifecyclePreStopHandlerHttpGetScheme = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerHttpGetScheme"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerTcpSocketHost"].isNull())
				containersObject.lifecyclePreStopHandlerTcpSocketHost = valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerTcpSocketHost"].asString();
			if(!valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerTcpSocketPort"].isNull())
				containersObject.lifecyclePreStopHandlerTcpSocketPort = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainer["LifecyclePreStopHandlerTcpSocketPort"].asString());
			auto allPortsNode = valueScalingConfigurationsScalingConfigurationContainersContainer["Ports"]["Port"];
			for (auto valueScalingConfigurationsScalingConfigurationContainersContainerPortsPort : allPortsNode)
			{
				ScalingConfiguration::Container::Port portsObject;
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerPortsPort["Port"].isNull())
					portsObject.port = std::stoi(valueScalingConfigurationsScalingConfigurationContainersContainerPortsPort["Port"].asString());
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerPortsPort["Protocol"].isNull())
					portsObject.protocol = valueScalingConfigurationsScalingConfigurationContainersContainerPortsPort["Protocol"].asString();
				containersObject.ports.push_back(portsObject);
			}
			auto allVolumeMountsNode = valueScalingConfigurationsScalingConfigurationContainersContainer["VolumeMounts"]["VolumeMount"];
			for (auto valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount : allVolumeMountsNode)
			{
				ScalingConfiguration::Container::VolumeMount volumeMountsObject;
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["ReadOnly"].isNull())
					volumeMountsObject.readOnly = valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["ReadOnly"].asString() == "true";
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["SubPath"].isNull())
					volumeMountsObject.subPath = valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["SubPath"].asString();
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["Name"].isNull())
					volumeMountsObject.name = valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["Name"].asString();
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["MountPropagation"].isNull())
					volumeMountsObject.mountPropagation = valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["MountPropagation"].asString();
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["MountPath"].isNull())
					volumeMountsObject.mountPath = valueScalingConfigurationsScalingConfigurationContainersContainerVolumeMountsVolumeMount["MountPath"].asString();
				containersObject.volumeMounts.push_back(volumeMountsObject);
			}
			auto allEnvironmentVarsNode = valueScalingConfigurationsScalingConfigurationContainersContainer["EnvironmentVars"]["EnvironmentVar"];
			for (auto valueScalingConfigurationsScalingConfigurationContainersContainerEnvironmentVarsEnvironmentVar : allEnvironmentVarsNode)
			{
				ScalingConfiguration::Container::EnvironmentVar environmentVarsObject;
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerEnvironmentVarsEnvironmentVar["Key"].isNull())
					environmentVarsObject.key = valueScalingConfigurationsScalingConfigurationContainersContainerEnvironmentVarsEnvironmentVar["Key"].asString();
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerEnvironmentVarsEnvironmentVar["Value"].isNull())
					environmentVarsObject.value = valueScalingConfigurationsScalingConfigurationContainersContainerEnvironmentVarsEnvironmentVar["Value"].asString();
				if(!valueScalingConfigurationsScalingConfigurationContainersContainerEnvironmentVarsEnvironmentVar["FieldRefFieldPath"].isNull())
					environmentVarsObject.fieldRefFieldPath = valueScalingConfigurationsScalingConfigurationContainersContainerEnvironmentVarsEnvironmentVar["FieldRefFieldPath"].asString();
				containersObject.environmentVars.push_back(environmentVarsObject);
			}
			auto allCommands = value["Commands"]["Command"];
			for (auto value : allCommands)
				containersObject.commands.push_back(value.asString());
			auto allLivenessProbeExecCommands = value["LivenessProbeExecCommands"]["LivenessProbeExecCommand"];
			for (auto value : allLivenessProbeExecCommands)
				containersObject.livenessProbeExecCommands.push_back(value.asString());
			auto allArgs = value["Args"]["Arg"];
			for (auto value : allArgs)
				containersObject.args.push_back(value.asString());
			auto allReadinessProbeExecCommands = value["ReadinessProbeExecCommands"]["ReadinessProbeExecCommand"];
			for (auto value : allReadinessProbeExecCommands)
				containersObject.readinessProbeExecCommands.push_back(value.asString());
			auto allSecurityContextCapabilityAdds = value["SecurityContextCapabilityAdds"]["InitContainerSecurityContextCapabilityAdd"];
			for (auto value : allSecurityContextCapabilityAdds)
				containersObject.securityContextCapabilityAdds.push_back(value.asString());
			auto allLifecyclePostStartHandlerExecs = value["LifecyclePostStartHandlerExecs"]["LifecyclePostStartHandlerExec"];
			for (auto value : allLifecyclePostStartHandlerExecs)
				containersObject.lifecyclePostStartHandlerExecs.push_back(value.asString());
			auto allLifecyclePreStopHandlerExecs = value["LifecyclePreStopHandlerExecs"]["LifecyclePreStopHandlerExec"];
			for (auto value : allLifecyclePreStopHandlerExecs)
				containersObject.lifecyclePreStopHandlerExecs.push_back(value.asString());
			scalingConfigurationsObject.containers.push_back(containersObject);
		}
		auto allInitContainersNode = valueScalingConfigurationsScalingConfiguration["InitContainers"]["InitContainer"];
		for (auto valueScalingConfigurationsScalingConfigurationInitContainersInitContainer : allInitContainersNode)
		{
			ScalingConfiguration::InitContainer initContainersObject;
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["SecurityContextReadOnlyRootFilesystem"].isNull())
				initContainersObject.securityContextReadOnlyRootFilesystem = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["SecurityContextReadOnlyRootFilesystem"].asString() == "true";
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["ImagePullPolicy"].isNull())
				initContainersObject.imagePullPolicy = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["ImagePullPolicy"].asString();
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["WorkingDir"].isNull())
				initContainersObject.workingDir = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["WorkingDir"].asString();
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Cpu"].isNull())
				initContainersObject.cpu = std::stof(valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Cpu"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Image"].isNull())
				initContainersObject.image = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Image"].asString();
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Gpu"].isNull())
				initContainersObject.gpu = std::stoi(valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Gpu"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["SecurityContextRunAsUser"].isNull())
				initContainersObject.securityContextRunAsUser = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["SecurityContextRunAsUser"].asString();
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Memory"].isNull())
				initContainersObject.memory = std::stof(valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Memory"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Name"].isNull())
				initContainersObject.name = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["Name"].asString();
			auto allInitContainerEnvironmentVarsNode = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["InitContainerEnvironmentVars"]["InitContainerEnvironmentVar"];
			for (auto valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerEnvironmentVarsInitContainerEnvironmentVar : allInitContainerEnvironmentVarsNode)
			{
				ScalingConfiguration::InitContainer::InitContainerEnvironmentVar initContainerEnvironmentVarsObject;
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerEnvironmentVarsInitContainerEnvironmentVar["Key"].isNull())
					initContainerEnvironmentVarsObject.key = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerEnvironmentVarsInitContainerEnvironmentVar["Key"].asString();
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerEnvironmentVarsInitContainerEnvironmentVar["Value"].isNull())
					initContainerEnvironmentVarsObject.value = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerEnvironmentVarsInitContainerEnvironmentVar["Value"].asString();
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerEnvironmentVarsInitContainerEnvironmentVar["FieldRefFieldPath"].isNull())
					initContainerEnvironmentVarsObject.fieldRefFieldPath = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerEnvironmentVarsInitContainerEnvironmentVar["FieldRefFieldPath"].asString();
				initContainersObject.initContainerEnvironmentVars.push_back(initContainerEnvironmentVarsObject);
			}
			auto allInitContainerPortsNode = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["InitContainerPorts"]["InitContainerPort"];
			for (auto valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerPortsInitContainerPort : allInitContainerPortsNode)
			{
				ScalingConfiguration::InitContainer::InitContainerPort initContainerPortsObject;
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerPortsInitContainerPort["Port"].isNull())
					initContainerPortsObject.port = std::stoi(valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerPortsInitContainerPort["Port"].asString());
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerPortsInitContainerPort["Protocol"].isNull())
					initContainerPortsObject.protocol = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerPortsInitContainerPort["Protocol"].asString();
				initContainersObject.initContainerPorts.push_back(initContainerPortsObject);
			}
			auto allInitContainerVolumeMountsNode = valueScalingConfigurationsScalingConfigurationInitContainersInitContainer["InitContainerVolumeMounts"]["InitContainerVolumeMount"];
			for (auto valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount : allInitContainerVolumeMountsNode)
			{
				ScalingConfiguration::InitContainer::InitContainerVolumeMount initContainerVolumeMountsObject;
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["ReadOnly"].isNull())
					initContainerVolumeMountsObject.readOnly = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["ReadOnly"].asString() == "true";
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["SubPath"].isNull())
					initContainerVolumeMountsObject.subPath = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["SubPath"].asString();
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["Name"].isNull())
					initContainerVolumeMountsObject.name = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["Name"].asString();
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["MountPropagation"].isNull())
					initContainerVolumeMountsObject.mountPropagation = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["MountPropagation"].asString();
				if(!valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["MountPath"].isNull())
					initContainerVolumeMountsObject.mountPath = valueScalingConfigurationsScalingConfigurationInitContainersInitContainerInitContainerVolumeMountsInitContainerVolumeMount["MountPath"].asString();
				initContainersObject.initContainerVolumeMounts.push_back(initContainerVolumeMountsObject);
			}
			auto allSecurityContextCapabilityAdds1 = value["SecurityContextCapabilityAdds"]["InitContainerSecurityContextCapabilityAdd"];
			for (auto value : allSecurityContextCapabilityAdds1)
				initContainersObject.securityContextCapabilityAdds1.push_back(value.asString());
			auto allInitContainerCommands = value["InitContainerCommands"]["InitContainerCommand"];
			for (auto value : allInitContainerCommands)
				initContainersObject.initContainerCommands.push_back(value.asString());
			auto allInitContainerArgs = value["InitContainerArgs"]["InitContainerArg"];
			for (auto value : allInitContainerArgs)
				initContainersObject.initContainerArgs.push_back(value.asString());
			scalingConfigurationsObject.initContainers.push_back(initContainersObject);
		}
		auto allTagsNode = valueScalingConfigurationsScalingConfiguration["Tags"]["Tag"];
		for (auto valueScalingConfigurationsScalingConfigurationTagsTag : allTagsNode)
		{
			ScalingConfiguration::Tag tagsObject;
			if(!valueScalingConfigurationsScalingConfigurationTagsTag["Key"].isNull())
				tagsObject.key = valueScalingConfigurationsScalingConfigurationTagsTag["Key"].asString();
			if(!valueScalingConfigurationsScalingConfigurationTagsTag["Value"].isNull())
				tagsObject.value = valueScalingConfigurationsScalingConfigurationTagsTag["Value"].asString();
			scalingConfigurationsObject.tags.push_back(tagsObject);
		}
		auto allVolumesNode = valueScalingConfigurationsScalingConfiguration["Volumes"]["Volume"];
		for (auto valueScalingConfigurationsScalingConfigurationVolumesVolume : allVolumesNode)
		{
			ScalingConfiguration::Volume volumesObject;
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["Type"].isNull())
				volumesObject.type = valueScalingConfigurationsScalingConfigurationVolumesVolume["Type"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["DiskVolumeDiskId"].isNull())
				volumesObject.diskVolumeDiskId = valueScalingConfigurationsScalingConfigurationVolumesVolume["DiskVolumeDiskId"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["DiskVolumeFsType"].isNull())
				volumesObject.diskVolumeFsType = valueScalingConfigurationsScalingConfigurationVolumesVolume["DiskVolumeFsType"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["EmptyDirVolumeMedium"].isNull())
				volumesObject.emptyDirVolumeMedium = valueScalingConfigurationsScalingConfigurationVolumesVolume["EmptyDirVolumeMedium"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["NFSVolumePath"].isNull())
				volumesObject.nFSVolumePath = valueScalingConfigurationsScalingConfigurationVolumesVolume["NFSVolumePath"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["DiskVolumeDiskSize"].isNull())
				volumesObject.diskVolumeDiskSize = std::stoi(valueScalingConfigurationsScalingConfigurationVolumesVolume["DiskVolumeDiskSize"].asString());
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["NFSVolumeReadOnly"].isNull())
				volumesObject.nFSVolumeReadOnly = valueScalingConfigurationsScalingConfigurationVolumesVolume["NFSVolumeReadOnly"].asString() == "true";
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["FlexVolumeFsType"].isNull())
				volumesObject.flexVolumeFsType = valueScalingConfigurationsScalingConfigurationVolumesVolume["FlexVolumeFsType"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["ConfigFileVolumeDefaultMode"].isNull())
				volumesObject.configFileVolumeDefaultMode = std::stoi(valueScalingConfigurationsScalingConfigurationVolumesVolume["ConfigFileVolumeDefaultMode"].asString());
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["FlexVolumeDriver"].isNull())
				volumesObject.flexVolumeDriver = valueScalingConfigurationsScalingConfigurationVolumesVolume["FlexVolumeDriver"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["FlexVolumeOptions"].isNull())
				volumesObject.flexVolumeOptions = valueScalingConfigurationsScalingConfigurationVolumesVolume["FlexVolumeOptions"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["NFSVolumeServer"].isNull())
				volumesObject.nFSVolumeServer = valueScalingConfigurationsScalingConfigurationVolumesVolume["NFSVolumeServer"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["Name"].isNull())
				volumesObject.name = valueScalingConfigurationsScalingConfigurationVolumesVolume["Name"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["EmptyDirVolumeSizeLimit"].isNull())
				volumesObject.emptyDirVolumeSizeLimit = valueScalingConfigurationsScalingConfigurationVolumesVolume["EmptyDirVolumeSizeLimit"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["HostPathVolumeType"].isNull())
				volumesObject.hostPathVolumeType = valueScalingConfigurationsScalingConfigurationVolumesVolume["HostPathVolumeType"].asString();
			if(!valueScalingConfigurationsScalingConfigurationVolumesVolume["HostPathVolumePath"].isNull())
				volumesObject.hostPathVolumePath = valueScalingConfigurationsScalingConfigurationVolumesVolume["HostPathVolumePath"].asString();
			auto allConfigFileVolumeConfigFileToPathsNode = valueScalingConfigurationsScalingConfigurationVolumesVolume["ConfigFileVolumeConfigFileToPaths"]["ConfigFileVolumeConfigFileToPath"];
			for (auto valueScalingConfigurationsScalingConfigurationVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath : allConfigFileVolumeConfigFileToPathsNode)
			{
				ScalingConfiguration::Volume::ConfigFileVolumeConfigFileToPath configFileVolumeConfigFileToPathsObject;
				if(!valueScalingConfigurationsScalingConfigurationVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Path"].isNull())
					configFileVolumeConfigFileToPathsObject.path = valueScalingConfigurationsScalingConfigurationVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Path"].asString();
				if(!valueScalingConfigurationsScalingConfigurationVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Mode"].isNull())
					configFileVolumeConfigFileToPathsObject.mode = std::stoi(valueScalingConfigurationsScalingConfigurationVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Mode"].asString());
				if(!valueScalingConfigurationsScalingConfigurationVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Content"].isNull())
					configFileVolumeConfigFileToPathsObject.content = valueScalingConfigurationsScalingConfigurationVolumesVolumeConfigFileVolumeConfigFileToPathsConfigFileVolumeConfigFileToPath["Content"].asString();
				volumesObject.configFileVolumeConfigFileToPaths.push_back(configFileVolumeConfigFileToPathsObject);
			}
			scalingConfigurationsObject.volumes.push_back(volumesObject);
		}
		auto allImageRegistryCredentialsNode = valueScalingConfigurationsScalingConfiguration["ImageRegistryCredentials"]["ImageRegistryCredential"];
		for (auto valueScalingConfigurationsScalingConfigurationImageRegistryCredentialsImageRegistryCredential : allImageRegistryCredentialsNode)
		{
			ScalingConfiguration::ImageRegistryCredential imageRegistryCredentialsObject;
			if(!valueScalingConfigurationsScalingConfigurationImageRegistryCredentialsImageRegistryCredential["Password"].isNull())
				imageRegistryCredentialsObject.password = valueScalingConfigurationsScalingConfigurationImageRegistryCredentialsImageRegistryCredential["Password"].asString();
			if(!valueScalingConfigurationsScalingConfigurationImageRegistryCredentialsImageRegistryCredential["Server"].isNull())
				imageRegistryCredentialsObject.server = valueScalingConfigurationsScalingConfigurationImageRegistryCredentialsImageRegistryCredential["Server"].asString();
			if(!valueScalingConfigurationsScalingConfigurationImageRegistryCredentialsImageRegistryCredential["UserName"].isNull())
				imageRegistryCredentialsObject.userName = valueScalingConfigurationsScalingConfigurationImageRegistryCredentialsImageRegistryCredential["UserName"].asString();
			scalingConfigurationsObject.imageRegistryCredentials.push_back(imageRegistryCredentialsObject);
		}
		auto allDnsConfigOptionsNode = valueScalingConfigurationsScalingConfiguration["DnsConfigOptions"]["DnsConfigOption"];
		for (auto valueScalingConfigurationsScalingConfigurationDnsConfigOptionsDnsConfigOption : allDnsConfigOptionsNode)
		{
			ScalingConfiguration::DnsConfigOption dnsConfigOptionsObject;
			if(!valueScalingConfigurationsScalingConfigurationDnsConfigOptionsDnsConfigOption["Name"].isNull())
				dnsConfigOptionsObject.name = valueScalingConfigurationsScalingConfigurationDnsConfigOptionsDnsConfigOption["Name"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDnsConfigOptionsDnsConfigOption["Value"].isNull())
				dnsConfigOptionsObject.value = valueScalingConfigurationsScalingConfigurationDnsConfigOptionsDnsConfigOption["Value"].asString();
			scalingConfigurationsObject.dnsConfigOptions.push_back(dnsConfigOptionsObject);
		}
		auto allHostAliasesNode = valueScalingConfigurationsScalingConfiguration["HostAliases"]["HostAlias"];
		for (auto valueScalingConfigurationsScalingConfigurationHostAliasesHostAlias : allHostAliasesNode)
		{
			ScalingConfiguration::HostAlias hostAliasesObject;
			if(!valueScalingConfigurationsScalingConfigurationHostAliasesHostAlias["Ip"].isNull())
				hostAliasesObject.ip = valueScalingConfigurationsScalingConfigurationHostAliasesHostAlias["Ip"].asString();
			auto allHostnames = value["Hostnames"]["Hostname"];
			for (auto value : allHostnames)
				hostAliasesObject.hostnames.push_back(value.asString());
			scalingConfigurationsObject.hostAliases.push_back(hostAliasesObject);
		}
		auto allSecurityContextSysCtlsNode = valueScalingConfigurationsScalingConfiguration["SecurityContextSysCtls"]["SecurityContextSysCtl"];
		for (auto valueScalingConfigurationsScalingConfigurationSecurityContextSysCtlsSecurityContextSysCtl : allSecurityContextSysCtlsNode)
		{
			ScalingConfiguration::SecurityContextSysCtl securityContextSysCtlsObject;
			if(!valueScalingConfigurationsScalingConfigurationSecurityContextSysCtlsSecurityContextSysCtl["Name"].isNull())
				securityContextSysCtlsObject.name = valueScalingConfigurationsScalingConfigurationSecurityContextSysCtlsSecurityContextSysCtl["Name"].asString();
			if(!valueScalingConfigurationsScalingConfigurationSecurityContextSysCtlsSecurityContextSysCtl["Value"].isNull())
				securityContextSysCtlsObject.value = valueScalingConfigurationsScalingConfigurationSecurityContextSysCtlsSecurityContextSysCtl["Value"].asString();
			scalingConfigurationsObject.securityContextSysCtls.push_back(securityContextSysCtlsObject);
		}
		auto allAcrRegistryInfosNode = valueScalingConfigurationsScalingConfiguration["AcrRegistryInfos"]["AcrRegistryInfo"];
		for (auto valueScalingConfigurationsScalingConfigurationAcrRegistryInfosAcrRegistryInfo : allAcrRegistryInfosNode)
		{
			ScalingConfiguration::AcrRegistryInfo acrRegistryInfosObject;
			if(!valueScalingConfigurationsScalingConfigurationAcrRegistryInfosAcrRegistryInfo["InstanceId"].isNull())
				acrRegistryInfosObject.instanceId = valueScalingConfigurationsScalingConfigurationAcrRegistryInfosAcrRegistryInfo["InstanceId"].asString();
			if(!valueScalingConfigurationsScalingConfigurationAcrRegistryInfosAcrRegistryInfo["InstanceName"].isNull())
				acrRegistryInfosObject.instanceName = valueScalingConfigurationsScalingConfigurationAcrRegistryInfosAcrRegistryInfo["InstanceName"].asString();
			if(!valueScalingConfigurationsScalingConfigurationAcrRegistryInfosAcrRegistryInfo["RegionId"].isNull())
				acrRegistryInfosObject.regionId = valueScalingConfigurationsScalingConfigurationAcrRegistryInfosAcrRegistryInfo["RegionId"].asString();
			auto allDomains = value["Domains"]["Domain"];
			for (auto value : allDomains)
				acrRegistryInfosObject.domains.push_back(value.asString());
			scalingConfigurationsObject.acrRegistryInfos.push_back(acrRegistryInfosObject);
		}
		auto allDnsConfigNameServers = value["DnsConfigNameServers"]["DnsConfigNameServer"];
		for (auto value : allDnsConfigNameServers)
			scalingConfigurationsObject.dnsConfigNameServers.push_back(value.asString());
		auto allDnsConfigSearches = value["DnsConfigSearches"]["DnsConfigSearche"];
		for (auto value : allDnsConfigSearches)
			scalingConfigurationsObject.dnsConfigSearches.push_back(value.asString());
		auto allNtpServers = value["NtpServers"]["NtpServer"];
		for (auto value : allNtpServers)
			scalingConfigurationsObject.ntpServers.push_back(value.asString());
		auto allInstanceTypes = value["InstanceTypes"]["InstanceType"];
		for (auto value : allInstanceTypes)
			scalingConfigurationsObject.instanceTypes.push_back(value.asString());
		scalingConfigurations_.push_back(scalingConfigurationsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEciScalingConfigurationsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEciScalingConfigurationsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEciScalingConfigurationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeEciScalingConfigurationsResult::ScalingConfiguration> DescribeEciScalingConfigurationsResult::getScalingConfigurations()const
{
	return scalingConfigurations_;
}

