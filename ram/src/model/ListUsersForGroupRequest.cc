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

#include <alibabacloud/ram/model/ListUsersForGroupRequest.h>

using AlibabaCloud::Ram::Model::ListUsersForGroupRequest;

ListUsersForGroupRequest::ListUsersForGroupRequest()
    : RpcServiceRequest("ram", "2015-05-01", "ListUsersForGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListUsersForGroupRequest::~ListUsersForGroupRequest() {}

std::string ListUsersForGroupRequest::getGroupName() const {
  return groupName_;
}

void ListUsersForGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ListUsersForGroupRequest::getMarker() const {
  return marker_;
}

void ListUsersForGroupRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

int ListUsersForGroupRequest::getMaxItems() const {
  return maxItems_;
}

void ListUsersForGroupRequest::setMaxItems(int maxItems) {
  maxItems_ = maxItems;
  setParameter(std::string("MaxItems"), std::to_string(maxItems));
}

