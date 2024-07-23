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

#include <alibabacloud/mts/model/SubmitCopyrightExtractJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitCopyrightExtractJobRequest;

SubmitCopyrightExtractJobRequest::SubmitCopyrightExtractJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitCopyrightExtractJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitCopyrightExtractJobRequest::~SubmitCopyrightExtractJobRequest() {}

std::string SubmitCopyrightExtractJobRequest::getParams() const {
  return params_;
}

void SubmitCopyrightExtractJobRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string SubmitCopyrightExtractJobRequest::getUrl() const {
  return url_;
}

void SubmitCopyrightExtractJobRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string SubmitCopyrightExtractJobRequest::getInput() const {
  return input_;
}

void SubmitCopyrightExtractJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

std::string SubmitCopyrightExtractJobRequest::getUserData() const {
  return userData_;
}

void SubmitCopyrightExtractJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitCopyrightExtractJobRequest::getCallBack() const {
  return callBack_;
}

void SubmitCopyrightExtractJobRequest::setCallBack(const std::string &callBack) {
  callBack_ = callBack;
  setParameter(std::string("CallBack"), callBack);
}

