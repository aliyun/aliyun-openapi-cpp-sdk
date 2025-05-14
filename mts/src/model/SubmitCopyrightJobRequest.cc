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

#include <alibabacloud/mts/model/SubmitCopyrightJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitCopyrightJobRequest;

SubmitCopyrightJobRequest::SubmitCopyrightJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitCopyrightJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitCopyrightJobRequest::~SubmitCopyrightJobRequest() {}

std::string SubmitCopyrightJobRequest::getVisibleMessage() const {
  return visibleMessage_;
}

void SubmitCopyrightJobRequest::setVisibleMessage(const std::string &visibleMessage) {
  visibleMessage_ = visibleMessage;
  setParameter(std::string("VisibleMessage"), visibleMessage);
}

std::string SubmitCopyrightJobRequest::getDescription() const {
  return description_;
}

void SubmitCopyrightJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long SubmitCopyrightJobRequest::getStartTime() const {
  return startTime_;
}

void SubmitCopyrightJobRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string SubmitCopyrightJobRequest::getOutput() const {
  return output_;
}

void SubmitCopyrightJobRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("Output"), output);
}

std::string SubmitCopyrightJobRequest::getUserData() const {
  return userData_;
}

void SubmitCopyrightJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long SubmitCopyrightJobRequest::getLevel() const {
  return level_;
}

void SubmitCopyrightJobRequest::setLevel(long level) {
  level_ = level;
  setParameter(std::string("Level"), std::to_string(level));
}

std::string SubmitCopyrightJobRequest::getMessage() const {
  return message_;
}

void SubmitCopyrightJobRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

std::string SubmitCopyrightJobRequest::getParams() const {
  return params_;
}

void SubmitCopyrightJobRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string SubmitCopyrightJobRequest::getUrl() const {
  return url_;
}

void SubmitCopyrightJobRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string SubmitCopyrightJobRequest::getInput() const {
  return input_;
}

void SubmitCopyrightJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

long SubmitCopyrightJobRequest::getTotalTime() const {
  return totalTime_;
}

void SubmitCopyrightJobRequest::setTotalTime(long totalTime) {
  totalTime_ = totalTime;
  setParameter(std::string("TotalTime"), std::to_string(totalTime));
}

std::string SubmitCopyrightJobRequest::getCallBack() const {
  return callBack_;
}

void SubmitCopyrightJobRequest::setCallBack(const std::string &callBack) {
  callBack_ = callBack;
  setParameter(std::string("CallBack"), callBack);
}

