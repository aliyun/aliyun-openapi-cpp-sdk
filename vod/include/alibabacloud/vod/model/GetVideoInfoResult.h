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

#ifndef ALIBABACLOUD_VOD_MODEL_GETVIDEOINFORESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETVIDEOINFORESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT GetVideoInfoResult : public ServiceResult {
public:
  struct Video {
    struct Thumbnail {
      std::string uRL;
    };
    std::string status;
    std::string modifyTime;
    std::string videoId;
    std::string description;
    long size;
    std::string createTime;
    std::string downloadSwitch;
    std::string title;
    float duration;
    std::string modificationTime;
    long cateId;
    std::string cateName;
    std::vector<Thumbnail> thumbnailList;
    std::string preprocessStatus;
    std::string auditStatus;
    std::string customMediaInfo;
    std::string appId;
    std::string creationTime;
    std::string coverURL;
    std::string regionId;
    std::string storageLocation;
    std::vector<std::string> snapshots;
    std::string tags;
    std::string templateGroupId;
  };

  GetVideoInfoResult();
  explicit GetVideoInfoResult(const std::string &payload);
  ~GetVideoInfoResult();
  Video getVideo() const;
  std::string getAI() const;

protected:
  void parse(const std::string &payload);

private:
  Video video_;
  std::string aI_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_GETVIDEOINFORESULT_H_