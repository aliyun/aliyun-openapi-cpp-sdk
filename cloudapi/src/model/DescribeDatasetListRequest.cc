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

#include <alibabacloud/cloudapi/model/DescribeDatasetListRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeDatasetListRequest;

DescribeDatasetListRequest::DescribeDatasetListRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeDatasetList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatasetListRequest::~DescribeDatasetListRequest() {}

std::string DescribeDatasetListRequest::getDatasetIds() const {
  return datasetIds_;
}

void DescribeDatasetListRequest::setDatasetIds(const std::string &datasetIds) {
  datasetIds_ = datasetIds;
  setParameter(std::string("DatasetIds"), datasetIds);
}

int DescribeDatasetListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDatasetListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDatasetListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDatasetListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDatasetListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDatasetListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeDatasetListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDatasetListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

