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

#include <alibabacloud/ims/model/ListGroupsRequest.h>

using AlibabaCloud::Ims::Model::ListGroupsRequest;

ListGroupsRequest::ListGroupsRequest()
    : RpcServiceRequest("ims", "2019-08-15", "ListGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListGroupsRequest::~ListGroupsRequest() {}

std::string ListGroupsRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void ListGroupsRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string ListGroupsRequest::getMarker() const {
  return marker_;
}

void ListGroupsRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

int ListGroupsRequest::getMaxItems() const {
  return maxItems_;
}

void ListGroupsRequest::setMaxItems(int maxItems) {
  maxItems_ = maxItems;
  setParameter(std::string("MaxItems"), std::to_string(maxItems));
}

