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

#ifndef ALIBABACLOUD_NLB_MODEL_LISTSECURITYPOLICYRESULT_H_
#define ALIBABACLOUD_NLB_MODEL_LISTSECURITYPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlb/NlbExport.h>

namespace AlibabaCloud
{
	namespace Nlb
	{
		namespace Model
		{
			class ALIBABACLOUD_NLB_EXPORT ListSecurityPolicyResult : public ServiceResult
			{
			public:
				struct SecurityPolicie
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct RelatedListener
					{
						long listenerPort;
						std::string loadBalancerId;
						std::string listenerProtocol;
						std::string listenerId;
					};
					std::string tlsVersion;
					std::string ciphers;
					std::string securityPolicyId;
					std::string resourceGroupId;
					std::string securityPolicyStatus;
					std::string securityPolicyName;
					std::string regionId;
					std::vector<SecurityPolicie::RelatedListener> relatedListeners;
					std::vector<SecurityPolicie::Tag> tags;
				};


				ListSecurityPolicyResult();
				explicit ListSecurityPolicyResult(const std::string &payload);
				~ListSecurityPolicyResult();
				int getTotalCount()const;
				std::string getMessage()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				int getHttpStatusCode()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getCode()const;
				std::vector<SecurityPolicie> getSecurityPolicies()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				std::string nextToken_;
				int maxResults_;
				int httpStatusCode_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string code_;
				std::vector<SecurityPolicie> securityPolicies_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLB_MODEL_LISTSECURITYPOLICYRESULT_H_