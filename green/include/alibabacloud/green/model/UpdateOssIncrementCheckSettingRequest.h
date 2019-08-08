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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEOSSINCREMENTCHECKSETTINGREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEOSSINCREMENTCHECKSETTINGREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Green {
namespace Model {
class ALIBABACLOUD_GREEN_EXPORT UpdateOssIncrementCheckSettingRequest
    : public RpcServiceRequest {

public:
  UpdateOssIncrementCheckSettingRequest();
  ~UpdateOssIncrementCheckSettingRequest();

  std::string getImageAutoFreeze() const;
  void setImageAutoFreeze(const std::string &imageAutoFreeze);
  std::string getVideoSceneList() const;
  void setVideoSceneList(const std::string &videoSceneList);
  std::string getAutoFreezeType() const;
  void setAutoFreezeType(const std::string &autoFreezeType);
  std::string getImageSceneList() const;
  void setImageSceneList(const std::string &imageSceneList);
  std::string getBucketConfigList() const;
  void setBucketConfigList(const std::string &bucketConfigList);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getImageScanLimit() const;
  void setImageScanLimit(const std::string &imageScanLimit);
  std::string getVideoAutoFreezeSceneList() const;
  void setVideoAutoFreezeSceneList(const std::string &videoAutoFreezeSceneList);
  int getVideoFrameInterval() const;
  void setVideoFrameInterval(int videoFrameInterval);
  int getVideoMaxSize() const;
  void setVideoMaxSize(int videoMaxSize);
  std::string getLang() const;
  void setLang(const std::string &lang);
  int getVideoMaxFrames() const;
  void setVideoMaxFrames(int videoMaxFrames);

private:
  std::string imageAutoFreeze_;
  std::string videoSceneList_;
  std::string autoFreezeType_;
  std::string imageSceneList_;
  std::string bucketConfigList_;
  std::string sourceIp_;
  std::string imageScanLimit_;
  std::string videoAutoFreezeSceneList_;
  int videoFrameInterval_;
  int videoMaxSize_;
  std::string lang_;
  int videoMaxFrames_;
};
} // namespace Model
} // namespace Green
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEOSSINCREMENTCHECKSETTINGREQUEST_H_