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

#ifndef ALIBABACLOUD_IMM_MODEL_GETIMAGERESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GETIMAGERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT GetImageResult : public ServiceResult {
public:
  struct FacesItem {
    struct FaceAttributes {
      struct FaceBoundary {
        int left;
        int top;
        int height;
        int width;
      };
      struct HeadPose {
        float pitch;
        float roll;
        float yaw;
      };
      FaceBoundary faceBoundary;
      std::string beard;
      float beardConfidence;
      HeadPose headPose;
      std::string race;
      float raceConfidence;
      std::string glasses;
      std::string mask;
      float maskConfidence;
      float glassesConfidence;
    };
    struct EmotionDetails {
      float cALM;
      float sCARED;
      float hAPPY;
      float sAD;
      float sURPRISED;
      float aNGRY;
      float dISGUSTED;
    };
    EmotionDetails emotionDetails;
    std::string faceId;
    float faceConfidence;
    float attractive;
    float faceQuality;
    FaceAttributes faceAttributes;
    float genderConfidence;
    std::string gender;
    std::string emotion;
    std::string age;
    std::string groupId;
  };
  struct OCRItem {
    struct OCRBoundary {
      int left;
      int top;
      int height;
      int width;
    };
    OCRBoundary oCRBoundary;
    float oCRConfidence;
    std::string oCRContents;
  };
  struct TagsItem {
    std::string tagName;
    float tagConfidence;
    int tagLevel;
    std::string parentTagName;
  };
  struct CelebrityItem {
    struct CelebrityBoundary {
      int left;
      int top;
      int height;
      int width;
    };
    std::string celebrityName;
    CelebrityBoundary celebrityBoundary;
    std::string celebrityGender;
    std::string celebrityLibraryName;
    float celebrityConfidence;
  };

  GetImageResult();
  explicit GetImageResult(const std::string &payload);
  ~GetImageResult();
  std::string getModifyTime() const;
  std::string getSourceType() const;
  std::string getSourceUri() const;
  std::string getFacesFailReason() const;
  std::string getRemarksA() const;
  std::string getRemarksB() const;
  std::string getImageFormat() const;
  std::string getTagsFailReason() const;
  std::string getExif() const;
  std::string getFacesModifyTime() const;
  std::string getRemarksC() const;
  std::string getRemarksD() const;
  int getImageWidth() const;
  std::vector<CelebrityItem> getCelebrity() const;
  std::string getSourcePosition() const;
  std::vector<FacesItem> getFaces() const;
  std::vector<TagsItem> getTags() const;
  std::string getFacesStatus() const;
  std::string getCreateTime() const;
  std::string getTagsModifyTime() const;
  std::string getExternalId() const;
  std::string getImageUri() const;
  std::string getOrientation() const;
  std::string getOCRStatus() const;
  std::string getOCRModifyTime() const;
  std::string getImageTime() const;
  std::string getCelebrityModifyTime() const;
  int getImageHeight() const;
  std::string getTagsStatus() const;
  std::string getOCRFailReason() const;
  std::string getCelebrityFailReason() const;
  std::string getSetId() const;
  std::string getCelebrityStatus() const;
  std::vector<OCRItem> getOCR() const;
  int getFileSize() const;
  std::string getLocation() const;

protected:
  void parse(const std::string &payload);

private:
  std::string modifyTime_;
  std::string sourceType_;
  std::string sourceUri_;
  std::string facesFailReason_;
  std::string remarksA_;
  std::string remarksB_;
  std::string imageFormat_;
  std::string tagsFailReason_;
  std::string exif_;
  std::string facesModifyTime_;
  std::string remarksC_;
  std::string remarksD_;
  int imageWidth_;
  std::vector<CelebrityItem> celebrity_;
  std::string sourcePosition_;
  std::vector<FacesItem> faces_;
  std::vector<TagsItem> tags_;
  std::string facesStatus_;
  std::string createTime_;
  std::string tagsModifyTime_;
  std::string externalId_;
  std::string imageUri_;
  std::string orientation_;
  std::string oCRStatus_;
  std::string oCRModifyTime_;
  std::string imageTime_;
  std::string celebrityModifyTime_;
  int imageHeight_;
  std::string tagsStatus_;
  std::string oCRFailReason_;
  std::string celebrityFailReason_;
  std::string setId_;
  std::string celebrityStatus_;
  std::vector<OCRItem> oCR_;
  int fileSize_;
  std::string location_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_GETIMAGERESULT_H_