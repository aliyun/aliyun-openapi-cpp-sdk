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

#ifndef ALIBABACLOUD_SAS_MODEL_OPERATIONSUSPEVENTSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_OPERATIONSUSPEVENTSREQUEST_H_

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
			class ALIBABACLOUD_SAS_EXPORT OperationSuspEventsRequest : public RpcServiceRequest
			{

			public:
				OperationSuspEventsRequest();
				~OperationSuspEventsRequest();

				std::string getSuspiciousEventIds()const;
				void setSuspiciousEventIds(const std::string& suspiciousEventIds);
				std::string getSubOperation()const;
				void setSubOperation(const std::string& subOperation);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getWarnType()const;
				void setWarnType(const std::string& warnType);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getOperation()const;
				void setOperation(const std::string& operation);

            private:
				std::string suspiciousEventIds_;
				std::string subOperation_;
				std::string sourceIp_;
				std::string warnType_;
				std::string from_;
				std::string operation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_OPERATIONSUSPEVENTSREQUEST_H_