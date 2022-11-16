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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPROJECTSRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPROJECTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListProjectsResult : public ServiceResult
			{
			public:
				struct PageResult
				{
					struct Project
					{
						struct Tag
						{
							std::string value;
							std::string key;
						};
						std::string projectIdentifier;
						int isDefault;
						std::string projectOwnerBaseId;
						std::string projectStatusCode;
						std::string projectName;
						long projectId;
						bool disableDevelopment;
						std::string resourceManagerResourceGroupId;
						bool useProxyOdpsAccount;
						int projectStatus;
						int tablePrivacyMode;
						std::string projectDescription;
						std::vector<Project::Tag> tags;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<Project> projectList;
				};


				ListProjectsResult();
				explicit ListProjectsResult(const std::string &payload);
				~ListProjectsResult();
				PageResult getPageResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageResult pageResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPROJECTSRESULT_H_