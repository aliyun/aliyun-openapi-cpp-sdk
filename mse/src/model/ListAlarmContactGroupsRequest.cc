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

#include <alibabacloud/mse/model/ListAlarmContactGroupsRequest.h>

using AlibabaCloud::Mse::Model::ListAlarmContactGroupsRequest;

ListAlarmContactGroupsRequest::ListAlarmContactGroupsRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAlarmContactGroups") {
  setMethod(HttpRequest::Method::Get);
}

ListAlarmContactGroupsRequest::~ListAlarmContactGroupsRequest() {}

int ListAlarmContactGroupsRequest::getPageNum() const {
  return pageNum_;
}

void ListAlarmContactGroupsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAlarmContactGroupsRequest::getRequestPars() const {
  return requestPars_;
}

void ListAlarmContactGroupsRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListAlarmContactGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListAlarmContactGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAlarmContactGroupsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAlarmContactGroupsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

