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

#include <alibabacloud/ltl/model/BatchUploadMPCoSPhaseTextInfoByDeviceRequest.h>

using AlibabaCloud::Ltl::Model::BatchUploadMPCoSPhaseTextInfoByDeviceRequest;

BatchUploadMPCoSPhaseTextInfoByDeviceRequest::BatchUploadMPCoSPhaseTextInfoByDeviceRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "BatchUploadMPCoSPhaseTextInfoByDevice") {
  setMethod(HttpRequest::Method::Post);
}

BatchUploadMPCoSPhaseTextInfoByDeviceRequest::~BatchUploadMPCoSPhaseTextInfoByDeviceRequest() {}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getIotSignature() const {
  return iotSignature_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setIotSignature(const std::string &iotSignature) {
  iotSignature_ = iotSignature;
  setParameter(std::string("IotSignature"), iotSignature);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getIotAuthType() const {
  return iotAuthType_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setIotAuthType(const std::string &iotAuthType) {
  iotAuthType_ = iotAuthType;
  setParameter(std::string("IotAuthType"), iotAuthType);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getIotIdSource() const {
  return iotIdSource_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setIotIdSource(const std::string &iotIdSource) {
  iotIdSource_ = iotIdSource;
  setParameter(std::string("IotIdSource"), iotIdSource);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getPhaseId() const {
  return phaseId_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getApiVersion() const {
  return apiVersion_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getBizChainId() const {
  return bizChainId_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::map<std::string, std::string> BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getPhaseDataList() const {
  return phaseDataList_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setPhaseDataList(std::map<std::string, std::string> phaseDataList) {
  phaseDataList_ = phaseDataList;
  setParameter(std::string("PhaseDataList"), phaseDataList);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getIotId() const {
  return iotId_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getIotDataDigest() const {
  return iotDataDigest_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setIotDataDigest(const std::string &iotDataDigest) {
  iotDataDigest_ = iotDataDigest;
  setParameter(std::string("IotDataDigest"), iotDataDigest);
}

std::string BatchUploadMPCoSPhaseTextInfoByDeviceRequest::getIotIdServiceProvider() const {
  return iotIdServiceProvider_;
}

void BatchUploadMPCoSPhaseTextInfoByDeviceRequest::setIotIdServiceProvider(const std::string &iotIdServiceProvider) {
  iotIdServiceProvider_ = iotIdServiceProvider;
  setParameter(std::string("IotIdServiceProvider"), iotIdServiceProvider);
}

