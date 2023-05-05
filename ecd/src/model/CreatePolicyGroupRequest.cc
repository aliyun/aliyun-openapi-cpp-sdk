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

#include <alibabacloud/ecd/model/CreatePolicyGroupRequest.h>

using AlibabaCloud::Ecd::Model::CreatePolicyGroupRequest;

CreatePolicyGroupRequest::CreatePolicyGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreatePolicyGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreatePolicyGroupRequest::~CreatePolicyGroupRequest() {}

long CreatePolicyGroupRequest::getRecordingExpires() const {
  return recordingExpires_;
}

void CreatePolicyGroupRequest::setRecordingExpires(long recordingExpires) {
  recordingExpires_ = recordingExpires;
  setParameter(std::string("RecordingExpires"), std::to_string(recordingExpires));
}

std::string CreatePolicyGroupRequest::getPrinterRedirection() const {
  return printerRedirection_;
}

void CreatePolicyGroupRequest::setPrinterRedirection(const std::string &printerRedirection) {
  printerRedirection_ = printerRedirection;
  setParameter(std::string("PrinterRedirection"), printerRedirection);
}

std::vector<std::string> CreatePolicyGroupRequest::getPreemptLoginUser() const {
  return preemptLoginUser_;
}

void CreatePolicyGroupRequest::setPreemptLoginUser(const std::vector<std::string> &preemptLoginUser) {
  preemptLoginUser_ = preemptLoginUser;
}

std::string CreatePolicyGroupRequest::getDomainList() const {
  return domainList_;
}

void CreatePolicyGroupRequest::setDomainList(const std::string &domainList) {
  domainList_ = domainList;
  setParameter(std::string("DomainList"), domainList);
}

std::string CreatePolicyGroupRequest::getNetRedirect() const {
  return netRedirect_;
}

void CreatePolicyGroupRequest::setNetRedirect(const std::string &netRedirect) {
  netRedirect_ = netRedirect;
  setParameter(std::string("NetRedirect"), netRedirect);
}

std::string CreatePolicyGroupRequest::getLocalDrive() const {
  return localDrive_;
}

void CreatePolicyGroupRequest::setLocalDrive(const std::string &localDrive) {
  localDrive_ = localDrive;
  setParameter(std::string("LocalDrive"), localDrive);
}

int CreatePolicyGroupRequest::getWatermarkTransparencyValue() const {
  return watermarkTransparencyValue_;
}

void CreatePolicyGroupRequest::setWatermarkTransparencyValue(int watermarkTransparencyValue) {
  watermarkTransparencyValue_ = watermarkTransparencyValue;
  setParameter(std::string("WatermarkTransparencyValue"), std::to_string(watermarkTransparencyValue));
}

std::vector<CreatePolicyGroupRequest::AuthorizeSecurityPolicyRule> CreatePolicyGroupRequest::getAuthorizeSecurityPolicyRule() const {
  return authorizeSecurityPolicyRule_;
}

void CreatePolicyGroupRequest::setAuthorizeSecurityPolicyRule(const std::vector<CreatePolicyGroupRequest::AuthorizeSecurityPolicyRule> &authorizeSecurityPolicyRule) {
  authorizeSecurityPolicyRule_ = authorizeSecurityPolicyRule;
  for(int dep1 = 0; dep1 != authorizeSecurityPolicyRule.size(); dep1++) {
  auto authorizeSecurityPolicyRuleObj = authorizeSecurityPolicyRule.at(dep1);
  std::string authorizeSecurityPolicyRuleObjStr = std::string("AuthorizeSecurityPolicyRule") + "." + std::to_string(dep1 + 1);
    setParameter(authorizeSecurityPolicyRuleObjStr + ".PortRange", authorizeSecurityPolicyRuleObj.portRange);
    setParameter(authorizeSecurityPolicyRuleObjStr + ".IpProtocol", authorizeSecurityPolicyRuleObj.ipProtocol);
    setParameter(authorizeSecurityPolicyRuleObjStr + ".Description", authorizeSecurityPolicyRuleObj.description);
    setParameter(authorizeSecurityPolicyRuleObjStr + ".Type", authorizeSecurityPolicyRuleObj.type);
    setParameter(authorizeSecurityPolicyRuleObjStr + ".Priority", authorizeSecurityPolicyRuleObj.priority);
    setParameter(authorizeSecurityPolicyRuleObjStr + ".CidrIp", authorizeSecurityPolicyRuleObj.cidrIp);
    setParameter(authorizeSecurityPolicyRuleObjStr + ".Policy", authorizeSecurityPolicyRuleObj.policy);
  }
}

std::string CreatePolicyGroupRequest::getClipboard() const {
  return clipboard_;
}

void CreatePolicyGroupRequest::setClipboard(const std::string &clipboard) {
  clipboard_ = clipboard;
  setParameter(std::string("Clipboard"), clipboard);
}

std::string CreatePolicyGroupRequest::getEndUserApplyAdminCoordinate() const {
  return endUserApplyAdminCoordinate_;
}

void CreatePolicyGroupRequest::setEndUserApplyAdminCoordinate(const std::string &endUserApplyAdminCoordinate) {
  endUserApplyAdminCoordinate_ = endUserApplyAdminCoordinate;
  setParameter(std::string("EndUserApplyAdminCoordinate"), endUserApplyAdminCoordinate);
}

std::string CreatePolicyGroupRequest::getUsbRedirect() const {
  return usbRedirect_;
}

void CreatePolicyGroupRequest::setUsbRedirect(const std::string &usbRedirect) {
  usbRedirect_ = usbRedirect;
  setParameter(std::string("UsbRedirect"), usbRedirect);
}

std::string CreatePolicyGroupRequest::getWatermarkType() const {
  return watermarkType_;
}

void CreatePolicyGroupRequest::setWatermarkType(const std::string &watermarkType) {
  watermarkType_ = watermarkType;
  setParameter(std::string("WatermarkType"), watermarkType);
}

std::string CreatePolicyGroupRequest::getRecordingStartTime() const {
  return recordingStartTime_;
}

void CreatePolicyGroupRequest::setRecordingStartTime(const std::string &recordingStartTime) {
  recordingStartTime_ = recordingStartTime;
  setParameter(std::string("RecordingStartTime"), recordingStartTime);
}

std::vector<CreatePolicyGroupRequest::NetRedirectRule> CreatePolicyGroupRequest::getNetRedirectRule() const {
  return netRedirectRule_;
}

void CreatePolicyGroupRequest::setNetRedirectRule(const std::vector<CreatePolicyGroupRequest::NetRedirectRule> &netRedirectRule) {
  netRedirectRule_ = netRedirectRule;
  for(int dep1 = 0; dep1 != netRedirectRule.size(); dep1++) {
  auto netRedirectRuleObj = netRedirectRule.at(dep1);
  std::string netRedirectRuleObjStr = std::string("NetRedirectRule") + "." + std::to_string(dep1 + 1);
    setParameter(netRedirectRuleObjStr + ".RuleType", netRedirectRuleObj.ruleType);
    setParameter(netRedirectRuleObjStr + ".Domain", netRedirectRuleObj.domain);
    setParameter(netRedirectRuleObjStr + ".Policy", netRedirectRuleObj.policy);
  }
}

int CreatePolicyGroupRequest::getRecordingDuration() const {
  return recordingDuration_;
}

void CreatePolicyGroupRequest::setRecordingDuration(int recordingDuration) {
  recordingDuration_ = recordingDuration;
  setParameter(std::string("RecordingDuration"), std::to_string(recordingDuration));
}

int CreatePolicyGroupRequest::getWatermarkColor() const {
  return watermarkColor_;
}

void CreatePolicyGroupRequest::setWatermarkColor(int watermarkColor) {
  watermarkColor_ = watermarkColor;
  setParameter(std::string("WatermarkColor"), std::to_string(watermarkColor));
}

int CreatePolicyGroupRequest::getMemoryRateLimit() const {
  return memoryRateLimit_;
}

void CreatePolicyGroupRequest::setMemoryRateLimit(int memoryRateLimit) {
  memoryRateLimit_ = memoryRateLimit;
  setParameter(std::string("MemoryRateLimit"), std::to_string(memoryRateLimit));
}

std::string CreatePolicyGroupRequest::getWatermark() const {
  return watermark_;
}

void CreatePolicyGroupRequest::setWatermark(const std::string &watermark) {
  watermark_ = watermark;
  setParameter(std::string("Watermark"), watermark);
}

std::string CreatePolicyGroupRequest::getCameraRedirect() const {
  return cameraRedirect_;
}

void CreatePolicyGroupRequest::setCameraRedirect(const std::string &cameraRedirect) {
  cameraRedirect_ = cameraRedirect;
  setParameter(std::string("CameraRedirect"), cameraRedirect);
}

std::vector<std::string> CreatePolicyGroupRequest::getMemoryProcessors() const {
  return memoryProcessors_;
}

void CreatePolicyGroupRequest::setMemoryProcessors(const std::vector<std::string> &memoryProcessors) {
  memoryProcessors_ = memoryProcessors;
}

std::string CreatePolicyGroupRequest::getVideoRedirect() const {
  return videoRedirect_;
}

void CreatePolicyGroupRequest::setVideoRedirect(const std::string &videoRedirect) {
  videoRedirect_ = videoRedirect;
  setParameter(std::string("VideoRedirect"), videoRedirect);
}

int CreatePolicyGroupRequest::getCpuSingleRateLimit() const {
  return cpuSingleRateLimit_;
}

void CreatePolicyGroupRequest::setCpuSingleRateLimit(int cpuSingleRateLimit) {
  cpuSingleRateLimit_ = cpuSingleRateLimit;
  setParameter(std::string("CpuSingleRateLimit"), std::to_string(cpuSingleRateLimit));
}

std::string CreatePolicyGroupRequest::getAppContentProtection() const {
  return appContentProtection_;
}

void CreatePolicyGroupRequest::setAppContentProtection(const std::string &appContentProtection) {
  appContentProtection_ = appContentProtection;
  setParameter(std::string("AppContentProtection"), appContentProtection);
}

std::string CreatePolicyGroupRequest::getCpuProtectedMode() const {
  return cpuProtectedMode_;
}

void CreatePolicyGroupRequest::setCpuProtectedMode(const std::string &cpuProtectedMode) {
  cpuProtectedMode_ = cpuProtectedMode;
  setParameter(std::string("CpuProtectedMode"), cpuProtectedMode);
}

std::vector<CreatePolicyGroupRequest::DomainResolveRule> CreatePolicyGroupRequest::getDomainResolveRule() const {
  return domainResolveRule_;
}

void CreatePolicyGroupRequest::setDomainResolveRule(const std::vector<CreatePolicyGroupRequest::DomainResolveRule> &domainResolveRule) {
  domainResolveRule_ = domainResolveRule;
  for(int dep1 = 0; dep1 != domainResolveRule.size(); dep1++) {
  auto domainResolveRuleObj = domainResolveRule.at(dep1);
  std::string domainResolveRuleObjStr = std::string("DomainResolveRule") + "." + std::to_string(dep1 + 1);
    setParameter(domainResolveRuleObjStr + ".Domain", domainResolveRuleObj.domain);
    setParameter(domainResolveRuleObjStr + ".Description", domainResolveRuleObj.description);
    setParameter(domainResolveRuleObjStr + ".Policy", domainResolveRuleObj.policy);
  }
}

std::vector<CreatePolicyGroupRequest::AuthorizeAccessPolicyRule> CreatePolicyGroupRequest::getAuthorizeAccessPolicyRule() const {
  return authorizeAccessPolicyRule_;
}

void CreatePolicyGroupRequest::setAuthorizeAccessPolicyRule(const std::vector<CreatePolicyGroupRequest::AuthorizeAccessPolicyRule> &authorizeAccessPolicyRule) {
  authorizeAccessPolicyRule_ = authorizeAccessPolicyRule;
  for(int dep1 = 0; dep1 != authorizeAccessPolicyRule.size(); dep1++) {
  auto authorizeAccessPolicyRuleObj = authorizeAccessPolicyRule.at(dep1);
  std::string authorizeAccessPolicyRuleObjStr = std::string("AuthorizeAccessPolicyRule") + "." + std::to_string(dep1 + 1);
    setParameter(authorizeAccessPolicyRuleObjStr + ".Description", authorizeAccessPolicyRuleObj.description);
    setParameter(authorizeAccessPolicyRuleObjStr + ".CidrIp", authorizeAccessPolicyRuleObj.cidrIp);
  }
}

std::string CreatePolicyGroupRequest::getWatermarkTransparency() const {
  return watermarkTransparency_;
}

void CreatePolicyGroupRequest::setWatermarkTransparency(const std::string &watermarkTransparency) {
  watermarkTransparency_ = watermarkTransparency;
  setParameter(std::string("WatermarkTransparency"), watermarkTransparency);
}

std::string CreatePolicyGroupRequest::getName() const {
  return name_;
}

void CreatePolicyGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int CreatePolicyGroupRequest::getMemorySampleDuration() const {
  return memorySampleDuration_;
}

void CreatePolicyGroupRequest::setMemorySampleDuration(int memorySampleDuration) {
  memorySampleDuration_ = memorySampleDuration;
  setParameter(std::string("MemorySampleDuration"), std::to_string(memorySampleDuration));
}

std::string CreatePolicyGroupRequest::getWatermarkCustomText() const {
  return watermarkCustomText_;
}

void CreatePolicyGroupRequest::setWatermarkCustomText(const std::string &watermarkCustomText) {
  watermarkCustomText_ = watermarkCustomText;
  setParameter(std::string("WatermarkCustomText"), watermarkCustomText);
}

int CreatePolicyGroupRequest::getCpuDownGradeDuration() const {
  return cpuDownGradeDuration_;
}

void CreatePolicyGroupRequest::setCpuDownGradeDuration(int cpuDownGradeDuration) {
  cpuDownGradeDuration_ = cpuDownGradeDuration;
  setParameter(std::string("CpuDownGradeDuration"), std::to_string(cpuDownGradeDuration));
}

std::string CreatePolicyGroupRequest::getPreemptLogin() const {
  return preemptLogin_;
}

void CreatePolicyGroupRequest::setPreemptLogin(const std::string &preemptLogin) {
  preemptLogin_ = preemptLogin;
  setParameter(std::string("PreemptLogin"), preemptLogin);
}

std::vector<CreatePolicyGroupRequest::ClientType> CreatePolicyGroupRequest::getClientType() const {
  return clientType_;
}

void CreatePolicyGroupRequest::setClientType(const std::vector<CreatePolicyGroupRequest::ClientType> &clientType) {
  clientType_ = clientType;
  for(int dep1 = 0; dep1 != clientType.size(); dep1++) {
  auto clientTypeObj = clientType.at(dep1);
  std::string clientTypeObjStr = std::string("ClientType") + "." + std::to_string(dep1 + 1);
    setParameter(clientTypeObjStr + ".ClientType", clientTypeObj.clientType);
    setParameter(clientTypeObjStr + ".Status", clientTypeObj.status);
  }
}

std::vector<CreatePolicyGroupRequest::UsbSupplyRedirectRule> CreatePolicyGroupRequest::getUsbSupplyRedirectRule() const {
  return usbSupplyRedirectRule_;
}

void CreatePolicyGroupRequest::setUsbSupplyRedirectRule(const std::vector<CreatePolicyGroupRequest::UsbSupplyRedirectRule> &usbSupplyRedirectRule) {
  usbSupplyRedirectRule_ = usbSupplyRedirectRule;
  for(int dep1 = 0; dep1 != usbSupplyRedirectRule.size(); dep1++) {
  auto usbSupplyRedirectRuleObj = usbSupplyRedirectRule.at(dep1);
  std::string usbSupplyRedirectRuleObjStr = std::string("UsbSupplyRedirectRule") + "." + std::to_string(dep1 + 1);
    setParameter(usbSupplyRedirectRuleObjStr + ".ProductId", usbSupplyRedirectRuleObj.productId);
    setParameter(usbSupplyRedirectRuleObjStr + ".DeviceSubclass", usbSupplyRedirectRuleObj.deviceSubclass);
    setParameter(usbSupplyRedirectRuleObjStr + ".UsbRedirectType", std::to_string(usbSupplyRedirectRuleObj.usbRedirectType));
    setParameter(usbSupplyRedirectRuleObjStr + ".VendorId", usbSupplyRedirectRuleObj.vendorId);
    setParameter(usbSupplyRedirectRuleObjStr + ".Description", usbSupplyRedirectRuleObj.description);
    setParameter(usbSupplyRedirectRuleObjStr + ".DeviceClass", usbSupplyRedirectRuleObj.deviceClass);
    setParameter(usbSupplyRedirectRuleObjStr + ".UsbRuleType", std::to_string(usbSupplyRedirectRuleObj.usbRuleType));
  }
}

int CreatePolicyGroupRequest::getWatermarkFontSize() const {
  return watermarkFontSize_;
}

void CreatePolicyGroupRequest::setWatermarkFontSize(int watermarkFontSize) {
  watermarkFontSize_ = watermarkFontSize;
  setParameter(std::string("WatermarkFontSize"), std::to_string(watermarkFontSize));
}

std::string CreatePolicyGroupRequest::getRecording() const {
  return recording_;
}

void CreatePolicyGroupRequest::setRecording(const std::string &recording) {
  recording_ = recording;
  setParameter(std::string("Recording"), recording);
}

std::vector<std::string> CreatePolicyGroupRequest::getScopeValue() const {
  return scopeValue_;
}

void CreatePolicyGroupRequest::setScopeValue(const std::vector<std::string> &scopeValue) {
  scopeValue_ = scopeValue;
}

std::string CreatePolicyGroupRequest::getDomainResolveRuleType() const {
  return domainResolveRuleType_;
}

void CreatePolicyGroupRequest::setDomainResolveRuleType(const std::string &domainResolveRuleType) {
  domainResolveRuleType_ = domainResolveRuleType;
  setParameter(std::string("DomainResolveRuleType"), domainResolveRuleType);
}

int CreatePolicyGroupRequest::getMemorySingleRateLimit() const {
  return memorySingleRateLimit_;
}

void CreatePolicyGroupRequest::setMemorySingleRateLimit(int memorySingleRateLimit) {
  memorySingleRateLimit_ = memorySingleRateLimit;
  setParameter(std::string("MemorySingleRateLimit"), std::to_string(memorySingleRateLimit));
}

long CreatePolicyGroupRequest::getRecordingFps() const {
  return recordingFps_;
}

void CreatePolicyGroupRequest::setRecordingFps(long recordingFps) {
  recordingFps_ = recordingFps;
  setParameter(std::string("RecordingFps"), std::to_string(recordingFps));
}

std::string CreatePolicyGroupRequest::getWatermarkFontStyle() const {
  return watermarkFontStyle_;
}

void CreatePolicyGroupRequest::setWatermarkFontStyle(const std::string &watermarkFontStyle) {
  watermarkFontStyle_ = watermarkFontStyle;
  setParameter(std::string("WatermarkFontStyle"), watermarkFontStyle);
}

std::string CreatePolicyGroupRequest::getRegionId() const {
  return regionId_;
}

void CreatePolicyGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePolicyGroupRequest::getRecordContent() const {
  return recordContent_;
}

void CreatePolicyGroupRequest::setRecordContent(const std::string &recordContent) {
  recordContent_ = recordContent;
  setParameter(std::string("RecordContent"), recordContent);
}

std::string CreatePolicyGroupRequest::getScope() const {
  return scope_;
}

void CreatePolicyGroupRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int CreatePolicyGroupRequest::getWatermarkRowAmount() const {
  return watermarkRowAmount_;
}

void CreatePolicyGroupRequest::setWatermarkRowAmount(int watermarkRowAmount) {
  watermarkRowAmount_ = watermarkRowAmount;
  setParameter(std::string("WatermarkRowAmount"), std::to_string(watermarkRowAmount));
}

std::vector<std::string> CreatePolicyGroupRequest::getCpuProcessors() const {
  return cpuProcessors_;
}

void CreatePolicyGroupRequest::setCpuProcessors(const std::vector<std::string> &cpuProcessors) {
  cpuProcessors_ = cpuProcessors;
}

std::string CreatePolicyGroupRequest::getEndUserGroupCoordinate() const {
  return endUserGroupCoordinate_;
}

void CreatePolicyGroupRequest::setEndUserGroupCoordinate(const std::string &endUserGroupCoordinate) {
  endUserGroupCoordinate_ = endUserGroupCoordinate;
  setParameter(std::string("EndUserGroupCoordinate"), endUserGroupCoordinate);
}

double CreatePolicyGroupRequest::getWatermarkDegree() const {
  return watermarkDegree_;
}

void CreatePolicyGroupRequest::setWatermarkDegree(double watermarkDegree) {
  watermarkDegree_ = watermarkDegree;
  setParameter(std::string("WatermarkDegree"), std::to_string(watermarkDegree));
}

long CreatePolicyGroupRequest::getRecordContentExpires() const {
  return recordContentExpires_;
}

void CreatePolicyGroupRequest::setRecordContentExpires(long recordContentExpires) {
  recordContentExpires_ = recordContentExpires;
  setParameter(std::string("RecordContentExpires"), std::to_string(recordContentExpires));
}

std::string CreatePolicyGroupRequest::getRecordingAudio() const {
  return recordingAudio_;
}

void CreatePolicyGroupRequest::setRecordingAudio(const std::string &recordingAudio) {
  recordingAudio_ = recordingAudio;
  setParameter(std::string("RecordingAudio"), recordingAudio);
}

int CreatePolicyGroupRequest::getCpuRateLimit() const {
  return cpuRateLimit_;
}

void CreatePolicyGroupRequest::setCpuRateLimit(int cpuRateLimit) {
  cpuRateLimit_ = cpuRateLimit;
  setParameter(std::string("CpuRateLimit"), std::to_string(cpuRateLimit));
}

std::string CreatePolicyGroupRequest::getRemoteCoordinate() const {
  return remoteCoordinate_;
}

void CreatePolicyGroupRequest::setRemoteCoordinate(const std::string &remoteCoordinate) {
  remoteCoordinate_ = remoteCoordinate;
  setParameter(std::string("RemoteCoordinate"), remoteCoordinate);
}

int CreatePolicyGroupRequest::getCpuSampleDuration() const {
  return cpuSampleDuration_;
}

void CreatePolicyGroupRequest::setCpuSampleDuration(int cpuSampleDuration) {
  cpuSampleDuration_ = cpuSampleDuration;
  setParameter(std::string("CpuSampleDuration"), std::to_string(cpuSampleDuration));
}

std::string CreatePolicyGroupRequest::getHtml5Access() const {
  return html5Access_;
}

void CreatePolicyGroupRequest::setHtml5Access(const std::string &html5Access) {
  html5Access_ = html5Access;
  setParameter(std::string("Html5Access"), html5Access);
}

std::string CreatePolicyGroupRequest::getGpuAcceleration() const {
  return gpuAcceleration_;
}

void CreatePolicyGroupRequest::setGpuAcceleration(const std::string &gpuAcceleration) {
  gpuAcceleration_ = gpuAcceleration;
  setParameter(std::string("GpuAcceleration"), gpuAcceleration);
}

std::string CreatePolicyGroupRequest::getHtml5FileTransfer() const {
  return html5FileTransfer_;
}

void CreatePolicyGroupRequest::setHtml5FileTransfer(const std::string &html5FileTransfer) {
  html5FileTransfer_ = html5FileTransfer;
  setParameter(std::string("Html5FileTransfer"), html5FileTransfer);
}

std::string CreatePolicyGroupRequest::getVisualQuality() const {
  return visualQuality_;
}

void CreatePolicyGroupRequest::setVisualQuality(const std::string &visualQuality) {
  visualQuality_ = visualQuality;
  setParameter(std::string("VisualQuality"), visualQuality);
}

std::string CreatePolicyGroupRequest::getRecordingEndTime() const {
  return recordingEndTime_;
}

void CreatePolicyGroupRequest::setRecordingEndTime(const std::string &recordingEndTime) {
  recordingEndTime_ = recordingEndTime;
  setParameter(std::string("RecordingEndTime"), recordingEndTime);
}

std::string CreatePolicyGroupRequest::getMemoryProtectedMode() const {
  return memoryProtectedMode_;
}

void CreatePolicyGroupRequest::setMemoryProtectedMode(const std::string &memoryProtectedMode) {
  memoryProtectedMode_ = memoryProtectedMode;
  setParameter(std::string("MemoryProtectedMode"), memoryProtectedMode);
}

int CreatePolicyGroupRequest::getMemoryDownGradeDuration() const {
  return memoryDownGradeDuration_;
}

void CreatePolicyGroupRequest::setMemoryDownGradeDuration(int memoryDownGradeDuration) {
  memoryDownGradeDuration_ = memoryDownGradeDuration;
  setParameter(std::string("MemoryDownGradeDuration"), std::to_string(memoryDownGradeDuration));
}

std::string CreatePolicyGroupRequest::getInternetCommunicationProtocol() const {
  return internetCommunicationProtocol_;
}

void CreatePolicyGroupRequest::setInternetCommunicationProtocol(const std::string &internetCommunicationProtocol) {
  internetCommunicationProtocol_ = internetCommunicationProtocol;
  setParameter(std::string("InternetCommunicationProtocol"), internetCommunicationProtocol);
}

