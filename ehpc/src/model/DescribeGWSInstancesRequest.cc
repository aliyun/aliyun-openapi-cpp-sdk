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

#include <alibabacloud/ehpc/model/DescribeGWSInstancesRequest.h>

using AlibabaCloud::EHPC::Model::DescribeGWSInstancesRequest;

DescribeGWSInstancesRequest::DescribeGWSInstancesRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "DescribeGWSInstances") {
  setMethod(HttpRequest::Method::Get);
}

DescribeGWSInstancesRequest::~DescribeGWSInstancesRequest() {}

std::string DescribeGWSInstancesRequest::getClusterId() const {
  return clusterId_;
}

void DescribeGWSInstancesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int DescribeGWSInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGWSInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGWSInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGWSInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGWSInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeGWSInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeGWSInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGWSInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeGWSInstancesRequest::getUserUid() const {
  return userUid_;
}

void DescribeGWSInstancesRequest::setUserUid(long userUid) {
  userUid_ = userUid;
  setParameter(std::string("UserUid"), std::to_string(userUid));
}

std::string DescribeGWSInstancesRequest::getUserName() const {
  return userName_;
}

void DescribeGWSInstancesRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

