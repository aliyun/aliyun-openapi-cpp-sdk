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

#include <alibabacloud/cams/model/DeleteChatappTemplateRequest.h>

using AlibabaCloud::Cams::Model::DeleteChatappTemplateRequest;

DeleteChatappTemplateRequest::DeleteChatappTemplateRequest()
    : RpcServiceRequest("cams", "2020-06-06", "DeleteChatappTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteChatappTemplateRequest::~DeleteChatappTemplateRequest() {}

std::string DeleteChatappTemplateRequest::getCustWabaId() const {
  return custWabaId_;
}

void DeleteChatappTemplateRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setParameter(std::string("CustWabaId"), custWabaId);
}

std::string DeleteChatappTemplateRequest::getLanguage() const {
  return language_;
}

void DeleteChatappTemplateRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string DeleteChatappTemplateRequest::getApiCode() const {
  return apiCode_;
}

void DeleteChatappTemplateRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string DeleteChatappTemplateRequest::getTemplateType() const {
  return templateType_;
}

void DeleteChatappTemplateRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string DeleteChatappTemplateRequest::getTemplateName() const {
  return templateName_;
}

void DeleteChatappTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string DeleteChatappTemplateRequest::getIsvCode() const {
  return isvCode_;
}

void DeleteChatappTemplateRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setParameter(std::string("IsvCode"), isvCode);
}

std::string DeleteChatappTemplateRequest::getProdCode() const {
  return prodCode_;
}

void DeleteChatappTemplateRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string DeleteChatappTemplateRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void DeleteChatappTemplateRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string DeleteChatappTemplateRequest::getTemplateCode() const {
  return templateCode_;
}

void DeleteChatappTemplateRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setParameter(std::string("TemplateCode"), templateCode);
}

