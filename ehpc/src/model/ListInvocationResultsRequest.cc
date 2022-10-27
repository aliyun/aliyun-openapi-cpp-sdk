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

#include <alibabacloud/ehpc/model/ListInvocationResultsRequest.h>

using AlibabaCloud::EHPC::Model::ListInvocationResultsRequest;

ListInvocationResultsRequest::ListInvocationResultsRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListInvocationResults") {
  setMethod(HttpRequest::Method::Get);
}

ListInvocationResultsRequest::~ListInvocationResultsRequest() {}

std::vector<ListInvocationResultsRequest::Instance> ListInvocationResultsRequest::getInstance() const {
  return instance_;
}

void ListInvocationResultsRequest::setInstance(const std::vector<ListInvocationResultsRequest::Instance> &instance) {
  instance_ = instance;
  for(int dep1 = 0; dep1 != instance.size(); dep1++) {
  auto instanceObj = instance.at(dep1);
  std::string instanceObjStr = std::string("Instance") + "." + std::to_string(dep1 + 1);
    setParameter(instanceObjStr + ".Id", instanceObj.id);
  }
}

std::string ListInvocationResultsRequest::getClusterId() const {
  return clusterId_;
}

void ListInvocationResultsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListInvocationResultsRequest::getCommandId() const {
  return commandId_;
}

void ListInvocationResultsRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

int ListInvocationResultsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInvocationResultsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListInvocationResultsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListInvocationResultsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListInvocationResultsRequest::getInvokeRecordStatus() const {
  return invokeRecordStatus_;
}

void ListInvocationResultsRequest::setInvokeRecordStatus(const std::string &invokeRecordStatus) {
  invokeRecordStatus_ = invokeRecordStatus;
  setParameter(std::string("InvokeRecordStatus"), invokeRecordStatus);
}

int ListInvocationResultsRequest::getPageSize() const {
  return pageSize_;
}

void ListInvocationResultsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

