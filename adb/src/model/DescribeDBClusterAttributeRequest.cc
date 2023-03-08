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

#include <alibabacloud/adb/model/DescribeDBClusterAttributeRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClusterAttributeRequest;

DescribeDBClusterAttributeRequest::DescribeDBClusterAttributeRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeDBClusterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterAttributeRequest::~DescribeDBClusterAttributeRequest() {}

std::string DescribeDBClusterAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterAttributeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterAttributeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

