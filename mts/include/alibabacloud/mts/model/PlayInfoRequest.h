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

#ifndef ALIBABACLOUD_MTS_MODEL_PLAYINFOREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_PLAYINFOREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT PlayInfoRequest : public RpcServiceRequest {

public:
  PlayInfoRequest();
  ~PlayInfoRequest();

  std::string getPlayDomain() const;
  void setPlayDomain(const std::string &playDomain);
  std::string getResourceOwnerId() const;
  void setResourceOwnerId(const std::string &resourceOwnerId);
  std::string getFormats() const;
  void setFormats(const std::string &formats);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  std::string getHlsUriToken() const;
  void setHlsUriToken(const std::string &hlsUriToken);
  std::string getTerminal() const;
  void setTerminal(const std::string &terminal);
  std::string getOwnerId() const;
  void setOwnerId(const std::string &ownerId);
  std::string getMediaId() const;
  void setMediaId(const std::string &mediaId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getRand() const;
  void setRand(const std::string &rand);
  long getAuthTimeout() const;
  void setAuthTimeout(long authTimeout);
  std::string getAuthInfo() const;
  void setAuthInfo(const std::string &authInfo);

private:
  std::string playDomain_;
  std::string resourceOwnerId_;
  std::string formats_;
  std::string resourceOwnerAccount_;
  std::string ownerAccount_;
  std::string hlsUriToken_;
  std::string terminal_;
  std::string ownerId_;
  std::string mediaId_;
  std::string accessKeyId_;
  std::string rand_;
  long authTimeout_;
  std::string authInfo_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_PLAYINFOREQUEST_H_