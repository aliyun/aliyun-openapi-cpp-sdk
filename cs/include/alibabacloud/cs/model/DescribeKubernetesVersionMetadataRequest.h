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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBEKUBERNETESVERSIONMETADATAREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBEKUBERNETESVERSIONMETADATAREQUEST_H_

#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace CS {
namespace Model {
class ALIBABACLOUD_CS_EXPORT DescribeKubernetesVersionMetadataRequest
    : public RoaServiceRequest {

public:
  DescribeKubernetesVersionMetadataRequest();
  ~DescribeKubernetesVersionMetadataRequest();

  std::string getClusterType() const;
  void setClusterType(const std::string &clusterType);
  bool getMultiAZ() const;
  void setMultiAZ(bool multiAZ);
  std::string getKubernetesVersion() const;
  void setKubernetesVersion(const std::string &kubernetesVersion);
  std::string getRegion() const;
  void setRegion(const std::string &region);

private:
  std::string clusterType_;
  bool multiAZ_;
  std::string kubernetesVersion_;
  std::string region_;
};
} // namespace Model
} // namespace CS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBEKUBERNETESVERSIONMETADATAREQUEST_H_