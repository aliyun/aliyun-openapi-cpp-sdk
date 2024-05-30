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

#include <alibabacloud/cams/model/ListChatappTemplateRequest.h>

using AlibabaCloud::Cams::Model::ListChatappTemplateRequest;

ListChatappTemplateRequest::ListChatappTemplateRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ListChatappTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ListChatappTemplateRequest::~ListChatappTemplateRequest() {}

std::string ListChatappTemplateRequest::getCode() const {
  return code_;
}

void ListChatappTemplateRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string ListChatappTemplateRequest::getLanguage() const {
  return language_;
}

void ListChatappTemplateRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string ListChatappTemplateRequest::getCustWabaId() const {
  return custWabaId_;
}

void ListChatappTemplateRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setParameter(std::string("CustWabaId"), custWabaId);
}

std::string ListChatappTemplateRequest::getApiCode() const {
  return apiCode_;
}

void ListChatappTemplateRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string ListChatappTemplateRequest::getTemplateType() const {
  return templateType_;
}

void ListChatappTemplateRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string ListChatappTemplateRequest::getIsvCode() const {
  return isvCode_;
}

void ListChatappTemplateRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setParameter(std::string("IsvCode"), isvCode);
}

std::string ListChatappTemplateRequest::getAuditStatus() const {
  return auditStatus_;
}

void ListChatappTemplateRequest::setAuditStatus(const std::string &auditStatus) {
  auditStatus_ = auditStatus;
  setParameter(std::string("AuditStatus"), auditStatus);
}

std::string ListChatappTemplateRequest::getProdCode() const {
  return prodCode_;
}

void ListChatappTemplateRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ListChatappTemplateRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ListChatappTemplateRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string ListChatappTemplateRequest::getName() const {
  return name_;
}

void ListChatappTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

ListChatappTemplateRequest::Page ListChatappTemplateRequest::getPage() const {
  return page_;
}

void ListChatappTemplateRequest::setPage(const ListChatappTemplateRequest::Page &page) {
  page_ = page;
  setParameter(std::string("Page") + ".Index", std::to_string(page.index));
  setParameter(std::string("Page") + ".Size", std::to_string(page.size));
}

