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

#include <alibabacloud/alb/model/UpdateRulesAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateRulesAttributeRequest;

UpdateRulesAttributeRequest::UpdateRulesAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateRulesAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRulesAttributeRequest::~UpdateRulesAttributeRequest() {}

std::string UpdateRulesAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateRulesAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateRulesAttributeRequest::Rules> UpdateRulesAttributeRequest::getRules() const {
  return rules_;
}

void UpdateRulesAttributeRequest::setRules(const std::vector<UpdateRulesAttributeRequest::Rules> &rules) {
  rules_ = rules;
  for(int dep1 = 0; dep1 != rules.size(); dep1++) {
    for(int dep2 = 0; dep2 != rules[dep1].ruleConditions.size(); dep2++) {
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].methodConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".MethodConfig.Values." + std::to_string(dep3 + 1), rules[dep1].ruleConditions[dep2].methodConfig.values[dep3]);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].sourceIpConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".SourceIpConfig.Values." + std::to_string(dep3 + 1), rules[dep1].ruleConditions[dep2].sourceIpConfig.values[dep3]);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].hostConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".HostConfig.Values." + std::to_string(dep3 + 1), rules[dep1].ruleConditions[dep2].hostConfig.values[dep3]);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].queryStringConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".QueryStringConfig.Values." + std::to_string(dep3 + 1) + ".Value", rules[dep1].ruleConditions[dep2].queryStringConfig.values[dep3].value);
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".QueryStringConfig.Values." + std::to_string(dep3 + 1) + ".Key", rules[dep1].ruleConditions[dep2].queryStringConfig.values[dep3].key);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].responseStatusCodeConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".ResponseStatusCodeConfig.Values." + std::to_string(dep3 + 1), rules[dep1].ruleConditions[dep2].responseStatusCodeConfig.values[dep3]);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].pathConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".PathConfig.Values." + std::to_string(dep3 + 1), rules[dep1].ruleConditions[dep2].pathConfig.values[dep3]);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].cookieConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".CookieConfig.Values." + std::to_string(dep3 + 1) + ".Value", rules[dep1].ruleConditions[dep2].cookieConfig.values[dep3].value);
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".CookieConfig.Values." + std::to_string(dep3 + 1) + ".Key", rules[dep1].ruleConditions[dep2].cookieConfig.values[dep3].key);
      }
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".Type", rules[dep1].ruleConditions[dep2].type);
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].headerConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".HeaderConfig.Values." + std::to_string(dep3 + 1), rules[dep1].ruleConditions[dep2].headerConfig.values[dep3]);
      }
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".HeaderConfig.Key", rules[dep1].ruleConditions[dep2].headerConfig.key);
      for(int dep3 = 0; dep3 != rules[dep1].ruleConditions[dep2].responseHeaderConfig.values.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".ResponseHeaderConfig.Values." + std::to_string(dep3 + 1), rules[dep1].ruleConditions[dep2].responseHeaderConfig.values[dep3]);
      }
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".ResponseHeaderConfig.Key", rules[dep1].ruleConditions[dep2].responseHeaderConfig.key);
    }
    setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleName", rules[dep1].ruleName);
    setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".Priority", std::to_string(rules[dep1].priority));
    setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleId", rules[dep1].ruleId);
    for(int dep2 = 0; dep2 != rules[dep1].ruleActions.size(); dep2++) {
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".FixedResponseConfig.HttpCode", rules[dep1].ruleActions[dep2].fixedResponseConfig.httpCode);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".FixedResponseConfig.Content", rules[dep1].ruleActions[dep2].fixedResponseConfig.content);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".FixedResponseConfig.ContentType", rules[dep1].ruleActions[dep2].fixedResponseConfig.contentType);
      for(int dep3 = 0; dep3 != rules[dep1].ruleActions[dep2].trafficMirrorConfig.mirrorGroupConfig.serverGroupTuples.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".TrafficMirrorConfig.MirrorGroupConfig.ServerGroupTuples." + std::to_string(dep3 + 1) + ".ServerGroupId", rules[dep1].ruleActions[dep2].trafficMirrorConfig.mirrorGroupConfig.serverGroupTuples[dep3].serverGroupId);
      }
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".TrafficMirrorConfig.TargetType", rules[dep1].ruleActions[dep2].trafficMirrorConfig.targetType);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".ForwardGroupConfig.ServerGroupStickySession.Enabled", rules[dep1].ruleActions[dep2].forwardGroupConfig.serverGroupStickySession.enabled ? "true" : "false");
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".ForwardGroupConfig.ServerGroupStickySession.Timeout", std::to_string(rules[dep1].ruleActions[dep2].forwardGroupConfig.serverGroupStickySession.timeout));
      for(int dep3 = 0; dep3 != rules[dep1].ruleActions[dep2].forwardGroupConfig.serverGroupTuples.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".ForwardGroupConfig.ServerGroupTuples." + std::to_string(dep3 + 1) + ".ServerGroupId", rules[dep1].ruleActions[dep2].forwardGroupConfig.serverGroupTuples[dep3].serverGroupId);
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".ForwardGroupConfig.ServerGroupTuples." + std::to_string(dep3 + 1) + ".Weight", std::to_string(rules[dep1].ruleActions[dep2].forwardGroupConfig.serverGroupTuples[dep3].weight));
      }
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RemoveHeaderConfig.Key", rules[dep1].ruleActions[dep2].removeHeaderConfig.key);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".InsertHeaderConfig.ValueType", rules[dep1].ruleActions[dep2].insertHeaderConfig.valueType);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".InsertHeaderConfig.CoverEnabled", rules[dep1].ruleActions[dep2].insertHeaderConfig.coverEnabled ? "true" : "false");
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".InsertHeaderConfig.Value", rules[dep1].ruleActions[dep2].insertHeaderConfig.value);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".InsertHeaderConfig.Key", rules[dep1].ruleActions[dep2].insertHeaderConfig.key);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".TrafficLimitConfig.QPS", std::to_string(rules[dep1].ruleActions[dep2].trafficLimitConfig.qPS));
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".TrafficLimitConfig.PerIpQps", std::to_string(rules[dep1].ruleActions[dep2].trafficLimitConfig.perIpQps));
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".CorsConfig.AllowCredentials", rules[dep1].ruleActions[dep2].corsConfig.allowCredentials);
      for(int dep3 = 0; dep3 != rules[dep1].ruleActions[dep2].corsConfig.allowOrigin.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".CorsConfig.AllowOrigin." + std::to_string(dep3 + 1), rules[dep1].ruleActions[dep2].corsConfig.allowOrigin[dep3]);
      }
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".CorsConfig.MaxAge", std::to_string(rules[dep1].ruleActions[dep2].corsConfig.maxAge));
      for(int dep3 = 0; dep3 != rules[dep1].ruleActions[dep2].corsConfig.allowMethods.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".CorsConfig.AllowMethods." + std::to_string(dep3 + 1), rules[dep1].ruleActions[dep2].corsConfig.allowMethods[dep3]);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleActions[dep2].corsConfig.allowHeaders.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".CorsConfig.AllowHeaders." + std::to_string(dep3 + 1), rules[dep1].ruleActions[dep2].corsConfig.allowHeaders[dep3]);
      }
      for(int dep3 = 0; dep3 != rules[dep1].ruleActions[dep2].corsConfig.exposeHeaders.size(); dep3++) {
        setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".CorsConfig.ExposeHeaders." + std::to_string(dep3 + 1), rules[dep1].ruleActions[dep2].corsConfig.exposeHeaders[dep3]);
      }
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RedirectConfig.Path", rules[dep1].ruleActions[dep2].redirectConfig.path);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RedirectConfig.Protocol", rules[dep1].ruleActions[dep2].redirectConfig.protocol);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RedirectConfig.Port", rules[dep1].ruleActions[dep2].redirectConfig.port);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RedirectConfig.Query", rules[dep1].ruleActions[dep2].redirectConfig.query);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RedirectConfig.Host", rules[dep1].ruleActions[dep2].redirectConfig.host);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RedirectConfig.HttpCode", rules[dep1].ruleActions[dep2].redirectConfig.httpCode);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".Type", rules[dep1].ruleActions[dep2].type);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".Order", std::to_string(rules[dep1].ruleActions[dep2].order));
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RewriteConfig.Path", rules[dep1].ruleActions[dep2].rewriteConfig.path);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RewriteConfig.Query", rules[dep1].ruleActions[dep2].rewriteConfig.query);
      setBodyParameter(std::string("Rules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RewriteConfig.Host", rules[dep1].ruleActions[dep2].rewriteConfig.host);
    }
  }
}

bool UpdateRulesAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateRulesAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

