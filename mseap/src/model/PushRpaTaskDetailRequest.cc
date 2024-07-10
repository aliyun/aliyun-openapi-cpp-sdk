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

#include <alibabacloud/mseap/model/PushRpaTaskDetailRequest.h>

using AlibabaCloud::Mseap::Model::PushRpaTaskDetailRequest;

PushRpaTaskDetailRequest::PushRpaTaskDetailRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "PushRpaTaskDetail") {
  setMethod(HttpRequest::Method::Post);
}

PushRpaTaskDetailRequest::~PushRpaTaskDetailRequest() {}

long PushRpaTaskDetailRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void PushRpaTaskDetailRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string PushRpaTaskDetailRequest::getApiType() const {
  return apiType_;
}

void PushRpaTaskDetailRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

long PushRpaTaskDetailRequest::getModelDetailId() const {
  return modelDetailId_;
}

void PushRpaTaskDetailRequest::setModelDetailId(long modelDetailId) {
  modelDetailId_ = modelDetailId;
  setParameter(std::string("ModelDetailId"), std::to_string(modelDetailId));
}

std::string PushRpaTaskDetailRequest::getUserKp() const {
  return userKp_;
}

void PushRpaTaskDetailRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string PushRpaTaskDetailRequest::getLang() const {
  return lang_;
}

void PushRpaTaskDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long PushRpaTaskDetailRequest::getTaskId() const {
  return taskId_;
}

void PushRpaTaskDetailRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string PushRpaTaskDetailRequest::getUserCallerType() const {
  return userCallerType_;
}

void PushRpaTaskDetailRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string PushRpaTaskDetailRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void PushRpaTaskDetailRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string PushRpaTaskDetailRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void PushRpaTaskDetailRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string PushRpaTaskDetailRequest::getAliyunKp() const {
  return aliyunKp_;
}

void PushRpaTaskDetailRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string PushRpaTaskDetailRequest::getUserBid() const {
  return userBid_;
}

void PushRpaTaskDetailRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string PushRpaTaskDetailRequest::getOriginalRequest() const {
  return originalRequest_;
}

void PushRpaTaskDetailRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

std::string PushRpaTaskDetailRequest::getInputScreenshot() const {
  return inputScreenshot_;
}

void PushRpaTaskDetailRequest::setInputScreenshot(const std::string &inputScreenshot) {
  inputScreenshot_ = inputScreenshot;
  setParameter(std::string("InputScreenshot"), inputScreenshot);
}

std::string PushRpaTaskDetailRequest::getInputData() const {
  return inputData_;
}

void PushRpaTaskDetailRequest::setInputData(const std::string &inputData) {
  inputData_ = inputData;
  setParameter(std::string("InputData"), inputData);
}

std::string PushRpaTaskDetailRequest::getOutputData() const {
  return outputData_;
}

void PushRpaTaskDetailRequest::setOutputData(const std::string &outputData) {
  outputData_ = outputData;
  setParameter(std::string("OutputData"), outputData);
}

std::string PushRpaTaskDetailRequest::getInputHtml() const {
  return inputHtml_;
}

void PushRpaTaskDetailRequest::setInputHtml(const std::string &inputHtml) {
  inputHtml_ = inputHtml;
  setParameter(std::string("InputHtml"), inputHtml);
}

long PushRpaTaskDetailRequest::getTaskDetailId() const {
  return taskDetailId_;
}

void PushRpaTaskDetailRequest::setTaskDetailId(long taskDetailId) {
  taskDetailId_ = taskDetailId;
  setParameter(std::string("TaskDetailId"), std::to_string(taskDetailId));
}

std::string PushRpaTaskDetailRequest::getOutputHtml() const {
  return outputHtml_;
}

void PushRpaTaskDetailRequest::setOutputHtml(const std::string &outputHtml) {
  outputHtml_ = outputHtml;
  setParameter(std::string("OutputHtml"), outputHtml);
}

std::string PushRpaTaskDetailRequest::getUserClientIp() const {
  return userClientIp_;
}

void PushRpaTaskDetailRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string PushRpaTaskDetailRequest::getBid() const {
  return bid_;
}

void PushRpaTaskDetailRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

std::string PushRpaTaskDetailRequest::getOutputScreenshot() const {
  return outputScreenshot_;
}

void PushRpaTaskDetailRequest::setOutputScreenshot(const std::string &outputScreenshot) {
  outputScreenshot_ = outputScreenshot;
  setParameter(std::string("OutputScreenshot"), outputScreenshot);
}

int PushRpaTaskDetailRequest::getStatus() const {
  return status_;
}

void PushRpaTaskDetailRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

