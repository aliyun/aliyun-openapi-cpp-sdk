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

#include <alibabacloud/cloudapi/model/DescribeDatasetItemListRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeDatasetItemListRequest;

DescribeDatasetItemListRequest::DescribeDatasetItemListRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeDatasetItemList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatasetItemListRequest::~DescribeDatasetItemListRequest() {}

int DescribeDatasetItemListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDatasetItemListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDatasetItemListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDatasetItemListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDatasetItemListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDatasetItemListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeDatasetItemListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDatasetItemListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDatasetItemListRequest::getDatasetId() const {
  return datasetId_;
}

void DescribeDatasetItemListRequest::setDatasetId(const std::string &datasetId) {
  datasetId_ = datasetId;
  setParameter(std::string("DatasetId"), datasetId);
}

std::string DescribeDatasetItemListRequest::getDatasetItemIds() const {
  return datasetItemIds_;
}

void DescribeDatasetItemListRequest::setDatasetItemIds(const std::string &datasetItemIds) {
  datasetItemIds_ = datasetItemIds;
  setParameter(std::string("DatasetItemIds"), datasetItemIds);
}

