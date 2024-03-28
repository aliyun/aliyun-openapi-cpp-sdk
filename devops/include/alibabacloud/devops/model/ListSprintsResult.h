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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTSPRINTSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTSPRINTSRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListSprintsResult : public ServiceResult
			{
			public:
				struct Sprint
				{
					long startDate;
					std::string status;
					long gmtCreate;
					std::string description;
					std::string identifier;
					std::string scope;
					std::string spaceIdentifier;
					long gmtModified;
					std::string creator;
					long endDate;
					std::string modifier;
					std::string name;
				};


				ListSprintsResult();
				explicit ListSprintsResult(const std::string &payload);
				~ListSprintsResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				std::string getRequestId()const;
				long getMaxResults()const;
				std::string getErrorMsg()const;
				std::vector<Sprint> getsprints()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				std::string requestId_;
				long maxResults_;
				std::string errorMsg_;
				std::vector<Sprint> sprints_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTSPRINTSRESULT_H_