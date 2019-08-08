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

#ifndef ALIBABACLOUD_EHPC_MODEL_RECOVERCLUSTERREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_RECOVERCLUSTERREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT RecoverClusterRequest
    : public RpcServiceRequest {

public:
  RecoverClusterRequest();
  ~RecoverClusterRequest();

  std::string getImageId() const;
  void setImageId(const std::string &imageId);
  std::string getOsTag() const;
  void setOsTag(const std::string &osTag);
  std::string getClientVersion() const;
  void setClientVersion(const std::string &clientVersion);
  std::string getAccountType() const;
  void setAccountType(const std::string &accountType);
  std::string getSchedulerType() const;
  void setSchedulerType(const std::string &schedulerType);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getImageOwnerAlias() const;
  void setImageOwnerAlias(const std::string &imageOwnerAlias);

private:
  std::string imageId_;
  std::string osTag_;
  std::string clientVersion_;
  std::string accountType_;
  std::string schedulerType_;
  std::string clusterId_;
  std::string accessKeyId_;
  std::string imageOwnerAlias_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_RECOVERCLUSTERREQUEST_H_