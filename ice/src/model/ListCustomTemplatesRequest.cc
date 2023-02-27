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

#include <alibabacloud/ice/model/ListCustomTemplatesRequest.h>

using AlibabaCloud::ICE::Model::ListCustomTemplatesRequest;

ListCustomTemplatesRequest::ListCustomTemplatesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListCustomTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomTemplatesRequest::~ListCustomTemplatesRequest() {}

long ListCustomTemplatesRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void ListCustomTemplatesRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string ListCustomTemplatesRequest::getType() const {
  return type_;
}

void ListCustomTemplatesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListCustomTemplatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomTemplatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCustomTemplatesRequest::getSubtype() const {
  return subtype_;
}

void ListCustomTemplatesRequest::setSubtype(const std::string &subtype) {
  subtype_ = subtype;
  setParameter(std::string("Subtype"), subtype);
}

int ListCustomTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomTemplatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCustomTemplatesRequest::getOrderBy() const {
  return orderBy_;
}

void ListCustomTemplatesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListCustomTemplatesRequest::getTemplateId() const {
  return templateId_;
}

void ListCustomTemplatesRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string ListCustomTemplatesRequest::getAppId() const {
  return appId_;
}

void ListCustomTemplatesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ListCustomTemplatesRequest::getName() const {
  return name_;
}

void ListCustomTemplatesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

