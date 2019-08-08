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

#ifndef ALIBABACLOUD_IVISION_MODEL_DESCRIBETAGSRESULT_H_
#define ALIBABACLOUD_IVISION_MODEL_DESCRIBETAGSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ivision/IvisionExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Ivision {
namespace Model {
class ALIBABACLOUD_IVISION_EXPORT DescribeTagsResult : public ServiceResult {
public:
  struct Tag {
    std::string description;
    std::string tagName;
    std::string projectId;
    std::string tagId;
    std::string creationTime;
    int count;
  };

  DescribeTagsResult();
  explicit DescribeTagsResult(const std::string &payload);
  ~DescribeTagsResult();
  long getTotalNum() const;
  long getPageSize() const;
  long getCurrentPage() const;
  std::string getNextPageToken() const;
  std::vector<Tag> getTags() const;

protected:
  void parse(const std::string &payload);

private:
  long totalNum_;
  long pageSize_;
  long currentPage_;
  std::string nextPageToken_;
  std::vector<Tag> tags_;
};
} // namespace Model
} // namespace Ivision
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IVISION_MODEL_DESCRIBETAGSRESULT_H_