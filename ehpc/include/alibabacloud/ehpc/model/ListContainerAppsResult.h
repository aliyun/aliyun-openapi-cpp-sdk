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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERAPPSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERAPPSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListContainerAppsResult : public ServiceResult {
public:
  struct ContainerAppsItem {
    std::string repository;
    std::string imageTag;
    std::string type;
    std::string description;
    std::string createTime;
    std::string id;
    std::string name;
  };

  ListContainerAppsResult();
  explicit ListContainerAppsResult(const std::string &payload);
  ~ListContainerAppsResult();
  std::vector<ContainerAppsItem> getContainerApps() const;
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<ContainerAppsItem> containerApps_;
  int totalCount_;
  int pageSize_;
  int pageNumber_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERAPPSRESULT_H_