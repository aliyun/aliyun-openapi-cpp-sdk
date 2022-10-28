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

#include <alibabacloud/alb/model/UpdateRuleAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateRuleAttributeRequest;

UpdateRuleAttributeRequest::UpdateRuleAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateRuleAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRuleAttributeRequest::~UpdateRuleAttributeRequest() {}

std::string UpdateRuleAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateRuleAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateRuleAttributeRequest::getRuleName() const {
  return ruleName_;
}

void UpdateRuleAttributeRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::vector<UpdateRuleAttributeRequest::RuleActions> UpdateRuleAttributeRequest::getRuleActions() const {
  return ruleActions_;
}

void UpdateRuleAttributeRequest::setRuleActions(const std::vector<UpdateRuleAttributeRequest::RuleActions> &ruleActions) {
  ruleActions_ = ruleActions;
  for(int dep1 = 0; dep1 != ruleActions.size(); dep1++) {
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".FixedResponseConfig.HttpCode", ruleActions[dep1].fixedResponseConfig.httpCode);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".FixedResponseConfig.Content", ruleActions[dep1].fixedResponseConfig.content);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".FixedResponseConfig.ContentType", ruleActions[dep1].fixedResponseConfig.contentType);
    for(int dep2 = 0; dep2 != ruleActions[dep1].trafficMirrorConfig.mirrorGroupConfig.serverGroupTuples.size(); dep2++) {
      setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".TrafficMirrorConfig.MirrorGroupConfig.ServerGroupTuples." + std::to_string(dep2 + 1) + ".ServerGroupId", ruleActions[dep1].trafficMirrorConfig.mirrorGroupConfig.serverGroupTuples[dep2].serverGroupId);
    }
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".TrafficMirrorConfig.TargetType", ruleActions[dep1].trafficMirrorConfig.targetType);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".ForwardGroupConfig.ServerGroupStickySession.Enabled", ruleActions[dep1].forwardGroupConfig.serverGroupStickySession.enabled ? "true" : "false");
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".ForwardGroupConfig.ServerGroupStickySession.Timeout", std::to_string(ruleActions[dep1].forwardGroupConfig.serverGroupStickySession.timeout));
    for(int dep2 = 0; dep2 != ruleActions[dep1].forwardGroupConfig.serverGroupTuples.size(); dep2++) {
      setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".ForwardGroupConfig.ServerGroupTuples." + std::to_string(dep2 + 1) + ".ServerGroupId", ruleActions[dep1].forwardGroupConfig.serverGroupTuples[dep2].serverGroupId);
      setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".ForwardGroupConfig.ServerGroupTuples." + std::to_string(dep2 + 1) + ".Weight", std::to_string(ruleActions[dep1].forwardGroupConfig.serverGroupTuples[dep2].weight));
    }
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RemoveHeaderConfig.Key", ruleActions[dep1].removeHeaderConfig.key);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".InsertHeaderConfig.ValueType", ruleActions[dep1].insertHeaderConfig.valueType);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".InsertHeaderConfig.CoverEnabled", ruleActions[dep1].insertHeaderConfig.coverEnabled ? "true" : "false");
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".InsertHeaderConfig.Value", ruleActions[dep1].insertHeaderConfig.value);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".InsertHeaderConfig.Key", ruleActions[dep1].insertHeaderConfig.key);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".TrafficLimitConfig.QPS", std::to_string(ruleActions[dep1].trafficLimitConfig.qPS));
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".TrafficLimitConfig.PerIpQps", std::to_string(ruleActions[dep1].trafficLimitConfig.perIpQps));
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".CorsConfig.AllowCredentials", ruleActions[dep1].corsConfig.allowCredentials);
    for(int dep2 = 0; dep2 != ruleActions[dep1].corsConfig.allowOrigin.size(); dep2++) {
      setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".CorsConfig.AllowOrigin." + std::to_string(dep2 + 1), ruleActions[dep1].corsConfig.allowOrigin[dep2]);
    }
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".CorsConfig.MaxAge", std::to_string(ruleActions[dep1].corsConfig.maxAge));
    for(int dep2 = 0; dep2 != ruleActions[dep1].corsConfig.allowMethods.size(); dep2++) {
      setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".CorsConfig.AllowMethods." + std::to_string(dep2 + 1), ruleActions[dep1].corsConfig.allowMethods[dep2]);
    }
    for(int dep2 = 0; dep2 != ruleActions[dep1].corsConfig.allowHeaders.size(); dep2++) {
      setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".CorsConfig.AllowHeaders." + std::to_string(dep2 + 1), ruleActions[dep1].corsConfig.allowHeaders[dep2]);
    }
    for(int dep2 = 0; dep2 != ruleActions[dep1].corsConfig.exposeHeaders.size(); dep2++) {
      setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".CorsConfig.ExposeHeaders." + std::to_string(dep2 + 1), ruleActions[dep1].corsConfig.exposeHeaders[dep2]);
    }
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RedirectConfig.Path", ruleActions[dep1].redirectConfig.path);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RedirectConfig.Protocol", ruleActions[dep1].redirectConfig.protocol);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RedirectConfig.Port", ruleActions[dep1].redirectConfig.port);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RedirectConfig.Query", ruleActions[dep1].redirectConfig.query);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RedirectConfig.Host", ruleActions[dep1].redirectConfig.host);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RedirectConfig.HttpCode", ruleActions[dep1].redirectConfig.httpCode);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".Type", ruleActions[dep1].type);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".Order", std::to_string(ruleActions[dep1].order));
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RewriteConfig.Path", ruleActions[dep1].rewriteConfig.path);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RewriteConfig.Query", ruleActions[dep1].rewriteConfig.query);
    setParameter(std::string("RuleActions") + "." + std::to_string(dep1 + 1) + ".RewriteConfig.Host", ruleActions[dep1].rewriteConfig.host);
  }
}

std::vector<UpdateRuleAttributeRequest::RuleConditions> UpdateRuleAttributeRequest::getRuleConditions() const {
  return ruleConditions_;
}

void UpdateRuleAttributeRequest::setRuleConditions(const std::vector<UpdateRuleAttributeRequest::RuleConditions> &ruleConditions) {
  ruleConditions_ = ruleConditions;
  for(int dep1 = 0; dep1 != ruleConditions.size(); dep1++) {
    for(int dep2 = 0; dep2 != ruleConditions[dep1].methodConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".MethodConfig.Values." + std::to_string(dep2 + 1), ruleConditions[dep1].methodConfig.values[dep2]);
    }
    for(int dep2 = 0; dep2 != ruleConditions[dep1].sourceIpConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".SourceIpConfig.Values." + std::to_string(dep2 + 1), ruleConditions[dep1].sourceIpConfig.values[dep2]);
    }
    for(int dep2 = 0; dep2 != ruleConditions[dep1].hostConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".HostConfig.Values." + std::to_string(dep2 + 1), ruleConditions[dep1].hostConfig.values[dep2]);
    }
    for(int dep2 = 0; dep2 != ruleConditions[dep1].queryStringConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".QueryStringConfig.Values." + std::to_string(dep2 + 1) + ".Value", ruleConditions[dep1].queryStringConfig.values[dep2].value);
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".QueryStringConfig.Values." + std::to_string(dep2 + 1) + ".Key", ruleConditions[dep1].queryStringConfig.values[dep2].key);
    }
    for(int dep2 = 0; dep2 != ruleConditions[dep1].responseStatusCodeConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".ResponseStatusCodeConfig.Values." + std::to_string(dep2 + 1), ruleConditions[dep1].responseStatusCodeConfig.values[dep2]);
    }
    for(int dep2 = 0; dep2 != ruleConditions[dep1].pathConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".PathConfig.Values." + std::to_string(dep2 + 1), ruleConditions[dep1].pathConfig.values[dep2]);
    }
    for(int dep2 = 0; dep2 != ruleConditions[dep1].cookieConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".CookieConfig.Values." + std::to_string(dep2 + 1) + ".Value", ruleConditions[dep1].cookieConfig.values[dep2].value);
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".CookieConfig.Values." + std::to_string(dep2 + 1) + ".Key", ruleConditions[dep1].cookieConfig.values[dep2].key);
    }
    setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".Type", ruleConditions[dep1].type);
    for(int dep2 = 0; dep2 != ruleConditions[dep1].headerConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".HeaderConfig.Values." + std::to_string(dep2 + 1), ruleConditions[dep1].headerConfig.values[dep2]);
    }
    setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".HeaderConfig.Key", ruleConditions[dep1].headerConfig.key);
    for(int dep2 = 0; dep2 != ruleConditions[dep1].responseHeaderConfig.values.size(); dep2++) {
      setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".ResponseHeaderConfig.Values." + std::to_string(dep2 + 1), ruleConditions[dep1].responseHeaderConfig.values[dep2]);
    }
    setParameter(std::string("RuleConditions") + "." + std::to_string(dep1 + 1) + ".ResponseHeaderConfig.Key", ruleConditions[dep1].responseHeaderConfig.key);
  }
}

bool UpdateRuleAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateRuleAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

int UpdateRuleAttributeRequest::getPriority() const {
  return priority_;
}

void UpdateRuleAttributeRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdateRuleAttributeRequest::getRuleId() const {
  return ruleId_;
}

void UpdateRuleAttributeRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

