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

#include <alibabacloud/cc5g/model/LockCardsRequest.h>

using AlibabaCloud::CC5G::Model::LockCardsRequest;

LockCardsRequest::LockCardsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "LockCards") {
  setMethod(HttpRequest::Method::Post);
}

LockCardsRequest::~LockCardsRequest() {}

std::vector<std::string> LockCardsRequest::getIccids() const {
  return iccids_;
}

void LockCardsRequest::setIccids(const std::vector<std::string> &iccids) {
  iccids_ = iccids;
}

bool LockCardsRequest::getDryRun() const {
  return dryRun_;
}

void LockCardsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string LockCardsRequest::getClientToken() const {
  return clientToken_;
}

void LockCardsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string LockCardsRequest::getRegionId() const {
  return regionId_;
}

void LockCardsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

