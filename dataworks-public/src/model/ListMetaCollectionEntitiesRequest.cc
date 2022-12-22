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

#include <alibabacloud/dataworks-public/model/ListMetaCollectionEntitiesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListMetaCollectionEntitiesRequest;

ListMetaCollectionEntitiesRequest::ListMetaCollectionEntitiesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListMetaCollectionEntities") {
  setMethod(HttpRequest::Method::Post);
}

ListMetaCollectionEntitiesRequest::~ListMetaCollectionEntitiesRequest() {}

std::string ListMetaCollectionEntitiesRequest::getCollectionQualifiedName() const {
  return collectionQualifiedName_;
}

void ListMetaCollectionEntitiesRequest::setCollectionQualifiedName(const std::string &collectionQualifiedName) {
  collectionQualifiedName_ = collectionQualifiedName;
  setParameter(std::string("CollectionQualifiedName"), collectionQualifiedName);
}

std::string ListMetaCollectionEntitiesRequest::getEntityType() const {
  return entityType_;
}

void ListMetaCollectionEntitiesRequest::setEntityType(const std::string &entityType) {
  entityType_ = entityType;
  setParameter(std::string("EntityType"), entityType);
}

std::string ListMetaCollectionEntitiesRequest::getNextToken() const {
  return nextToken_;
}

void ListMetaCollectionEntitiesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListMetaCollectionEntitiesRequest::getPageSize() const {
  return pageSize_;
}

void ListMetaCollectionEntitiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMetaCollectionEntitiesRequest::getKeyword() const {
  return keyword_;
}

void ListMetaCollectionEntitiesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

