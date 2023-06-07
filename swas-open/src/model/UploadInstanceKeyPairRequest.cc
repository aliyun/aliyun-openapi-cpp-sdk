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

#include <alibabacloud/swas-open/model/UploadInstanceKeyPairRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::UploadInstanceKeyPairRequest;

UploadInstanceKeyPairRequest::UploadInstanceKeyPairRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "UploadInstanceKeyPair") {
  setMethod(HttpRequest::Method::Post);
}

UploadInstanceKeyPairRequest::~UploadInstanceKeyPairRequest() {}

std::string UploadInstanceKeyPairRequest::getClientToken() const {
  return clientToken_;
}

void UploadInstanceKeyPairRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UploadInstanceKeyPairRequest::getPublicKey() const {
  return publicKey_;
}

void UploadInstanceKeyPairRequest::setPublicKey(const std::string &publicKey) {
  publicKey_ = publicKey;
  setParameter(std::string("PublicKey"), publicKey);
}

std::string UploadInstanceKeyPairRequest::getKeyPairName() const {
  return keyPairName_;
}

void UploadInstanceKeyPairRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string UploadInstanceKeyPairRequest::getInstanceId() const {
  return instanceId_;
}

void UploadInstanceKeyPairRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UploadInstanceKeyPairRequest::getRegionId() const {
  return regionId_;
}

void UploadInstanceKeyPairRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

