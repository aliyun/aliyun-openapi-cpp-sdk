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

#ifndef ALIBABACLOUD_RAM_MODEL_SETSECURITYPREFERENCEREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_SETSECURITYPREFERENCEREQUEST_H_

#include <alibabacloud/ram/RamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ram {
namespace Model {
class ALIBABACLOUD_RAM_EXPORT SetSecurityPreferenceRequest : public RpcServiceRequest {
public:
	SetSecurityPreferenceRequest();
	~SetSecurityPreferenceRequest();
	bool getEnableSaveMFATicket() const;
	void setEnableSaveMFATicket(bool enableSaveMFATicket);
	std::string getLoginNetworkMasks() const;
	void setLoginNetworkMasks(const std::string &loginNetworkMasks);
	bool getAllowUserToChangePassword() const;
	void setAllowUserToChangePassword(bool allowUserToChangePassword);
	bool getAllowUserToManagePublicKeys() const;
	void setAllowUserToManagePublicKeys(bool allowUserToManagePublicKeys);
	int getLoginSessionDuration() const;
	void setLoginSessionDuration(int loginSessionDuration);
	bool getAllowUserToManageAccessKeys() const;
	void setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys);
	bool getAllowUserToManageMFADevices() const;
	void setAllowUserToManageMFADevices(bool allowUserToManageMFADevices);

private:
	bool enableSaveMFATicket_;
	std::string loginNetworkMasks_;
	bool allowUserToChangePassword_;
	bool allowUserToManagePublicKeys_;
	int loginSessionDuration_;
	bool allowUserToManageAccessKeys_;
	bool allowUserToManageMFADevices_;
};
} // namespace Model
} // namespace Ram
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RAM_MODEL_SETSECURITYPREFERENCEREQUEST_H_
