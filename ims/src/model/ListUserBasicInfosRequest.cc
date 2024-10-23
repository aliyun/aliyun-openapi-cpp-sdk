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

#include <alibabacloud/ims/model/ListUserBasicInfosRequest.h>

using AlibabaCloud::Ims::Model::ListUserBasicInfosRequest;

ListUserBasicInfosRequest::ListUserBasicInfosRequest()
    : RpcServiceRequest("ims", "2019-08-15", "ListUserBasicInfos") {
  setMethod(HttpRequest::Method::Post);
}

ListUserBasicInfosRequest::~ListUserBasicInfosRequest() {}

std::string ListUserBasicInfosRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void ListUserBasicInfosRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::vector<ListUserBasicInfosRequest::Tag> ListUserBasicInfosRequest::getTag() const {
  return tag_;
}

void ListUserBasicInfosRequest::setTag(const std::vector<ListUserBasicInfosRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListUserBasicInfosRequest::getMarker() const {
  return marker_;
}

void ListUserBasicInfosRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

int ListUserBasicInfosRequest::getMaxItems() const {
  return maxItems_;
}

void ListUserBasicInfosRequest::setMaxItems(int maxItems) {
  maxItems_ = maxItems;
  setParameter(std::string("MaxItems"), std::to_string(maxItems));
}

std::string ListUserBasicInfosRequest::getStatus() const {
  return status_;
}

void ListUserBasicInfosRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

