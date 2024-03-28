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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTPROJECTSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTPROJECTSRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListProjectsResult : public ServiceResult
			{
			public:
				struct Project
				{
					std::string typeIdentifier;
					std::string description;
					std::string statusStageIdentifier;
					long deleteTime;
					std::string categoryIdentifier;
					std::string creator;
					std::string name;
					long gmtCreate;
					std::string identifier;
					std::string scope;
					std::string logicalStatus;
					std::string icon;
					std::string customCode;
				};


				ListProjectsResult();
				explicit ListProjectsResult(const std::string &payload);
				~ListProjectsResult();
				long getTotalCount()const;
				std::vector<Project> getprojects()const;
				std::string getNextToken()const;
				std::string getRequestId()const;
				long getMaxResults()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<Project> projects_;
				std::string nextToken_;
				std::string requestId_;
				long maxResults_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTPROJECTSRESULT_H_