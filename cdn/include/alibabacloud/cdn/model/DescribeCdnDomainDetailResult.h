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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBECDNDOMAINDETAILRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBECDNDOMAINDETAILRESULT_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT DescribeCdnDomainDetailResult
    : public ServiceResult {
public:
  struct GetDomainDetailModel {
    struct SourceModel {
      std::string type;
      std::string content;
      std::string priority;
      int port;
      std::string enabled;
    };
    std::vector<SourceModel> sourceModels;
    std::string description;
    std::string resourceGroupId;
    std::string domainName;
    std::string sourceType;
    std::string gmtModified;
    std::string gmtCreated;
    int sourcePort;
    std::string cname;
    std::string serverCertificateStatus;
    std::vector<std::string> sources;
    std::string httpsCname;
    std::string serverCertificate;
    std::string scope;
    std::string region;
    std::string cdnType;
    std::string certificateName;
    std::string domainStatus;
  };

  DescribeCdnDomainDetailResult();
  explicit DescribeCdnDomainDetailResult(const std::string &payload);
  ~DescribeCdnDomainDetailResult();
  GetDomainDetailModel getGetDomainDetailModel() const;

protected:
  void parse(const std::string &payload);

private:
  GetDomainDetailModel getDomainDetailModel_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBECDNDOMAINDETAILRESULT_H_