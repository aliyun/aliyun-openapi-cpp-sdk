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

#include <alibabacloud/websitebuild/model/OperateAppServiceForPartnerRequest.h>

using AlibabaCloud::WebsiteBuild::Model::OperateAppServiceForPartnerRequest;

OperateAppServiceForPartnerRequest::OperateAppServiceForPartnerRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "OperateAppServiceForPartner") {
  setMethod(HttpRequest::Method::Post);
}

OperateAppServiceForPartnerRequest::~OperateAppServiceForPartnerRequest() {}

std::string OperateAppServiceForPartnerRequest::getExtend() const {
  return extend_;
}

void OperateAppServiceForPartnerRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string OperateAppServiceForPartnerRequest::getServiceType() const {
  return serviceType_;
}

void OperateAppServiceForPartnerRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string OperateAppServiceForPartnerRequest::getBizId() const {
  return bizId_;
}

void OperateAppServiceForPartnerRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string OperateAppServiceForPartnerRequest::getOperateEvent() const {
  return operateEvent_;
}

void OperateAppServiceForPartnerRequest::setOperateEvent(const std::string &operateEvent) {
  operateEvent_ = operateEvent;
  setParameter(std::string("OperateEvent"), operateEvent);
}

