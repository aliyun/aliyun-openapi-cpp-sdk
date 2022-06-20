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

#include <alibabacloud/sas/model/DescribeRiskCheckItemResultRequest.h>

using AlibabaCloud::Sas::Model::DescribeRiskCheckItemResultRequest;

DescribeRiskCheckItemResultRequest::DescribeRiskCheckItemResultRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeRiskCheckItemResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRiskCheckItemResultRequest::~DescribeRiskCheckItemResultRequest() {}

long DescribeRiskCheckItemResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRiskCheckItemResultRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DescribeRiskCheckItemResultRequest::getItemId() const {
  return itemId_;
}

void DescribeRiskCheckItemResultRequest::setItemId(long itemId) {
  itemId_ = itemId;
  setParameter(std::string("ItemId"), std::to_string(itemId));
}

std::string DescribeRiskCheckItemResultRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeRiskCheckItemResultRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeRiskCheckItemResultRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRiskCheckItemResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRiskCheckItemResultRequest::getLang() const {
  return lang_;
}

void DescribeRiskCheckItemResultRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeRiskCheckItemResultRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeRiskCheckItemResultRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeRiskCheckItemResultRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRiskCheckItemResultRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

