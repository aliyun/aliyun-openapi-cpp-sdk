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

#ifndef ALIBABACLOUD_SAS-API_MODEL_DESCRIBETOTALANDRATELINEREQUEST_H_
#define ALIBABACLOUD_SAS-API_MODEL_DESCRIBETOTALANDRATELINEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas-api/Sas-apiExport.h>

namespace AlibabaCloud
{
	namespace Sas-api
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS-API_EXPORT DescribeTotalAndRateLineRequest : public RpcServiceRequest
			{

			public:
				DescribeTotalAndRateLineRequest();
				~DescribeTotalAndRateLineRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getApiType()const;
				void setApiType(int apiType);

            private:
				std::string sourceIp_;
				int apiType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS-API_MODEL_DESCRIBETOTALANDRATELINEREQUEST_H_