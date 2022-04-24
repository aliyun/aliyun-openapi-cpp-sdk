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

#include <alibabacloud/bssopenapi/model/SetCreditLabelActionRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetCreditLabelActionRequest;

SetCreditLabelActionRequest::SetCreditLabelActionRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "SetCreditLabelAction") {
  setMethod(HttpRequest::Method::Post);
}

SetCreditLabelActionRequest::~SetCreditLabelActionRequest() {}

std::string SetCreditLabelActionRequest::getActionType() const {
  return actionType_;
}

void SetCreditLabelActionRequest::setActionType(const std::string &actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), actionType);
}

std::string SetCreditLabelActionRequest::getIsNeedSaveNotifyRule() const {
  return isNeedSaveNotifyRule_;
}

void SetCreditLabelActionRequest::setIsNeedSaveNotifyRule(const std::string &isNeedSaveNotifyRule) {
  isNeedSaveNotifyRule_ = isNeedSaveNotifyRule;
  setParameter(std::string("IsNeedSaveNotifyRule"), isNeedSaveNotifyRule);
}

std::string SetCreditLabelActionRequest::getIsNeedAdjustCreditAccount() const {
  return isNeedAdjustCreditAccount_;
}

void SetCreditLabelActionRequest::setIsNeedAdjustCreditAccount(const std::string &isNeedAdjustCreditAccount) {
  isNeedAdjustCreditAccount_ = isNeedAdjustCreditAccount;
  setParameter(std::string("IsNeedAdjustCreditAccount"), isNeedAdjustCreditAccount);
}

bool SetCreditLabelActionRequest::getNewCreateMode() const {
  return newCreateMode_;
}

void SetCreditLabelActionRequest::setNewCreateMode(bool newCreateMode) {
  newCreateMode_ = newCreateMode;
  setParameter(std::string("NewCreateMode"), newCreateMode ? "true" : "false");
}

std::string SetCreditLabelActionRequest::getDescription() const {
  return description_;
}

void SetCreditLabelActionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SetCreditLabelActionRequest::getSource() const {
  return source_;
}

void SetCreditLabelActionRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string SetCreditLabelActionRequest::getCurrencyCode() const {
  return currencyCode_;
}

void SetCreditLabelActionRequest::setCurrencyCode(const std::string &currencyCode) {
  currencyCode_ = currencyCode;
  setParameter(std::string("CurrencyCode"), currencyCode);
}

std::string SetCreditLabelActionRequest::getDailyCycle() const {
  return dailyCycle_;
}

void SetCreditLabelActionRequest::setDailyCycle(const std::string &dailyCycle) {
  dailyCycle_ = dailyCycle;
  setParameter(std::string("DailyCycle"), dailyCycle);
}

std::string SetCreditLabelActionRequest::get_Operator() const {
  return _operator_;
}

void SetCreditLabelActionRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setParameter(std::string("Operator"), _operator);
}

std::string SetCreditLabelActionRequest::getUid() const {
  return uid_;
}

void SetCreditLabelActionRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

std::string SetCreditLabelActionRequest::getSiteCode() const {
  return siteCode_;
}

void SetCreditLabelActionRequest::setSiteCode(const std::string &siteCode) {
  siteCode_ = siteCode;
  setParameter(std::string("SiteCode"), siteCode);
}

std::string SetCreditLabelActionRequest::getClearCycle() const {
  return clearCycle_;
}

void SetCreditLabelActionRequest::setClearCycle(const std::string &clearCycle) {
  clearCycle_ = clearCycle;
  setParameter(std::string("ClearCycle"), clearCycle);
}

bool SetCreditLabelActionRequest::getNeedNotice() const {
  return needNotice_;
}

void SetCreditLabelActionRequest::setNeedNotice(bool needNotice) {
  needNotice_ = needNotice;
  setParameter(std::string("NeedNotice"), needNotice ? "true" : "false");
}

std::string SetCreditLabelActionRequest::getRequestId() const {
  return requestId_;
}

void SetCreditLabelActionRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setParameter(std::string("RequestId"), requestId);
}

std::string SetCreditLabelActionRequest::getIsNeedSetCreditAmount() const {
  return isNeedSetCreditAmount_;
}

void SetCreditLabelActionRequest::setIsNeedSetCreditAmount(const std::string &isNeedSetCreditAmount) {
  isNeedSetCreditAmount_ = isNeedSetCreditAmount;
  setParameter(std::string("IsNeedSetCreditAmount"), isNeedSetCreditAmount);
}

std::string SetCreditLabelActionRequest::getCreditAmount() const {
  return creditAmount_;
}

void SetCreditLabelActionRequest::setCreditAmount(const std::string &creditAmount) {
  creditAmount_ = creditAmount;
  setParameter(std::string("CreditAmount"), creditAmount);
}

std::string SetCreditLabelActionRequest::getIsNeedAddSettleLabel() const {
  return isNeedAddSettleLabel_;
}

void SetCreditLabelActionRequest::setIsNeedAddSettleLabel(const std::string &isNeedAddSettleLabel) {
  isNeedAddSettleLabel_ = isNeedAddSettleLabel;
  setParameter(std::string("IsNeedAddSettleLabel"), isNeedAddSettleLabel);
}

