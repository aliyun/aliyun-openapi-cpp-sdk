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

#include <alibabacloud/mse/model/ListAlarmRulesRequest.h>

using AlibabaCloud::Mse::Model::ListAlarmRulesRequest;

ListAlarmRulesRequest::ListAlarmRulesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAlarmRules") {
  setMethod(HttpRequest::Method::Get);
}

ListAlarmRulesRequest::~ListAlarmRulesRequest() {}

std::string ListAlarmRulesRequest::getAlarmMseType() const {
  return alarmMseType_;
}

void ListAlarmRulesRequest::setAlarmMseType(const std::string &alarmMseType) {
  alarmMseType_ = alarmMseType;
  setParameter(std::string("AlarmMseType"), alarmMseType);
}

int ListAlarmRulesRequest::getPageNum() const {
  return pageNum_;
}

void ListAlarmRulesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAlarmRulesRequest::getRequestPars() const {
  return requestPars_;
}

void ListAlarmRulesRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListAlarmRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListAlarmRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAlarmRulesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAlarmRulesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

