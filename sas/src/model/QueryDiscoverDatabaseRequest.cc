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

#include <alibabacloud/sas/model/QueryDiscoverDatabaseRequest.h>

using AlibabaCloud::Sas::Model::QueryDiscoverDatabaseRequest;

QueryDiscoverDatabaseRequest::QueryDiscoverDatabaseRequest()
    : RpcServiceRequest("sas", "2018-12-03", "QueryDiscoverDatabase") {
  setMethod(HttpRequest::Method::Post);
}

QueryDiscoverDatabaseRequest::~QueryDiscoverDatabaseRequest() {}

long QueryDiscoverDatabaseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryDiscoverDatabaseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryDiscoverDatabaseRequest::getSourceIp() const {
  return sourceIp_;
}

void QueryDiscoverDatabaseRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string QueryDiscoverDatabaseRequest::getCreateMark() const {
  return createMark_;
}

void QueryDiscoverDatabaseRequest::setCreateMark(const std::string &createMark) {
  createMark_ = createMark;
  setParameter(std::string("CreateMark"), createMark);
}

