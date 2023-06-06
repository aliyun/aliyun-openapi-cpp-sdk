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

#include <alibabacloud/sas/model/ListAssetSelectionSelectedTargetRequest.h>

using AlibabaCloud::Sas::Model::ListAssetSelectionSelectedTargetRequest;

ListAssetSelectionSelectedTargetRequest::ListAssetSelectionSelectedTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListAssetSelectionSelectedTarget") {
  setMethod(HttpRequest::Method::Post);
}

ListAssetSelectionSelectedTargetRequest::~ListAssetSelectionSelectedTargetRequest() {}

std::vector<std::string> ListAssetSelectionSelectedTargetRequest::getTargetList() const {
  return targetList_;
}

void ListAssetSelectionSelectedTargetRequest::setTargetList(const std::vector<std::string> &targetList) {
  targetList_ = targetList;
}

std::string ListAssetSelectionSelectedTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void ListAssetSelectionSelectedTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListAssetSelectionSelectedTargetRequest::getSelectionKey() const {
  return selectionKey_;
}

void ListAssetSelectionSelectedTargetRequest::setSelectionKey(const std::string &selectionKey) {
  selectionKey_ = selectionKey;
  setParameter(std::string("SelectionKey"), selectionKey);
}

