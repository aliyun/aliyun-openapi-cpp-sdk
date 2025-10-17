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

#include <alibabacloud/polardb/model/DescribeDBClusterEncryptionKeyRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterEncryptionKeyRequest;

DescribeDBClusterEncryptionKeyRequest::DescribeDBClusterEncryptionKeyRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterEncryptionKey") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterEncryptionKeyRequest::~DescribeDBClusterEncryptionKeyRequest() {}

std::string DescribeDBClusterEncryptionKeyRequest::getClientToken() const {
  return clientToken_;
}

void DescribeDBClusterEncryptionKeyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeDBClusterEncryptionKeyRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterEncryptionKeyRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

