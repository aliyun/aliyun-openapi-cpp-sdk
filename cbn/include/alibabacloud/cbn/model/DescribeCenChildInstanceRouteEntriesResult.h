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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESULT_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DescribeCenChildInstanceRouteEntriesResult
    : public ServiceResult {
public:
  struct CenRouteEntry {
    struct CenRouteMapRecord {
      std::string regionId;
      std::string routeMapId;
    };
    struct Conflict {
      std::string status;
      std::string instanceId;
      std::string destinationCidrBlock;
      std::string regionId;
      std::string instanceType;
    };
    std::string status;
    std::string routeTableId;
    std::vector<std::string> communities;
    std::vector<CenRouteEntry::Conflict> conflicts;
    std::string destinationCidrBlock;
    std::string nextHopInstanceId;
    bool operationalMode;
    std::string nextHopType;
    std::string nextHopRegionId;
    std::string type;
    std::vector<CenRouteEntry::CenRouteMapRecord> cenRouteMapRecords;
    std::vector<std::string> asPaths;
    std::string publishStatus;
  };

  DescribeCenChildInstanceRouteEntriesResult();
  explicit DescribeCenChildInstanceRouteEntriesResult(
      const std::string &payload);
  ~DescribeCenChildInstanceRouteEntriesResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<CenRouteEntry> getCenRouteEntries() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<CenRouteEntry> cenRouteEntries_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESULT_H_