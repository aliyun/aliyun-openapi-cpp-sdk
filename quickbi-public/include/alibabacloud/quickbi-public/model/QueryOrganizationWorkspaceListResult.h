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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYORGANIZATIONWORKSPACELISTRESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYORGANIZATIONWORKSPACELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryOrganizationWorkspaceListResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct DataItem
					{
						std::string workspaceDescription;
						std::string owner;
						std::string modifyUser;
						std::string createTime;
						std::string ownerAccountName;
						std::string workspaceId;
						std::string createUser;
						std::string organizationId;
						std::string modifyUserAccountName;
						std::string modifiedTime;
						bool allowShareOperation;
						std::string workspaceName;
						bool allowPublishOperation;
						std::string createUserAccountName;
					};
					int totalNum;
					int pageNum;
					int pageSize;
					std::vector<DataItem> data;
					int totalPages;
				};


				QueryOrganizationWorkspaceListResult();
				explicit QueryOrganizationWorkspaceListResult(const std::string &payload);
				~QueryOrganizationWorkspaceListResult();
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYORGANIZATIONWORKSPACELISTRESULT_H_