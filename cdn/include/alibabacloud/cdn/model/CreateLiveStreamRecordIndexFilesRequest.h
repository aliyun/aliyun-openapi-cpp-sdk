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

#ifndef ALIBABACLOUD_CDN_MODEL_CREATELIVESTREAMRECORDINDEXFILESREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_CREATELIVESTREAMRECORDINDEXFILESREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT CreateLiveStreamRecordIndexFilesRequest
    : public RpcServiceRequest {

public:
  CreateLiveStreamRecordIndexFilesRequest();
  ~CreateLiveStreamRecordIndexFilesRequest();

  std::string getOssBucket() const;
  void setOssBucket(const std::string &ossBucket);
  std::string getAppName() const;
  void setAppName(const std::string &appName);
  std::string getSecurityToken() const;
  void setSecurityToken(const std::string &securityToken);
  std::string getDomainName() const;
  void setDomainName(const std::string &domainName);
  std::string getOssEndpoint() const;
  void setOssEndpoint(const std::string &ossEndpoint);
  std::string getEndTime() const;
  void setEndTime(const std::string &endTime);
  std::string getStartTime() const;
  void setStartTime(const std::string &startTime);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  std::string getStreamName() const;
  void setStreamName(const std::string &streamName);
  std::string getOssObject() const;
  void setOssObject(const std::string &ossObject);

private:
  std::string ossBucket_;
  std::string appName_;
  std::string securityToken_;
  std::string domainName_;
  std::string ossEndpoint_;
  std::string endTime_;
  std::string startTime_;
  long ownerId_;
  std::string streamName_;
  std::string ossObject_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_CREATELIVESTREAMRECORDINDEXFILESREQUEST_H_