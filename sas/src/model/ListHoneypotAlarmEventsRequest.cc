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

#include <alibabacloud/sas/model/ListHoneypotAlarmEventsRequest.h>

using AlibabaCloud::Sas::Model::ListHoneypotAlarmEventsRequest;

ListHoneypotAlarmEventsRequest::ListHoneypotAlarmEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListHoneypotAlarmEvents") {
  setMethod(HttpRequest::Method::Get);
}

ListHoneypotAlarmEventsRequest::~ListHoneypotAlarmEventsRequest() {}

std::string ListHoneypotAlarmEventsRequest::getSrcIp() const {
  return srcIp_;
}

void ListHoneypotAlarmEventsRequest::setSrcIp(const std::string &srcIp) {
  srcIp_ = srcIp;
  setBodyParameter(std::string("SrcIp"), srcIp);
}

std::vector<std::string> ListHoneypotAlarmEventsRequest::getRiskLevelList() const {
  return riskLevelList_;
}

void ListHoneypotAlarmEventsRequest::setRiskLevelList(const std::vector<std::string> &riskLevelList) {
  riskLevelList_ = riskLevelList;
}

int ListHoneypotAlarmEventsRequest::getPageSize() const {
  return pageSize_;
}

void ListHoneypotAlarmEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListHoneypotAlarmEventsRequest::getDstIp() const {
  return dstIp_;
}

void ListHoneypotAlarmEventsRequest::setDstIp(const std::string &dstIp) {
  dstIp_ = dstIp;
  setBodyParameter(std::string("DstIp"), dstIp);
}

std::string ListHoneypotAlarmEventsRequest::getDealed() const {
  return dealed_;
}

void ListHoneypotAlarmEventsRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setBodyParameter(std::string("Dealed"), dealed);
}

int ListHoneypotAlarmEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListHoneypotAlarmEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

