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

#include <alibabacloud/mts/model/SubmitTraceAbJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitTraceAbJobRequest;

SubmitTraceAbJobRequest::SubmitTraceAbJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitTraceAbJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTraceAbJobRequest::~SubmitTraceAbJobRequest() {}

long SubmitTraceAbJobRequest::getStartTime() const {
  return startTime_;
}

void SubmitTraceAbJobRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string SubmitTraceAbJobRequest::getOutput() const {
  return output_;
}

void SubmitTraceAbJobRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("Output"), output);
}

std::string SubmitTraceAbJobRequest::getUserData() const {
  return userData_;
}

void SubmitTraceAbJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitTraceAbJobRequest::getCipherBase64ed() const {
  return cipherBase64ed_;
}

void SubmitTraceAbJobRequest::setCipherBase64ed(const std::string &cipherBase64ed) {
  cipherBase64ed_ = cipherBase64ed;
  setParameter(std::string("CipherBase64ed"), cipherBase64ed);
}

long SubmitTraceAbJobRequest::getLevel() const {
  return level_;
}

void SubmitTraceAbJobRequest::setLevel(long level) {
  level_ = level;
  setParameter(std::string("Level"), std::to_string(level));
}

std::string SubmitTraceAbJobRequest::getUrl() const {
  return url_;
}

void SubmitTraceAbJobRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string SubmitTraceAbJobRequest::getInput() const {
  return input_;
}

void SubmitTraceAbJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

long SubmitTraceAbJobRequest::getTotalTime() const {
  return totalTime_;
}

void SubmitTraceAbJobRequest::setTotalTime(long totalTime) {
  totalTime_ = totalTime;
  setParameter(std::string("TotalTime"), std::to_string(totalTime));
}

std::string SubmitTraceAbJobRequest::getCallBack() const {
  return callBack_;
}

void SubmitTraceAbJobRequest::setCallBack(const std::string &callBack) {
  callBack_ = callBack;
  setParameter(std::string("CallBack"), callBack);
}

