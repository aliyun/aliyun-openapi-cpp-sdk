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

#include <alibabacloud/cams/model/CreateChatappTemplateRequest.h>

using AlibabaCloud::Cams::Model::CreateChatappTemplateRequest;

CreateChatappTemplateRequest::CreateChatappTemplateRequest()
    : RpcServiceRequest("cams", "2020-06-06", "CreateChatappTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateChatappTemplateRequest::~CreateChatappTemplateRequest() {}

std::vector<CreateChatappTemplateRequest::Components> CreateChatappTemplateRequest::getComponents() const {
  return components_;
}

void CreateChatappTemplateRequest::setComponents(const std::vector<CreateChatappTemplateRequest::Components> &components) {
  components_ = components;
  for(int dep1 = 0; dep1 != components.size(); dep1++) {
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Type", components[dep1].type);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Text", components[dep1].text);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Format", components[dep1].format);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Url", components[dep1].url);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Caption", components[dep1].caption);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".FileName", components[dep1].fileName);
    for(int dep2 = 0; dep2 != components[dep1].buttons.size(); dep2++) {
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".Type", components[dep1].buttons[dep2].type);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".Text", components[dep1].buttons[dep2].text);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".PhoneNumber", components[dep1].buttons[dep2].phoneNumber);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".Url", components[dep1].buttons[dep2].url);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".UrlType", components[dep1].buttons[dep2].urlType);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".SignatureHash", components[dep1].buttons[dep2].signatureHash);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".PackageName", components[dep1].buttons[dep2].packageName);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".AutofillText", components[dep1].buttons[dep2].autofillText);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".IsOptOut", components[dep1].buttons[dep2].isOptOut ? "true" : "false");
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".CouponCode", components[dep1].buttons[dep2].couponCode);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".FlowId", components[dep1].buttons[dep2].flowId);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".FlowAction", components[dep1].buttons[dep2].flowAction);
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".NavigateScreen", components[dep1].buttons[dep2].navigateScreen);
      for(int dep3 = 0; dep3 != components[dep1].buttons[dep2].supportedApps.size(); dep3++) {
        setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".SupportedApps." + std::to_string(dep3 + 1) + ".SignatureHash", components[dep1].buttons[dep2].supportedApps[dep3].signatureHash);
        setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Buttons." + std::to_string(dep2 + 1) + ".SupportedApps." + std::to_string(dep3 + 1) + ".PackageName", components[dep1].buttons[dep2].supportedApps[dep3].packageName);
      }
    }
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ThumbUrl", components[dep1].thumbUrl);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Duration", std::to_string(components[dep1].duration));
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".FileType", components[dep1].fileType);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".CodeExpirationMinutes", std::to_string(components[dep1].codeExpirationMinutes));
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".AddSecretRecommendation", components[dep1].addSecretRecommendation ? "true" : "false");
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".HasExpiration", components[dep1].hasExpiration ? "true" : "false");
    for(int dep2 = 0; dep2 != components[dep1].cards.size(); dep2++) {
      for(int dep3 = 0; dep3 != components[dep1].cards[dep2].cardComponents.size(); dep3++) {
        setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Type", components[dep1].cards[dep2].cardComponents[dep3].type);
        setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Format", components[dep1].cards[dep2].cardComponents[dep3].format);
        setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Text", components[dep1].cards[dep2].cardComponents[dep3].text);
        setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Url", components[dep1].cards[dep2].cardComponents[dep3].url);
        for(int dep4 = 0; dep4 != components[dep1].cards[dep2].cardComponents[dep3].buttons.size(); dep4++) {
          setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Buttons." + std::to_string(dep4 + 1) + ".Text", components[dep1].cards[dep2].cardComponents[dep3].buttons[dep4].text);
          setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Buttons." + std::to_string(dep4 + 1) + ".Type", components[dep1].cards[dep2].cardComponents[dep3].buttons[dep4].type);
          setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Buttons." + std::to_string(dep4 + 1) + ".Url", components[dep1].cards[dep2].cardComponents[dep3].buttons[dep4].url);
          setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Buttons." + std::to_string(dep4 + 1) + ".UrlType", components[dep1].cards[dep2].cardComponents[dep3].buttons[dep4].urlType);
          setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".Cards." + std::to_string(dep2 + 1) + ".CardComponents." + std::to_string(dep3 + 1) + ".Buttons." + std::to_string(dep4 + 1) + ".PhoneNumber", components[dep1].cards[dep2].cardComponents[dep3].buttons[dep4].phoneNumber);
        }
      }
    }
  }
}

std::string CreateChatappTemplateRequest::getLanguage() const {
  return language_;
}

void CreateChatappTemplateRequest::setLanguage(const std::string &language) {
  language_ = language;
  setBodyParameter(std::string("Language"), language);
}

std::string CreateChatappTemplateRequest::getCustWabaId() const {
  return custWabaId_;
}

void CreateChatappTemplateRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setBodyParameter(std::string("CustWabaId"), custWabaId);
}

std::map<std::string, std::string> CreateChatappTemplateRequest::getExample() const {
  return example_;
}

void CreateChatappTemplateRequest::setExample(const std::map<std::string, std::string> &example) {
  example_ = example;
  for(auto const &iter1 : example) {
    setBodyParameter(std::string("Example") + "." + iter1.first, iter1.second);
  }
}

std::string CreateChatappTemplateRequest::getApiCode() const {
  return apiCode_;
}

void CreateChatappTemplateRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string CreateChatappTemplateRequest::getTemplateType() const {
  return templateType_;
}

void CreateChatappTemplateRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setBodyParameter(std::string("TemplateType"), templateType);
}

std::string CreateChatappTemplateRequest::getIsvCode() const {
  return isvCode_;
}

void CreateChatappTemplateRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setBodyParameter(std::string("IsvCode"), isvCode);
}

std::string CreateChatappTemplateRequest::getProdCode() const {
  return prodCode_;
}

void CreateChatappTemplateRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string CreateChatappTemplateRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void CreateChatappTemplateRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string CreateChatappTemplateRequest::getName() const {
  return name_;
}

void CreateChatappTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

bool CreateChatappTemplateRequest::getAllowCategoryChange() const {
  return allowCategoryChange_;
}

void CreateChatappTemplateRequest::setAllowCategoryChange(bool allowCategoryChange) {
  allowCategoryChange_ = allowCategoryChange;
  setBodyParameter(std::string("AllowCategoryChange"), allowCategoryChange ? "true" : "false");
}

std::string CreateChatappTemplateRequest::getCategory() const {
  return category_;
}

void CreateChatappTemplateRequest::setCategory(const std::string &category) {
  category_ = category;
  setBodyParameter(std::string("Category"), category);
}

int CreateChatappTemplateRequest::getMessageSendTtlSeconds() const {
  return messageSendTtlSeconds_;
}

void CreateChatappTemplateRequest::setMessageSendTtlSeconds(int messageSendTtlSeconds) {
  messageSendTtlSeconds_ = messageSendTtlSeconds;
  setBodyParameter(std::string("MessageSendTtlSeconds"), std::to_string(messageSendTtlSeconds));
}

