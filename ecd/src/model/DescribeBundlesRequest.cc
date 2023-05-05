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

#include <alibabacloud/ecd/model/DescribeBundlesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeBundlesRequest;

DescribeBundlesRequest::DescribeBundlesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeBundles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBundlesRequest::~DescribeBundlesRequest() {}

float DescribeBundlesRequest::getGpuCount() const {
  return gpuCount_;
}

void DescribeBundlesRequest::setGpuCount(float gpuCount) {
  gpuCount_ = gpuCount;
  setParameter(std::string("GpuCount"), std::to_string(gpuCount));
}

std::vector<std::string> DescribeBundlesRequest::getImageId() const {
  return imageId_;
}

void DescribeBundlesRequest::setImageId(const std::vector<std::string> &imageId) {
  imageId_ = imageId;
}

std::vector<std::string> DescribeBundlesRequest::getBundleId() const {
  return bundleId_;
}

void DescribeBundlesRequest::setBundleId(const std::vector<std::string> &bundleId) {
  bundleId_ = bundleId;
}

std::string DescribeBundlesRequest::getDesktopTypeFamily() const {
  return desktopTypeFamily_;
}

void DescribeBundlesRequest::setDesktopTypeFamily(const std::string &desktopTypeFamily) {
  desktopTypeFamily_ = desktopTypeFamily;
  setParameter(std::string("DesktopTypeFamily"), desktopTypeFamily);
}

bool DescribeBundlesRequest::getSelectedBundle() const {
  return selectedBundle_;
}

void DescribeBundlesRequest::setSelectedBundle(bool selectedBundle) {
  selectedBundle_ = selectedBundle;
  setParameter(std::string("SelectedBundle"), selectedBundle ? "true" : "false");
}

std::string DescribeBundlesRequest::getRegionId() const {
  return regionId_;
}

void DescribeBundlesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeBundlesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeBundlesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool DescribeBundlesRequest::getFromDesktopGroup() const {
  return fromDesktopGroup_;
}

void DescribeBundlesRequest::setFromDesktopGroup(bool fromDesktopGroup) {
  fromDesktopGroup_ = fromDesktopGroup;
  setParameter(std::string("FromDesktopGroup"), fromDesktopGroup ? "true" : "false");
}

std::string DescribeBundlesRequest::getBundleType() const {
  return bundleType_;
}

void DescribeBundlesRequest::setBundleType(const std::string &bundleType) {
  bundleType_ = bundleType;
  setParameter(std::string("BundleType"), bundleType);
}

std::string DescribeBundlesRequest::getFotaChannel() const {
  return fotaChannel_;
}

void DescribeBundlesRequest::setFotaChannel(const std::string &fotaChannel) {
  fotaChannel_ = fotaChannel;
  setParameter(std::string("FotaChannel"), fotaChannel);
}

bool DescribeBundlesRequest::getVolumeEncryptionEnabled() const {
  return volumeEncryptionEnabled_;
}

void DescribeBundlesRequest::setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) {
  volumeEncryptionEnabled_ = volumeEncryptionEnabled;
  setParameter(std::string("VolumeEncryptionEnabled"), volumeEncryptionEnabled ? "true" : "false");
}

int DescribeBundlesRequest::getMemorySize() const {
  return memorySize_;
}

void DescribeBundlesRequest::setMemorySize(int memorySize) {
  memorySize_ = memorySize;
  setParameter(std::string("MemorySize"), std::to_string(memorySize));
}

std::string DescribeBundlesRequest::getSessionType() const {
  return sessionType_;
}

void DescribeBundlesRequest::setSessionType(const std::string &sessionType) {
  sessionType_ = sessionType;
  setParameter(std::string("SessionType"), sessionType);
}

std::string DescribeBundlesRequest::getOsType() const {
  return osType_;
}

void DescribeBundlesRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

int DescribeBundlesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeBundlesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

bool DescribeBundlesRequest::getCheckStock() const {
  return checkStock_;
}

void DescribeBundlesRequest::setCheckStock(bool checkStock) {
  checkStock_ = checkStock;
  setParameter(std::string("CheckStock"), checkStock ? "true" : "false");
}

std::string DescribeBundlesRequest::getProtocolType() const {
  return protocolType_;
}

void DescribeBundlesRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

int DescribeBundlesRequest::getCpuCount() const {
  return cpuCount_;
}

void DescribeBundlesRequest::setCpuCount(int cpuCount) {
  cpuCount_ = cpuCount;
  setParameter(std::string("CpuCount"), std::to_string(cpuCount));
}

bool DescribeBundlesRequest::getSupportMultiSession() const {
  return supportMultiSession_;
}

void DescribeBundlesRequest::setSupportMultiSession(bool supportMultiSession) {
  supportMultiSession_ = supportMultiSession;
  setParameter(std::string("SupportMultiSession"), supportMultiSession ? "true" : "false");
}

