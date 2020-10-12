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

#ifndef ALIBABACLOUD_CODEUP_MODEL_CREATEMERGEREQUESTRESULT_H_
#define ALIBABACLOUD_CODEUP_MODEL_CREATEMERGEREQUESTRESULT_H_

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
			class ALIBABACLOUD_CODEUP_EXPORT CreateMergeRequestResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Author
					{
						std::string avatarUrl;
						std::string externUserId;
						long id;
						std::string name;
					};
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
					struct AssigneeListItem
					{
						std::string avatarUrl;
						std::string externUserId;
						std::string id;
						std::string name;
					};
					ApproveCheckResult approveCheckResult;
					int behindCommitCount;
					std::string description;
					int aheadCommitCount;
					std::string createdAt;
					long projectId;
					std::string title;
					std::string webUrl;
					std::string mergeError;
					std::string nameWithNamespace;
					std::string updatedAt;
					std::string mergedRevision;
					std::string acceptedRevision;
					std::string state;
					std::vector<AssigneeListItem> assigneeList;
					std::string mergeStatus;
					std::string sourceBranch;
					Author author;
					long id;
					std::string mergeType;
					std::string targetBranch;
				};


				CreateMergeRequestResult();
				explicit CreateMergeRequestResult(const std::string &payload);
				~CreateMergeRequestResult();
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_CREATEMERGEREQUESTRESULT_H_