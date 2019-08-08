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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBEDOWNLOADDOMAINVERIFYCONFIGURATIONRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBEDOWNLOADDOMAINVERIFYCONFIGURATIONRESULT_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT DescribeDownloadDomainVerifyConfigurationResult
    : public ServiceResult {
public:
  DescribeDownloadDomainVerifyConfigurationResult();
  explicit DescribeDownloadDomainVerifyConfigurationResult(
      const std::string &payload);
  ~DescribeDownloadDomainVerifyConfigurationResult();
  std::string getOssKey() const;

protected:
  void parse(const std::string &payload);

private:
  std::string ossKey_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBEDOWNLOADDOMAINVERIFYCONFIGURATIONRESULT_H_