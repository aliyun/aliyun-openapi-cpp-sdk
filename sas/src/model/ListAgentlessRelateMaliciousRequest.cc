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

#include <alibabacloud/sas/model/ListAgentlessRelateMaliciousRequest.h>

using AlibabaCloud::Sas::Model::ListAgentlessRelateMaliciousRequest;

ListAgentlessRelateMaliciousRequest::ListAgentlessRelateMaliciousRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListAgentlessRelateMalicious") {
  setMethod(HttpRequest::Method::Post);
}

ListAgentlessRelateMaliciousRequest::~ListAgentlessRelateMaliciousRequest() {}

long ListAgentlessRelateMaliciousRequest::getEventId() const {
  return eventId_;
}

void ListAgentlessRelateMaliciousRequest::setEventId(long eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), std::to_string(eventId));
}

std::string ListAgentlessRelateMaliciousRequest::getSourceIp() const {
  return sourceIp_;
}

void ListAgentlessRelateMaliciousRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListAgentlessRelateMaliciousRequest::getPageSize() const {
  return pageSize_;
}

void ListAgentlessRelateMaliciousRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

int ListAgentlessRelateMaliciousRequest::getCurrentPage() const {
  return currentPage_;
}

void ListAgentlessRelateMaliciousRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

