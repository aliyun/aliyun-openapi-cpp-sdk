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

#ifndef ALIBABACLOUD_XTRACE_MODEL_QUERYMETRICREQUEST_H_
#define ALIBABACLOUD_XTRACE_MODEL_QUERYMETRICREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/xtrace/XtraceExport.h>

namespace AlibabaCloud
{
	namespace Xtrace
	{
		namespace Model
		{
			class ALIBABACLOUD_XTRACE_EXPORT QueryMetricRequest : public RpcServiceRequest
			{
			public:
				struct Filters
				{
					std::string value;
					std::string key;
				};

			public:
				QueryMetricRequest();
				~QueryMetricRequest();

				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::vector<Filters> getFilters()const;
				void setFilters(const std::vector<Filters>& filters);
				std::string getProxyUserId()const;
				void setProxyUserId(const std::string& proxyUserId);
				std::vector<std::string> getMeasures()const;
				void setMeasures(const std::vector<std::string>& measures);
				int getIntervalInSec()const;
				void setIntervalInSec(int intervalInSec);
				std::string getMetric()const;
				void setMetric(const std::string& metric);
				int getLimit()const;
				void setLimit(int limit);
				std::vector<std::string> getDimensions()const;
				void setDimensions(const std::vector<std::string>& dimensions);
				std::string getOrder()const;
				void setOrder(const std::string& order);

            private:
				long endTime_;
				std::string orderBy_;
				long startTime_;
				std::vector<Filters> filters_;
				std::string proxyUserId_;
				std::vector<std::string> measures_;
				int intervalInSec_;
				std::string metric_;
				int limit_;
				std::vector<std::string> dimensions_;
				std::string order_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_XTRACE_MODEL_QUERYMETRICREQUEST_H_