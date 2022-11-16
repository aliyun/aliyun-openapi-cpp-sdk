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

#include <alibabacloud/cloudapi/model/DescribeDatasetInfoRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeDatasetInfoRequest;

DescribeDatasetInfoRequest::DescribeDatasetInfoRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeDatasetInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatasetInfoRequest::~DescribeDatasetInfoRequest() {}

std::string DescribeDatasetInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDatasetInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDatasetInfoRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDatasetInfoRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDatasetInfoRequest::getDatasetId() const {
  return datasetId_;
}

void DescribeDatasetInfoRequest::setDatasetId(const std::string &datasetId) {
  datasetId_ = datasetId;
  setParameter(std::string("DatasetId"), datasetId);
}

