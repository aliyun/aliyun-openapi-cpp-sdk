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

#include <alibabacloud/ltl/model/UploadMPCoSPhaseDigestInfoByDeviceRequest.h>

using AlibabaCloud::Ltl::Model::UploadMPCoSPhaseDigestInfoByDeviceRequest;

UploadMPCoSPhaseDigestInfoByDeviceRequest::UploadMPCoSPhaseDigestInfoByDeviceRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "UploadMPCoSPhaseDigestInfoByDevice") {
  setMethod(HttpRequest::Method::Post);
}

UploadMPCoSPhaseDigestInfoByDeviceRequest::~UploadMPCoSPhaseDigestInfoByDeviceRequest() {}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getIotSignature() const {
  return iotSignature_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setIotSignature(const std::string &iotSignature) {
  iotSignature_ = iotSignature;
  setParameter(std::string("IotSignature"), iotSignature);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getIotAuthType() const {
  return iotAuthType_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setIotAuthType(const std::string &iotAuthType) {
  iotAuthType_ = iotAuthType;
  setParameter(std::string("IotAuthType"), iotAuthType);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getIotIdSource() const {
  return iotIdSource_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setIotIdSource(const std::string &iotIdSource) {
  iotIdSource_ = iotIdSource;
  setParameter(std::string("IotIdSource"), iotIdSource);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getPhaseData() const {
  return phaseData_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setPhaseData(const std::string &phaseData) {
  phaseData_ = phaseData;
  setParameter(std::string("PhaseData"), phaseData);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getPhaseId() const {
  return phaseId_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getApiVersion() const {
  return apiVersion_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getBizChainId() const {
  return bizChainId_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getDataKey() const {
  return dataKey_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setDataKey(const std::string &dataKey) {
  dataKey_ = dataKey;
  setParameter(std::string("DataKey"), dataKey);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getDataSeq() const {
  return dataSeq_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setDataSeq(const std::string &dataSeq) {
  dataSeq_ = dataSeq;
  setParameter(std::string("DataSeq"), dataSeq);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getIotId() const {
  return iotId_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getIotDataDigest() const {
  return iotDataDigest_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setIotDataDigest(const std::string &iotDataDigest) {
  iotDataDigest_ = iotDataDigest;
  setParameter(std::string("IotDataDigest"), iotDataDigest);
}

std::string UploadMPCoSPhaseDigestInfoByDeviceRequest::getIotIdServiceProvider() const {
  return iotIdServiceProvider_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setIotIdServiceProvider(const std::string &iotIdServiceProvider) {
  iotIdServiceProvider_ = iotIdServiceProvider;
  setParameter(std::string("IotIdServiceProvider"), iotIdServiceProvider);
}

std::map<std::string, std::string> UploadMPCoSPhaseDigestInfoByDeviceRequest::getRelatedDataList() const {
  return relatedDataList_;
}

void UploadMPCoSPhaseDigestInfoByDeviceRequest::setRelatedDataList(std::map<std::string, std::string> relatedDataList) {
  relatedDataList_ = relatedDataList;
  setParameter(std::string("RelatedDataList"), relatedDataList);
}

