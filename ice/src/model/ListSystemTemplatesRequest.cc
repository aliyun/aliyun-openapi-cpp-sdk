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

#include <alibabacloud/ice/model/ListSystemTemplatesRequest.h>

using AlibabaCloud::ICE::Model::ListSystemTemplatesRequest;

ListSystemTemplatesRequest::ListSystemTemplatesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListSystemTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListSystemTemplatesRequest::~ListSystemTemplatesRequest() {}

long ListSystemTemplatesRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void ListSystemTemplatesRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string ListSystemTemplatesRequest::getType() const {
  return type_;
}

void ListSystemTemplatesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListSystemTemplatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSystemTemplatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSystemTemplatesRequest::getSubtype() const {
  return subtype_;
}

void ListSystemTemplatesRequest::setSubtype(const std::string &subtype) {
  subtype_ = subtype;
  setParameter(std::string("Subtype"), subtype);
}

int ListSystemTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListSystemTemplatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSystemTemplatesRequest::getTemplateId() const {
  return templateId_;
}

void ListSystemTemplatesRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string ListSystemTemplatesRequest::getName() const {
  return name_;
}

void ListSystemTemplatesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListSystemTemplatesRequest::getStatus() const {
  return status_;
}

void ListSystemTemplatesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

