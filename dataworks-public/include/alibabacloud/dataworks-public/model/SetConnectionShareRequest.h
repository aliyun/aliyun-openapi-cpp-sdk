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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SETCONNECTIONSHAREREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SETCONNECTIONSHAREREQUEST_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT SetConnectionShareRequest : public RpcServiceRequest
			{

			public:
				SetConnectionShareRequest();
				~SetConnectionShareRequest();

				std::string getProjectPermissions()const;
				void setProjectPermissions(const std::string& projectPermissions);
				std::string getDatasourceName()const;
				void setDatasourceName(const std::string& datasourceName);
				std::string getUserPermissions()const;
				void setUserPermissions(const std::string& userPermissions);
				std::string getEnvType()const;
				void setEnvType(const std::string& envType);
				long getProjectId()const;
				void setProjectId(long projectId);

            private:
				std::string projectPermissions_;
				std::string datasourceName_;
				std::string userPermissions_;
				std::string envType_;
				long projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SETCONNECTIONSHAREREQUEST_H_