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

#include <alibabacloud/dbfs/model/AddTagsBatchRequest.h>

using AlibabaCloud::DBFS::Model::AddTagsBatchRequest;

AddTagsBatchRequest::AddTagsBatchRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "AddTagsBatch") {
  setMethod(HttpRequest::Method::Post);
}

AddTagsBatchRequest::~AddTagsBatchRequest() {}

std::string AddTagsBatchRequest::getDbfsList() const {
  return dbfsList_;
}

void AddTagsBatchRequest::setDbfsList(const std::string &dbfsList) {
  dbfsList_ = dbfsList;
  setParameter(std::string("DbfsList"), dbfsList);
}

std::string AddTagsBatchRequest::getClientToken() const {
  return clientToken_;
}

void AddTagsBatchRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddTagsBatchRequest::getTags() const {
  return tags_;
}

void AddTagsBatchRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string AddTagsBatchRequest::getRegionId() const {
  return regionId_;
}

void AddTagsBatchRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

