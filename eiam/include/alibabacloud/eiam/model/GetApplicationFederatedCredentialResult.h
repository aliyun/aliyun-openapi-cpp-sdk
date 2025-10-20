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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONFEDERATEDCREDENTIALRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONFEDERATEDCREDENTIALRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT GetApplicationFederatedCredentialResult : public ServiceResult
			{
			public:
				struct ApplicationFederatedCredential
				{
					struct AttributeMapping
					{
						std::string sourceValueExpression;
						std::string targetField;
					};
					std::string status;
					std::string description;
					std::string instanceId;
					std::string applicationFederatedCredentialType;
					std::string verificationCondition;
					std::vector<AttributeMapping> attributeMappings;
					long createTime;
					std::string applicationFederatedCredentialName;
					std::string applicationFederatedCredentialId;
					long lastUsedTime;
					long updateTime;
					std::string applicationId;
					std::string federatedCredentialProviderId;
				};


				GetApplicationFederatedCredentialResult();
				explicit GetApplicationFederatedCredentialResult(const std::string &payload);
				~GetApplicationFederatedCredentialResult();
				ApplicationFederatedCredential getApplicationFederatedCredential()const;

			protected:
				void parse(const std::string &payload);
			private:
				ApplicationFederatedCredential applicationFederatedCredential_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONFEDERATEDCREDENTIALRESULT_H_