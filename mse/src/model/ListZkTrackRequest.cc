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

#include <alibabacloud/mse/model/ListZkTrackRequest.h>

using AlibabaCloud::Mse::Model::ListZkTrackRequest;

ListZkTrackRequest::ListZkTrackRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListZkTrack") {
  setMethod(HttpRequest::Method::Post);
}

ListZkTrackRequest::~ListZkTrackRequest() {}

std::string ListZkTrackRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListZkTrackRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long ListZkTrackRequest::getStartTs() const {
  return startTs_;
}

void ListZkTrackRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

std::string ListZkTrackRequest::getSessionId() const {
  return sessionId_;
}

void ListZkTrackRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

long ListZkTrackRequest::getPageNum() const {
  return pageNum_;
}

void ListZkTrackRequest::setPageNum(long pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListZkTrackRequest::getPath() const {
  return path_;
}

void ListZkTrackRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string ListZkTrackRequest::getRequestPars() const {
  return requestPars_;
}

void ListZkTrackRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

long ListZkTrackRequest::getEndTs() const {
  return endTs_;
}

void ListZkTrackRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

long ListZkTrackRequest::getPageSize() const {
  return pageSize_;
}

void ListZkTrackRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool ListZkTrackRequest::getReverse() const {
  return reverse_;
}

void ListZkTrackRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

std::string ListZkTrackRequest::getInstanceId() const {
  return instanceId_;
}

void ListZkTrackRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListZkTrackRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListZkTrackRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

