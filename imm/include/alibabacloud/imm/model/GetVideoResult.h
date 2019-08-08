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

#ifndef ALIBABACLOUD_IMM_MODEL_GETVIDEORESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GETVIDEORESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT GetVideoResult : public ServiceResult {
public:
  struct CelebrityItem {
    std::string celebrityName;
    int celebrityNum;
    std::string celebrityLibraryName;
  };
  struct VideoTagsItem {
    std::string videoTagEnName;
    std::string videoTagName;
    float videoTagConfidence;
  };
  struct PersonsItem {
    std::string personId;
    float genderConfidence;
    std::string gender;
    int age;
    float ageConfidence;
  };

  GetVideoResult();
  explicit GetVideoResult(const std::string &payload);
  ~GetVideoResult();
  std::string getModifyTime() const;
  std::string getProcessStatus() const;
  int getVideoWidth() const;
  std::string getSourceType() const;
  std::string getSourceUri() const;
  std::string getRemarksA() const;
  std::string getRemarksB() const;
  std::string getRemarksC() const;
  std::string getRemarksD() const;
  int getVideoHeight() const;
  std::vector<PersonsItem> getPersons() const;
  std::vector<CelebrityItem> getCelebrity() const;
  std::string getSourcePosition() const;
  std::string getVideoTagsFailReason() const;
  std::string getVideoTagsModifyTime() const;
  int getVideoFrames() const;
  std::string getProcessModifyTime() const;
  std::string getProcessFailReason() const;
  std::string getCreateTime() const;
  std::string getExternalId() const;
  std::string getVideoUri() const;
  std::string getVideoFormat() const;
  std::vector<VideoTagsItem> getVideoTags() const;
  std::string getCelebrityModifyTime() const;
  float getVideoDuration() const;
  std::string getCelebrityFailReason() const;
  std::string getSetId() const;
  std::string getCelebrityStatus() const;
  std::string getVideoTagsStatus() const;
  int getFileSize() const;

protected:
  void parse(const std::string &payload);

private:
  std::string modifyTime_;
  std::string processStatus_;
  int videoWidth_;
  std::string sourceType_;
  std::string sourceUri_;
  std::string remarksA_;
  std::string remarksB_;
  std::string remarksC_;
  std::string remarksD_;
  int videoHeight_;
  std::vector<PersonsItem> persons_;
  std::vector<CelebrityItem> celebrity_;
  std::string sourcePosition_;
  std::string videoTagsFailReason_;
  std::string videoTagsModifyTime_;
  int videoFrames_;
  std::string processModifyTime_;
  std::string processFailReason_;
  std::string createTime_;
  std::string externalId_;
  std::string videoUri_;
  std::string videoFormat_;
  std::vector<VideoTagsItem> videoTags_;
  std::string celebrityModifyTime_;
  float videoDuration_;
  std::string celebrityFailReason_;
  std::string setId_;
  std::string celebrityStatus_;
  std::string videoTagsStatus_;
  int fileSize_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_GETVIDEORESULT_H_