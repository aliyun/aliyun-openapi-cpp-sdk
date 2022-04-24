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

#include <alibabacloud/bssopenapi/model/SaveUserCreditRequest.h>

using AlibabaCloud::BssOpenApi::Model::SaveUserCreditRequest;

SaveUserCreditRequest::SaveUserCreditRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "SaveUserCredit") {
  setMethod(HttpRequest::Method::Post);
}

SaveUserCreditRequest::~SaveUserCreditRequest() {}

bool SaveUserCreditRequest::getAvoidExpiration() const {
  return avoidExpiration_;
}

void SaveUserCreditRequest::setAvoidExpiration(bool avoidExpiration) {
  avoidExpiration_ = avoidExpiration;
  setParameter(std::string("AvoidExpiration"), avoidExpiration ? "true" : "false");
}

std::string SaveUserCreditRequest::getDescription() const {
  return description_;
}

void SaveUserCreditRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool SaveUserCreditRequest::getAvoidPrepaidNotification() const {
  return avoidPrepaidNotification_;
}

void SaveUserCreditRequest::setAvoidPrepaidNotification(bool avoidPrepaidNotification) {
  avoidPrepaidNotification_ = avoidPrepaidNotification;
  setParameter(std::string("AvoidPrepaidNotification"), avoidPrepaidNotification ? "true" : "false");
}

bool SaveUserCreditRequest::getAvoidPrepaidExpiration() const {
  return avoidPrepaidExpiration_;
}

void SaveUserCreditRequest::setAvoidPrepaidExpiration(bool avoidPrepaidExpiration) {
  avoidPrepaidExpiration_ = avoidPrepaidExpiration;
  setParameter(std::string("AvoidPrepaidExpiration"), avoidPrepaidExpiration ? "true" : "false");
}

bool SaveUserCreditRequest::getAvoidNotification() const {
  return avoidNotification_;
}

void SaveUserCreditRequest::setAvoidNotification(bool avoidNotification) {
  avoidNotification_ = avoidNotification;
  setParameter(std::string("AvoidNotification"), avoidNotification ? "true" : "false");
}

std::string SaveUserCreditRequest::get_Operator() const {
  return _operator_;
}

void SaveUserCreditRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setParameter(std::string("Operator"), _operator);
}

std::string SaveUserCreditRequest::getCreditValue() const {
  return creditValue_;
}

void SaveUserCreditRequest::setCreditValue(const std::string &creditValue) {
  creditValue_ = creditValue;
  setParameter(std::string("CreditValue"), creditValue);
}

std::string SaveUserCreditRequest::getCreditType() const {
  return creditType_;
}

void SaveUserCreditRequest::setCreditType(const std::string &creditType) {
  creditType_ = creditType;
  setParameter(std::string("CreditType"), creditType);
}

