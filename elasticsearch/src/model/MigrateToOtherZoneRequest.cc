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

#include <alibabacloud/elasticsearch/model/MigrateToOtherZoneRequest.h>

using AlibabaCloud::Elasticsearch::Model::MigrateToOtherZoneRequest;

MigrateToOtherZoneRequest::MigrateToOtherZoneRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/actions/migrate-zones"};
  setMethod(HttpRequest::Method::Post);
}

MigrateToOtherZoneRequest::~MigrateToOtherZoneRequest() {}

std::string MigrateToOtherZoneRequest::getInstanceId() const {
  return instanceId_;
}

void MigrateToOtherZoneRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool MigrateToOtherZoneRequest::getDryRun() const {
  return dryRun_;
}

void MigrateToOtherZoneRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("dryRun"), dryRun ? "true" : "false");
}

std::string MigrateToOtherZoneRequest::getBody() const {
  return body_;
}

void MigrateToOtherZoneRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

