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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESBYEXPIRETIMEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESBYEXPIRETIMEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeInstancesByExpireTimeRequest
    : public RpcServiceRequest {

public:
  DescribeInstancesByExpireTimeRequest();
  ~DescribeInstancesByExpireTimeRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getSecurityToken() const;
  void setSecurityToken(const std::string &securityToken);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  bool getHasExpiredRes() const;
  void setHasExpiredRes(bool hasExpiredRes);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getInstanceType() const;
  void setInstanceType(const std::string &instanceType);
  int getExpirePeriod() const;
  void setExpirePeriod(int expirePeriod);

private:
  long resourceOwnerId_;
  std::string resourceOwnerAccount_;
  std::string ownerAccount_;
  long ownerId_;
  int pageNumber_;
  std::string accessKeyId_;
  std::string securityToken_;
  std::string regionId_;
  bool hasExpiredRes_;
  int pageSize_;
  std::string instanceType_;
  int expirePeriod_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESBYEXPIRETIMEREQUEST_H_