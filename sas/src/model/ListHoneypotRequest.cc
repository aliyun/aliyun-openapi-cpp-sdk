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

#include <alibabacloud/sas/model/ListHoneypotRequest.h>

using AlibabaCloud::Sas::Model::ListHoneypotRequest;

ListHoneypotRequest::ListHoneypotRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListHoneypot") {
  setMethod(HttpRequest::Method::Post);
}

ListHoneypotRequest::~ListHoneypotRequest() {}

std::string ListHoneypotRequest::getHoneypotName() const {
  return honeypotName_;
}

void ListHoneypotRequest::setHoneypotName(const std::string &honeypotName) {
  honeypotName_ = honeypotName;
  setParameter(std::string("HoneypotName"), honeypotName);
}

int ListHoneypotRequest::getPageSize() const {
  return pageSize_;
}

void ListHoneypotRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListHoneypotRequest::getLang() const {
  return lang_;
}

void ListHoneypotRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ListHoneypotRequest::getNodeId() const {
  return nodeId_;
}

void ListHoneypotRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

int ListHoneypotRequest::getCurrentPage() const {
  return currentPage_;
}

void ListHoneypotRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListHoneypotRequest::getNodeName() const {
  return nodeName_;
}

void ListHoneypotRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setParameter(std::string("NodeName"), nodeName);
}

std::vector<std::string> ListHoneypotRequest::getHoneypotIds() const {
  return honeypotIds_;
}

void ListHoneypotRequest::setHoneypotIds(const std::vector<std::string> &honeypotIds) {
  honeypotIds_ = honeypotIds;
}

