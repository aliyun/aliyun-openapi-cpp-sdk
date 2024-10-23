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

#ifndef ALIBABACLOUD_IMS_MODEL_GETSECURITYPREFERENCERESULT_H_
#define ALIBABACLOUD_IMS_MODEL_GETSECURITYPREFERENCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ims/ImsExport.h>

namespace AlibabaCloud
{
	namespace Ims
	{
		namespace Model
		{
			class ALIBABACLOUD_IMS_EXPORT GetSecurityPreferenceResult : public ServiceResult
			{
			public:
				struct SecurityPreference
				{
					struct AccessKeyPreference
					{
						bool allowUserToManageAccessKeys;
					};
					struct LoginProfilePreference
					{
						bool enforceMFAForLogin;
						int loginSessionDuration;
						std::string operationForRiskLogin;
						std::string loginNetworkMasks;
						bool allowUserToChangePassword;
						bool enableSaveMFATicket;
						std::string mFAOperationForLogin;
					};
					struct MFAPreference
					{
						bool allowUserToManageMFADevices;
					};
					struct VerificationPreference
					{
						std::vector<std::string> verificationTypes;
					};
					struct PersonalInfoPreference
					{
						bool allowUserToManagePersonalDingTalk;
					};
					struct ApplicationLoginPreference
					{
						bool allowUserLongTermLogin;
					};
					LoginProfilePreference loginProfilePreference;
					ApplicationLoginPreference applicationLoginPreference;
					PersonalInfoPreference personalInfoPreference;
					AccessKeyPreference accessKeyPreference;
					VerificationPreference verificationPreference;
					MFAPreference mFAPreference;
				};


				GetSecurityPreferenceResult();
				explicit GetSecurityPreferenceResult(const std::string &payload);
				~GetSecurityPreferenceResult();
				SecurityPreference getSecurityPreference()const;

			protected:
				void parse(const std::string &payload);
			private:
				SecurityPreference securityPreference_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMS_MODEL_GETSECURITYPREFERENCERESULT_H_