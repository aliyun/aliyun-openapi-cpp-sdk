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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMULTIUSAGEDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMULTIUSAGEDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainMultiUsageDataResult : public ServiceResult
			{
			public:
				struct RequestDataModule
				{
					std::string type;
					long request;
					std::string domain;
					std::string timeStamp;
				};
				struct TrafficDataModule
				{
					std::string type;
					std::string area;
					float bps;
					std::string domain;
					std::string timeStamp;
				};


				DescribeDomainMultiUsageDataResult();
				explicit DescribeDomainMultiUsageDataResult(const std::string &payload);
				~DescribeDomainMultiUsageDataResult();
				std::string getEndTime()const;
				std::string getStartTime()const;
				std::vector<RequestDataModule> getRequestPerInterval()const;
				std::vector<TrafficDataModule> getTrafficPerInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string startTime_;
				std::vector<RequestDataModule> requestPerInterval_;
				std::vector<TrafficDataModule> trafficPerInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMULTIUSAGEDATARESULT_H_