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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEACLRULESRESULT_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEACLRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/waf-openapi/Waf_openapiExport.h>

namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeAclRulesResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct AclRule
					{
						struct Condition
						{
							std::string value;
							std::string contain;
							std::string key;
						};
						int continueBlockGeo;
						int isDefault;
						int order;
						int action;
						int continueWaf;
						int continueSdk;
						long id;
						int continueCc;
						std::vector<AclRule::Condition> conditions;
						int continueSA;
						int continueDataRiskControl;
						std::string name;
					};
					std::vector<AclRule> aclRules;
					int total;
				};


				DescribeAclRulesResult();
				explicit DescribeAclRulesResult(const std::string &payload);
				~DescribeAclRulesResult();
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEACLRULESRESULT_H_