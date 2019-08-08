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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEPRIVILEGESREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEPRIVILEGESREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribePrivilegesRequest
    : public RpcServiceRequest {

public:
  DescribePrivilegesRequest();
  ~DescribePrivilegesRequest();

  long getAccountId() const;
  void setAccountId(long accountId);
  long getUseAccountId() const;
  void setUseAccountId(long useAccountId);
  std::string getDataTypeIds() const;
  void setDataTypeIds(const std::string &dataTypeIds);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  int getFeatureType() const;
  void setFeatureType(int featureType);
  int getPageSize() const;
  void setPageSize(int pageSize);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  std::string getLang() const;
  void setLang(const std::string &lang);
  std::string getKey() const;
  void setKey(const std::string &key);

private:
  long accountId_;
  long useAccountId_;
  std::string dataTypeIds_;
  std::string sourceIp_;
  int featureType_;
  int pageSize_;
  int currentPage_;
  std::string lang_;
  std::string key_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEPRIVILEGESREQUEST_H_