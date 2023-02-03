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

#include <alibabacloud/mse/model/ListNacosConfigsRequest.h>

using AlibabaCloud::Mse::Model::ListNacosConfigsRequest;

ListNacosConfigsRequest::ListNacosConfigsRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListNacosConfigs") {
  setMethod(HttpRequest::Method::Post);
}

ListNacosConfigsRequest::~ListNacosConfigsRequest() {}

std::string ListNacosConfigsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListNacosConfigsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListNacosConfigsRequest::getPageNum() const {
  return pageNum_;
}

void ListNacosConfigsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListNacosConfigsRequest::getAppName() const {
  return appName_;
}

void ListNacosConfigsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ListNacosConfigsRequest::getRegionId() const {
  return regionId_;
}

void ListNacosConfigsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListNacosConfigsRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListNacosConfigsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListNacosConfigsRequest::getRequestPars() const {
  return requestPars_;
}

void ListNacosConfigsRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListNacosConfigsRequest::getPageSize() const {
  return pageSize_;
}

void ListNacosConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListNacosConfigsRequest::getGroup() const {
  return group_;
}

void ListNacosConfigsRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string ListNacosConfigsRequest::getTags() const {
  return tags_;
}

void ListNacosConfigsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ListNacosConfigsRequest::getInstanceId() const {
  return instanceId_;
}

void ListNacosConfigsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListNacosConfigsRequest::getDataId() const {
  return dataId_;
}

void ListNacosConfigsRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string ListNacosConfigsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListNacosConfigsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

