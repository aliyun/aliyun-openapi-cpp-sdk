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

#include <alibabacloud/gpdb/model/DescribeDBClusterPerformanceRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBClusterPerformanceRequest;

DescribeDBClusterPerformanceRequest::DescribeDBClusterPerformanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBClusterPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterPerformanceRequest::~DescribeDBClusterPerformanceRequest() {}

std::string DescribeDBClusterPerformanceRequest::getNodeType() const {
  return nodeType_;
}

void DescribeDBClusterPerformanceRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string DescribeDBClusterPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBClusterPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBClusterPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterPerformanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBClusterPerformanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBClusterPerformanceRequest::getKey() const {
  return key_;
}

void DescribeDBClusterPerformanceRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string DescribeDBClusterPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBClusterPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDBClusterPerformanceRequest::getNodes() const {
  return nodes_;
}

void DescribeDBClusterPerformanceRequest::setNodes(const std::string &nodes) {
  nodes_ = nodes;
  setParameter(std::string("Nodes"), nodes);
}

