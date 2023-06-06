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

#include <alibabacloud/sas/model/ListAssetSelectionTargetRequest.h>

using AlibabaCloud::Sas::Model::ListAssetSelectionTargetRequest;

ListAssetSelectionTargetRequest::ListAssetSelectionTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListAssetSelectionTarget") {
  setMethod(HttpRequest::Method::Post);
}

ListAssetSelectionTargetRequest::~ListAssetSelectionTargetRequest() {}

std::string ListAssetSelectionTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void ListAssetSelectionTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListAssetSelectionTargetRequest::getPageSize() const {
  return pageSize_;
}

void ListAssetSelectionTargetRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListAssetSelectionTargetRequest::getCurrentPage() const {
  return currentPage_;
}

void ListAssetSelectionTargetRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListAssetSelectionTargetRequest::getSelectionKey() const {
  return selectionKey_;
}

void ListAssetSelectionTargetRequest::setSelectionKey(const std::string &selectionKey) {
  selectionKey_ = selectionKey;
  setParameter(std::string("SelectionKey"), selectionKey);
}

