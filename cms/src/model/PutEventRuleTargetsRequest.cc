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

#include <alibabacloud/cms/model/PutEventRuleTargetsRequest.h>

using AlibabaCloud::Cms::Model::PutEventRuleTargetsRequest;

PutEventRuleTargetsRequest::PutEventRuleTargetsRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutEventRuleTargets") {
  setMethod(HttpRequest::Method::Post);
}

PutEventRuleTargetsRequest::~PutEventRuleTargetsRequest() {}

std::vector<PutEventRuleTargetsRequest::WebhookParameters> PutEventRuleTargetsRequest::getWebhookParameters() const {
  return webhookParameters_;
}

void PutEventRuleTargetsRequest::setWebhookParameters(const std::vector<PutEventRuleTargetsRequest::WebhookParameters> &webhookParameters) {
  webhookParameters_ = webhookParameters;
  for(int dep1 = 0; dep1 != webhookParameters.size(); dep1++) {
  auto webhookParametersObj = webhookParameters.at(dep1);
  std::string webhookParametersObjStr = std::string("WebhookParameters") + "." + std::to_string(dep1 + 1);
    setParameter(webhookParametersObjStr + ".Protocol", webhookParametersObj.protocol);
    setParameter(webhookParametersObjStr + ".Method", webhookParametersObj.method);
    setParameter(webhookParametersObjStr + ".Id", webhookParametersObj.id);
    setParameter(webhookParametersObjStr + ".Url", webhookParametersObj.url);
  }
}

std::vector<PutEventRuleTargetsRequest::ContactParameters> PutEventRuleTargetsRequest::getContactParameters() const {
  return contactParameters_;
}

void PutEventRuleTargetsRequest::setContactParameters(const std::vector<PutEventRuleTargetsRequest::ContactParameters> &contactParameters) {
  contactParameters_ = contactParameters;
  for(int dep1 = 0; dep1 != contactParameters.size(); dep1++) {
  auto contactParametersObj = contactParameters.at(dep1);
  std::string contactParametersObjStr = std::string("ContactParameters") + "." + std::to_string(dep1 + 1);
    setParameter(contactParametersObjStr + ".Level", contactParametersObj.level);
    setParameter(contactParametersObjStr + ".Id", contactParametersObj.id);
    setParameter(contactParametersObjStr + ".ContactGroupName", contactParametersObj.contactGroupName);
  }
}

std::vector<PutEventRuleTargetsRequest::SlsParameters> PutEventRuleTargetsRequest::getSlsParameters() const {
  return slsParameters_;
}

void PutEventRuleTargetsRequest::setSlsParameters(const std::vector<PutEventRuleTargetsRequest::SlsParameters> &slsParameters) {
  slsParameters_ = slsParameters;
  for(int dep1 = 0; dep1 != slsParameters.size(); dep1++) {
  auto slsParametersObj = slsParameters.at(dep1);
  std::string slsParametersObjStr = std::string("SlsParameters") + "." + std::to_string(dep1 + 1);
    setParameter(slsParametersObjStr + ".Project", slsParametersObj.project);
    setParameter(slsParametersObjStr + ".Id", slsParametersObj.id);
    setParameter(slsParametersObjStr + ".Region", slsParametersObj.region);
    setParameter(slsParametersObjStr + ".LogStore", slsParametersObj.logStore);
  }
}

std::string PutEventRuleTargetsRequest::getRuleName() const {
  return ruleName_;
}

void PutEventRuleTargetsRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::vector<PutEventRuleTargetsRequest::OpenApiParameters> PutEventRuleTargetsRequest::getOpenApiParameters() const {
  return openApiParameters_;
}

void PutEventRuleTargetsRequest::setOpenApiParameters(const std::vector<PutEventRuleTargetsRequest::OpenApiParameters> &openApiParameters) {
  openApiParameters_ = openApiParameters;
  for(int dep1 = 0; dep1 != openApiParameters.size(); dep1++) {
  auto openApiParametersObj = openApiParameters.at(dep1);
  std::string openApiParametersObjStr = std::string("OpenApiParameters") + "." + std::to_string(dep1 + 1);
    setParameter(openApiParametersObjStr + ".Product", openApiParametersObj.product);
    setParameter(openApiParametersObjStr + ".Role", openApiParametersObj.role);
    setParameter(openApiParametersObjStr + ".Action", openApiParametersObj.action);
    setParameter(openApiParametersObjStr + ".Id", openApiParametersObj.id);
    setParameter(openApiParametersObjStr + ".Arn", openApiParametersObj.arn);
    setParameter(openApiParametersObjStr + ".Region", openApiParametersObj.region);
    setParameter(openApiParametersObjStr + ".Version", openApiParametersObj.version);
  }
}

std::vector<PutEventRuleTargetsRequest::MnsParameters> PutEventRuleTargetsRequest::getMnsParameters() const {
  return mnsParameters_;
}

void PutEventRuleTargetsRequest::setMnsParameters(const std::vector<PutEventRuleTargetsRequest::MnsParameters> &mnsParameters) {
  mnsParameters_ = mnsParameters;
  for(int dep1 = 0; dep1 != mnsParameters.size(); dep1++) {
  auto mnsParametersObj = mnsParameters.at(dep1);
  std::string mnsParametersObjStr = std::string("MnsParameters") + "." + std::to_string(dep1 + 1);
    setParameter(mnsParametersObjStr + ".Id", mnsParametersObj.id);
    setParameter(mnsParametersObjStr + ".Region", mnsParametersObj.region);
    setParameter(mnsParametersObjStr + ".Queue", mnsParametersObj.queue);
  }
}

std::vector<PutEventRuleTargetsRequest::FcParameters> PutEventRuleTargetsRequest::getFcParameters() const {
  return fcParameters_;
}

void PutEventRuleTargetsRequest::setFcParameters(const std::vector<PutEventRuleTargetsRequest::FcParameters> &fcParameters) {
  fcParameters_ = fcParameters;
  for(int dep1 = 0; dep1 != fcParameters.size(); dep1++) {
  auto fcParametersObj = fcParameters.at(dep1);
  std::string fcParametersObjStr = std::string("FcParameters") + "." + std::to_string(dep1 + 1);
    setParameter(fcParametersObjStr + ".FunctionName", fcParametersObj.functionName);
    setParameter(fcParametersObjStr + ".ServiceName", fcParametersObj.serviceName);
    setParameter(fcParametersObjStr + ".Id", fcParametersObj.id);
    setParameter(fcParametersObjStr + ".Region", fcParametersObj.region);
  }
}

