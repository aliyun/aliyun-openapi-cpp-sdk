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

#ifndef ALIBABACLOUD_RAM_MODEL_DECODEDIAGNOSTICMESSAGERESULT_H_
#define ALIBABACLOUD_RAM_MODEL_DECODEDIAGNOSTICMESSAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ram/RamExport.h>

namespace AlibabaCloud
{
	namespace Ram
	{
		namespace Model
		{
			class ALIBABACLOUD_RAM_EXPORT DecodeDiagnosticMessageResult : public ServiceResult
			{
			public:
				struct DecodedDiagnosticMessage
				{
					struct AuthPrincipal
					{
						std::string authPrincipalOwnerId;
						std::string authPrincipalType;
						std::string authPrincipalDisplayName;
					};
					struct AuthConditionsItem
					{
						std::vector<std::string> conditionValues;
						std::string conditionKey;
					};
					struct MatchedPoliciesItem
					{
						std::string policyVersion;
						std::string policyType;
						std::string attachedScope;
						std::string policyIdentifier;
						std::string attachedEntityType;
						std::string effect;
					};
					std::string noPermissionPolicyType;
					bool explicitDeny;
					AuthPrincipal authPrincipal;
					std::string authResource;
					std::vector<AuthConditionsItem> authConditions;
					std::vector<MatchedPoliciesItem> matchedPolicies;
					std::string authAction;
				};


				DecodeDiagnosticMessageResult();
				explicit DecodeDiagnosticMessageResult(const std::string &payload);
				~DecodeDiagnosticMessageResult();
				DecodedDiagnosticMessage getDecodedDiagnosticMessage()const;

			protected:
				void parse(const std::string &payload);
			private:
				DecodedDiagnosticMessage decodedDiagnosticMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_DECODEDIAGNOSTICMESSAGERESULT_H_