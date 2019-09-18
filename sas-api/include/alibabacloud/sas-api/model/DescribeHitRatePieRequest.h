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

#ifndef ALIBABACLOUD_SAS_API_MODEL_DESCRIBEHITRATEPIEREQUEST_H_
#define ALIBABACLOUD_SAS_API_MODEL_DESCRIBEHITRATEPIEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas-api/Sas_apiExport.h>

namespace AlibabaCloud
{
	namespace Sas_api
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_API_EXPORT DescribeHitRatePieRequest : public RpcServiceRequest
			{

			public:
				DescribeHitRatePieRequest();
				~DescribeHitRatePieRequest();

				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				int getApiType()const;
				void setApiType(int apiType);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getHitDay()const;
				void setHitDay(int hitDay);

            private:
				std::string startDate_;
				int apiType_;
				std::string endDate_;
				std::string sourceIp_;
				int hitDay_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_API_MODEL_DESCRIBEHITRATEPIEREQUEST_H_