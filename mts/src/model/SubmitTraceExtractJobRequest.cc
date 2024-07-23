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

#include <alibabacloud/mts/model/SubmitTraceExtractJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitTraceExtractJobRequest;

SubmitTraceExtractJobRequest::SubmitTraceExtractJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitTraceExtractJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTraceExtractJobRequest::~SubmitTraceExtractJobRequest() {}

std::string SubmitTraceExtractJobRequest::getParams() const {
  return params_;
}

void SubmitTraceExtractJobRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string SubmitTraceExtractJobRequest::getUrl() const {
  return url_;
}

void SubmitTraceExtractJobRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string SubmitTraceExtractJobRequest::getInput() const {
  return input_;
}

void SubmitTraceExtractJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

std::string SubmitTraceExtractJobRequest::getUserData() const {
  return userData_;
}

void SubmitTraceExtractJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitTraceExtractJobRequest::getCallBack() const {
  return callBack_;
}

void SubmitTraceExtractJobRequest::setCallBack(const std::string &callBack) {
  callBack_ = callBack;
  setParameter(std::string("CallBack"), callBack);
}

