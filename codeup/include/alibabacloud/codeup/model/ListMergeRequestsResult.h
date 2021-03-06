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

#ifndef ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTSRESULT_H_
#define ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTSRESULT_H_

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
			class ALIBABACLOUD_CODEUP_EXPORT ListMergeRequestsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct ApproveCheckResult
					{
						struct SatisfiedCheckResultsItem
						{
							struct ExtraUsersItem
							{
								std::string avatarUrl;
								std::string externUserId;
								long id;
								std::string name;
							};
							std::string checkName;
							std::vector<std::string> satisfiedItems;
							std::string checkType;
							std::string checkStatus;
							std::vector<std::string> unsatisfiedItems;
							std::vector<SatisfiedCheckResultsItem::ExtraUsersItem> extraUsers;
						};
						struct UnsatisfiedCheckResultsItem
						{
							struct ExtraUsersItem4
							{
								std::string avatarUrl;
								std::string externUserId;
								long id;
								std::string name;
							};
							std::vector<std::string> satisfiedItems1;
							std::string checkName;
							std::string checkType;
							std::string checkStatus;
							std::vector<UnsatisfiedCheckResultsItem::ExtraUsersItem4> extraUsers3;
							std::vector<std::string> unsatisfiedItems2;
						};
						std::vector<UnsatisfiedCheckResultsItem> unsatisfiedCheckResults;
						std::vector<SatisfiedCheckResultsItem> satisfiedCheckResults;
						std::string totalCheckResult;
					};
					struct Author
					{
						std::string avatarUrl;
						std::string externUserId;
						long id;
						std::string name;
					};
					struct AssigneeListItem
					{
						std::string status;
						std::string avatarUrl;
						std::string email;
						std::string externUserId;
						std::string id;
						std::string name;
					};
					ApproveCheckResult approveCheckResult;
					int behindCommitCount;
					bool isSupportMerge;
					std::string description;
					int aheadCommitCount;
					std::string createdAt;
					long projectId;
					std::string mergeError;
					std::string nameWithNamespace;
					std::string title;
					std::string webUrl;
					std::string mergedRevision;
					std::string updatedAt;
					std::string acceptedRevision;
					std::string state;
					std::vector<ResultItem::AssigneeListItem> assigneeList;
					std::string mergeStatus;
					std::string sourceBranch;
					Author author;
					long id;
					std::string mergeType;
					std::string targetBranch;
				};


				ListMergeRequestsResult();
				explicit ListMergeRequestsResult(const std::string &payload);
				~ListMergeRequestsResult();
				long getTotal()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				long total_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTSRESULT_H_