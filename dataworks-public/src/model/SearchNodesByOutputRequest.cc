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

#include <alibabacloud/dataworks-public/model/SearchNodesByOutputRequest.h>

using AlibabaCloud::Dataworks_public::Model::SearchNodesByOutputRequest;

SearchNodesByOutputRequest::SearchNodesByOutputRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "SearchNodesByOutput") {
  setMethod(HttpRequest::Method::Post);
}

SearchNodesByOutputRequest::~SearchNodesByOutputRequest() {}

std::string SearchNodesByOutputRequest::getProjectEnv() const {
  return projectEnv_;
}

void SearchNodesByOutputRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string SearchNodesByOutputRequest::getOutputs() const {
  return outputs_;
}

void SearchNodesByOutputRequest::setOutputs(const std::string &outputs) {
  outputs_ = outputs;
  setBodyParameter(std::string("Outputs"), outputs);
}

