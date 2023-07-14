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

#include <alibabacloud/ehpc/model/CreateHybridClusterRequest.h>

using AlibabaCloud::EHPC::Model::CreateHybridClusterRequest;

CreateHybridClusterRequest::CreateHybridClusterRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "CreateHybridCluster") {
  setMethod(HttpRequest::Method::Get);
}

CreateHybridClusterRequest::~CreateHybridClusterRequest() {}

std::string CreateHybridClusterRequest::getEcsOrderManagerInstanceType() const {
  return ecsOrderManagerInstanceType_;
}

void CreateHybridClusterRequest::setEcsOrderManagerInstanceType(const std::string &ecsOrderManagerInstanceType) {
  ecsOrderManagerInstanceType_ = ecsOrderManagerInstanceType;
  setParameter(std::string("EcsOrder.Manager.InstanceType"), ecsOrderManagerInstanceType);
}

std::string CreateHybridClusterRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateHybridClusterRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

bool CreateHybridClusterRequest::getMultiOs() const {
  return multiOs_;
}

void CreateHybridClusterRequest::setMultiOs(bool multiOs) {
  multiOs_ = multiOs;
  setParameter(std::string("MultiOs"), multiOs ? "true" : "false");
}

std::string CreateHybridClusterRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void CreateHybridClusterRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeRemotePath() const {
  return onPremiseVolumeRemotePath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeRemotePath(const std::string &onPremiseVolumeRemotePath) {
  onPremiseVolumeRemotePath_ = onPremiseVolumeRemotePath;
  setParameter(std::string("OnPremiseVolumeRemotePath"), onPremiseVolumeRemotePath);
}

std::string CreateHybridClusterRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void CreateHybridClusterRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

std::string CreateHybridClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateHybridClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateHybridClusterRequest::getPassword() const {
  return password_;
}

void CreateHybridClusterRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateHybridClusterRequest::getHybridClusterOpMode() const {
  return hybridClusterOpMode_;
}

void CreateHybridClusterRequest::setHybridClusterOpMode(const std::string &hybridClusterOpMode) {
  hybridClusterOpMode_ = hybridClusterOpMode;
  setParameter(std::string("HybridClusterOpMode"), hybridClusterOpMode);
}

CreateHybridClusterRequest::WinAdPar CreateHybridClusterRequest::getWinAdPar() const {
  return winAdPar_;
}

void CreateHybridClusterRequest::setWinAdPar(const CreateHybridClusterRequest::WinAdPar &winAdPar) {
  winAdPar_ = winAdPar;
  setParameter(std::string("WinAdPar") + ".AdUser", winAdPar.adUser);
  setParameter(std::string("WinAdPar") + ".AdUserPasswd", winAdPar.adUserPasswd);
  setParameter(std::string("WinAdPar") + ".AdIp", winAdPar.adIp);
  setParameter(std::string("WinAdPar") + ".AdDc", winAdPar.adDc);
}

float CreateHybridClusterRequest::getComputeSpotPriceLimit() const {
  return computeSpotPriceLimit_;
}

void CreateHybridClusterRequest::setComputeSpotPriceLimit(float computeSpotPriceLimit) {
  computeSpotPriceLimit_ = computeSpotPriceLimit;
  setParameter(std::string("ComputeSpotPriceLimit"), std::to_string(computeSpotPriceLimit));
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeLocalPath() const {
  return onPremiseVolumeLocalPath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeLocalPath(const std::string &onPremiseVolumeLocalPath) {
  onPremiseVolumeLocalPath_ = onPremiseVolumeLocalPath;
  setParameter(std::string("OnPremiseVolumeLocalPath"), onPremiseVolumeLocalPath);
}

std::string CreateHybridClusterRequest::getRemoteDirectory() const {
  return remoteDirectory_;
}

void CreateHybridClusterRequest::setRemoteDirectory(const std::string &remoteDirectory) {
  remoteDirectory_ = remoteDirectory;
  setParameter(std::string("RemoteDirectory"), remoteDirectory);
}

std::string CreateHybridClusterRequest::getComputeSpotStrategy() const {
  return computeSpotStrategy_;
}

void CreateHybridClusterRequest::setComputeSpotStrategy(const std::string &computeSpotStrategy) {
  computeSpotStrategy_ = computeSpotStrategy;
  setParameter(std::string("ComputeSpotStrategy"), computeSpotStrategy);
}

std::vector<CreateHybridClusterRequest::PostInstallScript> CreateHybridClusterRequest::getPostInstallScript() const {
  return postInstallScript_;
}

void CreateHybridClusterRequest::setPostInstallScript(const std::vector<CreateHybridClusterRequest::PostInstallScript> &postInstallScript) {
  postInstallScript_ = postInstallScript;
  for(int dep1 = 0; dep1 != postInstallScript.size(); dep1++) {
  auto postInstallScriptObj = postInstallScript.at(dep1);
  std::string postInstallScriptObjStr = std::string("PostInstallScript") + "." + std::to_string(dep1 + 1);
    setParameter(postInstallScriptObjStr + ".Args", postInstallScriptObj.args);
    setParameter(postInstallScriptObjStr + ".Url", postInstallScriptObj.url);
  }
}

std::string CreateHybridClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateHybridClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateHybridClusterRequest::getDomain() const {
  return domain_;
}

void CreateHybridClusterRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string CreateHybridClusterRequest::getName() const {
  return name_;
}

void CreateHybridClusterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateHybridClusterRequest::getVolumeId() const {
  return volumeId_;
}

void CreateHybridClusterRequest::setVolumeId(const std::string &volumeId) {
  volumeId_ = volumeId;
  setParameter(std::string("VolumeId"), volumeId);
}

std::string CreateHybridClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateHybridClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateHybridClusterRequest::getImageId() const {
  return imageId_;
}

void CreateHybridClusterRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateHybridClusterRequest::getClientToken() const {
  return clientToken_;
}

void CreateHybridClusterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateHybridClusterRequest::getEhpcVersion() const {
  return ehpcVersion_;
}

void CreateHybridClusterRequest::setEhpcVersion(const std::string &ehpcVersion) {
  ehpcVersion_ = ehpcVersion;
  setParameter(std::string("EhpcVersion"), ehpcVersion);
}

std::string CreateHybridClusterRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateHybridClusterRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateHybridClusterRequest::getDescription() const {
  return description_;
}

void CreateHybridClusterRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateHybridClusterRequest::getEcsOrderComputeInstanceType() const {
  return ecsOrderComputeInstanceType_;
}

void CreateHybridClusterRequest::setEcsOrderComputeInstanceType(const std::string &ecsOrderComputeInstanceType) {
  ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
  setParameter(std::string("EcsOrder.Compute.InstanceType"), ecsOrderComputeInstanceType);
}

CreateHybridClusterRequest::OpenldapPar CreateHybridClusterRequest::getOpenldapPar() const {
  return openldapPar_;
}

void CreateHybridClusterRequest::setOpenldapPar(const CreateHybridClusterRequest::OpenldapPar &openldapPar) {
  openldapPar_ = openldapPar;
  setParameter(std::string("OpenldapPar") + ".FallbackHomeDir", openldapPar.fallbackHomeDir);
  setParameter(std::string("OpenldapPar") + ".BaseDn", openldapPar.baseDn);
  setParameter(std::string("OpenldapPar") + ".LdapServerIp", openldapPar.ldapServerIp);
}

std::string CreateHybridClusterRequest::getJobQueue() const {
  return jobQueue_;
}

void CreateHybridClusterRequest::setJobQueue(const std::string &jobQueue) {
  jobQueue_ = jobQueue;
  setParameter(std::string("JobQueue"), jobQueue);
}

std::string CreateHybridClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateHybridClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateHybridClusterRequest::getVolumeType() const {
  return volumeType_;
}

void CreateHybridClusterRequest::setVolumeType(const std::string &volumeType) {
  volumeType_ = volumeType;
  setParameter(std::string("VolumeType"), volumeType);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeMountPoint() const {
  return onPremiseVolumeMountPoint_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeMountPoint(const std::string &onPremiseVolumeMountPoint) {
  onPremiseVolumeMountPoint_ = onPremiseVolumeMountPoint;
  setParameter(std::string("OnPremiseVolumeMountPoint"), onPremiseVolumeMountPoint);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeProtocol() const {
  return onPremiseVolumeProtocol_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeProtocol(const std::string &onPremiseVolumeProtocol) {
  onPremiseVolumeProtocol_ = onPremiseVolumeProtocol;
  setParameter(std::string("OnPremiseVolumeProtocol"), onPremiseVolumeProtocol);
}

std::string CreateHybridClusterRequest::getVolumeProtocol() const {
  return volumeProtocol_;
}

void CreateHybridClusterRequest::setVolumeProtocol(const std::string &volumeProtocol) {
  volumeProtocol_ = volumeProtocol;
  setParameter(std::string("VolumeProtocol"), volumeProtocol);
}

std::string CreateHybridClusterRequest::getClientVersion() const {
  return clientVersion_;
}

void CreateHybridClusterRequest::setClientVersion(const std::string &clientVersion) {
  clientVersion_ = clientVersion;
  setParameter(std::string("ClientVersion"), clientVersion);
}

std::string CreateHybridClusterRequest::getOsTag() const {
  return osTag_;
}

void CreateHybridClusterRequest::setOsTag(const std::string &osTag) {
  osTag_ = osTag;
  setParameter(std::string("OsTag"), osTag);
}

std::vector<CreateHybridClusterRequest::Nodes> CreateHybridClusterRequest::getNodes() const {
  return nodes_;
}

void CreateHybridClusterRequest::setNodes(const std::vector<CreateHybridClusterRequest::Nodes> &nodes) {
  nodes_ = nodes;
  for(int dep1 = 0; dep1 != nodes.size(); dep1++) {
  auto nodesObj = nodes.at(dep1);
  std::string nodesObjStr = std::string("Nodes") + "." + std::to_string(dep1 + 1);
    setParameter(nodesObjStr + ".IpAddress", nodesObj.ipAddress);
    setParameter(nodesObjStr + ".HostName", nodesObj.hostName);
    setParameter(nodesObjStr + ".Role", nodesObj.role);
    setParameter(nodesObjStr + ".SchedulerType", nodesObj.schedulerType);
    setParameter(nodesObjStr + ".AccountType", nodesObj.accountType);
    setParameter(nodesObjStr + ".Dir", nodesObj.dir);
  }
}

std::string CreateHybridClusterRequest::getPlugin() const {
  return plugin_;
}

void CreateHybridClusterRequest::setPlugin(const std::string &plugin) {
  plugin_ = plugin;
  setParameter(std::string("Plugin"), plugin);
}

std::vector<CreateHybridClusterRequest::Application> CreateHybridClusterRequest::getApplication() const {
  return application_;
}

void CreateHybridClusterRequest::setApplication(const std::vector<CreateHybridClusterRequest::Application> &application) {
  application_ = application;
  for(int dep1 = 0; dep1 != application.size(); dep1++) {
  auto applicationObj = application.at(dep1);
  std::string applicationObjStr = std::string("Application") + "." + std::to_string(dep1 + 1);
    setParameter(applicationObjStr + ".Tag", applicationObj.tag);
  }
}

std::string CreateHybridClusterRequest::getVpcId() const {
  return vpcId_;
}

void CreateHybridClusterRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateHybridClusterRequest::getVolumeMountpoint() const {
  return volumeMountpoint_;
}

void CreateHybridClusterRequest::setVolumeMountpoint(const std::string &volumeMountpoint) {
  volumeMountpoint_ = volumeMountpoint;
  setParameter(std::string("VolumeMountpoint"), volumeMountpoint);
}

bool CreateHybridClusterRequest::getSchedulerPreInstall() const {
  return schedulerPreInstall_;
}

void CreateHybridClusterRequest::setSchedulerPreInstall(bool schedulerPreInstall) {
  schedulerPreInstall_ = schedulerPreInstall;
  setParameter(std::string("SchedulerPreInstall"), schedulerPreInstall ? "true" : "false");
}

std::string CreateHybridClusterRequest::getLocation() const {
  return location_;
}

void CreateHybridClusterRequest::setLocation(const std::string &location) {
  location_ = location;
  setParameter(std::string("Location"), location);
}

