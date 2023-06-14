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

#include <alibabacloud/ga/model/ListCommonAreasRequest.h>

using AlibabaCloud::Ga::Model::ListCommonAreasRequest;

ListCommonAreasRequest::ListCommonAreasRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListCommonAreas") {
  setMethod(HttpRequest::Method::Post);
}

ListCommonAreasRequest::~ListCommonAreasRequest() {}

bool ListCommonAreasRequest::getIsEpg() const {
  return isEpg_;
}

void ListCommonAreasRequest::setIsEpg(bool isEpg) {
  isEpg_ = isEpg;
  setParameter(std::string("IsEpg"), isEpg ? "true" : "false");
}

bool ListCommonAreasRequest::getIsIpSet() const {
  return isIpSet_;
}

void ListCommonAreasRequest::setIsIpSet(bool isIpSet) {
  isIpSet_ = isIpSet;
  setParameter(std::string("IsIpSet"), isIpSet ? "true" : "false");
}

std::string ListCommonAreasRequest::getIpVersion() const {
  return ipVersion_;
}

void ListCommonAreasRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

