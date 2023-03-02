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

#include <alibabacloud/lto/model/UploadIoTDataToBlockchainRequest.h>

using AlibabaCloud::Lto::Model::UploadIoTDataToBlockchainRequest;

UploadIoTDataToBlockchainRequest::UploadIoTDataToBlockchainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "UploadIoTDataToBlockchain") {
  setMethod(HttpRequest::Method::Post);
}

UploadIoTDataToBlockchainRequest::~UploadIoTDataToBlockchainRequest() {}

std::string UploadIoTDataToBlockchainRequest::getIotIdSource() const {
  return iotIdSource_;
}

void UploadIoTDataToBlockchainRequest::setIotIdSource(const std::string &iotIdSource) {
  iotIdSource_ = iotIdSource;
  setParameter(std::string("IotIdSource"), iotIdSource);
}

std::string UploadIoTDataToBlockchainRequest::getIotDataToken() const {
  return iotDataToken_;
}

void UploadIoTDataToBlockchainRequest::setIotDataToken(const std::string &iotDataToken) {
  iotDataToken_ = iotDataToken;
  setParameter(std::string("IotDataToken"), iotDataToken);
}

std::string UploadIoTDataToBlockchainRequest::getPrivacyData() const {
  return privacyData_;
}

void UploadIoTDataToBlockchainRequest::setPrivacyData(const std::string &privacyData) {
  privacyData_ = privacyData;
  setParameter(std::string("PrivacyData"), privacyData);
}

std::string UploadIoTDataToBlockchainRequest::getIotId() const {
  return iotId_;
}

void UploadIoTDataToBlockchainRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string UploadIoTDataToBlockchainRequest::getRegionId() const {
  return regionId_;
}

void UploadIoTDataToBlockchainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UploadIoTDataToBlockchainRequest::getIotDataDigest() const {
  return iotDataDigest_;
}

void UploadIoTDataToBlockchainRequest::setIotDataDigest(const std::string &iotDataDigest) {
  iotDataDigest_ = iotDataDigest;
  setParameter(std::string("IotDataDigest"), iotDataDigest);
}

std::string UploadIoTDataToBlockchainRequest::getIotDataDID() const {
  return iotDataDID_;
}

void UploadIoTDataToBlockchainRequest::setIotDataDID(const std::string &iotDataDID) {
  iotDataDID_ = iotDataDID;
  setParameter(std::string("IotDataDID"), iotDataDID);
}

std::string UploadIoTDataToBlockchainRequest::getPlainData() const {
  return plainData_;
}

void UploadIoTDataToBlockchainRequest::setPlainData(const std::string &plainData) {
  plainData_ = plainData;
  setParameter(std::string("PlainData"), plainData);
}

std::string UploadIoTDataToBlockchainRequest::getIotAuthType() const {
  return iotAuthType_;
}

void UploadIoTDataToBlockchainRequest::setIotAuthType(const std::string &iotAuthType) {
  iotAuthType_ = iotAuthType;
  setParameter(std::string("IotAuthType"), iotAuthType);
}

std::string UploadIoTDataToBlockchainRequest::getIotIdServiceProvider() const {
  return iotIdServiceProvider_;
}

void UploadIoTDataToBlockchainRequest::setIotIdServiceProvider(const std::string &iotIdServiceProvider) {
  iotIdServiceProvider_ = iotIdServiceProvider;
  setParameter(std::string("IotIdServiceProvider"), iotIdServiceProvider);
}

