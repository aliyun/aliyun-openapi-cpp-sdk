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

#include <alibabacloud/dataworks-public/model/EditRecognizeRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::EditRecognizeRuleRequest;

EditRecognizeRuleRequest::EditRecognizeRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "EditRecognizeRule") {
  setMethod(HttpRequest::Method::Post);
}

EditRecognizeRuleRequest::~EditRecognizeRuleRequest() {}

std::string EditRecognizeRuleRequest::getLevel() const {
  return level_;
}

void EditRecognizeRuleRequest::setLevel(const std::string &level) {
  level_ = level;
  setBodyParameter(std::string("level"), level);
}

std::string EditRecognizeRuleRequest::getColScan() const {
  return colScan_;
}

void EditRecognizeRuleRequest::setColScan(const std::string &colScan) {
  colScan_ = colScan;
  setBodyParameter(std::string("ColScan"), colScan);
}

std::string EditRecognizeRuleRequest::getColExclude() const {
  return colExclude_;
}

void EditRecognizeRuleRequest::setColExclude(const std::string &colExclude) {
  colExclude_ = colExclude;
  setBodyParameter(std::string("ColExclude"), colExclude);
}

std::string EditRecognizeRuleRequest::getContentScan() const {
  return contentScan_;
}

void EditRecognizeRuleRequest::setContentScan(const std::string &contentScan) {
  contentScan_ = contentScan;
  setBodyParameter(std::string("ContentScan"), contentScan);
}

int EditRecognizeRuleRequest::getOperationType() const {
  return operationType_;
}

void EditRecognizeRuleRequest::setOperationType(int operationType) {
  operationType_ = operationType;
  setBodyParameter(std::string("OperationType"), std::to_string(operationType));
}

std::string EditRecognizeRuleRequest::getTemplateId() const {
  return templateId_;
}

void EditRecognizeRuleRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::string EditRecognizeRuleRequest::getRecognizeRulesType() const {
  return recognizeRulesType_;
}

void EditRecognizeRuleRequest::setRecognizeRulesType(const std::string &recognizeRulesType) {
  recognizeRulesType_ = recognizeRulesType;
  setBodyParameter(std::string("RecognizeRulesType"), recognizeRulesType);
}

std::string EditRecognizeRuleRequest::getCommentScan() const {
  return commentScan_;
}

void EditRecognizeRuleRequest::setCommentScan(const std::string &commentScan) {
  commentScan_ = commentScan;
  setBodyParameter(std::string("CommentScan"), commentScan);
}

std::string EditRecognizeRuleRequest::getAccountName() const {
  return accountName_;
}

void EditRecognizeRuleRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setBodyParameter(std::string("AccountName"), accountName);
}

std::string EditRecognizeRuleRequest::getSensitiveDescription() const {
  return sensitiveDescription_;
}

void EditRecognizeRuleRequest::setSensitiveDescription(const std::string &sensitiveDescription) {
  sensitiveDescription_ = sensitiveDescription;
  setBodyParameter(std::string("SensitiveDescription"), sensitiveDescription);
}

std::string EditRecognizeRuleRequest::getSensitiveId() const {
  return sensitiveId_;
}

void EditRecognizeRuleRequest::setSensitiveId(const std::string &sensitiveId) {
  sensitiveId_ = sensitiveId;
  setBodyParameter(std::string("SensitiveId"), sensitiveId);
}

std::string EditRecognizeRuleRequest::getTenantId() const {
  return tenantId_;
}

void EditRecognizeRuleRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string EditRecognizeRuleRequest::getRecognizeRules() const {
  return recognizeRules_;
}

void EditRecognizeRuleRequest::setRecognizeRules(const std::string &recognizeRules) {
  recognizeRules_ = recognizeRules;
  setBodyParameter(std::string("RecognizeRules"), recognizeRules);
}

int EditRecognizeRuleRequest::getHitThreshold() const {
  return hitThreshold_;
}

void EditRecognizeRuleRequest::setHitThreshold(int hitThreshold) {
  hitThreshold_ = hitThreshold;
  setBodyParameter(std::string("HitThreshold"), std::to_string(hitThreshold));
}

std::string EditRecognizeRuleRequest::getSensitiveName() const {
  return sensitiveName_;
}

void EditRecognizeRuleRequest::setSensitiveName(const std::string &sensitiveName) {
  sensitiveName_ = sensitiveName;
  setBodyParameter(std::string("SensitiveName"), sensitiveName);
}

std::string EditRecognizeRuleRequest::getNodeParent() const {
  return nodeParent_;
}

void EditRecognizeRuleRequest::setNodeParent(const std::string &nodeParent) {
  nodeParent_ = nodeParent;
  setBodyParameter(std::string("NodeParent"), nodeParent);
}

std::string EditRecognizeRuleRequest::getLevelName() const {
  return levelName_;
}

void EditRecognizeRuleRequest::setLevelName(const std::string &levelName) {
  levelName_ = levelName;
  setBodyParameter(std::string("LevelName"), levelName);
}

std::string EditRecognizeRuleRequest::getNodeId() const {
  return nodeId_;
}

void EditRecognizeRuleRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

int EditRecognizeRuleRequest::getStatus() const {
  return status_;
}

void EditRecognizeRuleRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

