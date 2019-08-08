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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESULT_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DescribeCenAttachedChildInstanceAttributeResult
    : public ServiceResult {
public:
  DescribeCenAttachedChildInstanceAttributeResult();
  explicit DescribeCenAttachedChildInstanceAttributeResult(
      const std::string &payload);
  ~DescribeCenAttachedChildInstanceAttributeResult();
  std::string getStatus() const;
  std::string getChildInstanceType() const;
  std::string getCenId() const;
  std::string getChildInstanceAttachTime() const;
  long getChildInstanceOwnerId() const;
  std::string getChildInstanceName() const;
  std::string getChildInstanceId() const;
  std::string getChildInstanceRegionId() const;

protected:
  void parse(const std::string &payload);

private:
  std::string status_;
  std::string childInstanceType_;
  std::string cenId_;
  std::string childInstanceAttachTime_;
  long childInstanceOwnerId_;
  std::string childInstanceName_;
  std::string childInstanceId_;
  std::string childInstanceRegionId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESULT_H_