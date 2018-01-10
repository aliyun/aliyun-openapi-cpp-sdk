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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINPATHDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINPATHDATARESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainPathDataResult : public ServiceResult
			{
			public:
				struct UsageData
				{
					int acc;
					std::string path;
					int traffic;
					std::string time;
				};


				DescribeDomainPathDataResult();
				explicit DescribeDomainPathDataResult(const std::string &payload);
				~DescribeDomainPathDataResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<UsageData> getPathDataPerInterval()const;
				void setPathDataPerInterval(const std::vector<UsageData>& pathDataPerInterval);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getDataInterval()const;
				void setDataInterval(const std::string& dataInterval);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string endTime_;
				int pageSize_;
				std::string domainName_;
				int pageNumber_;
				std::vector<UsageData> pathDataPerInterval_;
				std::string startTime_;
				std::string dataInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINPATHDATARESULT_H_