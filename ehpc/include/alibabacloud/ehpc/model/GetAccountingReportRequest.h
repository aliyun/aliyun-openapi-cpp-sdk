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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT GetAccountingReportRequest : public RpcServiceRequest
			{

			public:
				GetAccountingReportRequest();
				~GetAccountingReportRequest();

				std::string getReportType()const;
				void setReportType(const std::string& reportType);
				int getEndTime()const;
				void setEndTime(int endTime);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getStartTime()const;
				void setStartTime(int startTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string reportType_;
				int endTime_;
				std::string clusterId_;
				int startTime_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTREQUEST_H_