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

#include <alibabacloud/datalake/model/DeleteCatalogRequest.h>

using AlibabaCloud::DataLake::Model::DeleteCatalogRequest;

DeleteCatalogRequest::DeleteCatalogRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteCatalogRequest::~DeleteCatalogRequest() {}

std::string DeleteCatalogRequest::getCatalogId() const {
  return catalogId_;
}

void DeleteCatalogRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

bool DeleteCatalogRequest::getIsAsync() const {
  return isAsync_;
}

void DeleteCatalogRequest::setIsAsync(bool isAsync) {
  isAsync_ = isAsync;
  setParameter(std::string("IsAsync"), isAsync ? "true" : "false");
}

