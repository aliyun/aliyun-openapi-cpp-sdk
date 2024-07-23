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

#include <alibabacloud/mts/model/SubmitTraceM3u8JobRequest.h>

using AlibabaCloud::Mts::Model::SubmitTraceM3u8JobRequest;

SubmitTraceM3u8JobRequest::SubmitTraceM3u8JobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitTraceM3u8Job") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTraceM3u8JobRequest::~SubmitTraceM3u8JobRequest() {}

std::string SubmitTraceM3u8JobRequest::getMediaId() const {
  return mediaId_;
}

void SubmitTraceM3u8JobRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string SubmitTraceM3u8JobRequest::getParams() const {
  return params_;
}

void SubmitTraceM3u8JobRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string SubmitTraceM3u8JobRequest::getOutput() const {
  return output_;
}

void SubmitTraceM3u8JobRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("Output"), output);
}

std::string SubmitTraceM3u8JobRequest::getTrace() const {
  return trace_;
}

void SubmitTraceM3u8JobRequest::setTrace(const std::string &trace) {
  trace_ = trace;
  setParameter(std::string("Trace"), trace);
}

std::string SubmitTraceM3u8JobRequest::getKeyUri() const {
  return keyUri_;
}

void SubmitTraceM3u8JobRequest::setKeyUri(const std::string &keyUri) {
  keyUri_ = keyUri;
  setParameter(std::string("KeyUri"), keyUri);
}

