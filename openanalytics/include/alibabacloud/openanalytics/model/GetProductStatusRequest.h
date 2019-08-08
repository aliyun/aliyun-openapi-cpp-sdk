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

#ifndef ALIBABACLOUD_OPENANALYTICS_MODEL_GETPRODUCTSTATUSREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_MODEL_GETPRODUCTSTATUSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics/OpenanalyticsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Openanalytics {
namespace Model {
class ALIBABACLOUD_OPENANALYTICS_EXPORT GetProductStatusRequest
    : public RpcServiceRequest {

public:
  GetProductStatusRequest();
  ~GetProductStatusRequest();

  long getCallerParentId() const;
  void setCallerParentId(long callerParentId);
  long getCallerBid() const;
  void setCallerBid(long callerBid);
  std::string getCallerType() const;
  void setCallerType(const std::string &callerType);
  bool getAk_mfa_present() const;
  void setAk_mfa_present(bool ak_mfa_present);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  bool getSecurity_transport() const;
  void setSecurity_transport(bool security_transport);
  std::string getRegionID() const;
  void setRegionID(const std::string &regionID);
  std::string getRequestId() const;
  void setRequestId(const std::string &requestId);
  long getCallerUid() const;
  void setCallerUid(long callerUid);
  std::string getProductCode() const;
  void setProductCode(const std::string &productCode);
  std::string getProductAccessKey() const;
  void setProductAccessKey(const std::string &productAccessKey);
  std::string getTargetUid() const;
  void setTargetUid(const std::string &targetUid);
  std::string getTargetArnRole() const;
  void setTargetArnRole(const std::string &targetArnRole);

private:
  long callerParentId_;
  long callerBid_;
  std::string callerType_;
  bool ak_mfa_present_;
  std::string accessKeyId_;
  bool security_transport_;
  std::string regionID_;
  std::string requestId_;
  long callerUid_;
  std::string productCode_;
  std::string productAccessKey_;
  std::string targetUid_;
  std::string targetArnRole_;
};
} // namespace Model
} // namespace Openanalytics
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OPENANALYTICS_MODEL_GETPRODUCTSTATUSREQUEST_H_