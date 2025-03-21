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

#include <alibabacloud/eiam/model/RevokeApplicationFromUsersRequest.h>

using AlibabaCloud::Eiam::Model::RevokeApplicationFromUsersRequest;

RevokeApplicationFromUsersRequest::RevokeApplicationFromUsersRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "RevokeApplicationFromUsers") {
  setMethod(HttpRequest::Method::Post);
}

RevokeApplicationFromUsersRequest::~RevokeApplicationFromUsersRequest() {}

std::string RevokeApplicationFromUsersRequest::getApplicationId() const {
  return applicationId_;
}

void RevokeApplicationFromUsersRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string RevokeApplicationFromUsersRequest::getInstanceId() const {
  return instanceId_;
}

void RevokeApplicationFromUsersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<RevokeApplicationFromUsersRequest::std::string> RevokeApplicationFromUsersRequest::getUserIds() const {
  return userIds_;
}

void RevokeApplicationFromUsersRequest::setUserIds(const std::vector<RevokeApplicationFromUsersRequest::std::string> &userIds) {
  userIds_ = userIds;
  for(int dep1 = 0; dep1 != userIds.size(); dep1++) {
    setParameter(std::string("UserIds") + "." + std::to_string(dep1 + 1), userIds[dep1]);
  }
}

