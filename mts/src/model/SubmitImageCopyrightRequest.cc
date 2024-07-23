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

#include <alibabacloud/mts/model/SubmitImageCopyrightRequest.h>

using AlibabaCloud::Mts::Model::SubmitImageCopyrightRequest;

SubmitImageCopyrightRequest::SubmitImageCopyrightRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitImageCopyright") {
  setMethod(HttpRequest::Method::Post);
}

SubmitImageCopyrightRequest::~SubmitImageCopyrightRequest() {}

long SubmitImageCopyrightRequest::getLevel() const {
  return level_;
}

void SubmitImageCopyrightRequest::setLevel(long level) {
  level_ = level;
  setParameter(std::string("Level"), std::to_string(level));
}

std::string SubmitImageCopyrightRequest::getMessage() const {
  return message_;
}

void SubmitImageCopyrightRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

std::string SubmitImageCopyrightRequest::getParams() const {
  return params_;
}

void SubmitImageCopyrightRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string SubmitImageCopyrightRequest::getUrl() const {
  return url_;
}

void SubmitImageCopyrightRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string SubmitImageCopyrightRequest::getOutput() const {
  return output_;
}

void SubmitImageCopyrightRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("Output"), output);
}

std::string SubmitImageCopyrightRequest::getInput() const {
  return input_;
}

void SubmitImageCopyrightRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

