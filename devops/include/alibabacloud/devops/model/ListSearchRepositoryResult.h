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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTSEARCHREPOSITORYRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTSEARCHREPOSITORYRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListSearchRepositoryResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct HighlightTextMap
					{
						std::string repoPath;
						std::string description;
						std::string readMe;
						std::string organizationId;
						std::string creatorUserId;
						std::string repoNameWithNamespace;
					};
					struct Source
					{
						std::string lastActivityTime;
						std::string repoPath;
						std::string description;
						std::string readMe;
						std::string createTime;
						std::string repoName;
						int visibilityLevel;
						std::string organizationId;
					};
					std::string docId;
					HighlightTextMap highlightTextMap;
					Source source;
				};


				ListSearchRepositoryResult();
				explicit ListSearchRepositoryResult(const std::string &payload);
				~ListSearchRepositoryResult();
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
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTSEARCHREPOSITORYRESULT_H_