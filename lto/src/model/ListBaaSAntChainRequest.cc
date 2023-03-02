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

#include <alibabacloud/lto/model/ListBaaSAntChainRequest.h>

using AlibabaCloud::Lto::Model::ListBaaSAntChainRequest;

ListBaaSAntChainRequest::ListBaaSAntChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListBaaSAntChain") {
  setMethod(HttpRequest::Method::Post);
}

ListBaaSAntChainRequest::~ListBaaSAntChainRequest() {}

std::string ListBaaSAntChainRequest::getBaaSAntChainConsortiumId() const {
  return baaSAntChainConsortiumId_;
}

void ListBaaSAntChainRequest::setBaaSAntChainConsortiumId(const std::string &baaSAntChainConsortiumId) {
  baaSAntChainConsortiumId_ = baaSAntChainConsortiumId;
  setParameter(std::string("BaaSAntChainConsortiumId"), baaSAntChainConsortiumId);
}

std::string ListBaaSAntChainRequest::getRegionId() const {
  return regionId_;
}

void ListBaaSAntChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

