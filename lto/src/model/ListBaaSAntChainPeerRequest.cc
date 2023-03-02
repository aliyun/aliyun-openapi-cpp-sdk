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

#include <alibabacloud/lto/model/ListBaaSAntChainPeerRequest.h>

using AlibabaCloud::Lto::Model::ListBaaSAntChainPeerRequest;

ListBaaSAntChainPeerRequest::ListBaaSAntChainPeerRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListBaaSAntChainPeer") {
  setMethod(HttpRequest::Method::Post);
}

ListBaaSAntChainPeerRequest::~ListBaaSAntChainPeerRequest() {}

std::string ListBaaSAntChainPeerRequest::getBaaSAntChainConsortiumId() const {
  return baaSAntChainConsortiumId_;
}

void ListBaaSAntChainPeerRequest::setBaaSAntChainConsortiumId(const std::string &baaSAntChainConsortiumId) {
  baaSAntChainConsortiumId_ = baaSAntChainConsortiumId;
  setParameter(std::string("BaaSAntChainConsortiumId"), baaSAntChainConsortiumId);
}

std::string ListBaaSAntChainPeerRequest::getBaaSAntChainChainId() const {
  return baaSAntChainChainId_;
}

void ListBaaSAntChainPeerRequest::setBaaSAntChainChainId(const std::string &baaSAntChainChainId) {
  baaSAntChainChainId_ = baaSAntChainChainId;
  setParameter(std::string("BaaSAntChainChainId"), baaSAntChainChainId);
}

std::string ListBaaSAntChainPeerRequest::getRegionId() const {
  return regionId_;
}

void ListBaaSAntChainPeerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

