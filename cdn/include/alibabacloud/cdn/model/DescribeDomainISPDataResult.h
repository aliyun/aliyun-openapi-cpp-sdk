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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINISPDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINISPDATARESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainISPDataResult : public ServiceResult
			{
			public:
				struct ISPProportionData
				{
					std::string avgObjectSize;
					std::string bytesProportion;
					std::string bps;
					std::string totalQuery;
					std::string iSP;
					std::string avgResponseRate;
					std::string reqErrRate;
					std::string ispEname;
					std::string reqHitRate;
					std::string qps;
					std::string proportion;
					std::string byteHitRate;
					std::string totalBytes;
					std::string avgResponseTime;
				};


				DescribeDomainISPDataResult();
				explicit DescribeDomainISPDataResult(const std::string &payload);
				~DescribeDomainISPDataResult();
				std::string getEndTime()const;
				std::string getDomainName()const;
				std::vector<ISPProportionData> getValue()const;
				std::string getStartTime()const;
				std::string getDataInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::vector<ISPProportionData> value_;
				std::string startTime_;
				std::string dataInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINISPDATARESULT_H_