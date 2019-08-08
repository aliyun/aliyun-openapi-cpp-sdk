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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETCLUSTERVOLUMESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_GETCLUSTERVOLUMESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT GetClusterVolumesResult : public ServiceResult {
public:
  struct VolumeInfo {
    struct RoleInfo {
      std::string name;
    };
    std::string volumeProtocol;
    std::string volumeId;
    std::string remoteDirectory;
    std::string localDirectory;
    std::string volumeType;
    std::string jobQueue;
    bool mustKeep;
    std::vector<VolumeInfo::RoleInfo> roles;
    std::string volumeMountpoint;
    std::string location;
  };

  GetClusterVolumesResult();
  explicit GetClusterVolumesResult(const std::string &payload);
  ~GetClusterVolumesResult();
  std::vector<VolumeInfo> getVolumes() const;
  std::string getRegionId() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<VolumeInfo> volumes_;
  std::string regionId_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_GETCLUSTERVOLUMESRESULT_H_