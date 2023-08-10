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

#include <alibabacloud/adcp/model/DeleteUserPermissionRequest.h>

using AlibabaCloud::Adcp::Model::DeleteUserPermissionRequest;

DeleteUserPermissionRequest::DeleteUserPermissionRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DeleteUserPermission") {
  setMethod(HttpRequest::Method::Post);
}

DeleteUserPermissionRequest::~DeleteUserPermissionRequest() {}

std::string DeleteUserPermissionRequest::getUserId() const {
  return userId_;
}

void DeleteUserPermissionRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string DeleteUserPermissionRequest::getClusterId() const {
  return clusterId_;
}

void DeleteUserPermissionRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

