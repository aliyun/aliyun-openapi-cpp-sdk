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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETOVERVIEWDATARESULT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETOVERVIEWDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineExport.h>

namespace AlibabaCloud
{
	namespace Cusanalytic_sc_online
	{
		namespace Model
		{
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT GetOverviewDataResult : public ServiceResult
			{
			public:


				GetOverviewDataResult();
				explicit GetOverviewDataResult(const std::string &payload);
				~GetOverviewDataResult();
				float getStayDeepAvg()const;
				float getUvWeekGrowthPercent()const;
				long getUv()const;
				float getUvEverySqm()const;
				float getUvEverySqmGrowthWeekPercent()const;
				float getUvAvg()const;
				float getStayAvgPeriod()const;
				float getStayAvgPeriodWeekGrowthPercent()const;
				float getUvAvgWeekGrowthPercent()const;
				float getStayDeepAvgWeekGrowthPercent()const;

			protected:
				void parse(const std::string &payload);
			private:
				float stayDeepAvg_;
				float uvWeekGrowthPercent_;
				long uv_;
				float uvEverySqm_;
				float uvEverySqmGrowthWeekPercent_;
				float uvAvg_;
				float stayAvgPeriod_;
				float stayAvgPeriodWeekGrowthPercent_;
				float uvAvgWeekGrowthPercent_;
				float stayDeepAvgWeekGrowthPercent_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETOVERVIEWDATARESULT_H_