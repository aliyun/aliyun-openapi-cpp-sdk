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

#include <alibabacloud/devops/model/UpdateGroupMemberRequest.h>

using AlibabaCloud::Devops::Model::UpdateGroupMemberRequest;

UpdateGroupMemberRequest::UpdateGroupMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/groups/[groupId]/members/update/aliyun_pk"};
  setMethod(HttpRequest::Method::Put);
}

UpdateGroupMemberRequest::~UpdateGroupMemberRequest() {}

std::string UpdateGroupMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateGroupMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateGroupMemberRequest::getAliyunPk() const {
  return aliyunPk_;
}

void UpdateGroupMemberRequest::setAliyunPk(const std::string &aliyunPk) {
  aliyunPk_ = aliyunPk;
  setParameter(std::string("aliyunPk"), aliyunPk);
}

long UpdateGroupMemberRequest::getGroupId() const {
  return groupId_;
}

void UpdateGroupMemberRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), std::to_string(groupId));
}

std::string UpdateGroupMemberRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateGroupMemberRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdateGroupMemberRequest::body UpdateGroupMemberRequest::getBody() const {
  return body_;
}

void UpdateGroupMemberRequest::setBody(const UpdateGroupMemberRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".accessLevel", std::to_string(body.accessLevel));
  setBodyParameter(std::string("body") + ".memberType", body.memberType);
}

