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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTCOLUMNWITHLABELPERMISSIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTCOLUMNWITHLABELPERMISSIONREQUEST_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListColumnWithLabelPermissionRequest : public RpcServiceRequest
			{

			public:
				ListColumnWithLabelPermissionRequest();
				~ListColumnWithLabelPermissionRequest();

				std::string getMaxComputeProjectName()const;
				void setMaxComputeProjectName(const std::string& maxComputeProjectName);
				std::string getTableName()const;
				void setTableName(const std::string& tableName);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				int getWorkspaceId()const;
				void setWorkspaceId(int workspaceId);
				std::string getEngineType()const;
				void setEngineType(const std::string& engineType);

            private:
				std::string maxComputeProjectName_;
				std::string tableName_;
				std::string userId_;
				int workspaceId_;
				std::string engineType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTCOLUMNWITHLABELPERMISSIONREQUEST_H_