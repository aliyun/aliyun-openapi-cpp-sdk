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

#include <alibabacloud/sas/model/DescribeSimilarSecurityEventsRequest.h>

using AlibabaCloud::Sas::Model::DescribeSimilarSecurityEventsRequest;

DescribeSimilarSecurityEventsRequest::DescribeSimilarSecurityEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSimilarSecurityEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSimilarSecurityEventsRequest::~DescribeSimilarSecurityEventsRequest() {}

long DescribeSimilarSecurityEventsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSimilarSecurityEventsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSimilarSecurityEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSimilarSecurityEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeSimilarSecurityEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSimilarSecurityEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSimilarSecurityEventsRequest::getLang() const {
  return lang_;
}

void DescribeSimilarSecurityEventsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeSimilarSecurityEventsRequest::getTaskId() const {
  return taskId_;
}

void DescribeSimilarSecurityEventsRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

int DescribeSimilarSecurityEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSimilarSecurityEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

