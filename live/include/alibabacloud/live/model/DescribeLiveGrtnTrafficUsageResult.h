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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEGRTNTRAFFICUSAGERESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEGRTNTRAFFICUSAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveGrtnTrafficUsageResult : public ServiceResult
			{
			public:
				struct UsageData
				{
					double value;
					std::string timeStamp;
				};


				DescribeLiveGrtnTrafficUsageResult();
				explicit DescribeLiveGrtnTrafficUsageResult(const std::string &payload);
				~DescribeLiveGrtnTrafficUsageResult();
				std::vector<UsageData> getUsageDataPerInterval()const;
				std::string getArea()const;
				std::string getFiled()const;
				std::string getEndTime()const;
				std::string getAppId()const;
				std::string getStartTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<UsageData> usageDataPerInterval_;
				std::string area_;
				std::string filed_;
				std::string endTime_;
				std::string appId_;
				std::string startTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEGRTNTRAFFICUSAGERESULT_H_