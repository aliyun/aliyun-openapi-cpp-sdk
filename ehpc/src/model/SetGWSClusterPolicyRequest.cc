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

#include <alibabacloud/ehpc/model/SetGWSClusterPolicyRequest.h>

using AlibabaCloud::EHPC::Model::SetGWSClusterPolicyRequest;

SetGWSClusterPolicyRequest::SetGWSClusterPolicyRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "SetGWSClusterPolicy") {
  setMethod(HttpRequest::Method::Post);
}

SetGWSClusterPolicyRequest::~SetGWSClusterPolicyRequest() {}

std::string SetGWSClusterPolicyRequest::getWatermark() const {
  return watermark_;
}

void SetGWSClusterPolicyRequest::setWatermark(const std::string &watermark) {
  watermark_ = watermark;
  setParameter(std::string("Watermark"), watermark);
}

std::string SetGWSClusterPolicyRequest::getLocalDrive() const {
  return localDrive_;
}

void SetGWSClusterPolicyRequest::setLocalDrive(const std::string &localDrive) {
  localDrive_ = localDrive;
  setParameter(std::string("LocalDrive"), localDrive);
}

std::string SetGWSClusterPolicyRequest::getClusterId() const {
  return clusterId_;
}

void SetGWSClusterPolicyRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string SetGWSClusterPolicyRequest::getClipboard() const {
  return clipboard_;
}

void SetGWSClusterPolicyRequest::setClipboard(const std::string &clipboard) {
  clipboard_ = clipboard;
  setParameter(std::string("Clipboard"), clipboard);
}

std::string SetGWSClusterPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetGWSClusterPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetGWSClusterPolicyRequest::getUsbRedirect() const {
  return usbRedirect_;
}

void SetGWSClusterPolicyRequest::setUsbRedirect(const std::string &usbRedirect) {
  usbRedirect_ = usbRedirect;
  setParameter(std::string("UsbRedirect"), usbRedirect);
}

bool SetGWSClusterPolicyRequest::getAsyncMode() const {
  return asyncMode_;
}

void SetGWSClusterPolicyRequest::setAsyncMode(bool asyncMode) {
  asyncMode_ = asyncMode;
  setParameter(std::string("AsyncMode"), asyncMode ? "true" : "false");
}

std::string SetGWSClusterPolicyRequest::getUdpPort() const {
  return udpPort_;
}

void SetGWSClusterPolicyRequest::setUdpPort(const std::string &udpPort) {
  udpPort_ = udpPort;
  setParameter(std::string("UdpPort"), udpPort);
}

