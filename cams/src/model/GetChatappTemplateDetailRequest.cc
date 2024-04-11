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

#include <alibabacloud/cams/model/GetChatappTemplateDetailRequest.h>

using AlibabaCloud::Cams::Model::GetChatappTemplateDetailRequest;

GetChatappTemplateDetailRequest::GetChatappTemplateDetailRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetChatappTemplateDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetChatappTemplateDetailRequest::~GetChatappTemplateDetailRequest() {}

std::string GetChatappTemplateDetailRequest::getLanguage() const {
  return language_;
}

void GetChatappTemplateDetailRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string GetChatappTemplateDetailRequest::getCustWabaId() const {
  return custWabaId_;
}

void GetChatappTemplateDetailRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setParameter(std::string("CustWabaId"), custWabaId);
}

std::string GetChatappTemplateDetailRequest::getApiCode() const {
  return apiCode_;
}

void GetChatappTemplateDetailRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string GetChatappTemplateDetailRequest::getTemplateType() const {
  return templateType_;
}

void GetChatappTemplateDetailRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string GetChatappTemplateDetailRequest::getTemplateName() const {
  return templateName_;
}

void GetChatappTemplateDetailRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string GetChatappTemplateDetailRequest::getIsvCode() const {
  return isvCode_;
}

void GetChatappTemplateDetailRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setParameter(std::string("IsvCode"), isvCode);
}

std::string GetChatappTemplateDetailRequest::getProdCode() const {
  return prodCode_;
}

void GetChatappTemplateDetailRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string GetChatappTemplateDetailRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetChatappTemplateDetailRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string GetChatappTemplateDetailRequest::getTemplateCode() const {
  return templateCode_;
}

void GetChatappTemplateDetailRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setParameter(std::string("TemplateCode"), templateCode);
}

