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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEWITHPERMISSIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEWITHPERMISSIONREQUEST_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListTableWithPermissionRequest : public RpcServiceRequest
			{

			public:
				ListTableWithPermissionRequest();
				~ListTableWithPermissionRequest();

				std::string getMaxComputeProjectName()const;
				void setMaxComputeProjectName(const std::string& maxComputeProjectName);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				int getWorkspaceId()const;
				void setWorkspaceId(int workspaceId);
				std::string getEngineType()const;
				void setEngineType(const std::string& engineType);

            private:
				std::string maxComputeProjectName_;
				int pageNum_;
				std::string userId_;
				int pageSize_;
				std::string keyword_;
				int workspaceId_;
				std::string engineType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEWITHPERMISSIONREQUEST_H_