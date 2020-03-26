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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBERULESREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBERULESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeRulesRequest : public RpcServiceRequest
			{

			public:
				DescribeRulesRequest();
				~DescribeRulesRequest();

				int getWarnLevel()const;
				void setWarnLevel(int warnLevel);
				int getProductCode()const;
				void setProductCode(int productCode);
				long getProductId()const;
				void setProductId(long productId);
				long getRiskLevelId()const;
				void setRiskLevelId(long riskLevelId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getRuleType()const;
				void setRuleType(int ruleType);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				int getCustomType()const;
				void setCustomType(int customType);
				std::string getName()const;
				void setName(const std::string& name);
				int getCategory()const;
				void setCategory(int category);

            private:
				int warnLevel_;
				int productCode_;
				long productId_;
				long riskLevelId_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				int ruleType_;
				int currentPage_;
				int customType_;
				std::string name_;
				int category_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBERULESREQUEST_H_