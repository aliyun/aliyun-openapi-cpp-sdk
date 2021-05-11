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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEGRANTEESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEGRANTEESREQUEST_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListTableGranteesRequest : public RpcServiceRequest
			{

			public:
				ListTableGranteesRequest();
				~ListTableGranteesRequest();

				std::string getMaxComputeProjectName()const;
				void setMaxComputeProjectName(const std::string& maxComputeProjectName);
				std::string getTableName()const;
				void setTableName(const std::string& tableName);
				int getWorkspaceId()const;
				void setWorkspaceId(int workspaceId);
				std::string getEngineType()const;
				void setEngineType(const std::string& engineType);

            private:
				std::string maxComputeProjectName_;
				std::string tableName_;
				int workspaceId_;
				std::string engineType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEGRANTEESREQUEST_H_