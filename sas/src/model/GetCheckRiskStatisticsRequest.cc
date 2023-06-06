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

#include <alibabacloud/sas/model/GetCheckRiskStatisticsRequest.h>

using AlibabaCloud::Sas::Model::GetCheckRiskStatisticsRequest;

GetCheckRiskStatisticsRequest::GetCheckRiskStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetCheckRiskStatistics") {
  setMethod(HttpRequest::Method::Post);
}

GetCheckRiskStatisticsRequest::~GetCheckRiskStatisticsRequest() {}

int GetCheckRiskStatisticsRequest::getPageSize() const {
  return pageSize_;
}

void GetCheckRiskStatisticsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetCheckRiskStatisticsRequest::getLang() const {
  return lang_;
}

void GetCheckRiskStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int GetCheckRiskStatisticsRequest::getCurrentPage() const {
  return currentPage_;
}

void GetCheckRiskStatisticsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

