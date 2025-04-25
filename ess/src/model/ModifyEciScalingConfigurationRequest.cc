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

#include <alibabacloud/ess/model/ModifyEciScalingConfigurationRequest.h>

using AlibabaCloud::Ess::Model::ModifyEciScalingConfigurationRequest;

ModifyEciScalingConfigurationRequest::ModifyEciScalingConfigurationRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ModifyEciScalingConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEciScalingConfigurationRequest::~ModifyEciScalingConfigurationRequest() {}

std::vector<ModifyEciScalingConfigurationRequest::Container> ModifyEciScalingConfigurationRequest::getContainer() const {
  return container_;
}

void ModifyEciScalingConfigurationRequest::setContainer(const std::vector<ModifyEciScalingConfigurationRequest::Container> &container) {
  container_ = container;
  for(int dep1 = 0; dep1 != container.size(); dep1++) {
  auto containerObj = container.at(dep1);
  std::string containerObjStr = std::string("Container") + "." + std::to_string(dep1 + 1);
    setParameter(containerObjStr + ".Stdin", containerObj.stdin ? "true" : "false");
    setParameter(containerObjStr + ".LifecyclePostStartHandlerHttpGetPort", std::to_string(containerObj.lifecyclePostStartHandlerHttpGetPort));
    setParameter(containerObjStr + ".WorkingDir", containerObj.workingDir);
    setParameter(containerObjStr + ".ReadinessProbe.HttpGet.Port", std::to_string(containerObj.readinessProbeHttpGetPort));
    setParameter(containerObjStr + ".LivenessProbe.HttpGet.Port", std::to_string(containerObj.livenessProbeHttpGetPort));
    setParameter(containerObjStr + ".LifecyclePreStopHandlerTcpSocketPort", std::to_string(containerObj.lifecyclePreStopHandlerTcpSocketPort));
    for(int dep2 = 0; dep2 != containerObj.volumeMount.size(); dep2++) {
    auto volumeMountObj = containerObj.volumeMount.at(dep2);
    std::string volumeMountObjStr = containerObjStr + ".VolumeMount" + "." + std::to_string(dep2 + 1);
      setParameter(volumeMountObjStr + ".MountPath", volumeMountObj.mountPath);
      setParameter(volumeMountObjStr + ".ReadOnly", volumeMountObj.readOnly ? "true" : "false");
      setParameter(volumeMountObjStr + ".MountPropagation", volumeMountObj.mountPropagation);
      setParameter(volumeMountObjStr + ".Name", volumeMountObj.name);
      setParameter(volumeMountObjStr + ".SubPath", volumeMountObj.subPath);
    }
    setParameter(containerObjStr + ".Image", containerObj.image);
    setParameter(containerObjStr + ".Cpu", std::to_string(containerObj.cpu));
    setParameter(containerObjStr + ".ReadinessProbe.HttpGet.Path", containerObj.readinessProbeHttpGetPath);
    setParameter(containerObjStr + ".Gpu", std::to_string(containerObj.gpu));
    setParameter(containerObjStr + ".StdinOnce", containerObj.stdinOnce ? "true" : "false");
    setParameter(containerObjStr + ".LifecyclePostStartHandlerTcpSocketHost", containerObj.lifecyclePostStartHandlerTcpSocketHost);
    setParameter(containerObjStr + ".LivenessProbe.SuccessThreshold", std::to_string(containerObj.livenessProbeSuccessThreshold));
    setParameter(containerObjStr + ".SecurityContext.RunAsUser", std::to_string(containerObj.securityContextRunAsUser));
    setParameter(containerObjStr + ".LivenessProbe.PeriodSeconds", std::to_string(containerObj.livenessProbePeriodSeconds));
    setParameter(containerObjStr + ".LivenessProbe.InitialDelaySeconds", std::to_string(containerObj.livenessProbeInitialDelaySeconds));
    for(int dep2 = 0; dep2 != containerObj.port.size(); dep2++) {
    auto portObj = containerObj.port.at(dep2);
    std::string portObjStr = containerObjStr + ".Port" + "." + std::to_string(dep2 + 1);
      setParameter(portObjStr + ".Protocol", portObj.protocol);
      setParameter(portObjStr + ".Port", std::to_string(portObj.port));
    }
    setParameter(containerObjStr + ".Name", containerObj.name);
    setParameter(containerObjStr + ".LifecyclePreStopHandlerTcpSocketHost", containerObj.lifecyclePreStopHandlerTcpSocketHost);
    setParameter(containerObjStr + ".SecurityContext.ReadOnlyRootFilesystem", containerObj.securityContextReadOnlyRootFilesystem ? "true" : "false");
    setParameter(containerObjStr + ".LifecyclePreStopHandlerHttpGetHost", containerObj.lifecyclePreStopHandlerHttpGetHost);
    setParameter(containerObjStr + ".Memory", std::to_string(containerObj.memory));
    setParameter(containerObjStr + ".LifecyclePreStopHandlerHttpGetScheme", containerObj.lifecyclePreStopHandlerHttpGetScheme);
    setParameter(containerObjStr + ".LifecyclePostStartHandlerTcpSocketPort", std::to_string(containerObj.lifecyclePostStartHandlerTcpSocketPort));
    setParameter(containerObjStr + ".LifecyclePreStopHandlerHttpGetPath", containerObj.lifecyclePreStopHandlerHttpGetPath);
    setParameter(containerObjStr + ".LifecyclePostStartHandlerHttpGetHost", containerObj.lifecyclePostStartHandlerHttpGetHost);
    setParameter(containerObjStr + ".ReadinessProbe.FailureThreshold", std::to_string(containerObj.readinessProbeFailureThreshold));
    setParameter(containerObjStr + ".ReadinessProbe.SuccessThreshold", std::to_string(containerObj.readinessProbeSuccessThreshold));
    setParameter(containerObjStr + ".LifecyclePostStartHandlerHttpGetPath", containerObj.lifecyclePostStartHandlerHttpGetPath);
    setParameter(containerObjStr + ".ReadinessProbe.InitialDelaySeconds", std::to_string(containerObj.readinessProbeInitialDelaySeconds));
    setParameter(containerObjStr + ".ReadinessProbe.HttpGet.Scheme", containerObj.readinessProbeHttpGetScheme);
    setParameter(containerObjStr + ".LifecyclePreStopHandlerHttpGetPort", std::to_string(containerObj.lifecyclePreStopHandlerHttpGetPort));
    setParameter(containerObjStr + ".ImagePullPolicy", containerObj.imagePullPolicy);
    setParameter(containerObjStr + ".LivenessProbe.HttpGet.Path", containerObj.livenessProbeHttpGetPath);
    setParameter(containerObjStr + ".LifecyclePostStartHandlerHttpGetScheme", containerObj.lifecyclePostStartHandlerHttpGetScheme);
    setParameter(containerObjStr + ".LivenessProbe.TimeoutSeconds", std::to_string(containerObj.livenessProbeTimeoutSeconds));
    setParameter(containerObjStr + ".LivenessProbe.TcpSocket.Port", std::to_string(containerObj.livenessProbeTcpSocketPort));
    setParameter(containerObjStr + ".ReadinessProbe.PeriodSeconds", std::to_string(containerObj.readinessProbePeriodSeconds));
    for(int dep2 = 0; dep2 != containerObj.environmentVar.size(); dep2++) {
    auto environmentVarObj = containerObj.environmentVar.at(dep2);
    std::string environmentVarObjStr = containerObjStr + ".EnvironmentVar" + "." + std::to_string(dep2 + 1);
      setParameter(environmentVarObjStr + ".FieldRef.FieldPath", environmentVarObj.fieldRefFieldPath);
      setParameter(environmentVarObjStr + ".Value", environmentVarObj.value);
      setParameter(environmentVarObjStr + ".Key", environmentVarObj.key);
    }
    setParameter(containerObjStr + ".Tty", containerObj.tty ? "true" : "false");
    setParameter(containerObjStr + ".LivenessProbe.FailureThreshold", std::to_string(containerObj.livenessProbeFailureThreshold));
    setParameter(containerObjStr + ".ReadinessProbe.TimeoutSeconds", std::to_string(containerObj.readinessProbeTimeoutSeconds));
    setParameter(containerObjStr + ".ReadinessProbe.TcpSocket.Port", std::to_string(containerObj.readinessProbeTcpSocketPort));
    setParameter(containerObjStr + ".LivenessProbe.HttpGet.Scheme", containerObj.livenessProbeHttpGetScheme);
  }
}

std::vector<std::string> ModifyEciScalingConfigurationRequest::getNtpServer() const {
  return ntpServer_;
}

void ModifyEciScalingConfigurationRequest::setNtpServer(const std::vector<std::string> &ntpServer) {
  ntpServer_ = ntpServer;
}

float ModifyEciScalingConfigurationRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void ModifyEciScalingConfigurationRequest::setSpotPriceLimit(float spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  setParameter(std::string("SpotPriceLimit"), std::to_string(spotPriceLimit));
}

bool ModifyEciScalingConfigurationRequest::getEnableSls() const {
  return enableSls_;
}

void ModifyEciScalingConfigurationRequest::setEnableSls(bool enableSls) {
  enableSls_ = enableSls;
  setParameter(std::string("EnableSls"), enableSls ? "true" : "false");
}

std::string ModifyEciScalingConfigurationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyEciScalingConfigurationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyEciScalingConfigurationRequest::getHostName() const {
  return hostName_;
}

void ModifyEciScalingConfigurationRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

long ModifyEciScalingConfigurationRequest::getActiveDeadlineSeconds() const {
  return activeDeadlineSeconds_;
}

void ModifyEciScalingConfigurationRequest::setActiveDeadlineSeconds(long activeDeadlineSeconds) {
  activeDeadlineSeconds_ = activeDeadlineSeconds;
  setParameter(std::string("ActiveDeadlineSeconds"), std::to_string(activeDeadlineSeconds));
}

long ModifyEciScalingConfigurationRequest::getEgressBandwidth() const {
  return egressBandwidth_;
}

void ModifyEciScalingConfigurationRequest::setEgressBandwidth(long egressBandwidth) {
  egressBandwidth_ = egressBandwidth;
  setParameter(std::string("EgressBandwidth"), std::to_string(egressBandwidth));
}

std::vector<std::string> ModifyEciScalingConfigurationRequest::getDnsConfigSearch() const {
  return dnsConfigSearch_;
}

void ModifyEciScalingConfigurationRequest::setDnsConfigSearch(const std::vector<std::string> &dnsConfigSearch) {
  dnsConfigSearch_ = dnsConfigSearch;
}

std::vector<ModifyEciScalingConfigurationRequest::HostAliase> ModifyEciScalingConfigurationRequest::getHostAliase() const {
  return hostAliase_;
}

void ModifyEciScalingConfigurationRequest::setHostAliase(const std::vector<ModifyEciScalingConfigurationRequest::HostAliase> &hostAliase) {
  hostAliase_ = hostAliase;
  for(int dep1 = 0; dep1 != hostAliase.size(); dep1++) {
  auto hostAliaseObj = hostAliase.at(dep1);
  std::string hostAliaseObjStr = std::string("HostAliase") + "." + std::to_string(dep1 + 1);
    setParameter(hostAliaseObjStr + ".Ip", hostAliaseObj.ip);
  }
}

std::string ModifyEciScalingConfigurationRequest::getImageSnapshotId() const {
  return imageSnapshotId_;
}

void ModifyEciScalingConfigurationRequest::setImageSnapshotId(const std::string &imageSnapshotId) {
  imageSnapshotId_ = imageSnapshotId;
  setParameter(std::string("ImageSnapshotId"), imageSnapshotId);
}

std::vector<ModifyEciScalingConfigurationRequest::Tag> ModifyEciScalingConfigurationRequest::getTag() const {
  return tag_;
}

void ModifyEciScalingConfigurationRequest::setTag(const std::vector<ModifyEciScalingConfigurationRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

int ModifyEciScalingConfigurationRequest::getCpuOptionsThreadsPerCore() const {
  return cpuOptionsThreadsPerCore_;
}

void ModifyEciScalingConfigurationRequest::setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore) {
  cpuOptionsThreadsPerCore_ = cpuOptionsThreadsPerCore;
  setParameter(std::string("CpuOptionsThreadsPerCore"), std::to_string(cpuOptionsThreadsPerCore));
}

std::string ModifyEciScalingConfigurationRequest::getDataCachePL() const {
  return dataCachePL_;
}

void ModifyEciScalingConfigurationRequest::setDataCachePL(const std::string &dataCachePL) {
  dataCachePL_ = dataCachePL;
  setParameter(std::string("DataCachePL"), dataCachePL);
}

int ModifyEciScalingConfigurationRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void ModifyEciScalingConfigurationRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

float ModifyEciScalingConfigurationRequest::getCpu() const {
  return cpu_;
}

void ModifyEciScalingConfigurationRequest::setCpu(float cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

long ModifyEciScalingConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyEciScalingConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyEciScalingConfigurationRequest::getScalingConfigurationName() const {
  return scalingConfigurationName_;
}

void ModifyEciScalingConfigurationRequest::setScalingConfigurationName(const std::string &scalingConfigurationName) {
  scalingConfigurationName_ = scalingConfigurationName;
  setParameter(std::string("ScalingConfigurationName"), scalingConfigurationName);
}

std::string ModifyEciScalingConfigurationRequest::getScalingConfigurationId() const {
  return scalingConfigurationId_;
}

void ModifyEciScalingConfigurationRequest::setScalingConfigurationId(const std::string &scalingConfigurationId) {
  scalingConfigurationId_ = scalingConfigurationId;
  setParameter(std::string("ScalingConfigurationId"), scalingConfigurationId);
}

std::string ModifyEciScalingConfigurationRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void ModifyEciScalingConfigurationRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::vector<ModifyEciScalingConfigurationRequest::Volume> ModifyEciScalingConfigurationRequest::getVolume() const {
  return volume_;
}

void ModifyEciScalingConfigurationRequest::setVolume(const std::vector<ModifyEciScalingConfigurationRequest::Volume> &volume) {
  volume_ = volume;
  for(int dep1 = 0; dep1 != volume.size(); dep1++) {
  auto volumeObj = volume.at(dep1);
  std::string volumeObjStr = std::string("Volume") + "." + std::to_string(dep1 + 1);
    setParameter(volumeObjStr + ".DiskVolume.FsType", volumeObj.diskVolumeFsType);
    setParameter(volumeObjStr + ".EmptyDirVolume.SizeLimit", volumeObj.emptyDirVolumeSizeLimit);
    setParameter(volumeObjStr + ".NFSVolume.Path", volumeObj.nFSVolumePath);
    setParameter(volumeObjStr + ".DiskVolume.DiskId", volumeObj.diskVolumeDiskId);
    setParameter(volumeObjStr + ".FlexVolume.FsType", volumeObj.flexVolumeFsType);
    setParameter(volumeObjStr + ".Type", volumeObj.type);
    setParameter(volumeObjStr + ".FlexVolume.Driver", volumeObj.flexVolumeDriver);
    setParameter(volumeObjStr + ".FlexVolume.Options", volumeObj.flexVolumeOptions);
    setParameter(volumeObjStr + ".NFSVolume.Server", volumeObj.nFSVolumeServer);
    setParameter(volumeObjStr + ".EmptyDirVolume.Medium", volumeObj.emptyDirVolumeMedium);
    setParameter(volumeObjStr + ".HostPathVolume.Path", volumeObj.hostPathVolumePath);
    setParameter(volumeObjStr + ".Name", volumeObj.name);
    for(int dep2 = 0; dep2 != volumeObj.configFileVolumeConfigFileToPath.size(); dep2++) {
    auto configFileVolumeConfigFileToPathObj = volumeObj.configFileVolumeConfigFileToPath.at(dep2);
    std::string configFileVolumeConfigFileToPathObjStr = volumeObjStr + ".ConfigFileVolumeConfigFileToPath" + "." + std::to_string(dep2 + 1);
      setParameter(configFileVolumeConfigFileToPathObjStr + ".Mode", std::to_string(configFileVolumeConfigFileToPathObj.mode));
      setParameter(configFileVolumeConfigFileToPathObjStr + ".Path", configFileVolumeConfigFileToPathObj.path);
      setParameter(configFileVolumeConfigFileToPathObjStr + ".Content", configFileVolumeConfigFileToPathObj.content);
    }
    setParameter(volumeObjStr + ".DiskVolume.DiskSize", std::to_string(volumeObj.diskVolumeDiskSize));
    setParameter(volumeObjStr + ".ConfigFileVolumeDefaultMode", std::to_string(volumeObj.configFileVolumeDefaultMode));
    setParameter(volumeObjStr + ".HostPathVolume.Type", volumeObj.hostPathVolumeType);
    setParameter(volumeObjStr + ".NFSVolume.ReadOnly", volumeObj.nFSVolumeReadOnly ? "true" : "false");
  }
}

std::string ModifyEciScalingConfigurationRequest::getInstanceFamilyLevel() const {
  return instanceFamilyLevel_;
}

void ModifyEciScalingConfigurationRequest::setInstanceFamilyLevel(const std::string &instanceFamilyLevel) {
  instanceFamilyLevel_ = instanceFamilyLevel;
  setParameter(std::string("InstanceFamilyLevel"), instanceFamilyLevel);
}

std::vector<ModifyEciScalingConfigurationRequest::DnsConfigOption> ModifyEciScalingConfigurationRequest::getDnsConfigOption() const {
  return dnsConfigOption_;
}

void ModifyEciScalingConfigurationRequest::setDnsConfigOption(const std::vector<ModifyEciScalingConfigurationRequest::DnsConfigOption> &dnsConfigOption) {
  dnsConfigOption_ = dnsConfigOption;
  for(int dep1 = 0; dep1 != dnsConfigOption.size(); dep1++) {
  auto dnsConfigOptionObj = dnsConfigOption.at(dep1);
  std::string dnsConfigOptionObjStr = std::string("DnsConfigOption") + "." + std::to_string(dep1 + 1);
    setParameter(dnsConfigOptionObjStr + ".Name", dnsConfigOptionObj.name);
    setParameter(dnsConfigOptionObjStr + ".Value", dnsConfigOptionObj.value);
  }
}

std::string ModifyEciScalingConfigurationRequest::getContainersUpdateType() const {
  return containersUpdateType_;
}

void ModifyEciScalingConfigurationRequest::setContainersUpdateType(const std::string &containersUpdateType) {
  containersUpdateType_ = containersUpdateType;
  setParameter(std::string("ContainersUpdateType"), containersUpdateType);
}

int ModifyEciScalingConfigurationRequest::getEphemeralStorage() const {
  return ephemeralStorage_;
}

void ModifyEciScalingConfigurationRequest::setEphemeralStorage(int ephemeralStorage) {
  ephemeralStorage_ = ephemeralStorage;
  setParameter(std::string("EphemeralStorage"), std::to_string(ephemeralStorage));
}

int ModifyEciScalingConfigurationRequest::getDataCacheProvisionedIops() const {
  return dataCacheProvisionedIops_;
}

void ModifyEciScalingConfigurationRequest::setDataCacheProvisionedIops(int dataCacheProvisionedIops) {
  dataCacheProvisionedIops_ = dataCacheProvisionedIops;
  setParameter(std::string("DataCacheProvisionedIops"), std::to_string(dataCacheProvisionedIops));
}

int ModifyEciScalingConfigurationRequest::getEipBandwidth() const {
  return eipBandwidth_;
}

void ModifyEciScalingConfigurationRequest::setEipBandwidth(int eipBandwidth) {
  eipBandwidth_ = eipBandwidth;
  setParameter(std::string("EipBandwidth"), std::to_string(eipBandwidth));
}

std::string ModifyEciScalingConfigurationRequest::getGpuDriverVersion() const {
  return gpuDriverVersion_;
}

void ModifyEciScalingConfigurationRequest::setGpuDriverVersion(const std::string &gpuDriverVersion) {
  gpuDriverVersion_ = gpuDriverVersion;
  setParameter(std::string("GpuDriverVersion"), gpuDriverVersion);
}

bool ModifyEciScalingConfigurationRequest::getCostOptimization() const {
  return costOptimization_;
}

void ModifyEciScalingConfigurationRequest::setCostOptimization(bool costOptimization) {
  costOptimization_ = costOptimization;
  setParameter(std::string("CostOptimization"), costOptimization ? "true" : "false");
}

bool ModifyEciScalingConfigurationRequest::getDataCacheBurstingEnabled() const {
  return dataCacheBurstingEnabled_;
}

void ModifyEciScalingConfigurationRequest::setDataCacheBurstingEnabled(bool dataCacheBurstingEnabled) {
  dataCacheBurstingEnabled_ = dataCacheBurstingEnabled;
  setParameter(std::string("DataCacheBurstingEnabled"), dataCacheBurstingEnabled ? "true" : "false");
}

float ModifyEciScalingConfigurationRequest::getMemory() const {
  return memory_;
}

void ModifyEciScalingConfigurationRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string ModifyEciScalingConfigurationRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifyEciScalingConfigurationRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifyEciScalingConfigurationRequest::getDescription() const {
  return description_;
}

void ModifyEciScalingConfigurationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ModifyEciScalingConfigurationRequest::getIngressBandwidth() const {
  return ingressBandwidth_;
}

void ModifyEciScalingConfigurationRequest::setIngressBandwidth(long ingressBandwidth) {
  ingressBandwidth_ = ingressBandwidth;
  setParameter(std::string("IngressBandwidth"), std::to_string(ingressBandwidth));
}

std::string ModifyEciScalingConfigurationRequest::getDnsPolicy() const {
  return dnsPolicy_;
}

void ModifyEciScalingConfigurationRequest::setDnsPolicy(const std::string &dnsPolicy) {
  dnsPolicy_ = dnsPolicy;
  setParameter(std::string("DnsPolicy"), dnsPolicy);
}

std::vector<ModifyEciScalingConfigurationRequest::SecurityContextSysctl> ModifyEciScalingConfigurationRequest::getSecurityContextSysctl() const {
  return securityContextSysctl_;
}

void ModifyEciScalingConfigurationRequest::setSecurityContextSysctl(const std::vector<ModifyEciScalingConfigurationRequest::SecurityContextSysctl> &securityContextSysctl) {
  securityContextSysctl_ = securityContextSysctl;
  for(int dep1 = 0; dep1 != securityContextSysctl.size(); dep1++) {
  auto securityContextSysctlObj = securityContextSysctl.at(dep1);
  std::string securityContextSysctlObjStr = std::string("SecurityContextSysctl") + "." + std::to_string(dep1 + 1);
    setParameter(securityContextSysctlObjStr + ".Name", securityContextSysctlObj.name);
    setParameter(securityContextSysctlObjStr + ".Value", securityContextSysctlObj.value);
  }
}

std::string ModifyEciScalingConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyEciScalingConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyEciScalingConfigurationRequest::getDataCacheBucket() const {
  return dataCacheBucket_;
}

void ModifyEciScalingConfigurationRequest::setDataCacheBucket(const std::string &dataCacheBucket) {
  dataCacheBucket_ = dataCacheBucket;
  setParameter(std::string("DataCacheBucket"), dataCacheBucket);
}

std::vector<std::string> ModifyEciScalingConfigurationRequest::getDnsConfigNameServer() const {
  return dnsConfigNameServer_;
}

void ModifyEciScalingConfigurationRequest::setDnsConfigNameServer(const std::vector<std::string> &dnsConfigNameServer) {
  dnsConfigNameServer_ = dnsConfigNameServer;
}

std::vector<ModifyEciScalingConfigurationRequest::InitContainer> ModifyEciScalingConfigurationRequest::getInitContainer() const {
  return initContainer_;
}

void ModifyEciScalingConfigurationRequest::setInitContainer(const std::vector<ModifyEciScalingConfigurationRequest::InitContainer> &initContainer) {
  initContainer_ = initContainer;
  for(int dep1 = 0; dep1 != initContainer.size(); dep1++) {
  auto initContainerObj = initContainer.at(dep1);
  std::string initContainerObjStr = std::string("InitContainer") + "." + std::to_string(dep1 + 1);
    setParameter(initContainerObjStr + ".Image", initContainerObj.image);
    for(int dep2 = 0; dep2 != initContainerObj.initContainerEnvironmentVar.size(); dep2++) {
    auto initContainerEnvironmentVarObj = initContainerObj.initContainerEnvironmentVar.at(dep2);
    std::string initContainerEnvironmentVarObjStr = initContainerObjStr + ".InitContainerEnvironmentVar" + "." + std::to_string(dep2 + 1);
      setParameter(initContainerEnvironmentVarObjStr + ".FieldRef.FieldPath", initContainerEnvironmentVarObj.fieldRefFieldPath);
      setParameter(initContainerEnvironmentVarObjStr + ".Value", initContainerEnvironmentVarObj.value);
      setParameter(initContainerEnvironmentVarObjStr + ".Key", initContainerEnvironmentVarObj.key);
    }
    setParameter(initContainerObjStr + ".Memory", std::to_string(initContainerObj.memory));
    setParameter(initContainerObjStr + ".WorkingDir", initContainerObj.workingDir);
    setParameter(initContainerObjStr + ".Cpu", std::to_string(initContainerObj.cpu));
    setParameter(initContainerObjStr + ".Gpu", std::to_string(initContainerObj.gpu));
    setParameter(initContainerObjStr + ".ImagePullPolicy", initContainerObj.imagePullPolicy);
    setParameter(initContainerObjStr + ".SecurityContext.RunAsUser", std::to_string(initContainerObj.securityContextRunAsUser));
    for(int dep2 = 0; dep2 != initContainerObj.initContainerPort.size(); dep2++) {
    auto initContainerPortObj = initContainerObj.initContainerPort.at(dep2);
    std::string initContainerPortObjStr = initContainerObjStr + ".InitContainerPort" + "." + std::to_string(dep2 + 1);
      setParameter(initContainerPortObjStr + ".Protocol", initContainerPortObj.protocol);
      setParameter(initContainerPortObjStr + ".Port", std::to_string(initContainerPortObj.port));
    }
    setParameter(initContainerObjStr + ".Name", initContainerObj.name);
    for(int dep2 = 0; dep2 != initContainerObj.initContainerVolumeMount.size(); dep2++) {
    auto initContainerVolumeMountObj = initContainerObj.initContainerVolumeMount.at(dep2);
    std::string initContainerVolumeMountObjStr = initContainerObjStr + ".InitContainerVolumeMount" + "." + std::to_string(dep2 + 1);
      setParameter(initContainerVolumeMountObjStr + ".MountPath", initContainerVolumeMountObj.mountPath);
      setParameter(initContainerVolumeMountObjStr + ".ReadOnly", initContainerVolumeMountObj.readOnly ? "true" : "false");
      setParameter(initContainerVolumeMountObjStr + ".MountPropagation", initContainerVolumeMountObj.mountPropagation);
      setParameter(initContainerVolumeMountObjStr + ".Name", initContainerVolumeMountObj.name);
      setParameter(initContainerVolumeMountObjStr + ".SubPath", initContainerVolumeMountObj.subPath);
    }
    setParameter(initContainerObjStr + ".SecurityContext.ReadOnlyRootFilesystem", initContainerObj.securityContextReadOnlyRootFilesystem ? "true" : "false");
  }
}

std::vector<std::string> ModifyEciScalingConfigurationRequest::getInstanceType() const {
  return instanceType_;
}

void ModifyEciScalingConfigurationRequest::setInstanceType(const std::vector<std::string> &instanceType) {
  instanceType_ = instanceType;
}

long ModifyEciScalingConfigurationRequest::getTerminationGracePeriodSeconds() const {
  return terminationGracePeriodSeconds_;
}

void ModifyEciScalingConfigurationRequest::setTerminationGracePeriodSeconds(long terminationGracePeriodSeconds) {
  terminationGracePeriodSeconds_ = terminationGracePeriodSeconds;
  setParameter(std::string("TerminationGracePeriodSeconds"), std::to_string(terminationGracePeriodSeconds));
}

std::vector<ModifyEciScalingConfigurationRequest::ImageRegistryCredential> ModifyEciScalingConfigurationRequest::getImageRegistryCredential() const {
  return imageRegistryCredential_;
}

void ModifyEciScalingConfigurationRequest::setImageRegistryCredential(const std::vector<ModifyEciScalingConfigurationRequest::ImageRegistryCredential> &imageRegistryCredential) {
  imageRegistryCredential_ = imageRegistryCredential;
  for(int dep1 = 0; dep1 != imageRegistryCredential.size(); dep1++) {
  auto imageRegistryCredentialObj = imageRegistryCredential.at(dep1);
  std::string imageRegistryCredentialObjStr = std::string("ImageRegistryCredential") + "." + std::to_string(dep1 + 1);
    setParameter(imageRegistryCredentialObjStr + ".Server", imageRegistryCredentialObj.server);
    setParameter(imageRegistryCredentialObjStr + ".Password", imageRegistryCredentialObj.password);
    setParameter(imageRegistryCredentialObjStr + ".UserName", imageRegistryCredentialObj.userName);
  }
}

std::string ModifyEciScalingConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyEciScalingConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyEciScalingConfigurationRequest::getRestartPolicy() const {
  return restartPolicy_;
}

void ModifyEciScalingConfigurationRequest::setRestartPolicy(const std::string &restartPolicy) {
  restartPolicy_ = restartPolicy;
  setParameter(std::string("RestartPolicy"), restartPolicy);
}

int ModifyEciScalingConfigurationRequest::getCpuOptionsCore() const {
  return cpuOptionsCore_;
}

void ModifyEciScalingConfigurationRequest::setCpuOptionsCore(int cpuOptionsCore) {
  cpuOptionsCore_ = cpuOptionsCore;
  setParameter(std::string("CpuOptionsCore"), std::to_string(cpuOptionsCore));
}

std::string ModifyEciScalingConfigurationRequest::getRamRoleName() const {
  return ramRoleName_;
}

void ModifyEciScalingConfigurationRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::vector<ModifyEciScalingConfigurationRequest::AcrRegistryInfo> ModifyEciScalingConfigurationRequest::getAcrRegistryInfo() const {
  return acrRegistryInfo_;
}

void ModifyEciScalingConfigurationRequest::setAcrRegistryInfo(const std::vector<ModifyEciScalingConfigurationRequest::AcrRegistryInfo> &acrRegistryInfo) {
  acrRegistryInfo_ = acrRegistryInfo;
  for(int dep1 = 0; dep1 != acrRegistryInfo.size(); dep1++) {
  auto acrRegistryInfoObj = acrRegistryInfo.at(dep1);
  std::string acrRegistryInfoObjStr = std::string("AcrRegistryInfo") + "." + std::to_string(dep1 + 1);
    setParameter(acrRegistryInfoObjStr + ".InstanceName", acrRegistryInfoObj.instanceName);
    setParameter(acrRegistryInfoObjStr + ".InstanceId", acrRegistryInfoObj.instanceId);
    setParameter(acrRegistryInfoObjStr + ".RegionId", acrRegistryInfoObj.regionId);
  }
}

bool ModifyEciScalingConfigurationRequest::getAutoMatchImageCache() const {
  return autoMatchImageCache_;
}

void ModifyEciScalingConfigurationRequest::setAutoMatchImageCache(bool autoMatchImageCache) {
  autoMatchImageCache_ = autoMatchImageCache;
  setParameter(std::string("AutoMatchImageCache"), autoMatchImageCache ? "true" : "false");
}

int ModifyEciScalingConfigurationRequest::getLoadBalancerWeight() const {
  return loadBalancerWeight_;
}

void ModifyEciScalingConfigurationRequest::setLoadBalancerWeight(int loadBalancerWeight) {
  loadBalancerWeight_ = loadBalancerWeight;
  setParameter(std::string("LoadBalancerWeight"), std::to_string(loadBalancerWeight));
}

std::string ModifyEciScalingConfigurationRequest::getContainerGroupName() const {
  return containerGroupName_;
}

void ModifyEciScalingConfigurationRequest::setContainerGroupName(const std::string &containerGroupName) {
  containerGroupName_ = containerGroupName;
  setParameter(std::string("ContainerGroupName"), containerGroupName);
}

bool ModifyEciScalingConfigurationRequest::getAutoCreateEip() const {
  return autoCreateEip_;
}

void ModifyEciScalingConfigurationRequest::setAutoCreateEip(bool autoCreateEip) {
  autoCreateEip_ = autoCreateEip;
  setParameter(std::string("AutoCreateEip"), autoCreateEip ? "true" : "false");
}

