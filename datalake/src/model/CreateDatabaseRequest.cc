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

#include <alibabacloud/datalake/model/CreateDatabaseRequest.h>

using AlibabaCloud::DataLake::Model::CreateDatabaseRequest;

CreateDatabaseRequest::CreateDatabaseRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases"};
  setMethod(HttpRequest::Method::Post);
}

CreateDatabaseRequest::~CreateDatabaseRequest() {}

std::string CreateDatabaseRequest::getBody() const {
  return body_;
}

void CreateDatabaseRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("Body"), body);
}

