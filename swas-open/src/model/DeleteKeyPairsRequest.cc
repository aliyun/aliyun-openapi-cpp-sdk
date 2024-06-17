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

#include <alibabacloud/swas-open/model/DeleteKeyPairsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DeleteKeyPairsRequest;

DeleteKeyPairsRequest::DeleteKeyPairsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DeleteKeyPairs") {
  setMethod(HttpRequest::Method::Post);
}

DeleteKeyPairsRequest::~DeleteKeyPairsRequest() {}

std::string DeleteKeyPairsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteKeyPairsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DeleteKeyPairsRequest::getKeyPairNames() const {
  return keyPairNames_;
}

void DeleteKeyPairsRequest::setKeyPairNames(const std::vector<std::string> &keyPairNames) {
  keyPairNames_ = keyPairNames;
}

std::string DeleteKeyPairsRequest::getRegionId() const {
  return regionId_;
}

void DeleteKeyPairsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

