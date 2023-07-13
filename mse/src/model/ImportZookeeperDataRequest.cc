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

#include <alibabacloud/mse/model/ImportZookeeperDataRequest.h>

using AlibabaCloud::Mse::Model::ImportZookeeperDataRequest;

ImportZookeeperDataRequest::ImportZookeeperDataRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ImportZookeeperData") {
  setMethod(HttpRequest::Method::Post);
}

ImportZookeeperDataRequest::~ImportZookeeperDataRequest() {}

std::string ImportZookeeperDataRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ImportZookeeperDataRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ImportZookeeperDataRequest::getRegionId() const {
  return regionId_;
}

void ImportZookeeperDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ImportZookeeperDataRequest::getRequestPars() const {
  return requestPars_;
}

void ImportZookeeperDataRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ImportZookeeperDataRequest::getInstanceId() const {
  return instanceId_;
}

void ImportZookeeperDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ImportZookeeperDataRequest::getFileName() const {
  return fileName_;
}

void ImportZookeeperDataRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string ImportZookeeperDataRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ImportZookeeperDataRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ImportZookeeperDataRequest::getFileUrl() const {
  return fileUrl_;
}

void ImportZookeeperDataRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setParameter(std::string("FileUrl"), fileUrl);
}

