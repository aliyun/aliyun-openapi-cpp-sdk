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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTSREQUEST_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeOssObjectsRequest : public RpcServiceRequest
			{

			public:
				DescribeOssObjectsRequest();
				~DescribeOssObjectsRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getQueryName()const;
				void setQueryName(const std::string& queryName);
				int getRiskLevelId()const;
				void setRiskLevelId(int riskLevelId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getRuleId()const;
				void setRuleId(long ruleId);

            private:
				std::string instanceId_;
				std::string sourceIp_;
				int featureType_;
				std::string name_;
				int pageSize_;
				int currentPage_;
				std::string queryName_;
				int riskLevelId_;
				std::string lang_;
				long ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTSREQUEST_H_