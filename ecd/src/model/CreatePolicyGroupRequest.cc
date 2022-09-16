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

std::string CreatePolicyGroupRequest::getWatermarkCustomText() const {
  return watermarkCustomText_;
}

void CreatePolicyGroupRequest::setWatermarkCustomText(const std::string &watermarkCustomText) {
  watermarkCustomText_ = watermarkCustomText;
  setParameter(std::string("WatermarkCustomText"), watermarkCustomText);
}

std::string CreatePolicyGroupRequest::getPreemptLogin() const {
  return preemptLogin_;
}

void CreatePolicyGroupRequest::setPreemptLogin(const std::string &preemptLogin) {
  preemptLogin_ = preemptLogin;
  setParameter(std::string("PreemptLogin"), preemptLogin);
}

long CreatePolicyGroupRequest::getRecordingExpires() const {
  return recordingExpires_;
}

void CreatePolicyGroupRequest::setRecordingExpires(long recordingExpires) {
  recordingExpires_ = recordingExpires;
  setParameter(std::string("RecordingExpires"), std::to_string(recordingExpires));
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

std::string CreatePolicyGroupRequest::getRecording() const {
  return recording_;
}

void CreatePolicyGroupRequest::setRecording(const std::string &recording) {
  recording_ = recording;
  setParameter(std::string("Recording"), recording);
}

std::string CreatePolicyGroupRequest::getClipboard() const {
  return clipboard_;
}

void CreatePolicyGroupRequest::setClipboard(const std::string &clipboard) {
  clipboard_ = clipboard;
  setParameter(std::string("Clipboard"), clipboard);
}

long CreatePolicyGroupRequest::getRecordingFps() const {
  return recordingFps_;
}

void CreatePolicyGroupRequest::setRecordingFps(long recordingFps) {
  recordingFps_ = recordingFps;
  setParameter(std::string("RecordingFps"), std::to_string(recordingFps));
}

std::string CreatePolicyGroupRequest::getUsbRedirect() const {
  return usbRedirect_;
}

void CreatePolicyGroupRequest::setUsbRedirect(const std::string &usbRedirect) {
  usbRedirect_ = usbRedirect;
  setParameter(std::string("UsbRedirect"), usbRedirect);
}

std::string CreatePolicyGroupRequest::getRegionId() const {
  return regionId_;
}

void CreatePolicyGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
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

std::string CreatePolicyGroupRequest::getRecordContent() const {
  return recordContent_;
}

void CreatePolicyGroupRequest::setRecordContent(const std::string &recordContent) {
  recordContent_ = recordContent;
  setParameter(std::string("RecordContent"), recordContent);
}

long CreatePolicyGroupRequest::getRecordContentExpires() const {
  return recordContentExpires_;
}

void CreatePolicyGroupRequest::setRecordContentExpires(long recordContentExpires) {
  recordContentExpires_ = recordContentExpires;
  setParameter(std::string("RecordContentExpires"), std::to_string(recordContentExpires));
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

std::string CreatePolicyGroupRequest::getRemoteCoordinate() const {
  return remoteCoordinate_;
}

void CreatePolicyGroupRequest::setRemoteCoordinate(const std::string &remoteCoordinate) {
  remoteCoordinate_ = remoteCoordinate;
  setParameter(std::string("RemoteCoordinate"), remoteCoordinate);
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

std::string CreatePolicyGroupRequest::getAppContentProtection() const {
  return appContentProtection_;
}

void CreatePolicyGroupRequest::setAppContentProtection(const std::string &appContentProtection) {
  appContentProtection_ = appContentProtection;
  setParameter(std::string("AppContentProtection"), appContentProtection);
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

std::string CreatePolicyGroupRequest::getVisualQuality() const {
  return visualQuality_;
}

void CreatePolicyGroupRequest::setVisualQuality(const std::string &visualQuality) {
  visualQuality_ = visualQuality;
  setParameter(std::string("VisualQuality"), visualQuality);
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

std::string CreatePolicyGroupRequest::getRecordingEndTime() const {
  return recordingEndTime_;
}

void CreatePolicyGroupRequest::setRecordingEndTime(const std::string &recordingEndTime) {
  recordingEndTime_ = recordingEndTime;
  setParameter(std::string("RecordingEndTime"), recordingEndTime);
}

