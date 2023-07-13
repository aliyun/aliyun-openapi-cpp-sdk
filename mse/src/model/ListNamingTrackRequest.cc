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

#include <alibabacloud/mse/model/ListNamingTrackRequest.h>

using AlibabaCloud::Mse::Model::ListNamingTrackRequest;

ListNamingTrackRequest::ListNamingTrackRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListNamingTrack") {
  setMethod(HttpRequest::Method::Get);
}

ListNamingTrackRequest::~ListNamingTrackRequest() {}

std::string ListNamingTrackRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListNamingTrackRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long ListNamingTrackRequest::getStartTs() const {
  return startTs_;
}

void ListNamingTrackRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

long ListNamingTrackRequest::getPageNum() const {
  return pageNum_;
}

void ListNamingTrackRequest::setPageNum(long pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListNamingTrackRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListNamingTrackRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListNamingTrackRequest::getRequestPars() const {
  return requestPars_;
}

void ListNamingTrackRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListNamingTrackRequest::getGroup() const {
  return group_;
}

void ListNamingTrackRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string ListNamingTrackRequest::getIp() const {
  return ip_;
}

void ListNamingTrackRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string ListNamingTrackRequest::getInstanceId() const {
  return instanceId_;
}

void ListNamingTrackRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListNamingTrackRequest::getEndTs() const {
  return endTs_;
}

void ListNamingTrackRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

long ListNamingTrackRequest::getPageSize() const {
  return pageSize_;
}

void ListNamingTrackRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListNamingTrackRequest::getServiceName() const {
  return serviceName_;
}

void ListNamingTrackRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

bool ListNamingTrackRequest::getReverse() const {
  return reverse_;
}

void ListNamingTrackRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

std::string ListNamingTrackRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListNamingTrackRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

