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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTCLOUDMETRICPROFILINGSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTCLOUDMETRICPROFILINGSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListCloudMetricProfilingsResult
    : public ServiceResult {
public:
  struct ProfilingInfo {
    std::string profilingId;
    std::string instanceId;
    std::string triggerTime;
    int freq;
    int pid;
    int duration;
    std::string hostName;
  };

  ListCloudMetricProfilingsResult();
  explicit ListCloudMetricProfilingsResult(const std::string &payload);
  ~ListCloudMetricProfilingsResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<ProfilingInfo> getProfilings() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<ProfilingInfo> profilings_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTCLOUDMETRICPROFILINGSRESULT_H_