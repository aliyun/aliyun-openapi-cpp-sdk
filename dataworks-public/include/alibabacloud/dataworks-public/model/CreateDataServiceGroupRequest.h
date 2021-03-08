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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDATASERVICEGROUPREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDATASERVICEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateDataServiceGroupRequest : public RpcServiceRequest
			{

			public:
				CreateDataServiceGroupRequest();
				~CreateDataServiceGroupRequest();

				std::string getApiGatewayGroupId()const;
				void setApiGatewayGroupId(const std::string& apiGatewayGroupId);
				long getTenantId()const;
				void setTenantId(long tenantId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);

            private:
				std::string apiGatewayGroupId_;
				long tenantId_;
				std::string description_;
				long projectId_;
				std::string groupName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDATASERVICEGROUPREQUEST_H_