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

#include <alibabacloud/cc5g/model/RebindCardsRequest.h>

using AlibabaCloud::CC5G::Model::RebindCardsRequest;

RebindCardsRequest::RebindCardsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "RebindCards") {
  setMethod(HttpRequest::Method::Post);
}

RebindCardsRequest::~RebindCardsRequest() {}

std::vector<std::string> RebindCardsRequest::getIccids() const {
  return iccids_;
}

void RebindCardsRequest::setIccids(const std::vector<std::string> &iccids) {
  iccids_ = iccids;
}

bool RebindCardsRequest::getDryRun() const {
  return dryRun_;
}

void RebindCardsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RebindCardsRequest::getClientToken() const {
  return clientToken_;
}

void RebindCardsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RebindCardsRequest::getRegionId() const {
  return regionId_;
}

void RebindCardsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

