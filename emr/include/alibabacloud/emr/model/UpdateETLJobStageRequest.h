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

#ifndef ALIBABACLOUD_EMR_MODEL_UPDATEETLJOBSTAGEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_UPDATEETLJOBSTAGEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT UpdateETLJobStageRequest
    : public RpcServiceRequest {

public:
  UpdateETLJobStageRequest();
  ~UpdateETLJobStageRequest();

  std::string getStageName() const;
  void setStageName(const std::string &stageName);
  std::string getStageConf() const;
  void setStageConf(const std::string &stageConf);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getStageType() const;
  void setStageType(const std::string &stageType);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getEtlJobId() const;
  void setEtlJobId(const std::string &etlJobId);
  std::string getStagePlugin() const;
  void setStagePlugin(const std::string &stagePlugin);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string stageName_;
  std::string stageConf_;
  long resourceOwnerId_;
  std::string stageType_;
  std::string regionId_;
  std::string etlJobId_;
  std::string stagePlugin_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_UPDATEETLJOBSTAGEREQUEST_H_