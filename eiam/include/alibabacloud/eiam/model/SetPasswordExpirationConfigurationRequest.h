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

#ifndef ALIBABACLOUD_EIAM_MODEL_SETPASSWORDEXPIRATIONCONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_SETPASSWORDEXPIRATIONCONFIGURATIONREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT SetPasswordExpirationConfigurationRequest : public RpcServiceRequest {
public:
	SetPasswordExpirationConfigurationRequest();
	~SetPasswordExpirationConfigurationRequest();
	int getPasswordForcedUpdateDuration() const;
	void setPasswordForcedUpdateDuration(int passwordForcedUpdateDuration);
	std::vector<std::string> getEffectiveAuthenticationSourceIds() const;
	void setEffectiveAuthenticationSourceIds(const std::vector<std::string> &effectiveAuthenticationSourceIds);
	int getPasswordExpirationNotificationDuration() const;
	void setPasswordExpirationNotificationDuration(int passwordExpirationNotificationDuration);
	std::string getPasswordExpirationStatus() const;
	void setPasswordExpirationStatus(const std::string &passwordExpirationStatus);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getPasswordExpirationAction() const;
	void setPasswordExpirationAction(const std::string &passwordExpirationAction);
	int getPasswordValidMaxDay() const;
	void setPasswordValidMaxDay(int passwordValidMaxDay);
	std::vector<std::string> getPasswordExpirationNotificationChannels() const;
	void setPasswordExpirationNotificationChannels(const std::vector<std::string> &passwordExpirationNotificationChannels);
	std::string getPasswordExpirationNotificationStatus() const;
	void setPasswordExpirationNotificationStatus(const std::string &passwordExpirationNotificationStatus);

private:
	int passwordForcedUpdateDuration_;
	std::vector<std::string> effectiveAuthenticationSourceIds_;
	int passwordExpirationNotificationDuration_;
	std::string passwordExpirationStatus_;
	std::string instanceId_;
	std::string passwordExpirationAction_;
	int passwordValidMaxDay_;
	std::vector<std::string> passwordExpirationNotificationChannels_;
	std::string passwordExpirationNotificationStatus_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_SETPASSWORDEXPIRATIONCONFIGURATIONREQUEST_H_
