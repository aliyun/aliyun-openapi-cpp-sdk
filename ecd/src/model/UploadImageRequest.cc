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

#include <alibabacloud/ecd/model/UploadImageRequest.h>

using AlibabaCloud::Ecd::Model::UploadImageRequest;

UploadImageRequest::UploadImageRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "UploadImage") {
  setMethod(HttpRequest::Method::Post);
}

UploadImageRequest::~UploadImageRequest() {}

bool UploadImageRequest::getEnableSecurityCheck() const {
  return enableSecurityCheck_;
}

void UploadImageRequest::setEnableSecurityCheck(bool enableSecurityCheck) {
  enableSecurityCheck_ = enableSecurityCheck;
  setParameter(std::string("EnableSecurityCheck"), enableSecurityCheck ? "true" : "false");
}

bool UploadImageRequest::getGpuCategory() const {
  return gpuCategory_;
}

void UploadImageRequest::setGpuCategory(bool gpuCategory) {
  gpuCategory_ = gpuCategory;
  setParameter(std::string("GpuCategory"), gpuCategory ? "true" : "false");
}

std::string UploadImageRequest::getDescription() const {
  return description_;
}

void UploadImageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UploadImageRequest::getOssObjectPath() const {
  return ossObjectPath_;
}

void UploadImageRequest::setOssObjectPath(const std::string &ossObjectPath) {
  ossObjectPath_ = ossObjectPath;
  setParameter(std::string("OssObjectPath"), ossObjectPath);
}

std::string UploadImageRequest::getRegionId() const {
  return regionId_;
}

void UploadImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UploadImageRequest::getImageName() const {
  return imageName_;
}

void UploadImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string UploadImageRequest::getLicenseType() const {
  return licenseType_;
}

void UploadImageRequest::setLicenseType(const std::string &licenseType) {
  licenseType_ = licenseType;
  setParameter(std::string("LicenseType"), licenseType);
}

std::string UploadImageRequest::getOsType() const {
  return osType_;
}

void UploadImageRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

int UploadImageRequest::getDataDiskSize() const {
  return dataDiskSize_;
}

void UploadImageRequest::setDataDiskSize(int dataDiskSize) {
  dataDiskSize_ = dataDiskSize;
  setParameter(std::string("DataDiskSize"), std::to_string(dataDiskSize));
}

std::string UploadImageRequest::getProtocolType() const {
  return protocolType_;
}

void UploadImageRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::string UploadImageRequest::getGpuDriverType() const {
  return gpuDriverType_;
}

void UploadImageRequest::setGpuDriverType(const std::string &gpuDriverType) {
  gpuDriverType_ = gpuDriverType;
  setParameter(std::string("GpuDriverType"), gpuDriverType);
}

