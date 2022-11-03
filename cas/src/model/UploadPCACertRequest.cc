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

#include <alibabacloud/cas/model/UploadPCACertRequest.h>

using AlibabaCloud::Cas::Model::UploadPCACertRequest;

UploadPCACertRequest::UploadPCACertRequest()
    : RpcServiceRequest("cas", "2020-04-07", "UploadPCACert") {
  setMethod(HttpRequest::Method::Post);
}

UploadPCACertRequest::~UploadPCACertRequest() {}

std::string UploadPCACertRequest::getCert() const {
  return cert_;
}

void UploadPCACertRequest::setCert(const std::string &cert) {
  cert_ = cert;
  setParameter(std::string("Cert"), cert);
}

std::string UploadPCACertRequest::getPrivateKey() const {
  return privateKey_;
}

void UploadPCACertRequest::setPrivateKey(const std::string &privateKey) {
  privateKey_ = privateKey;
  setParameter(std::string("PrivateKey"), privateKey);
}

std::string UploadPCACertRequest::getSourceIp() const {
  return sourceIp_;
}

void UploadPCACertRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long UploadPCACertRequest::getWarehouseId() const {
  return warehouseId_;
}

void UploadPCACertRequest::setWarehouseId(long warehouseId) {
  warehouseId_ = warehouseId;
  setParameter(std::string("WarehouseId"), std::to_string(warehouseId));
}

std::string UploadPCACertRequest::getName() const {
  return name_;
}

void UploadPCACertRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

