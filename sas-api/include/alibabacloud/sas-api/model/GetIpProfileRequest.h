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

#ifndef ALIBABACLOUD_SAS_API_MODEL_GETIPPROFILEREQUEST_H_
#define ALIBABACLOUD_SAS_API_MODEL_GETIPPROFILEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas-api/Sas_apiExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Sas_api {
namespace Model {
class ALIBABACLOUD_SAS_API_EXPORT GetIpProfileRequest
    : public RpcServiceRequest {

public:
  GetIpProfileRequest();
  ~GetIpProfileRequest();

  std::string getDeviceIdMd5() const;
  void setDeviceIdMd5(const std::string &deviceIdMd5);
  int getCarrier() const;
  void setCarrier(int carrier);
  std::string getOs() const;
  void setOs(const std::string &os);
  std::string getRequestUrl() const;
  void setRequestUrl(const std::string &requestUrl);
  std::string getIp() const;
  void setIp(const std::string &ip);
  std::string getUserAgent() const;
  void setUserAgent(const std::string &userAgent);
  int getConnectionType() const;
  void setConnectionType(int connectionType);
  int getSensType() const;
  void setSensType(int sensType);
  int getDeviceType() const;
  void setDeviceType(int deviceType);
  int getBusinessType() const;
  void setBusinessType(int businessType);

private:
  std::string deviceIdMd5_;
  int carrier_;
  std::string os_;
  std::string requestUrl_;
  std::string ip_;
  std::string userAgent_;
  int connectionType_;
  int sensType_;
  int deviceType_;
  int businessType_;
};
} // namespace Model
} // namespace Sas_api
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_API_MODEL_GETIPPROFILEREQUEST_H_