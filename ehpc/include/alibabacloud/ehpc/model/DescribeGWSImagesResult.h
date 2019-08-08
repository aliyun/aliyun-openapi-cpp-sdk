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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSIMAGESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSIMAGESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT DescribeGWSImagesResult : public ServiceResult {
public:
  struct ImageInfo {
    std::string status;
    std::string progress;
    int size;
    std::string createTime;
    std::string imageId;
    std::string name;
    std::string imageType;
  };

  DescribeGWSImagesResult();
  explicit DescribeGWSImagesResult(const std::string &payload);
  ~DescribeGWSImagesResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<ImageInfo> getImages() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<ImageInfo> images_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSIMAGESRESULT_H_