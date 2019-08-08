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

#ifndef ALIBABACLOUD_MTS_MODEL_ADDMEDIARESULT_H_
#define ALIBABACLOUD_MTS_MODEL_ADDMEDIARESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT AddMediaResult : public ServiceResult {
public:
  struct Media {
    struct File {
      std::string state;
      std::string uRL;
    };
    std::string censorState;
    std::string description;
    std::string size;
    std::string fps;
    std::string title;
    std::string duration;
    long cateId;
    std::string bitrate;
    std::string publishState;
    std::string format;
    std::string mediaId;
    std::string creationTime;
    std::string coverURL;
    std::string height;
    File file;
    std::string width;
    std::vector<std::string> runIdList;
    std::vector<std::string> tags;
  };

  AddMediaResult();
  explicit AddMediaResult(const std::string &payload);
  ~AddMediaResult();
  Media getMedia() const;

protected:
  void parse(const std::string &payload);

private:
  Media media_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_ADDMEDIARESULT_H_