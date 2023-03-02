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

#include <alibabacloud/swas-open/model/AllocatePublicConnectionRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::AllocatePublicConnectionRequest;

AllocatePublicConnectionRequest::AllocatePublicConnectionRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "AllocatePublicConnection") {
  setMethod(HttpRequest::Method::Post);
}

AllocatePublicConnectionRequest::~AllocatePublicConnectionRequest() {}

std::string AllocatePublicConnectionRequest::getClientToken() const {
  return clientToken_;
}

void AllocatePublicConnectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocatePublicConnectionRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void AllocatePublicConnectionRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string AllocatePublicConnectionRequest::getRegionId() const {
  return regionId_;
}

void AllocatePublicConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

