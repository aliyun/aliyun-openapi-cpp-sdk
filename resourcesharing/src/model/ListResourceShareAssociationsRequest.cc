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

#include <alibabacloud/resourcesharing/model/ListResourceShareAssociationsRequest.h>

using AlibabaCloud::ResourceSharing::Model::ListResourceShareAssociationsRequest;

ListResourceShareAssociationsRequest::ListResourceShareAssociationsRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "ListResourceShareAssociations") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceShareAssociationsRequest::~ListResourceShareAssociationsRequest() {}

std::string ListResourceShareAssociationsRequest::getNextToken() const {
  return nextToken_;
}

void ListResourceShareAssociationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListResourceShareAssociationsRequest::getResourceShareIds() const {
  return resourceShareIds_;
}

void ListResourceShareAssociationsRequest::setResourceShareIds(const std::vector<std::string> &resourceShareIds) {
  resourceShareIds_ = resourceShareIds;
}

std::string ListResourceShareAssociationsRequest::getResourceId() const {
  return resourceId_;
}

void ListResourceShareAssociationsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListResourceShareAssociationsRequest::getTarget() const {
  return target_;
}

void ListResourceShareAssociationsRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string ListResourceShareAssociationsRequest::getAssociationType() const {
  return associationType_;
}

void ListResourceShareAssociationsRequest::setAssociationType(const std::string &associationType) {
  associationType_ = associationType;
  setParameter(std::string("AssociationType"), associationType);
}

std::string ListResourceShareAssociationsRequest::getAssociationStatus() const {
  return associationStatus_;
}

void ListResourceShareAssociationsRequest::setAssociationStatus(const std::string &associationStatus) {
  associationStatus_ = associationStatus;
  setParameter(std::string("AssociationStatus"), associationStatus);
}

int ListResourceShareAssociationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListResourceShareAssociationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

