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

#ifndef ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBEBASESTATISTICSRESULT_H_
#define ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBEBASESTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/reid_cloud/Reid_cloudExport.h>

namespace AlibabaCloud
{
	namespace Reid_cloud
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_CLOUD_EXPORT DescribeBaseStatisticsResult : public ServiceResult
			{
			public:
				struct BaseStatisticsItem
				{
					struct AgeItem
					{
						int count;
						std::string name;
					};
					struct StayDistributionItem
					{
						long startTs;
						long endTs;
						int count;
					};
					struct AgeItem
					{
						int count;
						std::string name;
					};
					struct AgeItem
					{
						int count;
						std::string name;
					};
					std::vector<BaseStatisticsItem::AgeItem> ageItems;
					std::vector<BaseStatisticsItem::StayDistributionItem> stayDistributionItems;
					int maleUvCount;
					long stayPeriod;
					int femaleUvCount;
					long locationId;
					int newCount;
					int onlyBodyUvCount;
					std::string time;
					std::vector<BaseStatisticsItem::AgeItem> femaleAgeItems;
					int oldCount;
					std::string summaryType;
					long storeId;
					std::vector<BaseStatisticsItem::AgeItem> maleAgeItems;
					int uvCount;
				};


				DescribeBaseStatisticsResult();
				explicit DescribeBaseStatisticsResult(const std::string &payload);
				~DescribeBaseStatisticsResult();
				std::string getMessage()const;
				std::string getCursorTime()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::vector<BaseStatisticsItem> getBaseStatistics()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string cursorTime_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string errorMessage_;
				std::vector<BaseStatisticsItem> baseStatistics_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBEBASESTATISTICSRESULT_H_