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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWCLUSTERRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWCLUSTERRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ListFlowClusterResult : public ServiceResult {
public:
  struct ClusterInfo {
    struct OrderTaskInfo {
      std::string orderIdList;
      int targetCount;
      int currentCount;
    };
    struct FailReason {
      std::string requestId;
      std::string errorMsg;
      std::string errorCode;
    };
    std::string status;
    std::string createResource;
    long createTime;
    int period;
    FailReason failReason;
    std::string name;
    std::string type;
    std::string chargeType;
    OrderTaskInfo orderTaskInfo;
    long expiredTime;
    std::string id;
    std::string orderList;
    bool hasUncompletedOrder;
    int runningTime;
  };

  ListFlowClusterResult();
  explicit ListFlowClusterResult(const std::string &payload);
  ~ListFlowClusterResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<ClusterInfo> getClusters() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<ClusterInfo> clusters_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWCLUSTERRESULT_H_