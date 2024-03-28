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

#include <alibabacloud/devops/model/AddGroupMemberRequest.h>

using AlibabaCloud::Devops::Model::AddGroupMemberRequest;

AddGroupMemberRequest::AddGroupMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/groups/[groupId]/members/create"};
  setMethod(HttpRequest::Method::Post);
}

AddGroupMemberRequest::~AddGroupMemberRequest() {}

std::string AddGroupMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void AddGroupMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long AddGroupMemberRequest::getGroupId() const {
  return groupId_;
}

void AddGroupMemberRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), std::to_string(groupId));
}

std::string AddGroupMemberRequest::getAccessToken() const {
  return accessToken_;
}

void AddGroupMemberRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

AddGroupMemberRequest::body AddGroupMemberRequest::getBody() const {
  return body_;
}

void AddGroupMemberRequest::setBody(const AddGroupMemberRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".accessLevel", std::to_string(body.accessLevel));
  setBodyParameter(std::string("body") + ".aliyunPks", body.aliyunPks);
}

