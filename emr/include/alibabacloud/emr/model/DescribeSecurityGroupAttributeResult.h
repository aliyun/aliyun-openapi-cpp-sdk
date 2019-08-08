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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBESECURITYGROUPATTRIBUTERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBESECURITYGROUPATTRIBUTERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeSecurityGroupAttributeResult
    : public ServiceResult {
public:
  struct SecurityGroup {
    int ecsCount;
    std::string description;
    std::string securityGroupName;
    std::string vpcId;
    std::string securityGroupId;
    std::string creationTime;
    int availableInstanceAmount;
  };
  struct SecurityGroupAttribute {
    std::string bizContent;
    std::string bizType;
  };

  DescribeSecurityGroupAttributeResult();
  explicit DescribeSecurityGroupAttributeResult(const std::string &payload);
  ~DescribeSecurityGroupAttributeResult();
  std::vector<SecurityGroup> getAvailableGroupList() const;
  std::vector<SecurityGroupAttribute> getSecurityGroupAttributeList() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<SecurityGroup> availableGroupList_;
  std::vector<SecurityGroupAttribute> securityGroupAttributeList_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBESECURITYGROUPATTRIBUTERESULT_H_