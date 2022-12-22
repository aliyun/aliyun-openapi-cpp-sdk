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

#include <alibabacloud/dataworks-public/model/CreateMetaCollectionRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateMetaCollectionRequest;

CreateMetaCollectionRequest::CreateMetaCollectionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateMetaCollection") {
  setMethod(HttpRequest::Method::Post);
}

CreateMetaCollectionRequest::~CreateMetaCollectionRequest() {}

std::string CreateMetaCollectionRequest::getParentQualifiedName() const {
  return parentQualifiedName_;
}

void CreateMetaCollectionRequest::setParentQualifiedName(const std::string &parentQualifiedName) {
  parentQualifiedName_ = parentQualifiedName;
  setParameter(std::string("ParentQualifiedName"), parentQualifiedName);
}

std::string CreateMetaCollectionRequest::getCollectionType() const {
  return collectionType_;
}

void CreateMetaCollectionRequest::setCollectionType(const std::string &collectionType) {
  collectionType_ = collectionType;
  setParameter(std::string("CollectionType"), collectionType);
}

std::string CreateMetaCollectionRequest::getName() const {
  return name_;
}

void CreateMetaCollectionRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateMetaCollectionRequest::getComment() const {
  return comment_;
}

void CreateMetaCollectionRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

