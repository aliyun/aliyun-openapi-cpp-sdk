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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEDOMAINPUBLISHERRORCODERESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEDOMAINPUBLISHERRORCODERESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveDomainPublishErrorCodeResult : public ServiceResult
			{
			public:
				struct Rtcd
				{
					struct Cd
					{
						std::string proportion;
						std::string count;
						std::string code;
					};
					std::vector<Rtcd::Cd> codeData;
					std::string timeStamp;
				};


				DescribeLiveDomainPublishErrorCodeResult();
				explicit DescribeLiveDomainPublishErrorCodeResult(const std::string &payload);
				~DescribeLiveDomainPublishErrorCodeResult();
				std::string getEndTime()const;
				std::string getDomainName()const;
				std::string getDataInterval()const;
				std::string getStartTime()const;
				std::vector<Rtcd> getRealTimeCodeData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::string dataInterval_;
				std::string startTime_;
				std::vector<Rtcd> realTimeCodeData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEDOMAINPUBLISHERRORCODERESULT_H_