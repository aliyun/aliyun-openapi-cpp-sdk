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

#include <alibabacloud/dataworks-public/model/ListNodesByOutputRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListNodesByOutputRequest;

ListNodesByOutputRequest::ListNodesByOutputRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListNodesByOutput") {
  setMethod(HttpRequest::Method::Post);
}

ListNodesByOutputRequest::~ListNodesByOutputRequest() {}

std::string ListNodesByOutputRequest::getProjectEnv() const {
  return projectEnv_;
}

void ListNodesByOutputRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string ListNodesByOutputRequest::getOutputs() const {
  return outputs_;
}

void ListNodesByOutputRequest::setOutputs(const std::string &outputs) {
  outputs_ = outputs;
  setBodyParameter(std::string("Outputs"), outputs);
}

bool ListNodesByOutputRequest::getOutputNodeListAsMap() const {
  return outputNodeListAsMap_;
}

void ListNodesByOutputRequest::setOutputNodeListAsMap(bool outputNodeListAsMap) {
  outputNodeListAsMap_ = outputNodeListAsMap;
  setBodyParameter(std::string("OutputNodeListAsMap"), outputNodeListAsMap ? "true" : "false");
}

