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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBERECORDSTATISTICSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBERECORDSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeRecordStatisticsRequest : public RpcServiceRequest
			{

			public:
				DescribeRecordStatisticsRequest();
				~DescribeRecordStatisticsRequest();

				std::string getRr()const;
				void setRr(const std::string& rr);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);

            private:
				std::string rr_;
				std::string endDate_;
				std::string userClientIp_;
				std::string domainName_;
				std::string lang_;
				std::string startDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBERECORDSTATISTICSREQUEST_H_