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

#include <alibabacloud/live/model/UpdateMessageGroupRequest.h>

using AlibabaCloud::Live::Model::UpdateMessageGroupRequest;

UpdateMessageGroupRequest::UpdateMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMessageGroupRequest::~UpdateMessageGroupRequest() {}

std::map<std::string, std::string> UpdateMessageGroupRequest::getExtension() const {
  return extension_;
}

void UpdateMessageGroupRequest::setExtension(const std::map<std::string, std::string> &extension) {
  extension_ = extension;
  for(auto const &iter1 : extension) {
    setBodyParameter(std::string("Extension") + "." + iter1.first, iter1.second);
  }
}

std::string UpdateMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void UpdateMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string UpdateMessageGroupRequest::getAppId() const {
  return appId_;
}

void UpdateMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

