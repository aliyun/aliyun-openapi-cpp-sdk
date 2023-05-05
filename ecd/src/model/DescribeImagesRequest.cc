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

#include <alibabacloud/ecd/model/DescribeImagesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeImagesRequest;

DescribeImagesRequest::DescribeImagesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeImages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImagesRequest::~DescribeImagesRequest() {}

std::vector<std::string> DescribeImagesRequest::getImageId() const {
  return imageId_;
}

void DescribeImagesRequest::setImageId(const std::vector<std::string> &imageId) {
  imageId_ = imageId;
}

bool DescribeImagesRequest::getGpuCategory() const {
  return gpuCategory_;
}

void DescribeImagesRequest::setGpuCategory(bool gpuCategory) {
  gpuCategory_ = gpuCategory;
  setParameter(std::string("GpuCategory"), gpuCategory ? "true" : "false");
}

std::string DescribeImagesRequest::getDesktopInstanceType() const {
  return desktopInstanceType_;
}

void DescribeImagesRequest::setDesktopInstanceType(const std::string &desktopInstanceType) {
  desktopInstanceType_ = desktopInstanceType;
  setParameter(std::string("DesktopInstanceType"), desktopInstanceType);
}

std::string DescribeImagesRequest::getLanguageType() const {
  return languageType_;
}

void DescribeImagesRequest::setLanguageType(const std::string &languageType) {
  languageType_ = languageType;
  setParameter(std::string("LanguageType"), languageType);
}

std::string DescribeImagesRequest::getRegionId() const {
  return regionId_;
}

void DescribeImagesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeImagesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeImagesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeImagesRequest::getFotaChannel() const {
  return fotaChannel_;
}

void DescribeImagesRequest::setFotaChannel(const std::string &fotaChannel) {
  fotaChannel_ = fotaChannel;
  setParameter(std::string("FotaChannel"), fotaChannel);
}

std::string DescribeImagesRequest::getImageType() const {
  return imageType_;
}

void DescribeImagesRequest::setImageType(const std::string &imageType) {
  imageType_ = imageType;
  setParameter(std::string("ImageType"), imageType);
}

std::string DescribeImagesRequest::getSessionType() const {
  return sessionType_;
}

void DescribeImagesRequest::setSessionType(const std::string &sessionType) {
  sessionType_ = sessionType;
  setParameter(std::string("SessionType"), sessionType);
}

std::string DescribeImagesRequest::getOsType() const {
  return osType_;
}

void DescribeImagesRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

std::string DescribeImagesRequest::getImageStatus() const {
  return imageStatus_;
}

void DescribeImagesRequest::setImageStatus(const std::string &imageStatus) {
  imageStatus_ = imageStatus;
  setParameter(std::string("ImageStatus"), imageStatus);
}

int DescribeImagesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeImagesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeImagesRequest::getProtocolType() const {
  return protocolType_;
}

void DescribeImagesRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::string DescribeImagesRequest::getGpuDriverVersion() const {
  return gpuDriverVersion_;
}

void DescribeImagesRequest::setGpuDriverVersion(const std::string &gpuDriverVersion) {
  gpuDriverVersion_ = gpuDriverVersion;
  setParameter(std::string("GpuDriverVersion"), gpuDriverVersion);
}

