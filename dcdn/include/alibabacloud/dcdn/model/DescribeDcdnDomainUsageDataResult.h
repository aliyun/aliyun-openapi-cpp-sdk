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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINUSAGEDATARESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINUSAGEDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainUsageDataResult : public ServiceResult
			{
			public:
				struct DataModule
				{
					std::string value;
					std::string peakTime;
					std::string specialValue;
					std::string timeStamp;
				};


				DescribeDcdnDomainUsageDataResult();
				explicit DescribeDcdnDomainUsageDataResult(const std::string &payload);
				~DescribeDcdnDomainUsageDataResult();
				std::vector<DataModule> getUsageDataPerInterval()const;
				std::string getType()const;
				std::string getArea()const;
				std::string getEndTime()const;
				std::string getDomainName()const;
				std::string getStartTime()const;
				std::string getDataInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataModule> usageDataPerInterval_;
				std::string type_;
				std::string area_;
				std::string endTime_;
				std::string domainName_;
				std::string startTime_;
				std::string dataInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINUSAGEDATARESULT_H_