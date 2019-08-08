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

#ifndef ALIBABACLOUD_MTS_MODEL_CREATESESSIONREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_CREATESESSIONREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT CreateSessionRequest : public RpcServiceRequest {

public:
  CreateSessionRequest();
  ~CreateSessionRequest();

  std::string getResourceOwnerId() const;
  void setResourceOwnerId(const std::string &resourceOwnerId);
  int getSessionTime() const;
  void setSessionTime(int sessionTime);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  std::string getEndUserId() const;
  void setEndUserId(const std::string &endUserId);
  std::string getOwnerId() const;
  void setOwnerId(const std::string &ownerId);
  std::string getMediaId() const;
  void setMediaId(const std::string &mediaId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string resourceOwnerId_;
  int sessionTime_;
  std::string resourceOwnerAccount_;
  std::string ownerAccount_;
  std::string endUserId_;
  std::string ownerId_;
  std::string mediaId_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_CREATESESSIONREQUEST_H_