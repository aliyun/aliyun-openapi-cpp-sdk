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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITMEDIACENSORJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITMEDIACENSORJOBREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitMediaCensorJobRequest
    : public RpcServiceRequest {

public:
  SubmitMediaCensorJobRequest();
  ~SubmitMediaCensorJobRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getCoverImages() const;
  void setCoverImages(const std::string &coverImages);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  std::string getTitle() const;
  void setTitle(const std::string &title);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getPipelineId() const;
  void setPipelineId(const std::string &pipelineId);
  std::string getVideoCensorConfig() const;
  void setVideoCensorConfig(const std::string &videoCensorConfig);
  std::string getInput() const;
  void setInput(const std::string &input);
  std::string getUserData() const;
  void setUserData(const std::string &userData);
  std::string getBarrages() const;
  void setBarrages(const std::string &barrages);

private:
  long resourceOwnerId_;
  std::string coverImages_;
  std::string resourceOwnerAccount_;
  std::string ownerAccount_;
  std::string description_;
  long ownerId_;
  std::string title_;
  std::string accessKeyId_;
  std::string pipelineId_;
  std::string videoCensorConfig_;
  std::string input_;
  std::string userData_;
  std::string barrages_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITMEDIACENSORJOBREQUEST_H_