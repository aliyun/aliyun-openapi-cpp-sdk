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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEMETATABLEPREVIEWTASKREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEMETATABLEPREVIEWTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateMetaTablePreviewTaskRequest : public RpcServiceRequest
			{

			public:
				CreateMetaTablePreviewTaskRequest();
				~CreateMetaTablePreviewTaskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTableId()const;
				void setTableId(const std::string& tableId);
				std::string getDatabaseId()const;
				void setDatabaseId(const std::string& databaseId);
				std::string getUser()const;
				void setUser(const std::string& user);

            private:
				long resourceOwnerId_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::string password_;
				std::string regionId_;
				std::string tableId_;
				std::string databaseId_;
				std::string user_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEMETATABLEPREVIEWTASKREQUEST_H_