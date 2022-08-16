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

#include <alibabacloud/sas/model/ListHoneypotNodeRequest.h>

using AlibabaCloud::Sas::Model::ListHoneypotNodeRequest;

ListHoneypotNodeRequest::ListHoneypotNodeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListHoneypotNode") {
  setMethod(HttpRequest::Method::Post);
}

ListHoneypotNodeRequest::~ListHoneypotNodeRequest() {}

int ListHoneypotNodeRequest::getPageSize() const {
  return pageSize_;
}

void ListHoneypotNodeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListHoneypotNodeRequest::getLang() const {
  return lang_;
}

void ListHoneypotNodeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ListHoneypotNodeRequest::getNodeId() const {
  return nodeId_;
}

void ListHoneypotNodeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

int ListHoneypotNodeRequest::getCurrentPage() const {
  return currentPage_;
}

void ListHoneypotNodeRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListHoneypotNodeRequest::getNodeName() const {
  return nodeName_;
}

void ListHoneypotNodeRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setParameter(std::string("NodeName"), nodeName);
}

