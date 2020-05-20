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

#ifndef ALIBABACLOUD_ARMS_MODEL_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CheckServiceLinkedRoleForDeletingRequest : public RpcServiceRequest
			{

			public:
				CheckServiceLinkedRoleForDeletingRequest();
				~CheckServiceLinkedRoleForDeletingRequest();

				std::string getSPIRegionId()const;
				void setSPIRegionId(const std::string& sPIRegionId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRoleArn()const;
				void setRoleArn(const std::string& roleArn);
				std::string getDeletionTaskId()const;
				void setDeletionTaskId(const std::string& deletionTaskId);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);

            private:
				std::string sPIRegionId_;
				std::string regionId_;
				std::string roleArn_;
				std::string deletionTaskId_;
				std::string serviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_H_