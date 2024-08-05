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

#include <alibabacloud/arms/model/QueryAppTopologyRequest.h>

using AlibabaCloud::ARMS::Model::QueryAppTopologyRequest;

QueryAppTopologyRequest::QueryAppTopologyRequest()
    : RpcServiceRequest("arms", "2019-08-08", "QueryAppTopology") {
  setMethod(HttpRequest::Method::Post);
}

QueryAppTopologyRequest::~QueryAppTopologyRequest() {}

std::string QueryAppTopologyRequest::getRpc() const {
  return rpc_;
}

void QueryAppTopologyRequest::setRpc(const std::string &rpc) {
  rpc_ = rpc;
  setParameter(std::string("Rpc"), rpc);
}

std::string QueryAppTopologyRequest::getAppType() const {
  return appType_;
}

void QueryAppTopologyRequest::setAppType(const std::string &appType) {
  appType_ = appType;
  setParameter(std::string("AppType"), appType);
}

long QueryAppTopologyRequest::getEndTime() const {
  return endTime_;
}

void QueryAppTopologyRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string QueryAppTopologyRequest::getPid() const {
  return pid_;
}

void QueryAppTopologyRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

long QueryAppTopologyRequest::getStartTime() const {
  return startTime_;
}

void QueryAppTopologyRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::map<std::string, std::string> QueryAppTopologyRequest::getFilters() const {
  return filters_;
}

void QueryAppTopologyRequest::setFilters(const std::map<std::string, std::string> &filters) {
  filters_ = filters;
  for(auto const &iter1 : filters) {
    setParameter(std::string("Filters") + "." + iter1.first, iter1.second);
  }
}

std::string QueryAppTopologyRequest::getType() const {
  return type_;
}

void QueryAppTopologyRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string QueryAppTopologyRequest::getDbName() const {
  return dbName_;
}

void QueryAppTopologyRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string QueryAppTopologyRequest::getRegionId() const {
  return regionId_;
}

void QueryAppTopologyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryAppTopologyRequest::getDb() const {
  return db_;
}

void QueryAppTopologyRequest::setDb(const std::string &db) {
  db_ = db;
  setParameter(std::string("Db"), db);
}

