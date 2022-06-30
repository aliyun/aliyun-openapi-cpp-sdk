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

#include <alibabacloud/apds/model/DeleteMigrationJobRequest.h>

using AlibabaCloud::Apds::Model::DeleteMigrationJobRequest;

DeleteMigrationJobRequest::DeleteMigrationJobRequest()
    : RoaServiceRequest("apds", "2022-03-31") {
  setResourcePath("/okss-services/migration-job/remove-migration-job"};
  setMethod(HttpRequest::Method::Post);
}

DeleteMigrationJobRequest::~DeleteMigrationJobRequest() {}

integer DeleteMigrationJobRequest::getId() const {
  return id_;
}

void DeleteMigrationJobRequest::setId(integer id) {
  id_ = id;
  setParameter(std::string("id"), std::to_string(id));
}

