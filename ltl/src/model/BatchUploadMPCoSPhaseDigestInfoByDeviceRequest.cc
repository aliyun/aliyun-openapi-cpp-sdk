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

#include <alibabacloud/ltl/model/BatchUploadMPCoSPhaseDigestInfoByDeviceRequest.h>

using AlibabaCloud::Ltl::Model::BatchUploadMPCoSPhaseDigestInfoByDeviceRequest;

BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::BatchUploadMPCoSPhaseDigestInfoByDeviceRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "BatchUploadMPCoSPhaseDigestInfoByDevice") {
  setMethod(HttpRequest::Method::Post);
}

BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::~BatchUploadMPCoSPhaseDigestInfoByDeviceRequest() {}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getIotSignature() const {
  return iotSignature_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setIotSignature(const std::string &iotSignature) {
  iotSignature_ = iotSignature;
  setParameter(std::string("IotSignature"), iotSignature);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getIotAuthType() const {
  return iotAuthType_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setIotAuthType(const std::string &iotAuthType) {
  iotAuthType_ = iotAuthType;
  setParameter(std::string("IotAuthType"), iotAuthType);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getIotIdSource() const {
  return iotIdSource_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setIotIdSource(const std::string &iotIdSource) {
  iotIdSource_ = iotIdSource;
  setParameter(std::string("IotIdSource"), iotIdSource);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getPhaseId() const {
  return phaseId_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getApiVersion() const {
  return apiVersion_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getBizChainId() const {
  return bizChainId_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::map<std::string, std::string> BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getPhaseDataList() const {
  return phaseDataList_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setPhaseDataList(std::map<std::string, std::string> phaseDataList) {
  phaseDataList_ = phaseDataList;
  setParameter(std::string("PhaseDataList"), phaseDataList);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getIotId() const {
  return iotId_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getIotDataDigest() const {
  return iotDataDigest_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setIotDataDigest(const std::string &iotDataDigest) {
  iotDataDigest_ = iotDataDigest;
  setParameter(std::string("IotDataDigest"), iotDataDigest);
}

std::string BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::getIotIdServiceProvider() const {
  return iotIdServiceProvider_;
}

void BatchUploadMPCoSPhaseDigestInfoByDeviceRequest::setIotIdServiceProvider(const std::string &iotIdServiceProvider) {
  iotIdServiceProvider_ = iotIdServiceProvider;
  setParameter(std::string("IotIdServiceProvider"), iotIdServiceProvider);
}

