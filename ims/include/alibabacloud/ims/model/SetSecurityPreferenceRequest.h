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

#ifndef ALIBABACLOUD_IMS_MODEL_SETSECURITYPREFERENCEREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_SETSECURITYPREFERENCEREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT SetSecurityPreferenceRequest : public RpcServiceRequest {
public:
	SetSecurityPreferenceRequest();
	~SetSecurityPreferenceRequest();
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	bool getEnableSaveMFATicket() const;
	void setEnableSaveMFATicket(bool enableSaveMFATicket);
	std::string getLoginNetworkMasks() const;
	void setLoginNetworkMasks(const std::string &loginNetworkMasks);
	bool getAllowUserToChangePassword() const;
	void setAllowUserToChangePassword(bool allowUserToChangePassword);
	bool getEnforceMFAForLogin() const;
	void setEnforceMFAForLogin(bool enforceMFAForLogin);
	int getLoginSessionDuration() const;
	void setLoginSessionDuration(int loginSessionDuration);
	std::vector<std::string> getVerificationTypes() const;
	void setVerificationTypes(const std::vector<std::string> &verificationTypes);
	bool getAllowUserLongTermLogin() const;
	void setAllowUserLongTermLogin(bool allowUserLongTermLogin);
	bool getAllowUserToManageAccessKeys() const;
	void setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys);
	bool getAllowUserToManageMFADevices() const;
	void setAllowUserToManageMFADevices(bool allowUserToManageMFADevices);
	std::string getOperationForRiskLogin() const;
	void setOperationForRiskLogin(const std::string &operationForRiskLogin);
	std::string getMFAOperationForLogin() const;
	void setMFAOperationForLogin(const std::string &mFAOperationForLogin);
	bool getAllowUserToManagePersonalDingTalk() const;
	void setAllowUserToManagePersonalDingTalk(bool allowUserToManagePersonalDingTalk);

private:
	std::string akProxySuffix_;
	bool enableSaveMFATicket_;
	std::string loginNetworkMasks_;
	bool allowUserToChangePassword_;
	bool enforceMFAForLogin_;
	int loginSessionDuration_;
	std::vector<std::string> verificationTypes_;
	bool allowUserLongTermLogin_;
	bool allowUserToManageAccessKeys_;
	bool allowUserToManageMFADevices_;
	std::string operationForRiskLogin_;
	std::string mFAOperationForLogin_;
	bool allowUserToManagePersonalDingTalk_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_SETSECURITYPREFERENCEREQUEST_H_
