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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUMMARYREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUMMARYREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribesummaryRequest : public RpcServiceRequest
			{

			public:
				DescribesummaryRequest();
				~DescribesummaryRequest();

				std::string getTypeNames()const;
				void setTypeNames(const std::string& typeNames);
				std::string getRiskName()const;
				void setRiskName(const std::string& riskName);
				std::string getStatusList()const;
				void setStatusList(const std::string& statusList);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getRiskLevels()const;
				void setRiskLevels(const std::string& riskLevels);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				long getStrategyId()const;
				void setStrategyId(long strategyId);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getSubTypeNames()const;
				void setSubTypeNames(const std::string& subTypeNames);
				std::string getUuids()const;
				void setUuids(const std::string& uuids);

            private:
				std::string typeNames_;
				std::string riskName_;
				std::string statusList_;
				std::string sourceIp_;
				std::string riskLevels_;
				int pageSize_;
				std::string dealed_;
				long strategyId_;
				int currentPage_;
				std::string subTypeNames_;
				std::string uuids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUMMARYREQUEST_H_