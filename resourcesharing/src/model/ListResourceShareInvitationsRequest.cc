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

#include <alibabacloud/resourcesharing/model/ListResourceShareInvitationsRequest.h>

using AlibabaCloud::ResourceSharing::Model::ListResourceShareInvitationsRequest;

ListResourceShareInvitationsRequest::ListResourceShareInvitationsRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "ListResourceShareInvitations") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceShareInvitationsRequest::~ListResourceShareInvitationsRequest() {}

std::vector<std::string> ListResourceShareInvitationsRequest::getResourceShareInvitationIds() const {
  return resourceShareInvitationIds_;
}

void ListResourceShareInvitationsRequest::setResourceShareInvitationIds(const std::vector<std::string> &resourceShareInvitationIds) {
  resourceShareInvitationIds_ = resourceShareInvitationIds;
}

std::string ListResourceShareInvitationsRequest::getNextToken() const {
  return nextToken_;
}

void ListResourceShareInvitationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListResourceShareInvitationsRequest::getResourceShareIds() const {
  return resourceShareIds_;
}

void ListResourceShareInvitationsRequest::setResourceShareIds(const std::vector<std::string> &resourceShareIds) {
  resourceShareIds_ = resourceShareIds;
}

int ListResourceShareInvitationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListResourceShareInvitationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

