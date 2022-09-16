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

#include <alibabacloud/ecd/model/ModifyPolicyGroupRequest.h>

using AlibabaCloud::Ecd::Model::ModifyPolicyGroupRequest;

ModifyPolicyGroupRequest::ModifyPolicyGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyPolicyGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPolicyGroupRequest::~ModifyPolicyGroupRequest() {}

long ModifyPolicyGroupRequest::getRecordingExpires() const {
  return recordingExpires_;
}

void ModifyPolicyGroupRequest::setRecordingExpires(long recordingExpires) {
  recordingExpires_ = recordingExpires;
  setParameter(std::string("RecordingExpires"), std::to_string(recordingExpires));
}

std::vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule> ModifyPolicyGroupRequest::getRevokeSecurityPolicyRule() const {
  return revokeSecurityPolicyRule_;
}

void ModifyPolicyGroupRequest::setRevokeSecurityPolicyRule(const std::vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule> &revokeSecurityPolicyRule) {
  revokeSecurityPolicyRule_ = revokeSecurityPolicyRule;
  for(int dep1 = 0; dep1 != revokeSecurityPolicyRule.size(); dep1++) {
  auto revokeSecurityPolicyRuleObj = revokeSecurityPolicyRule.at(dep1);
  std::string revokeSecurityPolicyRuleObjStr = std::string("RevokeSecurityPolicyRule") + "." + std::to_string(dep1 + 1);
    setParameter(revokeSecurityPolicyRuleObjStr + ".PortRange", revokeSecurityPolicyRuleObj.portRange);
    setParameter(revokeSecurityPolicyRuleObjStr + ".IpProtocol", revokeSecurityPolicyRuleObj.ipProtocol);
    setParameter(revokeSecurityPolicyRuleObjStr + ".Description", revokeSecurityPolicyRuleObj.description);
    setParameter(revokeSecurityPolicyRuleObjStr + ".Type", revokeSecurityPolicyRuleObj.type);
    setParameter(revokeSecurityPolicyRuleObjStr + ".Priority", revokeSecurityPolicyRuleObj.priority);
    setParameter(revokeSecurityPolicyRuleObjStr + ".CidrIp", revokeSecurityPolicyRuleObj.cidrIp);
    setParameter(revokeSecurityPolicyRuleObjStr + ".Policy", revokeSecurityPolicyRuleObj.policy);
  }
}

std::string ModifyPolicyGroupRequest::getPrinterRedirection() const {
  return printerRedirection_;
}

void ModifyPolicyGroupRequest::setPrinterRedirection(const std::string &printerRedirection) {
  printerRedirection_ = printerRedirection;
  setParameter(std::string("PrinterRedirection"), printerRedirection);
}

std::vector<std::string> ModifyPolicyGroupRequest::getPreemptLoginUser() const {
  return preemptLoginUser_;
}

void ModifyPolicyGroupRequest::setPreemptLoginUser(const std::vector<std::string> &preemptLoginUser) {
  preemptLoginUser_ = preemptLoginUser;
}

std::string ModifyPolicyGroupRequest::getDomainList() const {
  return domainList_;
}

void ModifyPolicyGroupRequest::setDomainList(const std::string &domainList) {
  domainList_ = domainList;
  setParameter(std::string("DomainList"), domainList);
}

std::string ModifyPolicyGroupRequest::getNetRedirect() const {
  return netRedirect_;
}

void ModifyPolicyGroupRequest::setNetRedirect(const std::string &netRedirect) {
  netRedirect_ = netRedirect;
  setParameter(std::string("NetRedirect"), netRedirect);
}

std::string ModifyPolicyGroupRequest::getLocalDrive() const {
  return localDrive_;
}

void ModifyPolicyGroupRequest::setLocalDrive(const std::string &localDrive) {
  localDrive_ = localDrive;
  setParameter(std::string("LocalDrive"), localDrive);
}

std::vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule> ModifyPolicyGroupRequest::getAuthorizeSecurityPolicyRule() const {
  return authorizeSecurityPolicyRule_;
}

void ModifyPolicyGroupRequest::setAuthorizeSecurityPolicyRule(const std::vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule> &authorizeSecurityPolicyRule) {
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

std::string ModifyPolicyGroupRequest::getClipboard() const {
  return clipboard_;
}

void ModifyPolicyGroupRequest::setClipboard(const std::string &clipboard) {
  clipboard_ = clipboard;
  setParameter(std::string("Clipboard"), clipboard);
}

std::string ModifyPolicyGroupRequest::getUsbRedirect() const {
  return usbRedirect_;
}

void ModifyPolicyGroupRequest::setUsbRedirect(const std::string &usbRedirect) {
  usbRedirect_ = usbRedirect;
  setParameter(std::string("UsbRedirect"), usbRedirect);
}

std::string ModifyPolicyGroupRequest::getWatermarkType() const {
  return watermarkType_;
}

void ModifyPolicyGroupRequest::setWatermarkType(const std::string &watermarkType) {
  watermarkType_ = watermarkType;
  setParameter(std::string("WatermarkType"), watermarkType);
}

std::string ModifyPolicyGroupRequest::getRecordingStartTime() const {
  return recordingStartTime_;
}

void ModifyPolicyGroupRequest::setRecordingStartTime(const std::string &recordingStartTime) {
  recordingStartTime_ = recordingStartTime;
  setParameter(std::string("RecordingStartTime"), recordingStartTime);
}

std::vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule> ModifyPolicyGroupRequest::getRevokeAccessPolicyRule() const {
  return revokeAccessPolicyRule_;
}

void ModifyPolicyGroupRequest::setRevokeAccessPolicyRule(const std::vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule> &revokeAccessPolicyRule) {
  revokeAccessPolicyRule_ = revokeAccessPolicyRule;
  for(int dep1 = 0; dep1 != revokeAccessPolicyRule.size(); dep1++) {
  auto revokeAccessPolicyRuleObj = revokeAccessPolicyRule.at(dep1);
  std::string revokeAccessPolicyRuleObjStr = std::string("RevokeAccessPolicyRule") + "." + std::to_string(dep1 + 1);
    setParameter(revokeAccessPolicyRuleObjStr + ".Description", revokeAccessPolicyRuleObj.description);
    setParameter(revokeAccessPolicyRuleObjStr + ".CidrIp", revokeAccessPolicyRuleObj.cidrIp);
  }
}

std::string ModifyPolicyGroupRequest::getWatermark() const {
  return watermark_;
}

void ModifyPolicyGroupRequest::setWatermark(const std::string &watermark) {
  watermark_ = watermark;
  setParameter(std::string("Watermark"), watermark);
}

std::string ModifyPolicyGroupRequest::getCameraRedirect() const {
  return cameraRedirect_;
}

void ModifyPolicyGroupRequest::setCameraRedirect(const std::string &cameraRedirect) {
  cameraRedirect_ = cameraRedirect;
  setParameter(std::string("CameraRedirect"), cameraRedirect);
}

std::string ModifyPolicyGroupRequest::getAppContentProtection() const {
  return appContentProtection_;
}

void ModifyPolicyGroupRequest::setAppContentProtection(const std::string &appContentProtection) {
  appContentProtection_ = appContentProtection;
  setParameter(std::string("AppContentProtection"), appContentProtection);
}

std::vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule> ModifyPolicyGroupRequest::getAuthorizeAccessPolicyRule() const {
  return authorizeAccessPolicyRule_;
}

void ModifyPolicyGroupRequest::setAuthorizeAccessPolicyRule(const std::vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule> &authorizeAccessPolicyRule) {
  authorizeAccessPolicyRule_ = authorizeAccessPolicyRule;
  for(int dep1 = 0; dep1 != authorizeAccessPolicyRule.size(); dep1++) {
  auto authorizeAccessPolicyRuleObj = authorizeAccessPolicyRule.at(dep1);
  std::string authorizeAccessPolicyRuleObjStr = std::string("AuthorizeAccessPolicyRule") + "." + std::to_string(dep1 + 1);
    setParameter(authorizeAccessPolicyRuleObjStr + ".Description", authorizeAccessPolicyRuleObj.description);
    setParameter(authorizeAccessPolicyRuleObjStr + ".CidrIp", authorizeAccessPolicyRuleObj.cidrIp);
  }
}

std::string ModifyPolicyGroupRequest::getWatermarkTransparency() const {
  return watermarkTransparency_;
}

void ModifyPolicyGroupRequest::setWatermarkTransparency(const std::string &watermarkTransparency) {
  watermarkTransparency_ = watermarkTransparency;
  setParameter(std::string("WatermarkTransparency"), watermarkTransparency);
}

std::string ModifyPolicyGroupRequest::getName() const {
  return name_;
}

void ModifyPolicyGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyPolicyGroupRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void ModifyPolicyGroupRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

std::string ModifyPolicyGroupRequest::getWatermarkCustomText() const {
  return watermarkCustomText_;
}

void ModifyPolicyGroupRequest::setWatermarkCustomText(const std::string &watermarkCustomText) {
  watermarkCustomText_ = watermarkCustomText;
  setParameter(std::string("WatermarkCustomText"), watermarkCustomText);
}

std::string ModifyPolicyGroupRequest::getPreemptLogin() const {
  return preemptLogin_;
}

void ModifyPolicyGroupRequest::setPreemptLogin(const std::string &preemptLogin) {
  preemptLogin_ = preemptLogin;
  setParameter(std::string("PreemptLogin"), preemptLogin);
}

std::vector<ModifyPolicyGroupRequest::ClientType> ModifyPolicyGroupRequest::getClientType() const {
  return clientType_;
}

void ModifyPolicyGroupRequest::setClientType(const std::vector<ModifyPolicyGroupRequest::ClientType> &clientType) {
  clientType_ = clientType;
  for(int dep1 = 0; dep1 != clientType.size(); dep1++) {
  auto clientTypeObj = clientType.at(dep1);
  std::string clientTypeObjStr = std::string("ClientType") + "." + std::to_string(dep1 + 1);
    setParameter(clientTypeObjStr + ".ClientType", clientTypeObj.clientType);
    setParameter(clientTypeObjStr + ".Status", clientTypeObj.status);
  }
}

std::vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule> ModifyPolicyGroupRequest::getUsbSupplyRedirectRule() const {
  return usbSupplyRedirectRule_;
}

void ModifyPolicyGroupRequest::setUsbSupplyRedirectRule(const std::vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule> &usbSupplyRedirectRule) {
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

std::string ModifyPolicyGroupRequest::getRecording() const {
  return recording_;
}

void ModifyPolicyGroupRequest::setRecording(const std::string &recording) {
  recording_ = recording;
  setParameter(std::string("Recording"), recording);
}

long ModifyPolicyGroupRequest::getRecordingFps() const {
  return recordingFps_;
}

void ModifyPolicyGroupRequest::setRecordingFps(long recordingFps) {
  recordingFps_ = recordingFps;
  setParameter(std::string("RecordingFps"), std::to_string(recordingFps));
}

std::string ModifyPolicyGroupRequest::getRegionId() const {
  return regionId_;
}

void ModifyPolicyGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyPolicyGroupRequest::getRecordContent() const {
  return recordContent_;
}

void ModifyPolicyGroupRequest::setRecordContent(const std::string &recordContent) {
  recordContent_ = recordContent;
  setParameter(std::string("RecordContent"), recordContent);
}

long ModifyPolicyGroupRequest::getRecordContentExpires() const {
  return recordContentExpires_;
}

void ModifyPolicyGroupRequest::setRecordContentExpires(long recordContentExpires) {
  recordContentExpires_ = recordContentExpires;
  setParameter(std::string("RecordContentExpires"), std::to_string(recordContentExpires));
}

std::string ModifyPolicyGroupRequest::getRemoteCoordinate() const {
  return remoteCoordinate_;
}

void ModifyPolicyGroupRequest::setRemoteCoordinate(const std::string &remoteCoordinate) {
  remoteCoordinate_ = remoteCoordinate;
  setParameter(std::string("RemoteCoordinate"), remoteCoordinate);
}

std::string ModifyPolicyGroupRequest::getHtml5Access() const {
  return html5Access_;
}

void ModifyPolicyGroupRequest::setHtml5Access(const std::string &html5Access) {
  html5Access_ = html5Access;
  setParameter(std::string("Html5Access"), html5Access);
}

std::string ModifyPolicyGroupRequest::getGpuAcceleration() const {
  return gpuAcceleration_;
}

void ModifyPolicyGroupRequest::setGpuAcceleration(const std::string &gpuAcceleration) {
  gpuAcceleration_ = gpuAcceleration;
  setParameter(std::string("GpuAcceleration"), gpuAcceleration);
}

std::string ModifyPolicyGroupRequest::getHtml5FileTransfer() const {
  return html5FileTransfer_;
}

void ModifyPolicyGroupRequest::setHtml5FileTransfer(const std::string &html5FileTransfer) {
  html5FileTransfer_ = html5FileTransfer;
  setParameter(std::string("Html5FileTransfer"), html5FileTransfer);
}

std::string ModifyPolicyGroupRequest::getVisualQuality() const {
  return visualQuality_;
}

void ModifyPolicyGroupRequest::setVisualQuality(const std::string &visualQuality) {
  visualQuality_ = visualQuality;
  setParameter(std::string("VisualQuality"), visualQuality);
}

std::string ModifyPolicyGroupRequest::getRecordingEndTime() const {
  return recordingEndTime_;
}

void ModifyPolicyGroupRequest::setRecordingEndTime(const std::string &recordingEndTime) {
  recordingEndTime_ = recordingEndTime;
  setParameter(std::string("RecordingEndTime"), recordingEndTime);
}

