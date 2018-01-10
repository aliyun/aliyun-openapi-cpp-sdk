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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEEXTENSIVEDOMAINDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEEXTENSIVEDOMAINDATARESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeExtensiveDomainDataResult : public ServiceResult
			{
			public:
				struct UsageData
				{
					std::string acc;
					std::string exactDomain;
					std::string timeStamp;
					std::string flow;
				};


				DescribeExtensiveDomainDataResult();
				explicit DescribeExtensiveDomainDataResult(const std::string &payload);
				~DescribeExtensiveDomainDataResult();
				std::string getTotalCount()const;
				void setTotalCount(const std::string& totalCount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getDataInterval()const;
				void setDataInterval(const std::string& dataInterval);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::vector<UsageData> getDataPerInterval()const;
				void setDataPerInterval(const std::vector<UsageData>& dataPerInterval);
				std::string getExtensiveDomain()const;
				void setExtensiveDomain(const std::string& extensiveDomain);

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string endTime_;
				std::string pageSize_;
				std::string pageNumber_;
				std::string dataInterval_;
				std::string startTime_;
				std::vector<UsageData> dataPerInterval_;
				std::string extensiveDomain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEEXTENSIVEDOMAINDATARESULT_H_