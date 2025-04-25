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

#ifndef ALIBABACLOUD_ESS_MODEL_MODIFYECISCALINGCONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_MODIFYECISCALINGCONFIGURATIONREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT ModifyEciScalingConfigurationRequest : public RpcServiceRequest {
public:
	struct Container {
		bool stdin;
		int lifecyclePostStartHandlerHttpGetPort;
		std::string workingDir;
		int readinessProbeHttpGetPort;
		int livenessProbeHttpGetPort;
		int lifecyclePreStopHandlerTcpSocketPort;
		struct VolumeMount {
			std::string mountPath;
			bool readOnly;
			std::string mountPropagation;
			std::string name;
			std::string subPath;
		};
		std::vector<VolumeMount> volumeMount;
		std::string image;
		float cpu;
		std::string readinessProbeHttpGetPath;
		int gpu;
		bool stdinOnce;
		std::string lifecyclePostStartHandlerTcpSocketHost;
		int livenessProbeSuccessThreshold;
		long securityContextRunAsUser;
		int livenessProbePeriodSeconds;
		int livenessProbeInitialDelaySeconds;
		struct Port {
			std::string protocol;
			int port;
		};
		std::vector<Port> port;
		std::string name;
		std::string lifecyclePreStopHandlerTcpSocketHost;
		bool securityContextReadOnlyRootFilesystem;
		std::string lifecyclePreStopHandlerHttpGetHost;
		float memory;
		std::string lifecyclePreStopHandlerHttpGetScheme;
		int lifecyclePostStartHandlerTcpSocketPort;
		std::string lifecyclePreStopHandlerHttpGetPath;
		std::string lifecyclePostStartHandlerHttpGetHost;
		int readinessProbeFailureThreshold;
		int readinessProbeSuccessThreshold;
		std::string lifecyclePostStartHandlerHttpGetPath;
		int readinessProbeInitialDelaySeconds;
		std::string readinessProbeHttpGetScheme;
		int lifecyclePreStopHandlerHttpGetPort;
		std::string imagePullPolicy;
		std::string livenessProbeHttpGetPath;
		std::string lifecyclePostStartHandlerHttpGetScheme;
		int livenessProbeTimeoutSeconds;
		int livenessProbeTcpSocketPort;
		int readinessProbePeriodSeconds;
		struct EnvironmentVar {
			std::string fieldRefFieldPath;
			std::string value;
			std::string key;
		};
		std::vector<EnvironmentVar> environmentVar;
		bool tty;
		int livenessProbeFailureThreshold;
		int readinessProbeTimeoutSeconds;
		int readinessProbeTcpSocketPort;
		std::string livenessProbeHttpGetScheme;
	};
	struct HostAliase {
		std::string ip;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct Volume {
		std::string diskVolumeFsType;
		std::string emptyDirVolumeSizeLimit;
		std::string nFSVolumePath;
		std::string diskVolumeDiskId;
		std::string flexVolumeFsType;
		std::string type;
		std::string flexVolumeDriver;
		std::string flexVolumeOptions;
		std::string nFSVolumeServer;
		std::string emptyDirVolumeMedium;
		std::string hostPathVolumePath;
		std::string name;
		struct ConfigFileVolumeConfigFileToPath {
			int mode;
			std::string path;
			std::string content;
		};
		std::vector<ConfigFileVolumeConfigFileToPath> configFileVolumeConfigFileToPath;
		int diskVolumeDiskSize;
		int configFileVolumeDefaultMode;
		std::string hostPathVolumeType;
		bool nFSVolumeReadOnly;
	};
	struct DnsConfigOption {
		std::string name;
		std::string value;
	};
	struct SecurityContextSysctl {
		std::string name;
		std::string value;
	};
	struct InitContainer {
		std::string image;
		struct InitContainerEnvironmentVar {
			std::string fieldRefFieldPath;
			std::string value;
			std::string key;
		};
		std::vector<InitContainerEnvironmentVar> initContainerEnvironmentVar;
		float memory;
		std::string workingDir;
		float cpu;
		int gpu;
		std::string imagePullPolicy;
		long securityContextRunAsUser;
		struct InitContainerPort {
			std::string protocol;
			int port;
		};
		std::vector<InitContainerPort> initContainerPort;
		std::string name;
		struct InitContainerVolumeMount {
			std::string mountPath;
			bool readOnly;
			std::string mountPropagation;
			std::string name;
			std::string subPath;
		};
		std::vector<InitContainerVolumeMount> initContainerVolumeMount;
		bool securityContextReadOnlyRootFilesystem;
	};
	struct ImageRegistryCredential {
		std::string server;
		std::string password;
		std::string userName;
	};
	struct AcrRegistryInfo {
		std::string instanceName;
		std::string instanceId;
		std::string regionId;
	};
	ModifyEciScalingConfigurationRequest();
	~ModifyEciScalingConfigurationRequest();
	std::vector<Container> getContainer() const;
	void setContainer(const std::vector<Container> &container);
	std::vector<std::string> getNtpServer() const;
	void setNtpServer(const std::vector<std::string> &ntpServer);
	float getSpotPriceLimit() const;
	void setSpotPriceLimit(float spotPriceLimit);
	bool getEnableSls() const;
	void setEnableSls(bool enableSls);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	long getActiveDeadlineSeconds() const;
	void setActiveDeadlineSeconds(long activeDeadlineSeconds);
	long getEgressBandwidth() const;
	void setEgressBandwidth(long egressBandwidth);
	std::vector<std::string> getDnsConfigSearch() const;
	void setDnsConfigSearch(const std::vector<std::string> &dnsConfigSearch);
	std::vector<HostAliase> getHostAliase() const;
	void setHostAliase(const std::vector<HostAliase> &hostAliase);
	std::string getImageSnapshotId() const;
	void setImageSnapshotId(const std::string &imageSnapshotId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	int getCpuOptionsThreadsPerCore() const;
	void setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore);
	std::string getDataCachePL() const;
	void setDataCachePL(const std::string &dataCachePL);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	float getCpu() const;
	void setCpu(float cpu);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getScalingConfigurationName() const;
	void setScalingConfigurationName(const std::string &scalingConfigurationName);
	std::string getScalingConfigurationId() const;
	void setScalingConfigurationId(const std::string &scalingConfigurationId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::vector<Volume> getVolume() const;
	void setVolume(const std::vector<Volume> &volume);
	std::string getInstanceFamilyLevel() const;
	void setInstanceFamilyLevel(const std::string &instanceFamilyLevel);
	std::vector<DnsConfigOption> getDnsConfigOption() const;
	void setDnsConfigOption(const std::vector<DnsConfigOption> &dnsConfigOption);
	std::string getContainersUpdateType() const;
	void setContainersUpdateType(const std::string &containersUpdateType);
	int getEphemeralStorage() const;
	void setEphemeralStorage(int ephemeralStorage);
	int getDataCacheProvisionedIops() const;
	void setDataCacheProvisionedIops(int dataCacheProvisionedIops);
	int getEipBandwidth() const;
	void setEipBandwidth(int eipBandwidth);
	std::string getGpuDriverVersion() const;
	void setGpuDriverVersion(const std::string &gpuDriverVersion);
	bool getCostOptimization() const;
	void setCostOptimization(bool costOptimization);
	bool getDataCacheBurstingEnabled() const;
	void setDataCacheBurstingEnabled(bool dataCacheBurstingEnabled);
	float getMemory() const;
	void setMemory(float memory);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getIngressBandwidth() const;
	void setIngressBandwidth(long ingressBandwidth);
	std::string getDnsPolicy() const;
	void setDnsPolicy(const std::string &dnsPolicy);
	std::vector<SecurityContextSysctl> getSecurityContextSysctl() const;
	void setSecurityContextSysctl(const std::vector<SecurityContextSysctl> &securityContextSysctl);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDataCacheBucket() const;
	void setDataCacheBucket(const std::string &dataCacheBucket);
	std::vector<std::string> getDnsConfigNameServer() const;
	void setDnsConfigNameServer(const std::vector<std::string> &dnsConfigNameServer);
	std::vector<InitContainer> getInitContainer() const;
	void setInitContainer(const std::vector<InitContainer> &initContainer);
	std::vector<std::string> getInstanceType() const;
	void setInstanceType(const std::vector<std::string> &instanceType);
	long getTerminationGracePeriodSeconds() const;
	void setTerminationGracePeriodSeconds(long terminationGracePeriodSeconds);
	std::vector<ImageRegistryCredential> getImageRegistryCredential() const;
	void setImageRegistryCredential(const std::vector<ImageRegistryCredential> &imageRegistryCredential);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getRestartPolicy() const;
	void setRestartPolicy(const std::string &restartPolicy);
	int getCpuOptionsCore() const;
	void setCpuOptionsCore(int cpuOptionsCore);
	std::string getRamRoleName() const;
	void setRamRoleName(const std::string &ramRoleName);
	std::vector<AcrRegistryInfo> getAcrRegistryInfo() const;
	void setAcrRegistryInfo(const std::vector<AcrRegistryInfo> &acrRegistryInfo);
	bool getAutoMatchImageCache() const;
	void setAutoMatchImageCache(bool autoMatchImageCache);
	int getLoadBalancerWeight() const;
	void setLoadBalancerWeight(int loadBalancerWeight);
	std::string getContainerGroupName() const;
	void setContainerGroupName(const std::string &containerGroupName);
	bool getAutoCreateEip() const;
	void setAutoCreateEip(bool autoCreateEip);

private:
	std::vector<Container> container_;
	std::vector<std::string> ntpServer_;
	float spotPriceLimit_;
	bool enableSls_;
	std::string resourceGroupId_;
	std::string hostName_;
	long activeDeadlineSeconds_;
	long egressBandwidth_;
	std::vector<std::string> dnsConfigSearch_;
	std::vector<HostAliase> hostAliase_;
	std::string imageSnapshotId_;
	std::vector<Tag> tag_;
	int cpuOptionsThreadsPerCore_;
	std::string dataCachePL_;
	int ipv6AddressCount_;
	float cpu_;
	long ownerId_;
	std::string scalingConfigurationName_;
	std::string scalingConfigurationId_;
	std::string spotStrategy_;
	std::vector<Volume> volume_;
	std::string instanceFamilyLevel_;
	std::vector<DnsConfigOption> dnsConfigOption_;
	std::string containersUpdateType_;
	int ephemeralStorage_;
	int dataCacheProvisionedIops_;
	int eipBandwidth_;
	std::string gpuDriverVersion_;
	bool costOptimization_;
	bool dataCacheBurstingEnabled_;
	float memory_;
	std::string securityGroupId_;
	std::string description_;
	long ingressBandwidth_;
	std::string dnsPolicy_;
	std::vector<SecurityContextSysctl> securityContextSysctl_;
	std::string accessKeyId_;
	std::string dataCacheBucket_;
	std::vector<std::string> dnsConfigNameServer_;
	std::vector<InitContainer> initContainer_;
	std::vector<std::string> instanceType_;
	long terminationGracePeriodSeconds_;
	std::vector<ImageRegistryCredential> imageRegistryCredential_;
	std::string resourceOwnerAccount_;
	std::string restartPolicy_;
	int cpuOptionsCore_;
	std::string ramRoleName_;
	std::vector<AcrRegistryInfo> acrRegistryInfo_;
	bool autoMatchImageCache_;
	int loadBalancerWeight_;
	std::string containerGroupName_;
	bool autoCreateEip_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYECISCALINGCONFIGURATIONREQUEST_H_
