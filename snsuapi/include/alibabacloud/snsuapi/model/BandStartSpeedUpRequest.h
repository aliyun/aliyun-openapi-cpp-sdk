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

#ifndef ALIBABACLOUD_SNSUAPI_MODEL_BANDSTARTSPEEDUPREQUEST_H_
#define ALIBABACLOUD_SNSUAPI_MODEL_BANDSTARTSPEEDUPREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/snsuapi/SnsuapiExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Snsuapi {
namespace Model {
class ALIBABACLOUD_SNSUAPI_EXPORT BandStartSpeedUpRequest
    : public RpcServiceRequest {

public:
  BandStartSpeedUpRequest();
  ~BandStartSpeedUpRequest();

  std::string getIpAddress() const;
  void setIpAddress(const std::string &ipAddress);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  int getPort() const;
  void setPort(int port);
  long getBandId() const;
  void setBandId(long bandId);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  long getTargetBandwidth() const;
  void setTargetBandwidth(long targetBandwidth);
  std::string getBandScene() const;
  void setBandScene(const std::string &bandScene);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getDirection() const;
  void setDirection(const std::string &direction);

private:
  std::string ipAddress_;
  long resourceOwnerId_;
  std::string resourceOwnerAccount_;
  int port_;
  long bandId_;
  long ownerId_;
  long targetBandwidth_;
  std::string bandScene_;
  std::string accessKeyId_;
  std::string direction_;
};
} // namespace Model
} // namespace Snsuapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SNSUAPI_MODEL_BANDSTARTSPEEDUPREQUEST_H_