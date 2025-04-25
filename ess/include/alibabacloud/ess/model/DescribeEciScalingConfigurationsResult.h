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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEECISCALINGCONFIGURATIONSRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEECISCALINGCONFIGURATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeEciScalingConfigurationsResult : public ServiceResult
			{
			public:
				struct ScalingConfiguration
				{
					struct Container
					{
						struct Port
						{
							int port;
							std::string protocol;
						};
						struct VolumeMount
						{
							bool readOnly;
							std::string mountPath;
							std::string subPath;
							std::string mountPropagation;
							std::string name;
						};
						struct EnvironmentVar
						{
							std::string fieldRefFieldPath;
							std::string value;
							std::string key;
						};
						std::vector<Container::EnvironmentVar> environmentVars;
						std::vector<std::string> readinessProbeExecCommands;
						float memory;
						int readinessProbeTcpSocketPort;
						std::string readinessProbeHttpGetPath;
						float cpu;
						std::string image;
						std::string readinessProbeHttpGetScheme;
						int gpu;
						bool stdinOnce;
						std::string lifecyclePreStopHandlerTcpSocketHost;
						std::string name;
						std::string lifecyclePostStartHandlerHttpGetHost;
						bool securityContextReadOnlyRootFilesystem;
						std::string lifecyclePostStartHandlerHttpGetPath;
						int livenessProbePeriodSeconds;
						std::vector<std::string> livenessProbeExecCommands;
						int readinessProbeSuccessThreshold;
						int readinessProbeInitialDelaySeconds;
						std::string lifecyclePreStopHandlerHttpGetScheme;
						std::vector<std::string> securityContextCapabilityAdds;
						int lifecyclePreStopHandlerHttpGetPort;
						bool stdin;
						std::string workingDir;
						std::string lifecyclePostStartHandlerHttpGetScheme;
						int readinessProbeTimeoutSeconds;
						std::vector<std::string> lifecyclePostStartHandlerExecs;
						std::string lifecyclePreStopHandlerHttpGetHost;
						int lifecyclePostStartHandlerHttpGetPort;
						std::string lifecyclePreStopHandlerHttpGetPath;
						std::string livenessProbeHttpGetScheme;
						int livenessProbeTimeoutSeconds;
						int livenessProbeFailureThreshold;
						std::string livenessProbeHttpGetPath;
						std::vector<Container::VolumeMount> volumeMounts;
						int livenessProbeInitialDelaySeconds;
						int livenessProbeTcpSocketPort;
						bool tty;
						long securityContextRunAsUser;
						std::vector<std::string> commands;
						int readinessProbePeriodSeconds;
						std::vector<std::string> lifecyclePreStopHandlerExecs;
						int livenessProbeSuccessThreshold;
						std::string lifecyclePostStartHandlerTcpSocketHost;
						int lifecyclePreStopHandlerTcpSocketPort;
						std::vector<std::string> args;
						int readinessProbeFailureThreshold;
						std::vector<Container::Port> ports;
						int readinessProbeHttpGetPort;
						std::string imagePullPolicy;
						int livenessProbeHttpGetPort;
						int lifecyclePostStartHandlerTcpSocketPort;
					};
					struct InitContainer
					{
						struct InitContainerEnvironmentVar
						{
							std::string fieldRefFieldPath;
							std::string value;
							std::string key;
						};
						struct InitContainerPort
						{
							int port;
							std::string protocol;
						};
						struct InitContainerVolumeMount
						{
							bool readOnly;
							std::string mountPath;
							std::string subPath;
							std::string mountPropagation;
							std::string name;
						};
						std::vector<std::string> initContainerArgs;
						float memory;
						std::vector<InitContainer::InitContainerPort> initContainerPorts;
						float cpu;
						std::string image;
						int gpu;
						std::vector<InitContainer::InitContainerEnvironmentVar> initContainerEnvironmentVars;
						std::string name;
						std::string workingDir;
						std::vector<std::string> initContainerCommands;
						std::string imagePullPolicy;
						bool securityContextReadOnlyRootFilesystem;
						std::string securityContextRunAsUser;
						std::vector<InitContainer::InitContainerVolumeMount> initContainerVolumeMounts;
						std::vector<std::string> securityContextCapabilityAdds1;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct Volume
					{
						struct ConfigFileVolumeConfigFileToPath
						{
							std::string path;
							std::string content;
							int mode;
						};
						std::string hostPathVolumeType;
						std::string flexVolumeFsType;
						std::string emptyDirVolumeSizeLimit;
						std::string nFSVolumeServer;
						int diskVolumeDiskSize;
						std::vector<Volume::ConfigFileVolumeConfigFileToPath> configFileVolumeConfigFileToPaths;
						bool nFSVolumeReadOnly;
						std::string name;
						std::string hostPathVolumePath;
						std::string nFSVolumePath;
						std::string type;
						std::string flexVolumeDriver;
						std::string diskVolumeDiskId;
						int configFileVolumeDefaultMode;
						std::string flexVolumeOptions;
						std::string emptyDirVolumeMedium;
						std::string diskVolumeFsType;
					};
					struct ImageRegistryCredential
					{
						std::string userName;
						std::string server;
						std::string password;
					};
					struct DnsConfigOption
					{
						std::string value;
						std::string name;
					};
					struct HostAlias
					{
						std::string ip;
						std::vector<std::string> hostnames;
					};
					struct SecurityContextSysCtl
					{
						std::string value;
						std::string name;
					};
					struct AcrRegistryInfo
					{
						std::string instanceName;
						std::vector<std::string> domains;
						std::string instanceId;
						std::string regionId;
					};
					std::string scalingConfigurationName;
					std::string resourceGroupId;
					std::vector<std::string> ntpServers;
					float memory;
					std::vector<std::string> dnsConfigSearches;
					std::string dataCachePL;
					float cpu;
					long ingressBandwidth;
					int dataCacheProvisionedIops;
					std::vector<ScalingConfiguration::Volume> volumes;
					std::string ramRoleName;
					std::vector<ScalingConfiguration::DnsConfigOption> dnsConfigOptions;
					std::vector<ScalingConfiguration::Tag> tags;
					std::string hostName;
					std::vector<std::string> dnsConfigNameServers;
					int activeDeadlineSeconds;
					int loadBalancerWeight;
					std::string scalingGroupId;
					bool slsEnable;
					int cpuOptionsCore;
					bool autoCreateEip;
					std::vector<ScalingConfiguration::HostAlias> hostAliases;
					std::string gpuDriverVersion;
					std::vector<ScalingConfiguration::ImageRegistryCredential> imageRegistryCredentials;
					std::string dnsPolicy;
					std::string creationTime;
					std::string instanceFamilyLevel;
					int ephemeralStorage;
					std::string scalingConfigurationId;
					std::string description;
					std::vector<ScalingConfiguration::Container> containers;
					std::string lifecycleState;
					std::string containerGroupName;
					std::string imageSnapshotId;
					long egressBandwidth;
					bool autoMatchImageCache;
					int ipv6AddressCount;
					std::string dataCacheBucket;
					float spotPriceLimit;
					std::vector<std::string> instanceTypes;
					std::string spotStrategy;
					std::vector<ScalingConfiguration::AcrRegistryInfo> acrRegistryInfos;
					std::vector<ScalingConfiguration::InitContainer> initContainers;
					std::vector<ScalingConfiguration::SecurityContextSysCtl> securityContextSysCtls;
					int cpuOptionsThreadsPerCore;
					bool dataCacheBurstingEnabled;
					int terminationGracePeriodSeconds;
					std::string securityGroupId;
					std::string restartPolicy;
					bool costOptimization;
					int eipBandwidth;
					std::string regionId;
				};


				DescribeEciScalingConfigurationsResult();
				explicit DescribeEciScalingConfigurationsResult(const std::string &payload);
				~DescribeEciScalingConfigurationsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ScalingConfiguration> getScalingConfigurations()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ScalingConfiguration> scalingConfigurations_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEECISCALINGCONFIGURATIONSRESULT_H_