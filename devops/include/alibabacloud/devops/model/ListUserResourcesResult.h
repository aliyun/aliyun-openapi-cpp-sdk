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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTUSERRESOURCESRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTUSERRESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT ListUserResourcesResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct UserInfo
					{
						std::string avatarUrl;
						std::string email;
						std::string username;
						std::string state;
						long id;
						std::string name;
					};
					struct Group_infos
					{
						struct GroupInfo
						{
							std::string path;
							std::string pathWithNamespace;
							long parentId;
							std::string description;
							long ownerId;
							std::string createdAt;
							std::string nameWithNamespace;
							int visibilityLevel;
							long id;
							std::string updatedAt;
							std::string name;
						};
						struct GroupRole
						{
							long sourceId;
							std::string sourceType;
							std::string enRoleName;
							int accessLevel;
							std::string cnRoleName;
						};
						GroupInfo groupInfo;
						GroupRole groupRole;
					};
					struct Repository_infos
					{
						struct RepositoryInfo
						{
							std::string path;
							std::string pathWithNamespace;
							std::string lastActivityAt;
							std::string description;
							long creatorId;
							bool encrypted;
							std::string createdAt;
							std::string nameWithNamespace;
							int visibilityLevel;
							std::string updatedAt;
							int accessLevel;
							std::string name;
							bool archived;
							long id;
							long namespaceId;
						};
						struct RepositoryRole
						{
							long sourceId;
							std::string sourceType;
							std::string enRoleName;
							int accessLevel;
							std::string cnRoleName;
						};
						RepositoryRole repositoryRole;
						RepositoryInfo repositoryInfo;
					};
					std::vector<ResultItem::Repository_infos> repositoryInfos;
					UserInfo userInfo;
					std::vector<ResultItem::Group_infos> groupInfos;
				};


				ListUserResourcesResult();
				explicit ListUserResourcesResult(const std::string &payload);
				~ListUserResourcesResult();
				std::vector<ResultItem> getresult()const;
				std::string getRequestId()const;
				long getTotal()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultItem> result_;
				std::string requestId_;
				long total_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTUSERRESOURCESRESULT_H_