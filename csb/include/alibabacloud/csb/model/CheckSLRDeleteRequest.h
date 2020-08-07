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

#ifndef ALIBABACLOUD_CSB_MODEL_CHECKSLRDELETEREQUEST_H_
#define ALIBABACLOUD_CSB_MODEL_CHECKSLRDELETEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/csb/CSBExport.h>

namespace AlibabaCloud
{
	namespace CSB
	{
		namespace Model
		{
			class ALIBABACLOUD_CSB_EXPORT CheckSLRDeleteRequest : public RpcServiceRequest
			{

			public:
				CheckSLRDeleteRequest();
				~CheckSLRDeleteRequest();

				std::string getDeletionTaskId()const;
				void setDeletionTaskId(const std::string& deletionTaskId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				std::string getSPIRegionId()const;
				void setSPIRegionId(const std::string& sPIRegionId);
				std::string getRoleArn()const;
				void setRoleArn(const std::string& roleArn);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);

            private:
				std::string deletionTaskId_;
				std::string accountId_;
				std::string sPIRegionId_;
				std::string roleArn_;
				std::string serviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSB_MODEL_CHECKSLRDELETEREQUEST_H_