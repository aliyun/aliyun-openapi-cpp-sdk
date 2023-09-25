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

#include <alibabacloud/dataworks-public/model/AddMetaCollectionEntityRequest.h>

using AlibabaCloud::Dataworks_public::Model::AddMetaCollectionEntityRequest;

AddMetaCollectionEntityRequest::AddMetaCollectionEntityRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "AddMetaCollectionEntity") {
  setMethod(HttpRequest::Method::Post);
}

AddMetaCollectionEntityRequest::~AddMetaCollectionEntityRequest() {}

std::string AddMetaCollectionEntityRequest::getEntityQualifiedName() const {
  return entityQualifiedName_;
}

void AddMetaCollectionEntityRequest::setEntityQualifiedName(const std::string &entityQualifiedName) {
  entityQualifiedName_ = entityQualifiedName;
  setParameter(std::string("EntityQualifiedName"), entityQualifiedName);
}

std::string AddMetaCollectionEntityRequest::getRemark() const {
  return remark_;
}

void AddMetaCollectionEntityRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddMetaCollectionEntityRequest::getCollectionQualifiedName() const {
  return collectionQualifiedName_;
}

void AddMetaCollectionEntityRequest::setCollectionQualifiedName(const std::string &collectionQualifiedName) {
  collectionQualifiedName_ = collectionQualifiedName;
  setParameter(std::string("CollectionQualifiedName"), collectionQualifiedName);
}

