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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEREPLICASREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEREPLICASREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeReplicasRequest
    : public RpcServiceRequest {

public:
  DescribeReplicasRequest();
  ~DescribeReplicasRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getSecurityToken() const;
  void setSecurityToken(const std::string &securityToken);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  bool getAttachDbInstanceData() const;
  void setAttachDbInstanceData(bool attachDbInstanceData);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  std::string getReplicaId() const;
  void setReplicaId(const std::string &replicaId);
  int getPageSize() const;
  void setPageSize(int pageSize);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  long resourceOwnerId_;
  std::string securityToken_;
  std::string resourceOwnerAccount_;
  std::string regionId_;
  bool attachDbInstanceData_;
  std::string ownerAccount_;
  std::string replicaId_;
  int pageSize_;
  long ownerId_;
  int pageNumber_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEREPLICASREQUEST_H_