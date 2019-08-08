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

#ifndef ALIBABACLOUD_VOD_MODEL_DETACHAPPPOLICYFROMIDENTITYREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DETACHAPPPOLICYFROMIDENTITYREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DetachAppPolicyFromIdentityRequest
    : public RpcServiceRequest {

public:
  DetachAppPolicyFromIdentityRequest();
  ~DetachAppPolicyFromIdentityRequest();

  std::string getIdentityName() const;
  void setIdentityName(const std::string &identityName);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getIdentityType() const;
  void setIdentityType(const std::string &identityType);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getAppId() const;
  void setAppId(const std::string &appId);
  std::string getPolicyNames() const;
  void setPolicyNames(const std::string &policyNames);
  long getOwnerId() const;
  void setOwnerId(long ownerId);

private:
  std::string identityName_;
  long resourceOwnerId_;
  std::string identityType_;
  std::string resourceOwnerAccount_;
  std::string appId_;
  std::string policyNames_;
  long ownerId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DETACHAPPPOLICYFROMIDENTITYREQUEST_H_