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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINQPSDATARESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINQPSDATARESULT_H_

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
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainQpsDataResult : public ServiceResult
			{
			public:
				struct DataModule
				{
					float dynamicHttpsQps;
					float acc;
					float staticHttpsQps;
					float dynamicHttpAcc;
					float staticHttpsAcc;
					float staticHttpAcc;
					float dynamicHttpQps;
					float qps;
					float staticHttpQps;
					float dynamicHttpsAcc;
					std::string timeStamp;
				};


				DescribeDcdnDomainQpsDataResult();
				explicit DescribeDcdnDomainQpsDataResult(const std::string &payload);
				~DescribeDcdnDomainQpsDataResult();
				std::vector<DataModule> getQpsDataPerInterval()const;
				std::string getEndTime()const;
				std::string getDomainName()const;
				std::string getStartTime()const;
				std::string getDataInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataModule> qpsDataPerInterval_;
				std::string endTime_;
				std::string domainName_;
				std::string startTime_;
				std::string dataInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINQPSDATARESULT_H_