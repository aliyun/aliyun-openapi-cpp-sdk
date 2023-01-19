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

#ifndef ALIBABACLOUD_SAS_MODEL_GETCHECKRISKSTATISTICSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETCHECKRISKSTATISTICSRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT GetCheckRiskStatisticsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct SubStatistic
					{
						int mediumWarningCount;
						std::string typeName;
						int totalCount;
						std::string alias;
						int highWarningCount;
						int passCount;
						int lowWarningCount;
					};
					int mediumWarningCount;
					int totalCount;
					std::string sceneName;
					std::vector<DataItem::SubStatistic> subStatistics;
					int highWarningCount;
					int passCount;
					int lowWarningCount;
				};


				GetCheckRiskStatisticsResult();
				explicit GetCheckRiskStatisticsResult(const std::string &payload);
				~GetCheckRiskStatisticsResult();
				std::vector<DataItem> getData()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETCHECKRISKSTATISTICSRESULT_H_