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

#include <alibabacloud/adb/model/DescribeClusterNetInfoRequest.h>

using AlibabaCloud::Adb::Model::DescribeClusterNetInfoRequest;

DescribeClusterNetInfoRequest::DescribeClusterNetInfoRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeClusterNetInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClusterNetInfoRequest::~DescribeClusterNetInfoRequest() {}

std::string DescribeClusterNetInfoRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeClusterNetInfoRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeClusterNetInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeClusterNetInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

