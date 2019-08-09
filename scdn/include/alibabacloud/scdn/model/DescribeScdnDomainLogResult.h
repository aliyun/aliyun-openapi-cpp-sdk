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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINLOGRESULT_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINLOGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnDomainLogResult : public ServiceResult
			{
			public:
				struct DomainLogDetail
				{
					struct PageInfos
					{
						long pageSize;
						long pageNumber;
						long total;
					};
					struct LogInfoDetail
					{
						long logSize;
						std::string endTime;
						std::string startTime;
						std::string logName;
						std::string logPath;
					};
					std::vector<DomainLogDetail::LogInfoDetail> logInfos;
					PageInfos pageInfos;
					long logCount;
				};


				DescribeScdnDomainLogResult();
				explicit DescribeScdnDomainLogResult(const std::string &payload);
				~DescribeScdnDomainLogResult();
				std::string getDomainName()const;
				std::vector<DomainLogDetail> getDomainLogDetails()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string domainName_;
				std::vector<DomainLogDetail> domainLogDetails_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINLOGRESULT_H_