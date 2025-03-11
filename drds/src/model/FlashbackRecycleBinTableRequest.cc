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

#include <alibabacloud/drds/model/FlashbackRecycleBinTableRequest.h>

using AlibabaCloud::Drds::Model::FlashbackRecycleBinTableRequest;

FlashbackRecycleBinTableRequest::FlashbackRecycleBinTableRequest()
    : RpcServiceRequest("drds", "2019-01-23", "FlashbackRecycleBinTable") {
  setMethod(HttpRequest::Method::Post);
}

FlashbackRecycleBinTableRequest::~FlashbackRecycleBinTableRequest() {}

std::string FlashbackRecycleBinTableRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void FlashbackRecycleBinTableRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string FlashbackRecycleBinTableRequest::getDbName() const {
  return dbName_;
}

void FlashbackRecycleBinTableRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string FlashbackRecycleBinTableRequest::getRegionId() const {
  return regionId_;
}

void FlashbackRecycleBinTableRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string FlashbackRecycleBinTableRequest::getTableName() const {
  return tableName_;
}

void FlashbackRecycleBinTableRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

