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

#include <alibabacloud/domain/model/SaveBatchTaskForReserveDropListDomainRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForReserveDropListDomainRequest;

SaveBatchTaskForReserveDropListDomainRequest::SaveBatchTaskForReserveDropListDomainRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForReserveDropListDomain") {
  setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForReserveDropListDomainRequest::~SaveBatchTaskForReserveDropListDomainRequest() {}

std::vector<SaveBatchTaskForReserveDropListDomainRequest::Domains> SaveBatchTaskForReserveDropListDomainRequest::getDomains() const {
  return domains_;
}

void SaveBatchTaskForReserveDropListDomainRequest::setDomains(const std::vector<SaveBatchTaskForReserveDropListDomainRequest::Domains> &domains) {
  domains_ = domains;
  for(int dep1 = 0; dep1 != domains.size(); dep1++) {
  auto domainsObj = domains.at(dep1);
  std::string domainsObjStr = std::string("Domains") + "." + std::to_string(dep1 + 1);
    setParameter(domainsObjStr + ".Dns2", domainsObj.dns2);
    setParameter(domainsObjStr + ".Dns1", domainsObj.dns1);
    setParameter(domainsObjStr + ".DomainName", domainsObj.domainName);
  }
}

std::string SaveBatchTaskForReserveDropListDomainRequest::getContactTemplateId() const {
  return contactTemplateId_;
}

void SaveBatchTaskForReserveDropListDomainRequest::setContactTemplateId(const std::string &contactTemplateId) {
  contactTemplateId_ = contactTemplateId;
  setParameter(std::string("ContactTemplateId"), contactTemplateId);
}

