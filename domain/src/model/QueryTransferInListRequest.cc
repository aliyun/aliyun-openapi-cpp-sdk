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

#include <alibabacloud/domain/model/QueryTransferInListRequest.h>

using AlibabaCloud::Domain::Model::QueryTransferInListRequest;

QueryTransferInListRequest::QueryTransferInListRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryTransferInList") {
  setMethod(HttpRequest::Method::Post);
}

QueryTransferInListRequest::~QueryTransferInListRequest() {}

long QueryTransferInListRequest::getSubmissionStartDate() const {
  return submissionStartDate_;
}

void QueryTransferInListRequest::setSubmissionStartDate(long submissionStartDate) {
  submissionStartDate_ = submissionStartDate;
  setParameter(std::string("SubmissionStartDate"), std::to_string(submissionStartDate));
}

long QueryTransferInListRequest::getSubmissionEndDate() const {
  return submissionEndDate_;
}

void QueryTransferInListRequest::setSubmissionEndDate(long submissionEndDate) {
  submissionEndDate_ = submissionEndDate;
  setParameter(std::string("SubmissionEndDate"), std::to_string(submissionEndDate));
}

std::string QueryTransferInListRequest::getDomainName() const {
  return domainName_;
}

void QueryTransferInListRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int QueryTransferInListRequest::getPageNum() const {
  return pageNum_;
}

void QueryTransferInListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QueryTransferInListRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryTransferInListRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string QueryTransferInListRequest::getSimpleTransferInStatus() const {
  return simpleTransferInStatus_;
}

void QueryTransferInListRequest::setSimpleTransferInStatus(const std::string &simpleTransferInStatus) {
  simpleTransferInStatus_ = simpleTransferInStatus;
  setParameter(std::string("SimpleTransferInStatus"), simpleTransferInStatus);
}

int QueryTransferInListRequest::getPageSize() const {
  return pageSize_;
}

void QueryTransferInListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryTransferInListRequest::getLang() const {
  return lang_;
}

void QueryTransferInListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

