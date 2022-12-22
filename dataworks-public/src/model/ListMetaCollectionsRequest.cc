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

#include <alibabacloud/dataworks-public/model/ListMetaCollectionsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListMetaCollectionsRequest;

ListMetaCollectionsRequest::ListMetaCollectionsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListMetaCollections") {
  setMethod(HttpRequest::Method::Post);
}

ListMetaCollectionsRequest::~ListMetaCollectionsRequest() {}

std::string ListMetaCollectionsRequest::getCreator() const {
  return creator_;
}

void ListMetaCollectionsRequest::setCreator(const std::string &creator) {
  creator_ = creator;
  setParameter(std::string("Creator"), creator);
}

std::string ListMetaCollectionsRequest::getFollower() const {
  return follower_;
}

void ListMetaCollectionsRequest::setFollower(const std::string &follower) {
  follower_ = follower;
  setParameter(std::string("Follower"), follower);
}

std::string ListMetaCollectionsRequest::getParentQualifiedName() const {
  return parentQualifiedName_;
}

void ListMetaCollectionsRequest::setParentQualifiedName(const std::string &parentQualifiedName) {
  parentQualifiedName_ = parentQualifiedName;
  setParameter(std::string("ParentQualifiedName"), parentQualifiedName);
}

std::string ListMetaCollectionsRequest::getOrderBy() const {
  return orderBy_;
}

void ListMetaCollectionsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListMetaCollectionsRequest::getCollectionType() const {
  return collectionType_;
}

void ListMetaCollectionsRequest::setCollectionType(const std::string &collectionType) {
  collectionType_ = collectionType;
  setParameter(std::string("CollectionType"), collectionType);
}

std::string ListMetaCollectionsRequest::getAdministrator() const {
  return administrator_;
}

void ListMetaCollectionsRequest::setAdministrator(const std::string &administrator) {
  administrator_ = administrator;
  setParameter(std::string("Administrator"), administrator);
}

std::string ListMetaCollectionsRequest::getNextToken() const {
  return nextToken_;
}

void ListMetaCollectionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListMetaCollectionsRequest::getPageSize() const {
  return pageSize_;
}

void ListMetaCollectionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMetaCollectionsRequest::getKeyword() const {
  return keyword_;
}

void ListMetaCollectionsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

