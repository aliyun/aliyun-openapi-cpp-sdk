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

#include <alibabacloud/datalake/model/DeleteDatabaseRequest.h>

using AlibabaCloud::DataLake::Model::DeleteDatabaseRequest;

DeleteDatabaseRequest::DeleteDatabaseRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteDatabaseRequest::~DeleteDatabaseRequest() {}

bool DeleteDatabaseRequest::getAsync() const {
  return async_;
}

void DeleteDatabaseRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

std::string DeleteDatabaseRequest::getCatalogId() const {
  return catalogId_;
}

void DeleteDatabaseRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

bool DeleteDatabaseRequest::getCascade() const {
  return cascade_;
}

void DeleteDatabaseRequest::setCascade(bool cascade) {
  cascade_ = cascade;
  setParameter(std::string("Cascade"), cascade ? "true" : "false");
}

std::string DeleteDatabaseRequest::getName() const {
  return name_;
}

void DeleteDatabaseRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

