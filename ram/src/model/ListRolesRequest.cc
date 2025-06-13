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

#include <alibabacloud/ram/model/ListRolesRequest.h>

using AlibabaCloud::Ram::Model::ListRolesRequest;

ListRolesRequest::ListRolesRequest()
    : RpcServiceRequest("ram", "2015-05-01", "ListRoles") {
  setMethod(HttpRequest::Method::Post);
}

ListRolesRequest::~ListRolesRequest() {}

std::vector<ListRolesRequest::Tag> ListRolesRequest::getTag() const {
  return tag_;
}

void ListRolesRequest::setTag(const std::vector<ListRolesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string ListRolesRequest::getMarker() const {
  return marker_;
}

void ListRolesRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

int ListRolesRequest::getMaxItems() const {
  return maxItems_;
}

void ListRolesRequest::setMaxItems(int maxItems) {
  maxItems_ = maxItems;
  setParameter(std::string("MaxItems"), std::to_string(maxItems));
}

