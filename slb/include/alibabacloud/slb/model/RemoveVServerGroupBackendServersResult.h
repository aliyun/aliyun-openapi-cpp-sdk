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

#ifndef ALIBABACLOUD_SLB_MODEL_REMOVEVSERVERGROUPBACKENDSERVERSRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_REMOVEVSERVERGROUPBACKENDSERVERSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT RemoveVServerGroupBackendServersResult
    : public ServiceResult {
public:
  struct BackendServer {
    std::string type;
    std::string serverId;
    std::string vpcId;
    std::string eniHost;
    int port;
    std::string serverIp;
    int weight;
  };

  RemoveVServerGroupBackendServersResult();
  explicit RemoveVServerGroupBackendServersResult(const std::string &payload);
  ~RemoveVServerGroupBackendServersResult();
  std::string getVServerGroupId() const;
  std::vector<BackendServer> getBackendServers() const;

protected:
  void parse(const std::string &payload);

private:
  std::string vServerGroupId_;
  std::vector<BackendServer> backendServers_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_REMOVEVSERVERGROUPBACKENDSERVERSRESULT_H_