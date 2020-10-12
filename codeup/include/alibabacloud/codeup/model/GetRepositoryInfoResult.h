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

#ifndef ALIBABACLOUD_CODEUP_MODEL_GETREPOSITORYINFORESULT_H_
#define ALIBABACLOUD_CODEUP_MODEL_GETREPOSITORYINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/codeup/CodeupExport.h>

namespace AlibabaCloud
{
	namespace Codeup
	{
		namespace Model
		{
			class ALIBABACLOUD_CODEUP_EXPORT GetRepositoryInfoResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct _Namespace
					{
						std::string path;
						std::string description;
						long ownerId;
						std::string state;
						std::string createdAt;
						bool _public;
						std::string visibilityLevel;
						long id;
						std::string updatedAt;
						std::string avatar;
						std::string name;
					};
					struct Permissions
					{
						struct ProjectAccess
						{
							int accessLevel;
						};
						struct GroupAccess
						{
							int accessLevel;
						};
						GroupAccess groupAccess;
						ProjectAccess projectAccess;
					};
					std::string httpUrlToRepo;
					std::string description;
					bool archive;
					std::string createdAt;
					std::string visibilityLevel;
					std::string name;
					std::string avatarUrl;
					bool demoProjectStatus;
					Permissions permissions;
					std::vector<std::string> tagList;
					std::string defaultBranch;
					std::string path;
					std::string pathWithNamespace;
					std::string lastActivityAt;
					long creatorId;
					std::string webUrl;
					std::string nameWithNamespace;
					_Namespace _namespace;
					int accessLevel;
					std::string importUrl;
					std::string sshUrlToRepo;
					std::string importStatus;
					bool importFromSubversion;
					bool _public;
					long id;
				};


				GetRepositoryInfoResult();
				explicit GetRepositoryInfoResult(const std::string &payload);
				~GetRepositoryInfoResult();
				int getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				int errorCode_;
				std::string errorMessage_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_GETREPOSITORYINFORESULT_H_