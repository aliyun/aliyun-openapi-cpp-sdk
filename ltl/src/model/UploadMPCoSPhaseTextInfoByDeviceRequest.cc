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

#include <alibabacloud/ltl/model/UploadMPCoSPhaseTextInfoByDeviceRequest.h>

using AlibabaCloud::Ltl::Model::UploadMPCoSPhaseTextInfoByDeviceRequest;

UploadMPCoSPhaseTextInfoByDeviceRequest::UploadMPCoSPhaseTextInfoByDeviceRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "UploadMPCoSPhaseTextInfoByDevice") {
  setMethod(HttpRequest::Method::Post);
}

UploadMPCoSPhaseTextInfoByDeviceRequest::~UploadMPCoSPhaseTextInfoByDeviceRequest() {}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getIotSignature() const {
  return iotSignature_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setIotSignature(const std::string &iotSignature) {
  iotSignature_ = iotSignature;
  setParameter(std::string("IotSignature"), iotSignature);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getIotAuthType() const {
  return iotAuthType_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setIotAuthType(const std::string &iotAuthType) {
  iotAuthType_ = iotAuthType;
  setParameter(std::string("IotAuthType"), iotAuthType);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getIotIdSource() const {
  return iotIdSource_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setIotIdSource(const std::string &iotIdSource) {
  iotIdSource_ = iotIdSource;
  setParameter(std::string("IotIdSource"), iotIdSource);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getPhaseData() const {
  return phaseData_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setPhaseData(const std::string &phaseData) {
  phaseData_ = phaseData;
  setParameter(std::string("PhaseData"), phaseData);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getPhaseId() const {
  return phaseId_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getApiVersion() const {
  return apiVersion_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getBizChainId() const {
  return bizChainId_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getDataKey() const {
  return dataKey_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setDataKey(const std::string &dataKey) {
  dataKey_ = dataKey;
  setParameter(std::string("DataKey"), dataKey);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getDataSeq() const {
  return dataSeq_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setDataSeq(const std::string &dataSeq) {
  dataSeq_ = dataSeq;
  setParameter(std::string("DataSeq"), dataSeq);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getIotId() const {
  return iotId_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getIotDataDigest() const {
  return iotDataDigest_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setIotDataDigest(const std::string &iotDataDigest) {
  iotDataDigest_ = iotDataDigest;
  setParameter(std::string("IotDataDigest"), iotDataDigest);
}

std::string UploadMPCoSPhaseTextInfoByDeviceRequest::getIotIdServiceProvider() const {
  return iotIdServiceProvider_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setIotIdServiceProvider(const std::string &iotIdServiceProvider) {
  iotIdServiceProvider_ = iotIdServiceProvider;
  setParameter(std::string("IotIdServiceProvider"), iotIdServiceProvider);
}

std::map<std::string, std::string> UploadMPCoSPhaseTextInfoByDeviceRequest::getRelatedDataList() const {
  return relatedDataList_;
}

void UploadMPCoSPhaseTextInfoByDeviceRequest::setRelatedDataList(std::map<std::string, std::string> relatedDataList) {
  relatedDataList_ = relatedDataList;
  setParameter(std::string("RelatedDataList"), relatedDataList);
}

