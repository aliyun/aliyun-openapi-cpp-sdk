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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECOLUMNSREQUEST_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECOLUMNSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeColumnsRequest : public RpcServiceRequest
			{

			public:
				DescribeColumnsRequest();
				~DescribeColumnsRequest();

				std::string getRiskLevels()const;
				void setRiskLevels(const std::string& riskLevels);
				std::string getQueryName()const;
				void setQueryName(const std::string& queryName);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getTableId()const;
				void setTableId(long tableId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getName()const;
				void setName(const std::string& name);
				long getRuleId()const;
				void setRuleId(long ruleId);

            private:
				std::string riskLevels_;
				std::string queryName_;
				std::string sourceIp_;
				int pageSize_;
				long tableId_;
				std::string lang_;
				int featureType_;
				int currentPage_;
				std::string name_;
				long ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECOLUMNSREQUEST_H_