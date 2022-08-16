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

#include <alibabacloud/sas/model/CreateHoneypotRequest.h>

using AlibabaCloud::Sas::Model::CreateHoneypotRequest;

CreateHoneypotRequest::CreateHoneypotRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateHoneypot") {
  setMethod(HttpRequest::Method::Post);
}

CreateHoneypotRequest::~CreateHoneypotRequest() {}

std::string CreateHoneypotRequest::getHoneypotName() const {
  return honeypotName_;
}

void CreateHoneypotRequest::setHoneypotName(const std::string &honeypotName) {
  honeypotName_ = honeypotName;
  setParameter(std::string("HoneypotName"), honeypotName);
}

int CreateHoneypotRequest::getPageSize() const {
  return pageSize_;
}

void CreateHoneypotRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string CreateHoneypotRequest::getLang() const {
  return lang_;
}

void CreateHoneypotRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string CreateHoneypotRequest::getNodeId() const {
  return nodeId_;
}

void CreateHoneypotRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string CreateHoneypotRequest::getHoneypotImageId() const {
  return honeypotImageId_;
}

void CreateHoneypotRequest::setHoneypotImageId(const std::string &honeypotImageId) {
  honeypotImageId_ = honeypotImageId;
  setParameter(std::string("HoneypotImageId"), honeypotImageId);
}

int CreateHoneypotRequest::getCurrentPage() const {
  return currentPage_;
}

void CreateHoneypotRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string CreateHoneypotRequest::getMeta() const {
  return meta_;
}

void CreateHoneypotRequest::setMeta(const std::string &meta) {
  meta_ = meta;
  setParameter(std::string("Meta"), meta);
}

std::string CreateHoneypotRequest::getHoneypotImageName() const {
  return honeypotImageName_;
}

void CreateHoneypotRequest::setHoneypotImageName(const std::string &honeypotImageName) {
  honeypotImageName_ = honeypotImageName;
  setParameter(std::string("HoneypotImageName"), honeypotImageName);
}

