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

#ifndef ALIBABACLOUD_MTS_MODEL_REGISTERMEDIADETAILPERSONRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_REGISTERMEDIADETAILPERSONRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT RegisterMediaDetailPersonResult
    : public ServiceResult {
public:
  struct RegisteredPersonage {
    struct ImageFile {
      std::string bucket;
      std::string object;
      std::string location;
    };
    std::string faceId;
    std::string personName;
    std::string target;
    ImageFile imageFile;
    std::string quality;
    std::string imageId;
    std::string gender;
  };
  struct FailedImage {
    struct ImageFile1 {
      std::string bucket;
      std::string object;
      std::string location;
    };
    ImageFile1 imageFile1;
    std::string code;
    std::string success;
  };

  RegisterMediaDetailPersonResult();
  explicit RegisterMediaDetailPersonResult(const std::string &payload);
  ~RegisterMediaDetailPersonResult();
  std::vector<RegisteredPersonage> getRegisteredPersonages() const;
  std::vector<FailedImage> getFailedImages() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<RegisteredPersonage> registeredPersonages_;
  std::vector<FailedImage> failedImages_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_REGISTERMEDIADETAILPERSONRESULT_H_