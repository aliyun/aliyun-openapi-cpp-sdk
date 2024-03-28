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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETMERGEREQUESTRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETMERGEREQUESTRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT GetMergeRequestResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Author
					{
						std::string avatarUrl;
						std::string email;
						std::string username;
						std::string state;
						long id;
						std::string name;
					};
					struct TodoList
					{
						struct Requirement_rule_items
						{
							bool pass;
							std::string itemType;
						};
						std::vector<Requirement_rule_items> requirementCheckItems;
					};
					struct ReviewersItem
					{
						std::string avatarUrl;
						std::string email;
						std::string username;
						std::string state;
						bool hasCommented;
						std::string reviewTime;
						long id;
						bool hasReviewed;
						std::string reviewOpinionStatus;
						std::string name;
					};
					struct SubscribersItem
					{
						std::string avatarUrl;
						std::string email;
						std::string username;
						std::string state;
						long id;
						std::string name;
					};
					std::string description;
					std::string targetProjectNameWithNamespace;
					int behind;
					std::string targetProjectPathWithNamespace;
					long sourceProjectId;
					std::string mrType;
					std::string mergedRevision;
					std::string createFrom;
					std::string mrBizId;
					long targetProjectId;
					std::string targetBranch;
					std::string status;
					long localId;
					int ahead;
					std::vector<SubscribersItem> subscribers;
					std::string createTime;
					long projectId;
					std::string title;
					bool allRequirementsPass;
					std::string detailUrl;
					std::string webUrl;
					bool supportMergeFastForwardOnly;
					std::vector<ReviewersItem> reviewers;
					std::string sourceBranch;
					std::string updateTime;
					Author author;
					TodoList todoList;
				};


				GetMergeRequestResult();
				explicit GetMergeRequestResult(const std::string &payload);
				~GetMergeRequestResult();
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETMERGEREQUESTRESULT_H_