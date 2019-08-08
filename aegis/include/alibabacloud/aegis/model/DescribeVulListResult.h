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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULLISTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULLISTRESULT_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeVulListResult : public ServiceResult {
public:
  struct VulRecord {
    struct ExtendContentJson {
      struct Necessity {
        std::string status;
        std::string total_score;
        std::string gmt_create;
        std::string cvss_factor;
        std::string time_factor;
        std::string is_calc;
        std::string enviroment_factor;
        std::string assets_factor;
      };
      struct RpmEntityListItem {
        std::string path;
        std::string updateCmd;
        std::string version;
        std::string fullVersion;
        std::string matchDetail;
        std::string name;
      };
      int status;
      std::vector<std::string> cveList;
      std::string os;
      Necessity necessity;
      long lastTs;
      std::vector<RpmEntityListItem> rpmEntityList;
      std::string absolutePath;
      std::string reason;
      std::string target;
      std::string aliasName;
      std::string proof;
      std::string level;
      std::string tag;
      std::string osRelease;
      long primaryId;
    };
    std::string ip;
    std::string osVersion;
    std::string product;
    std::string intranetIp;
    std::string name;
    long repairTs;
    long modifyTs;
    std::string internetIp;
    std::string aliasName;
    long recordId;
    ExtendContentJson extendContentJson;
    int status;
    std::string instanceId;
    long lastTs;
    std::string necessity;
    std::string needReboot;
    std::string resultMessage;
    int groupId;
    std::string instanceName;
    std::string type;
    long firstTs;
    std::string uuid;
    std::string related;
    std::string level;
    std::string tag;
    long primaryId;
    std::string resultCode;
  };

  DescribeVulListResult();
  explicit DescribeVulListResult(const std::string &payload);
  ~DescribeVulListResult();
  int getTotalCount() const;
  std::vector<VulRecord> getVulRecords() const;
  int getPageSize() const;
  int getCurrentPage() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  std::vector<VulRecord> vulRecords_;
  int pageSize_;
  int currentPage_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULLISTRESULT_H_