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

#include <alibabacloud/dms-enterprise/model/CreateLogicDatabaseRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateLogicDatabaseRequest;

CreateLogicDatabaseRequest::CreateLogicDatabaseRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateLogicDatabase") {
  setMethod(HttpRequest::Method::Post);
}

CreateLogicDatabaseRequest::~CreateLogicDatabaseRequest() {}

long CreateLogicDatabaseRequest::getTid() const {
  return tid_;
}

void CreateLogicDatabaseRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateLogicDatabaseRequest::getAlias() const {
  return alias_;
}

void CreateLogicDatabaseRequest::setAlias(const std::string &alias) {
  alias_ = alias;
  setParameter(std::string("Alias"), alias);
}

std::vector<CreateLogicDatabaseRequest::long> CreateLogicDatabaseRequest::getDatabaseIds() const {
  return databaseIds_;
}

void CreateLogicDatabaseRequest::setDatabaseIds(const std::vector<CreateLogicDatabaseRequest::long> &databaseIds) {
  databaseIds_ = databaseIds;
  for(int dep1 = 0; dep1 != databaseIds.size(); dep1++) {
    setParameter(std::string("DatabaseIds") + "." + std::to_string(dep1 + 1), std::to_string(databaseIds[dep1]));
  }
}

