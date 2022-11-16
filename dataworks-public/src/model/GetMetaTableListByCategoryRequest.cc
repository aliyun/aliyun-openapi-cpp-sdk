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

#include <alibabacloud/dataworks-public/model/GetMetaTableListByCategoryRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableListByCategoryRequest;

GetMetaTableListByCategoryRequest::GetMetaTableListByCategoryRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableListByCategory") {
  setMethod(HttpRequest::Method::Get);
}

GetMetaTableListByCategoryRequest::~GetMetaTableListByCategoryRequest() {}

int GetMetaTableListByCategoryRequest::getPageNumber() const {
  return pageNumber_;
}

void GetMetaTableListByCategoryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int GetMetaTableListByCategoryRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaTableListByCategoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long GetMetaTableListByCategoryRequest::getCategoryId() const {
  return categoryId_;
}

void GetMetaTableListByCategoryRequest::setCategoryId(long categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), std::to_string(categoryId));
}

