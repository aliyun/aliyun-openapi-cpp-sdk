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

#include <alibabacloud/sas/model/DescribeSecurityEventMarkMissListRequest.h>

using AlibabaCloud::Sas::Model::DescribeSecurityEventMarkMissListRequest;

DescribeSecurityEventMarkMissListRequest::DescribeSecurityEventMarkMissListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSecurityEventMarkMissList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityEventMarkMissListRequest::~DescribeSecurityEventMarkMissListRequest() {}

long DescribeSecurityEventMarkMissListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSecurityEventMarkMissListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSecurityEventMarkMissListRequest::getRemark() const {
  return remark_;
}

void DescribeSecurityEventMarkMissListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeSecurityEventMarkMissListRequest::getEventName() const {
  return eventName_;
}

void DescribeSecurityEventMarkMissListRequest::setEventName(const std::string &eventName) {
  eventName_ = eventName;
  setParameter(std::string("EventName"), eventName);
}

std::string DescribeSecurityEventMarkMissListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSecurityEventMarkMissListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeSecurityEventMarkMissListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSecurityEventMarkMissListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeSecurityEventMarkMissListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSecurityEventMarkMissListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

