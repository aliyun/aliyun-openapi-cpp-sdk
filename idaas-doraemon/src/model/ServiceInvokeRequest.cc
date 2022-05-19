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

#include <alibabacloud/idaas-doraemon/model/ServiceInvokeRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ServiceInvokeRequest;

ServiceInvokeRequest::ServiceInvokeRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ServiceInvoke") {
  setMethod(HttpRequest::Method::Post);
}

ServiceInvokeRequest::~ServiceInvokeRequest() {}

std::string ServiceInvokeRequest::getXClientIp() const {
  return xClientIp_;
}

void ServiceInvokeRequest::setXClientIp(const std::string &xClientIp) {
  xClientIp_ = xClientIp;
  setParameter(std::string("XClientIp"), xClientIp);
}

std::string ServiceInvokeRequest::getMobileExtendParamsJsonSign() const {
  return mobileExtendParamsJsonSign_;
}

void ServiceInvokeRequest::setMobileExtendParamsJsonSign(const std::string &mobileExtendParamsJsonSign) {
  mobileExtendParamsJsonSign_ = mobileExtendParamsJsonSign;
  setParameter(std::string("MobileExtendParamsJsonSign"), mobileExtendParamsJsonSign);
}

std::string ServiceInvokeRequest::getServerExtendParamsJson() const {
  return serverExtendParamsJson_;
}

void ServiceInvokeRequest::setServerExtendParamsJson(const std::string &serverExtendParamsJson) {
  serverExtendParamsJson_ = serverExtendParamsJson;
  setParameter(std::string("ServerExtendParamsJson"), serverExtendParamsJson);
}

std::string ServiceInvokeRequest::getDoraemonAction() const {
  return doraemonAction_;
}

void ServiceInvokeRequest::setDoraemonAction(const std::string &doraemonAction) {
  doraemonAction_ = doraemonAction;
  setParameter(std::string("DoraemonAction"), doraemonAction);
}

std::string ServiceInvokeRequest::getMobileExtendParamsJson() const {
  return mobileExtendParamsJson_;
}

void ServiceInvokeRequest::setMobileExtendParamsJson(const std::string &mobileExtendParamsJson) {
  mobileExtendParamsJson_ = mobileExtendParamsJson;
  setParameter(std::string("MobileExtendParamsJson"), mobileExtendParamsJson);
}

std::string ServiceInvokeRequest::getServiceCode() const {
  return serviceCode_;
}

void ServiceInvokeRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setParameter(std::string("ServiceCode"), serviceCode);
}

bool ServiceInvokeRequest::getTestModel() const {
  return testModel_;
}

void ServiceInvokeRequest::setTestModel(bool testModel) {
  testModel_ = testModel;
  setParameter(std::string("TestModel"), testModel ? "true" : "false");
}

std::string ServiceInvokeRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void ServiceInvokeRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

