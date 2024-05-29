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

#include <alibabacloud/ddoscoo/model/ModifyElasticBizBandWidthRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyElasticBizBandWidthRequest;

ModifyElasticBizBandWidthRequest::ModifyElasticBizBandWidthRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyElasticBizBandWidth") {
  setMethod(HttpRequest::Method::Post);
}

ModifyElasticBizBandWidthRequest::~ModifyElasticBizBandWidthRequest() {}

int ModifyElasticBizBandWidthRequest::getElasticBizBandwidth() const {
  return elasticBizBandwidth_;
}

void ModifyElasticBizBandWidthRequest::setElasticBizBandwidth(int elasticBizBandwidth) {
  elasticBizBandwidth_ = elasticBizBandwidth;
  setParameter(std::string("ElasticBizBandwidth"), std::to_string(elasticBizBandwidth));
}

std::string ModifyElasticBizBandWidthRequest::getMode() const {
  return mode_;
}

void ModifyElasticBizBandWidthRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyElasticBizBandWidthRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyElasticBizBandWidthRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyElasticBizBandWidthRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyElasticBizBandWidthRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

