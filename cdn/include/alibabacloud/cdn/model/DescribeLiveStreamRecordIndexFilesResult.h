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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMRECORDINDEXFILESRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMRECORDINDEXFILESRESULT_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT DescribeLiveStreamRecordIndexFilesResult
    : public ServiceResult {
public:
  struct RecordIndexInfo {
    std::string streamName;
    std::string recordUrl;
    std::string endTime;
    std::string domainName;
    std::string createTime;
    std::string startTime;
    std::string ossObject;
    float duration;
    int height;
    std::string recordId;
    int width;
    std::string appName;
  };

  DescribeLiveStreamRecordIndexFilesResult();
  explicit DescribeLiveStreamRecordIndexFilesResult(const std::string &payload);
  ~DescribeLiveStreamRecordIndexFilesResult();
  std::vector<RecordIndexInfo> getRecordIndexInfoList() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<RecordIndexInfo> recordIndexInfoList_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMRECORDINDEXFILESRESULT_H_