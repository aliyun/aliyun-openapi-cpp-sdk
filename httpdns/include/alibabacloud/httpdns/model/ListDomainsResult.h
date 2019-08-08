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

#ifndef ALIBABACLOUD_HTTPDNS_MODEL_LISTDOMAINSRESULT_H_
#define ALIBABACLOUD_HTTPDNS_MODEL_LISTDOMAINSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/httpdns/HttpdnsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Httpdns {
namespace Model {
class ALIBABACLOUD_HTTPDNS_EXPORT ListDomainsResult : public ServiceResult {
public:
  struct DomainInfo {
    long resolvedHttps;
    std::string domainName;
    long resolvedHttps6;
    long resolved;
    long resolved6;
  };

  ListDomainsResult();
  explicit ListDomainsResult(const std::string &payload);
  ~ListDomainsResult();
  long getTotalCount() const;
  long getPageSize() const;
  long getPageNumber() const;
  std::vector<DomainInfo> getDomainInfos() const;

protected:
  void parse(const std::string &payload);

private:
  long totalCount_;
  long pageSize_;
  long pageNumber_;
  std::vector<DomainInfo> domainInfos_;
};
} // namespace Model
} // namespace Httpdns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_HTTPDNS_MODEL_LISTDOMAINSRESULT_H_