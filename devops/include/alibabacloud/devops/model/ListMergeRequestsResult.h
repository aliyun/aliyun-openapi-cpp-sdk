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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTSRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListMergeRequestsResult : public ServiceResult
			{
			public:
				struct ResultItem
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
					struct Assignees
					{
						std::string status;
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
					struct Node_labels
					{
						std::string description;
						std::string color;
						std::string id;
						std::string name;
					};
					std::string sshUrl;
					std::string description;
					std::string createdAt;
					std::string sourceType;
					bool supportMergeFFOnly;
					long sourceProjectId;
					std::string mergedRevision;
					std::string mrBizId;
					std::string targetType;
					long targetProjectId;
					std::string targetBranch;
					long localId;
					long iid;
					std::vector<ResultItem::SubscribersItem> subscribers;
					long projectId;
					bool newMergeRequestIdentifier;
					std::string title;
					std::string detailUrl;
					std::string webUrl;
					std::string nameWithNamespace;
					bool workInProgress;
					std::vector<ResultItem::Assignees> reviewers;
					std::string updatedAt;
					std::vector<ResultItem::Node_labels> labels;
					std::string newVersionState;
					std::string state;
					std::string creationMethod;
					std::string sourceBranch;
					Author author;
					long id;
				};


				ListMergeRequestsResult();
				explicit ListMergeRequestsResult(const std::string &payload);
				~ListMergeRequestsResult();
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
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTSRESULT_H_