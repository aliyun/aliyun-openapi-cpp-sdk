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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATELISTRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATELISTRESULT_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT DescribeCertificateListResult
    : public ServiceResult {
public:
  struct Certificate {
    long afterDate;
    std::string instanceId;
    std::string sourceType;
    int showDeployment;
    std::string certType;
    int remainingDays;
    std::string newBuyCertType;
    long orderId;
    std::string statusCode;
    std::string name;
    std::string brandName;
    std::string newBuyBrand;
    std::string orderType;
    int year;
    long id;
    std::string deploymentCloudProduct;
    std::string domain;
    std::string newBuyDomainType;
    long beforeDate;
  };

  DescribeCertificateListResult();
  explicit DescribeCertificateListResult(const std::string &payload);
  ~DescribeCertificateListResult();
  int getTotalCount() const;
  int getCurrentPage() const;
  std::vector<Certificate> getCertificateList() const;
  int getShowSize() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int currentPage_;
  std::vector<Certificate> certificateList_;
  int showSize_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATELISTRESULT_H_