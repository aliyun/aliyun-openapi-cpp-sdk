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

#include <alibabacloud/devops/model/ListOrganizationMembersRequest.h>

using AlibabaCloud::Devops::Model::ListOrganizationMembersRequest;

ListOrganizationMembersRequest::ListOrganizationMembersRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/members"};
  setMethod(HttpRequest::Method::Get);
}

ListOrganizationMembersRequest::~ListOrganizationMembersRequest() {}

std::string ListOrganizationMembersRequest::getExternUid() const {
  return externUid_;
}

void ListOrganizationMembersRequest::setExternUid(const std::string &externUid) {
  externUid_ = externUid;
  setParameter(std::string("externUid"), externUid);
}

std::string ListOrganizationMembersRequest::getOrganizationId() const {
  return organizationId_;
}

void ListOrganizationMembersRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListOrganizationMembersRequest::getOrganizationMemberName() const {
  return organizationMemberName_;
}

void ListOrganizationMembersRequest::setOrganizationMemberName(const std::string &organizationMemberName) {
  organizationMemberName_ = organizationMemberName;
  setParameter(std::string("organizationMemberName"), organizationMemberName);
}

long ListOrganizationMembersRequest::getJoinTimeFrom() const {
  return joinTimeFrom_;
}

void ListOrganizationMembersRequest::setJoinTimeFrom(long joinTimeFrom) {
  joinTimeFrom_ = joinTimeFrom;
  setParameter(std::string("joinTimeFrom"), std::to_string(joinTimeFrom));
}

std::string ListOrganizationMembersRequest::getProvider() const {
  return provider_;
}

void ListOrganizationMembersRequest::setProvider(const std::string &provider) {
  provider_ = provider;
  setParameter(std::string("provider"), provider);
}

std::string ListOrganizationMembersRequest::getNextToken() const {
  return nextToken_;
}

void ListOrganizationMembersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

long ListOrganizationMembersRequest::getJoinTimeTo() const {
  return joinTimeTo_;
}

void ListOrganizationMembersRequest::setJoinTimeTo(long joinTimeTo) {
  joinTimeTo_ = joinTimeTo;
  setParameter(std::string("joinTimeTo"), std::to_string(joinTimeTo));
}

long ListOrganizationMembersRequest::getMaxResults() const {
  return maxResults_;
}

void ListOrganizationMembersRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

std::string ListOrganizationMembersRequest::getState() const {
  return state_;
}

void ListOrganizationMembersRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("state"), state);
}

bool ListOrganizationMembersRequest::getContainsExternInfo() const {
  return containsExternInfo_;
}

void ListOrganizationMembersRequest::setContainsExternInfo(bool containsExternInfo) {
  containsExternInfo_ = containsExternInfo;
  setParameter(std::string("containsExternInfo"), containsExternInfo ? "true" : "false");
}

