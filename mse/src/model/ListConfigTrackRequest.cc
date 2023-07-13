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

#include <alibabacloud/mse/model/ListConfigTrackRequest.h>

using AlibabaCloud::Mse::Model::ListConfigTrackRequest;

ListConfigTrackRequest::ListConfigTrackRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListConfigTrack") {
  setMethod(HttpRequest::Method::Post);
}

ListConfigTrackRequest::~ListConfigTrackRequest() {}

std::string ListConfigTrackRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListConfigTrackRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long ListConfigTrackRequest::getStartTs() const {
  return startTs_;
}

void ListConfigTrackRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

long ListConfigTrackRequest::getPageNum() const {
  return pageNum_;
}

void ListConfigTrackRequest::setPageNum(long pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListConfigTrackRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListConfigTrackRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListConfigTrackRequest::getRequestPars() const {
  return requestPars_;
}

void ListConfigTrackRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListConfigTrackRequest::getGroup() const {
  return group_;
}

void ListConfigTrackRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string ListConfigTrackRequest::getIp() const {
  return ip_;
}

void ListConfigTrackRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string ListConfigTrackRequest::getInstanceId() const {
  return instanceId_;
}

void ListConfigTrackRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListConfigTrackRequest::getEndTs() const {
  return endTs_;
}

void ListConfigTrackRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

long ListConfigTrackRequest::getPageSize() const {
  return pageSize_;
}

void ListConfigTrackRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool ListConfigTrackRequest::getReverse() const {
  return reverse_;
}

void ListConfigTrackRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

std::string ListConfigTrackRequest::getDataId() const {
  return dataId_;
}

void ListConfigTrackRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string ListConfigTrackRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListConfigTrackRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

