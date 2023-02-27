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

#include <alibabacloud/ice/model/AddCategoryRequest.h>

using AlibabaCloud::ICE::Model::AddCategoryRequest;

AddCategoryRequest::AddCategoryRequest()
    : RpcServiceRequest("ice", "2020-11-09", "AddCategory") {
  setMethod(HttpRequest::Method::Post);
}

AddCategoryRequest::~AddCategoryRequest() {}

std::string AddCategoryRequest::getType() const {
  return type_;
}

void AddCategoryRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

long AddCategoryRequest::getParentId() const {
  return parentId_;
}

void AddCategoryRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), std::to_string(parentId));
}

std::string AddCategoryRequest::getBiz() const {
  return biz_;
}

void AddCategoryRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

std::string AddCategoryRequest::getCateName() const {
  return cateName_;
}

void AddCategoryRequest::setCateName(const std::string &cateName) {
  cateName_ = cateName;
  setParameter(std::string("CateName"), cateName);
}

