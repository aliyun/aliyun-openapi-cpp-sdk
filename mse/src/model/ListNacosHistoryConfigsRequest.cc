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

#include <alibabacloud/mse/model/ListNacosHistoryConfigsRequest.h>

using AlibabaCloud::Mse::Model::ListNacosHistoryConfigsRequest;

ListNacosHistoryConfigsRequest::ListNacosHistoryConfigsRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListNacosHistoryConfigs") {
  setMethod(HttpRequest::Method::Post);
}

ListNacosHistoryConfigsRequest::~ListNacosHistoryConfigsRequest() {}

std::string ListNacosHistoryConfigsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListNacosHistoryConfigsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListNacosHistoryConfigsRequest::getPageNum() const {
  return pageNum_;
}

void ListNacosHistoryConfigsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListNacosHistoryConfigsRequest::getRegionId() const {
  return regionId_;
}

void ListNacosHistoryConfigsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListNacosHistoryConfigsRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListNacosHistoryConfigsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListNacosHistoryConfigsRequest::getRequestPars() const {
  return requestPars_;
}

void ListNacosHistoryConfigsRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListNacosHistoryConfigsRequest::getPageSize() const {
  return pageSize_;
}

void ListNacosHistoryConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListNacosHistoryConfigsRequest::getGroup() const {
  return group_;
}

void ListNacosHistoryConfigsRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string ListNacosHistoryConfigsRequest::getInstanceId() const {
  return instanceId_;
}

void ListNacosHistoryConfigsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListNacosHistoryConfigsRequest::getDataId() const {
  return dataId_;
}

void ListNacosHistoryConfigsRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string ListNacosHistoryConfigsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListNacosHistoryConfigsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

