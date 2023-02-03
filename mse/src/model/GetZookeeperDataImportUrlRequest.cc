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

#include <alibabacloud/mse/model/GetZookeeperDataImportUrlRequest.h>

using AlibabaCloud::Mse::Model::GetZookeeperDataImportUrlRequest;

GetZookeeperDataImportUrlRequest::GetZookeeperDataImportUrlRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetZookeeperDataImportUrl") {
  setMethod(HttpRequest::Method::Post);
}

GetZookeeperDataImportUrlRequest::~GetZookeeperDataImportUrlRequest() {}

std::string GetZookeeperDataImportUrlRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetZookeeperDataImportUrlRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetZookeeperDataImportUrlRequest::getContentType() const {
  return contentType_;
}

void GetZookeeperDataImportUrlRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setParameter(std::string("ContentType"), contentType);
}

std::string GetZookeeperDataImportUrlRequest::getInstanceId() const {
  return instanceId_;
}

void GetZookeeperDataImportUrlRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetZookeeperDataImportUrlRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetZookeeperDataImportUrlRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

