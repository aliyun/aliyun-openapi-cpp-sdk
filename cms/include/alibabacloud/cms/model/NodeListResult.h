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

#ifndef ALIBABACLOUD_CMS_MODEL_NODELISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_NODELISTRESULT_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT NodeListResult : public ServiceResult {
public:
  struct Node {
    std::string operatingSystem;
    std::string tianjimonVersion;
    std::string instanceId;
    std::string instanceTypeFamily;
    std::string natIp;
    std::string serialNumber;
    bool aliyunHost;
    std::string networkType;
    std::string eipAddress;
    std::string region;
    std::string eipId;
    std::string ipGroup;
    std::string hostName;
    long aliUid;
  };

  NodeListResult();
  explicit NodeListResult(const std::string &payload);
  ~NodeListResult();
  int getPageSize() const;
  int getPageNumber() const;
  int getPageTotal() const;
  int getTotal() const;
  int getErrorCode() const;
  std::string getErrorMessage() const;
  std::vector<Node> getNodes() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  int pageSize_;
  int pageNumber_;
  int pageTotal_;
  int total_;
  int errorCode_;
  std::string errorMessage_;
  std::vector<Node> nodes_;
  bool success_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_NODELISTRESULT_H_