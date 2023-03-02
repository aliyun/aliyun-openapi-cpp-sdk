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

#include <alibabacloud/ltl/model/SetDataWithSignatureRequest.h>

using AlibabaCloud::Ltl::Model::SetDataWithSignatureRequest;

SetDataWithSignatureRequest::SetDataWithSignatureRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "SetDataWithSignature") {
  setMethod(HttpRequest::Method::Post);
}

SetDataWithSignatureRequest::~SetDataWithSignatureRequest() {}

std::string SetDataWithSignatureRequest::getIotSignature() const {
  return iotSignature_;
}

void SetDataWithSignatureRequest::setIotSignature(const std::string &iotSignature) {
  iotSignature_ = iotSignature;
  setParameter(std::string("IotSignature"), iotSignature);
}

std::string SetDataWithSignatureRequest::getIotAuthType() const {
  return iotAuthType_;
}

void SetDataWithSignatureRequest::setIotAuthType(const std::string &iotAuthType) {
  iotAuthType_ = iotAuthType;
  setParameter(std::string("IotAuthType"), iotAuthType);
}

std::string SetDataWithSignatureRequest::getIotIdSource() const {
  return iotIdSource_;
}

void SetDataWithSignatureRequest::setIotIdSource(const std::string &iotIdSource) {
  iotIdSource_ = iotIdSource;
  setParameter(std::string("IotIdSource"), iotIdSource);
}

std::string SetDataWithSignatureRequest::getApiVersion() const {
  return apiVersion_;
}

void SetDataWithSignatureRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string SetDataWithSignatureRequest::getProductKey() const {
  return productKey_;
}

void SetDataWithSignatureRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string SetDataWithSignatureRequest::getIotId() const {
  return iotId_;
}

void SetDataWithSignatureRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string SetDataWithSignatureRequest::getIotDataDigest() const {
  return iotDataDigest_;
}

void SetDataWithSignatureRequest::setIotDataDigest(const std::string &iotDataDigest) {
  iotDataDigest_ = iotDataDigest;
  setParameter(std::string("IotDataDigest"), iotDataDigest);
}

std::string SetDataWithSignatureRequest::getIotIdServiceProvider() const {
  return iotIdServiceProvider_;
}

void SetDataWithSignatureRequest::setIotIdServiceProvider(const std::string &iotIdServiceProvider) {
  iotIdServiceProvider_ = iotIdServiceProvider;
  setParameter(std::string("IotIdServiceProvider"), iotIdServiceProvider);
}

std::string SetDataWithSignatureRequest::getValue() const {
  return value_;
}

void SetDataWithSignatureRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string SetDataWithSignatureRequest::getKey() const {
  return key_;
}

void SetDataWithSignatureRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

