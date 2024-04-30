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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFLOGSRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFLOGSRESULT_H_

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
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnWafLogsResult : public ServiceResult
			{
			public:
				struct DomainLogDetail
				{
					struct PageInfos
					{
						long pageSize;
						long total;
						long pageIndex;
					};
					struct LogInfoDetail
					{
						long logSize;
						std::string endTime;
						std::string startTime;
						std::string logName;
						std::string logPath;
					};
					std::string domainName;
					std::vector<DomainLogDetail::LogInfoDetail> logInfos;
					PageInfos pageInfos;
					long logCount;
				};


				DescribeDcdnWafLogsResult();
				explicit DescribeDcdnWafLogsResult(const std::string &payload);
				~DescribeDcdnWafLogsResult();
				std::vector<DomainLogDetail> getDomainLogDetails()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DomainLogDetail> domainLogDetails_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFLOGSRESULT_H_