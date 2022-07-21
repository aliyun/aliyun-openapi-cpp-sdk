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

#include <alibabacloud/domain/model/QueryFailReasonForDomainRealNameVerificationRequest.h>

using AlibabaCloud::Domain::Model::QueryFailReasonForDomainRealNameVerificationRequest;

QueryFailReasonForDomainRealNameVerificationRequest::QueryFailReasonForDomainRealNameVerificationRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryFailReasonForDomainRealNameVerification") {
  setMethod(HttpRequest::Method::Post);
}

QueryFailReasonForDomainRealNameVerificationRequest::~QueryFailReasonForDomainRealNameVerificationRequest() {}

std::string QueryFailReasonForDomainRealNameVerificationRequest::getDomainName() const {
  return domainName_;
}

void QueryFailReasonForDomainRealNameVerificationRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string QueryFailReasonForDomainRealNameVerificationRequest::getRealNameVerificationAction() const {
  return realNameVerificationAction_;
}

void QueryFailReasonForDomainRealNameVerificationRequest::setRealNameVerificationAction(const std::string &realNameVerificationAction) {
  realNameVerificationAction_ = realNameVerificationAction;
  setParameter(std::string("RealNameVerificationAction"), realNameVerificationAction);
}

std::string QueryFailReasonForDomainRealNameVerificationRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryFailReasonForDomainRealNameVerificationRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string QueryFailReasonForDomainRealNameVerificationRequest::getLang() const {
  return lang_;
}

void QueryFailReasonForDomainRealNameVerificationRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

