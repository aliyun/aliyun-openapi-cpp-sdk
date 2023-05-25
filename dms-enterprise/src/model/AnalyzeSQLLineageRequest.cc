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

#include <alibabacloud/dms-enterprise/model/AnalyzeSQLLineageRequest.h>

using AlibabaCloud::Dms_enterprise::Model::AnalyzeSQLLineageRequest;

AnalyzeSQLLineageRequest::AnalyzeSQLLineageRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "AnalyzeSQLLineage") {
  setMethod(HttpRequest::Method::Post);
}

AnalyzeSQLLineageRequest::~AnalyzeSQLLineageRequest() {}

std::string AnalyzeSQLLineageRequest::getSqlContent() const {
  return sqlContent_;
}

void AnalyzeSQLLineageRequest::setSqlContent(const std::string &sqlContent) {
  sqlContent_ = sqlContent;
  setParameter(std::string("SqlContent"), sqlContent);
}

long AnalyzeSQLLineageRequest::getTid() const {
  return tid_;
}

void AnalyzeSQLLineageRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long AnalyzeSQLLineageRequest::getDbId() const {
  return dbId_;
}

void AnalyzeSQLLineageRequest::setDbId(long dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), std::to_string(dbId));
}

