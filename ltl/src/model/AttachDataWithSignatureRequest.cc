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

#include <alibabacloud/ltl/model/AttachDataWithSignatureRequest.h>

using AlibabaCloud::Ltl::Model::AttachDataWithSignatureRequest;

AttachDataWithSignatureRequest::AttachDataWithSignatureRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "AttachDataWithSignature") {
  setMethod(HttpRequest::Method::Post);
}

AttachDataWithSignatureRequest::~AttachDataWithSignatureRequest() {}

std::string AttachDataWithSignatureRequest::getIotSignature() const {
  return iotSignature_;
}

void AttachDataWithSignatureRequest::setIotSignature(const std::string &iotSignature) {
  iotSignature_ = iotSignature;
  setParameter(std::string("IotSignature"), iotSignature);
}

std::string AttachDataWithSignatureRequest::getIotAuthType() const {
  return iotAuthType_;
}

void AttachDataWithSignatureRequest::setIotAuthType(const std::string &iotAuthType) {
  iotAuthType_ = iotAuthType;
  setParameter(std::string("IotAuthType"), iotAuthType);
}

std::string AttachDataWithSignatureRequest::getIotIdSource() const {
  return iotIdSource_;
}

void AttachDataWithSignatureRequest::setIotIdSource(const std::string &iotIdSource) {
  iotIdSource_ = iotIdSource;
  setParameter(std::string("IotIdSource"), iotIdSource);
}

std::string AttachDataWithSignatureRequest::getBusinessId() const {
  return businessId_;
}

void AttachDataWithSignatureRequest::setBusinessId(const std::string &businessId) {
  businessId_ = businessId;
  setParameter(std::string("BusinessId"), businessId);
}

std::string AttachDataWithSignatureRequest::getApiVersion() const {
  return apiVersion_;
}

void AttachDataWithSignatureRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string AttachDataWithSignatureRequest::getProductKey() const {
  return productKey_;
}

void AttachDataWithSignatureRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string AttachDataWithSignatureRequest::getIotId() const {
  return iotId_;
}

void AttachDataWithSignatureRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string AttachDataWithSignatureRequest::getIotDataDigest() const {
  return iotDataDigest_;
}

void AttachDataWithSignatureRequest::setIotDataDigest(const std::string &iotDataDigest) {
  iotDataDigest_ = iotDataDigest;
  setParameter(std::string("IotDataDigest"), iotDataDigest);
}

std::string AttachDataWithSignatureRequest::getIotIdServiceProvider() const {
  return iotIdServiceProvider_;
}

void AttachDataWithSignatureRequest::setIotIdServiceProvider(const std::string &iotIdServiceProvider) {
  iotIdServiceProvider_ = iotIdServiceProvider;
  setParameter(std::string("IotIdServiceProvider"), iotIdServiceProvider);
}

std::string AttachDataWithSignatureRequest::getValue() const {
  return value_;
}

void AttachDataWithSignatureRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string AttachDataWithSignatureRequest::getKey() const {
  return key_;
}

void AttachDataWithSignatureRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

