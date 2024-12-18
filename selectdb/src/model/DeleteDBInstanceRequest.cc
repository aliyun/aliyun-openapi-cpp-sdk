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

#include <alibabacloud/selectdb/model/DeleteDBInstanceRequest.h>

using AlibabaCloud::Selectdb::Model::DeleteDBInstanceRequest;

DeleteDBInstanceRequest::DeleteDBInstanceRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "DeleteDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBInstanceRequest::~DeleteDBInstanceRequest() {}

long DeleteDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void DeleteDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setBodyParameter(std::string("DBInstanceId"), dBInstanceId);
}

