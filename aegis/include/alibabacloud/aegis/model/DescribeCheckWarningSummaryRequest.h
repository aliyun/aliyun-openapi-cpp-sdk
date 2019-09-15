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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHECKWARNINGSUMMARYREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHECKWARNINGSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeCheckWarningSummaryRequest : public RpcServiceRequest
			{

			public:
				DescribeCheckWarningSummaryRequest();
				~DescribeCheckWarningSummaryRequest();

				std::string getRiskName()const;
				void setRiskName(const std::string& riskName);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				int getRiskStatus()const;
				void setRiskStatus(int riskStatus);
				long getStrategyId()const;
				void setStrategyId(long strategyId);
				std::string getTypeName()const;
				void setTypeName(const std::string& typeName);
				std::string getStatus()const;
				void setStatus(const std::string& status);
				std::string getUuids()const;
				void setUuids(const std::string& uuids);

            private:
				std::string riskName_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				int currentPage_;
				int riskStatus_;
				long strategyId_;
				std::string typeName_;
				std::string status_;
				std::string uuids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHECKWARNINGSUMMARYREQUEST_H_