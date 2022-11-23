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

#include <alibabacloud/dms-enterprise/model/ListInstancesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancesRequest::~ListInstancesRequest() {}

std::string ListInstancesRequest::getSearchKey() const {
  return searchKey_;
}

void ListInstancesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

long ListInstancesRequest::getTid() const {
  return tid_;
}

void ListInstancesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListInstancesRequest::getEnvType() const {
  return envType_;
}

void ListInstancesRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string ListInstancesRequest::getInstanceSource() const {
  return instanceSource_;
}

void ListInstancesRequest::setInstanceSource(const std::string &instanceSource) {
  instanceSource_ = instanceSource;
  setParameter(std::string("InstanceSource"), instanceSource);
}

int ListInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInstancesRequest::getInstanceState() const {
  return instanceState_;
}

void ListInstancesRequest::setInstanceState(const std::string &instanceState) {
  instanceState_ = instanceState;
  setParameter(std::string("InstanceState"), instanceState);
}

std::string ListInstancesRequest::getNetType() const {
  return netType_;
}

void ListInstancesRequest::setNetType(const std::string &netType) {
  netType_ = netType;
  setParameter(std::string("NetType"), netType);
}

std::string ListInstancesRequest::getDbType() const {
  return dbType_;
}

void ListInstancesRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

