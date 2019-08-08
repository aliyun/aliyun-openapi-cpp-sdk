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

#ifndef ALIBABACLOUD_CRM_MODEL_ADDIDENTITYCERTIFIEDFORBIDUSERREQUEST_H_
#define ALIBABACLOUD_CRM_MODEL_ADDIDENTITYCERTIFIEDFORBIDUSERREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/crm/CrmExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Crm {
namespace Model {
class ALIBABACLOUD_CRM_EXPORT AddIdentityCertifiedForBidUserRequest
    : public RpcServiceRequest {

public:
  AddIdentityCertifiedForBidUserRequest();
  ~AddIdentityCertifiedForBidUserRequest();

  std::string getBidType() const;
  void setBidType(const std::string &bidType);
  std::string getLicenseNumber() const;
  void setLicenseNumber(const std::string &licenseNumber);
  std::string getLicenseType() const;
  void setLicenseType(const std::string &licenseType);
  std::string getPhone() const;
  void setPhone(const std::string &phone);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getPK() const;
  void setPK(const std::string &pK);
  bool getIsEnterprise() const;
  void setIsEnterprise(bool isEnterprise);

private:
  std::string bidType_;
  std::string licenseNumber_;
  std::string licenseType_;
  std::string phone_;
  std::string name_;
  std::string pK_;
  bool isEnterprise_;
};
} // namespace Model
} // namespace Crm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CRM_MODEL_ADDIDENTITYCERTIFIEDFORBIDUSERREQUEST_H_