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

#include <alibabacloud/cc5g/model/FailCardsRequest.h>

using AlibabaCloud::CC5G::Model::FailCardsRequest;

FailCardsRequest::FailCardsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "FailCards") {
  setMethod(HttpRequest::Method::Post);
}

FailCardsRequest::~FailCardsRequest() {}

std::vector<std::string> FailCardsRequest::getIccids() const {
  return iccids_;
}

void FailCardsRequest::setIccids(const std::vector<std::string> &iccids) {
  iccids_ = iccids;
}

bool FailCardsRequest::getDryRun() const {
  return dryRun_;
}

void FailCardsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string FailCardsRequest::getClientToken() const {
  return clientToken_;
}

void FailCardsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string FailCardsRequest::getRegionId() const {
  return regionId_;
}

void FailCardsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

