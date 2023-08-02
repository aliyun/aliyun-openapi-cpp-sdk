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

#include <alibabacloud/gpdb/model/DescribeDBClusterNodeRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBClusterNodeRequest;

DescribeDBClusterNodeRequest::DescribeDBClusterNodeRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBClusterNode") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterNodeRequest::~DescribeDBClusterNodeRequest() {}

std::string DescribeDBClusterNodeRequest::getNodeType() const {
  return nodeType_;
}

void DescribeDBClusterNodeRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string DescribeDBClusterNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterNodeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBClusterNodeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

