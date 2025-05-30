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

#ifndef ALIBABACLOUD_ESS_MODEL_SETINSTANCESPROTECTIONREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_SETINSTANCESPROTECTIONREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT SetInstancesProtectionRequest : public RpcServiceRequest {
public:
	SetInstancesProtectionRequest();
	~SetInstancesProtectionRequest();
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	bool getProtectedFromScaleIn() const;
	void setProtectedFromScaleIn(bool protectedFromScaleIn);

private:
	std::string scalingGroupId_;
	std::string accessKeyId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::vector<std::string> instanceId_;
	bool protectedFromScaleIn_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_SETINSTANCESPROTECTIONREQUEST_H_
