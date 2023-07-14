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

#include <alibabacloud/ehpc/model/SubmitServerlessJobRequest.h>

using AlibabaCloud::EHPC::Model::SubmitServerlessJobRequest;

SubmitServerlessJobRequest::SubmitServerlessJobRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "SubmitServerlessJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitServerlessJobRequest::~SubmitServerlessJobRequest() {}

SubmitServerlessJobRequest::Container SubmitServerlessJobRequest::getContainer() const {
  return container_;
}

void SubmitServerlessJobRequest::setContainer(const SubmitServerlessJobRequest::Container &container) {
  container_ = container;
  for(int dep1 = 0; dep1 != container.volumeMount.size(); dep1++) {
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".FlexVolume.Options", container.volumeMount[dep1].flexVolumeOptions);
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".NFSVolume.Server", container.volumeMount[dep1].nFSVolumeServer);
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".MountPath", container.volumeMount[dep1].mountPath);
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".ReadOnly", container.volumeMount[dep1].readOnly ? "true" : "false");
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".MountPropagation", container.volumeMount[dep1].mountPropagation);
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".SubPath", container.volumeMount[dep1].subPath);
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".NFSVolume.Path", container.volumeMount[dep1].nFSVolumePath);
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".Type", container.volumeMount[dep1].type);
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".NFSVolume.ReadOnly", container.volumeMount[dep1].nFSVolumeReadOnly ? "true" : "false");
    setParameter(std::string("Container") + ".VolumeMount." + std::to_string(dep1 + 1) + ".FlexVolume.Driver", container.volumeMount[dep1].flexVolumeDriver);
  }
  setParameter(std::string("Container") + ".Image", container.image);
  for(int dep1 = 0; dep1 != container.port.size(); dep1++) {
    setParameter(std::string("Container") + ".Port." + std::to_string(dep1 + 1) + ".Protocol", container.port[dep1].protocol);
    setParameter(std::string("Container") + ".Port." + std::to_string(dep1 + 1) + ".Port", std::to_string(container.port[dep1].port));
  }
  for(int dep1 = 0; dep1 != container.environmentVar.size(); dep1++) {
    setParameter(std::string("Container") + ".EnvironmentVar." + std::to_string(dep1 + 1) + ".Name", container.environmentVar[dep1].name);
    setParameter(std::string("Container") + ".EnvironmentVar." + std::to_string(dep1 + 1) + ".Value", container.environmentVar[dep1].value);
  }
  setParameter(std::string("Container") + ".WorkingDir", container.workingDir);
  for(int dep1 = 0; dep1 != container.arg.size(); dep1++) {
    setParameter(std::string("Container") + ".Arg." + std::to_string(dep1 + 1), container.arg[dep1]);
  }
  setParameter(std::string("Container") + ".Name", container.name);
  setParameter(std::string("Container") + ".Gpu", std::to_string(container.gpu));
  for(int dep1 = 0; dep1 != container.command.size(); dep1++) {
    setParameter(std::string("Container") + ".Command." + std::to_string(dep1 + 1), container.command[dep1]);
  }
}

float SubmitServerlessJobRequest::getMemory() const {
  return memory_;
}

void SubmitServerlessJobRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::vector<SubmitServerlessJobRequest::DependsOn> SubmitServerlessJobRequest::getDependsOn() const {
  return dependsOn_;
}

void SubmitServerlessJobRequest::setDependsOn(const std::vector<SubmitServerlessJobRequest::DependsOn> &dependsOn) {
  dependsOn_ = dependsOn;
  for(int dep1 = 0; dep1 != dependsOn.size(); dep1++) {
    setParameter(std::string("DependsOn") + "." + std::to_string(dep1 + 1) + ".JobId", dependsOn[dep1].jobId);
    setParameter(std::string("DependsOn") + "." + std::to_string(dep1 + 1) + ".Type", dependsOn[dep1].type);
  }
}

float SubmitServerlessJobRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void SubmitServerlessJobRequest::setSpotPriceLimit(float spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  setParameter(std::string("SpotPriceLimit"), std::to_string(spotPriceLimit));
}

std::string SubmitServerlessJobRequest::getJobQueue() const {
  return jobQueue_;
}

void SubmitServerlessJobRequest::setJobQueue(const std::string &jobQueue) {
  jobQueue_ = jobQueue;
  setParameter(std::string("JobQueue"), jobQueue);
}

long SubmitServerlessJobRequest::getTimeout() const {
  return timeout_;
}

void SubmitServerlessJobRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string SubmitServerlessJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitServerlessJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitServerlessJobRequest::getJobUser() const {
  return jobUser_;
}

void SubmitServerlessJobRequest::setJobUser(const std::string &jobUser) {
  jobUser_ = jobUser;
  setParameter(std::string("JobUser"), jobUser);
}

std::vector<SubmitServerlessJobRequest::std::string> SubmitServerlessJobRequest::getInstanceType() const {
  return instanceType_;
}

void SubmitServerlessJobRequest::setInstanceType(const std::vector<SubmitServerlessJobRequest::std::string> &instanceType) {
  instanceType_ = instanceType;
  for(int dep1 = 0; dep1 != instanceType.size(); dep1++) {
    setParameter(std::string("InstanceType") + "." + std::to_string(dep1 + 1), instanceType[dep1]);
  }
}

std::string SubmitServerlessJobRequest::getJobName() const {
  return jobName_;
}

void SubmitServerlessJobRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

long SubmitServerlessJobRequest::getJobPriority() const {
  return jobPriority_;
}

void SubmitServerlessJobRequest::setJobPriority(long jobPriority) {
  jobPriority_ = jobPriority;
  setParameter(std::string("JobPriority"), std::to_string(jobPriority));
}

float SubmitServerlessJobRequest::getCpu() const {
  return cpu_;
}

void SubmitServerlessJobRequest::setCpu(float cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

std::string SubmitServerlessJobRequest::getRamRoleName() const {
  return ramRoleName_;
}

void SubmitServerlessJobRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::vector<SubmitServerlessJobRequest::AcrRegistryInfo> SubmitServerlessJobRequest::getAcrRegistryInfo() const {
  return acrRegistryInfo_;
}

void SubmitServerlessJobRequest::setAcrRegistryInfo(const std::vector<SubmitServerlessJobRequest::AcrRegistryInfo> &acrRegistryInfo) {
  acrRegistryInfo_ = acrRegistryInfo;
  for(int dep1 = 0; dep1 != acrRegistryInfo.size(); dep1++) {
    setParameter(std::string("AcrRegistryInfo") + "." + std::to_string(dep1 + 1) + ".InstanceName", acrRegistryInfo[dep1].instanceName);
    setParameter(std::string("AcrRegistryInfo") + "." + std::to_string(dep1 + 1) + ".InstanceId", acrRegistryInfo[dep1].instanceId);
    setParameter(std::string("AcrRegistryInfo") + "." + std::to_string(dep1 + 1) + ".RegionId", acrRegistryInfo[dep1].regionId);
    for(int dep2 = 0; dep2 != acrRegistryInfo[dep1].domain.size(); dep2++) {
      setParameter(std::string("AcrRegistryInfo") + "." + std::to_string(dep1 + 1) + ".Domain." + std::to_string(dep2 + 1), acrRegistryInfo[dep1].domain[dep2]);
    }
  }
}

std::string SubmitServerlessJobRequest::getClusterId() const {
  return clusterId_;
}

void SubmitServerlessJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string SubmitServerlessJobRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void SubmitServerlessJobRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::vector<SubmitServerlessJobRequest::std::string> SubmitServerlessJobRequest::getVSwitchId() const {
  return vSwitchId_;
}

void SubmitServerlessJobRequest::setVSwitchId(const std::vector<SubmitServerlessJobRequest::std::string> &vSwitchId) {
  vSwitchId_ = vSwitchId;
  for(int dep1 = 0; dep1 != vSwitchId.size(); dep1++) {
    setParameter(std::string("VSwitchId") + "." + std::to_string(dep1 + 1), vSwitchId[dep1]);
  }
}

std::vector<SubmitServerlessJobRequest::Volume> SubmitServerlessJobRequest::getVolume() const {
  return volume_;
}

void SubmitServerlessJobRequest::setVolume(const std::vector<SubmitServerlessJobRequest::Volume> &volume) {
  volume_ = volume;
  for(int dep1 = 0; dep1 != volume.size(); dep1++) {
    setParameter(std::string("Volume") + "." + std::to_string(dep1 + 1) + ".FlexVolume.Options", volume[dep1].flexVolumeOptions);
    setParameter(std::string("Volume") + "." + std::to_string(dep1 + 1) + ".NFSVolume.Server", volume[dep1].nFSVolumeServer);
    setParameter(std::string("Volume") + "." + std::to_string(dep1 + 1) + ".NFSVolume.Path", volume[dep1].nFSVolumePath);
    setParameter(std::string("Volume") + "." + std::to_string(dep1 + 1) + ".NFSVolume.ReadOnly", volume[dep1].nFSVolumeReadOnly ? "true" : "false");
    setParameter(std::string("Volume") + "." + std::to_string(dep1 + 1) + ".FlexVolume.Driver", volume[dep1].flexVolumeDriver);
  }
}

SubmitServerlessJobRequest::RetryStrategy SubmitServerlessJobRequest::getRetryStrategy() const {
  return retryStrategy_;
}

void SubmitServerlessJobRequest::setRetryStrategy(const SubmitServerlessJobRequest::RetryStrategy &retryStrategy) {
  retryStrategy_ = retryStrategy;
  for(int dep1 = 0; dep1 != retryStrategy.evaluateOnExit.size(); dep1++) {
    setParameter(std::string("RetryStrategy") + ".EvaluateOnExit." + std::to_string(dep1 + 1) + ".Action", retryStrategy.evaluateOnExit[dep1].action);
    setParameter(std::string("RetryStrategy") + ".EvaluateOnExit." + std::to_string(dep1 + 1) + ".OnExitCode", retryStrategy.evaluateOnExit[dep1].onExitCode);
  }
  setParameter(std::string("RetryStrategy") + ".Attempts", std::to_string(retryStrategy.attempts));
}

int SubmitServerlessJobRequest::getEphemeralStorage() const {
  return ephemeralStorage_;
}

void SubmitServerlessJobRequest::setEphemeralStorage(int ephemeralStorage) {
  ephemeralStorage_ = ephemeralStorage;
  setParameter(std::string("EphemeralStorage"), std::to_string(ephemeralStorage));
}

SubmitServerlessJobRequest::ArrayProperties SubmitServerlessJobRequest::getArrayProperties() const {
  return arrayProperties_;
}

void SubmitServerlessJobRequest::setArrayProperties(const SubmitServerlessJobRequest::ArrayProperties &arrayProperties) {
  arrayProperties_ = arrayProperties;
  setParameter(std::string("ArrayProperties") + ".IndexStart", std::to_string(arrayProperties.indexStart));
  setParameter(std::string("ArrayProperties") + ".IndexStep", std::to_string(arrayProperties.indexStep));
  setParameter(std::string("ArrayProperties") + ".IndexEnd", std::to_string(arrayProperties.indexEnd));
}

