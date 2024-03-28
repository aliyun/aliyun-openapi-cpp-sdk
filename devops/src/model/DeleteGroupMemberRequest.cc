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

#include <alibabacloud/devops/model/DeleteGroupMemberRequest.h>

using AlibabaCloud::Devops::Model::DeleteGroupMemberRequest;

DeleteGroupMemberRequest::DeleteGroupMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/groups/[groupId]/members/remove/aliyun_pk"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteGroupMemberRequest::~DeleteGroupMemberRequest() {}

std::string DeleteGroupMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteGroupMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string DeleteGroupMemberRequest::getAliyunPk() const {
  return aliyunPk_;
}

void DeleteGroupMemberRequest::setAliyunPk(const std::string &aliyunPk) {
  aliyunPk_ = aliyunPk;
  setParameter(std::string("aliyunPk"), aliyunPk);
}

long DeleteGroupMemberRequest::getGroupId() const {
  return groupId_;
}

void DeleteGroupMemberRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), std::to_string(groupId));
}

std::string DeleteGroupMemberRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteGroupMemberRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

DeleteGroupMemberRequest::body DeleteGroupMemberRequest::getBody() const {
  return body_;
}

void DeleteGroupMemberRequest::setBody(const DeleteGroupMemberRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".memberType", body.memberType);
}

