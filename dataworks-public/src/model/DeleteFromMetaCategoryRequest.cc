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

#include <alibabacloud/dataworks-public/model/DeleteFromMetaCategoryRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteFromMetaCategoryRequest;

DeleteFromMetaCategoryRequest::DeleteFromMetaCategoryRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteFromMetaCategory") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFromMetaCategoryRequest::~DeleteFromMetaCategoryRequest() {}

std::string DeleteFromMetaCategoryRequest::getTableGuid() const {
  return tableGuid_;
}

void DeleteFromMetaCategoryRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

long DeleteFromMetaCategoryRequest::getCategoryId() const {
  return categoryId_;
}

void DeleteFromMetaCategoryRequest::setCategoryId(long categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), std::to_string(categoryId));
}

