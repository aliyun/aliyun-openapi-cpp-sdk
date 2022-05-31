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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT CheckServiceLinkedRoleForDeletingRequest : public RpcServiceRequest
			{

			public:
				CheckServiceLinkedRoleForDeletingRequest();
				~CheckServiceLinkedRoleForDeletingRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getDeletionTaskId()const;
				void setDeletionTaskId(const std::string& deletionTaskId);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSPIRegionId()const;
				void setSPIRegionId(const std::string& sPIRegionId);
				std::string getRoleArn()const;
				void setRoleArn(const std::string& roleArn);

            private:
				std::string extraParams_;
				std::string deletionTaskId_;
				std::string serviceName_;
				long ownerId_;
				std::string sPIRegionId_;
				std::string roleArn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_H_