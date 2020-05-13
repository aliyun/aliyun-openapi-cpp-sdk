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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEPROTECTIONMODULERULESBYIDLISTREQUEST_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEPROTECTIONMODULERULESBYIDLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/waf-openapi/Waf_openapiExport.h>

namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeProtectionModuleRulesByIdListRequest : public RpcServiceRequest
			{

			public:
				DescribeProtectionModuleRulesByIdListRequest();
				~DescribeProtectionModuleRulesByIdListRequest();

				std::string getRuleIdList()const;
				void setRuleIdList(const std::string& ruleIdList);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string ruleIdList_;
				std::string resourceGroupId_;
				std::string instanceId_;
				std::string sourceIp_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEPROTECTIONMODULERULESBYIDLISTREQUEST_H_