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

#ifndef ALIBABACLOUD_IMM_MODEL_GETFACESEARCHIMAGERESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GETFACESEARCHIMAGERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT GetFaceSearchImageResult : public ServiceResult {
public:
  GetFaceSearchImageResult();
  explicit GetFaceSearchImageResult(const std::string &payload);
  ~GetFaceSearchImageResult();
  std::string getGroupName() const;
  std::string getFaceId() const;
  std::string getUser() const;
  std::string getGender() const;
  std::string getImageUri() const;
  float getYaw() const;
  std::string getGroupId() const;
  float getQuality() const;
  float getPitch() const;
  int getGlasses() const;
  std::string getImageId() const;
  int getHat() const;
  float getRoll() const;
  std::vector<std::string> getAxis() const;
  int getAge() const;
  std::string getImageMd5() const;

protected:
  void parse(const std::string &payload);

private:
  std::string groupName_;
  std::string faceId_;
  std::string user_;
  std::string gender_;
  std::string imageUri_;
  float yaw_;
  std::string groupId_;
  float quality_;
  float pitch_;
  int glasses_;
  std::string imageId_;
  int hat_;
  float roll_;
  std::vector<std::string> axis_;
  int age_;
  std::string imageMd5_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_GETFACESEARCHIMAGERESULT_H_