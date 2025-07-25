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

#include <alibabacloud/eds-user/model/UserBatchJoinGroupRequest.h>

using AlibabaCloud::Eds_user::Model::UserBatchJoinGroupRequest;

UserBatchJoinGroupRequest::UserBatchJoinGroupRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "UserBatchJoinGroup") {
  setMethod(HttpRequest::Method::Post);
}

UserBatchJoinGroupRequest::~UserBatchJoinGroupRequest() {}

std::vector<std::string> UserBatchJoinGroupRequest::getEndUserIds() const {
  return endUserIds_;
}

void UserBatchJoinGroupRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::string UserBatchJoinGroupRequest::getGroupId() const {
  return groupId_;
}

void UserBatchJoinGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

