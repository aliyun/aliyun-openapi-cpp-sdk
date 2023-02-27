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

#ifndef ALIBABACLOUD_ICE_MODEL_SEARCHEDITINGPROJECTRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_SEARCHEDITINGPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT SearchEditingProjectResult : public ServiceResult
			{
			public:
				struct ProjectListItem
				{
					std::string status;
					std::string description;
					std::string modifiedSource;
					std::string createTime;
					std::string createSource;
					std::string projectId;
					std::string title;
					long duration;
					std::string templateType;
					std::string businessStatus;
					std::string timeline;
					std::string businessConfig;
					std::string modifiedTime;
					std::string projectType;
					std::string coverURL;
					std::string errorCode;
					std::string errorMessage;
				};


				SearchEditingProjectResult();
				explicit SearchEditingProjectResult(const std::string &payload);
				~SearchEditingProjectResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				std::vector<ProjectListItem> getProjectList()const;
				long getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				std::vector<ProjectListItem> projectList_;
				long maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_SEARCHEDITINGPROJECTRESULT_H_