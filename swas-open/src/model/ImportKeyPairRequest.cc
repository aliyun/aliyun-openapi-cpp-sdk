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

#include <alibabacloud/swas-open/model/ImportKeyPairRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ImportKeyPairRequest;

ImportKeyPairRequest::ImportKeyPairRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ImportKeyPair") {
  setMethod(HttpRequest::Method::Post);
}

ImportKeyPairRequest::~ImportKeyPairRequest() {}

std::string ImportKeyPairRequest::getClientToken() const {
  return clientToken_;
}

void ImportKeyPairRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ImportKeyPairRequest::getPublicKeyBody() const {
  return publicKeyBody_;
}

void ImportKeyPairRequest::setPublicKeyBody(const std::string &publicKeyBody) {
  publicKeyBody_ = publicKeyBody;
  setParameter(std::string("PublicKeyBody"), publicKeyBody);
}

std::string ImportKeyPairRequest::getKeyPairName() const {
  return keyPairName_;
}

void ImportKeyPairRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string ImportKeyPairRequest::getRegionId() const {
  return regionId_;
}

void ImportKeyPairRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

