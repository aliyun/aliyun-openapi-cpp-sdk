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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMMONITORCONFIGRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMMONITORCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmMonitorConfigResult : public ServiceResult
			{
			public:
				struct IspCityNode
				{
					std::string cityCode;
					std::string ispName;
					std::string countryName;
					std::string cityName;
					std::string countryCode;
					std::string ispCode;
				};


				DescribeDnsGtmMonitorConfigResult();
				explicit DescribeDnsGtmMonitorConfigResult(const std::string &payload);
				~DescribeDnsGtmMonitorConfigResult();
				std::vector<IspCityNode> getIspCityNodes()const;
				int getTimeout()const;
				std::string getProtocolType()const;
				std::string getCreateTime()const;
				std::string getUpdateTime()const;
				int getEvaluationCount()const;
				long getUpdateTimestamp()const;
				std::string getMonitorExtendInfo()const;
				std::string getMonitorConfigId()const;
				long getCreateTimestamp()const;
				int getInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<IspCityNode> ispCityNodes_;
				int timeout_;
				std::string protocolType_;
				std::string createTime_;
				std::string updateTime_;
				int evaluationCount_;
				long updateTimestamp_;
				std::string monitorExtendInfo_;
				std::string monitorConfigId_;
				long createTimestamp_;
				int interval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMMONITORCONFIGRESULT_H_