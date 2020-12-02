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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_CREATESTATISTICSTASKREQUEST_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_CREATESTATISTICSTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/idrsservice/IdrsserviceExport.h>

namespace AlibabaCloud
{
	namespace Idrsservice
	{
		namespace Model
		{
			class ALIBABACLOUD_IDRSSERVICE_EXPORT CreateStatisticsTaskRequest : public RpcServiceRequest
			{

			public:
				CreateStatisticsTaskRequest();
				~CreateStatisticsTaskRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::vector<std::string> getDepartmentId()const;
				void setDepartmentId(const std::vector<std::string>& departmentId);
				std::string getDateTo()const;
				void setDateTo(const std::string& dateTo);
				std::string getDateFrom()const;
				void setDateFrom(const std::string& dateFrom);

            private:
				std::string clientToken_;
				std::vector<std::string> departmentId_;
				std::string dateTo_;
				std::string dateFrom_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_CREATESTATISTICSTASKREQUEST_H_