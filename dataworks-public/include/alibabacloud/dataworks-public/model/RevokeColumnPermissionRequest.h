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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_REVOKECOLUMNPERMISSIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_REVOKECOLUMNPERMISSIONREQUEST_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT RevokeColumnPermissionRequest : public RpcServiceRequest
			{

			public:
				RevokeColumnPermissionRequest();
				~RevokeColumnPermissionRequest();

				std::string getRevokeUserName()const;
				void setRevokeUserName(const std::string& revokeUserName);
				std::string getMaxComputeProjectName()const;
				void setMaxComputeProjectName(const std::string& maxComputeProjectName);
				std::string getColumns()const;
				void setColumns(const std::string& columns);
				std::string getRevokeUserId()const;
				void setRevokeUserId(const std::string& revokeUserId);
				std::string getTableName()const;
				void setTableName(const std::string& tableName);
				long getWorkspaceId()const;
				void setWorkspaceId(long workspaceId);

            private:
				std::string revokeUserName_;
				std::string maxComputeProjectName_;
				std::string columns_;
				std::string revokeUserId_;
				std::string tableName_;
				long workspaceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_REVOKECOLUMNPERMISSIONREQUEST_H_