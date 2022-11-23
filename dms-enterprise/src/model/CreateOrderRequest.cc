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

#include <alibabacloud/dms-enterprise/model/CreateOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateOrderRequest;

CreateOrderRequest::CreateOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrderRequest::~CreateOrderRequest() {}

long CreateOrderRequest::getTid() const {
  return tid_;
}

void CreateOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateOrderRequest::getPluginType() const {
  return pluginType_;
}

void CreateOrderRequest::setPluginType(const std::string &pluginType) {
  pluginType_ = pluginType;
  setParameter(std::string("PluginType"), pluginType);
}

std::map<std::string, std::string> CreateOrderRequest::getPluginParam() const {
  return pluginParam_;
}

void CreateOrderRequest::setPluginParam(std::map<std::string, std::string> pluginParam) {
  pluginParam_ = pluginParam;
  setBodyParameter(std::string("PluginParam"), pluginParam);
}

std::string CreateOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateOrderRequest::setRelatedUserList(const std::string &relatedUserList) {
  relatedUserList_ = relatedUserList;
  setParameter(std::string("RelatedUserList"), relatedUserList);
}

std::string CreateOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateOrderRequest::getComment() const {
  return comment_;
}

void CreateOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

