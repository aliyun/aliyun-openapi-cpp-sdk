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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeCheckWarningsRequest : public RpcServiceRequest
			{

			public:
				DescribeCheckWarningsRequest();
				~DescribeCheckWarningsRequest();

				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getCheckId()const;
				void setCheckId(long checkId);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				long getRiskId()const;
				void setRiskId(long riskId);

            private:
				std::string uuid_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				long checkId_;
				int currentPage_;
				long riskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGSREQUEST_H_