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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeRiskCheckResultResult : public ServiceResult
			{
			public:
				struct RiskCheckResultForDisplay
				{
					struct RiskItemResource
					{
						std::string contentResource;
						std::string resourceName;
					};
					std::string status;
					long checkTime;
					long taskId;
					int remainingTime;
					std::string title;
					long itemId;
					std::string riskAssertType;
					std::string type;
					std::string startStatus;
					std::vector<RiskCheckResultForDisplay::RiskItemResource> riskItemResources;
					int affectedCount;
					int sort;
					std::string repairStatus;
					std::string riskLevel;
				};


				DescribeRiskCheckResultResult();
				explicit DescribeRiskCheckResultResult(const std::string &payload);
				~DescribeRiskCheckResultResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageCount()const;
				int getCurrentPage()const;
				std::vector<RiskCheckResultForDisplay> getList()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageCount_;
				int currentPage_;
				std::vector<RiskCheckResultForDisplay> list_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTRESULT_H_