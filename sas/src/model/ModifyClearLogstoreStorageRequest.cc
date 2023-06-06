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

#include <alibabacloud/sas/model/ModifyClearLogstoreStorageRequest.h>

using AlibabaCloud::Sas::Model::ModifyClearLogstoreStorageRequest;

ModifyClearLogstoreStorageRequest::ModifyClearLogstoreStorageRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyClearLogstoreStorage") {
  setMethod(HttpRequest::Method::Post);
}

ModifyClearLogstoreStorageRequest::~ModifyClearLogstoreStorageRequest() {}

std::string ModifyClearLogstoreStorageRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyClearLogstoreStorageRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyClearLogstoreStorageRequest::getFrom() const {
  return from_;
}

void ModifyClearLogstoreStorageRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string ModifyClearLogstoreStorageRequest::getLang() const {
  return lang_;
}

void ModifyClearLogstoreStorageRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyClearLogstoreStorageRequest::getUserLogStore() const {
  return userLogStore_;
}

void ModifyClearLogstoreStorageRequest::setUserLogStore(const std::string &userLogStore) {
  userLogStore_ = userLogStore;
  setParameter(std::string("UserLogStore"), userLogStore);
}

std::string ModifyClearLogstoreStorageRequest::getUserProject() const {
  return userProject_;
}

void ModifyClearLogstoreStorageRequest::setUserProject(const std::string &userProject) {
  userProject_ = userProject;
  setParameter(std::string("UserProject"), userProject);
}

