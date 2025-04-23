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

#include <alibabacloud/eds-user/model/BatchSetDesktopManagerRequest.h>

using AlibabaCloud::Eds_user::Model::BatchSetDesktopManagerRequest;

BatchSetDesktopManagerRequest::BatchSetDesktopManagerRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "BatchSetDesktopManager") {
  setMethod(HttpRequest::Method::Post);
}

BatchSetDesktopManagerRequest::~BatchSetDesktopManagerRequest() {}

std::string BatchSetDesktopManagerRequest::getIsDesktopManager() const {
  return isDesktopManager_;
}

void BatchSetDesktopManagerRequest::setIsDesktopManager(const std::string &isDesktopManager) {
  isDesktopManager_ = isDesktopManager;
  setBodyParameter(std::string("IsDesktopManager"), isDesktopManager);
}

std::vector<std::string> BatchSetDesktopManagerRequest::getUsers() const {
  return users_;
}

void BatchSetDesktopManagerRequest::setUsers(const std::vector<std::string> &users) {
  users_ = users;
}

