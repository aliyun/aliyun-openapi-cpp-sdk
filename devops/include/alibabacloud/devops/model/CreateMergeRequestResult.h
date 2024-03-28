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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATEMERGEREQUESTRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATEMERGEREQUESTRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT CreateMergeRequestResult : public ServiceResult
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
					struct ReviewersItem
					{
						std::string avatarUrl;
						std::string email;
						std::string username;
						std::string state;
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
					std::string status;
					long localId;
					std::string description;
					int ahead;
					int behind;
					std::vector<SubscribersItem> subscribers;
					std::string createTime;
					long projectId;
					std::string title;
					std::string detailUrl;
					std::string webUrl;
					bool allRequirementsPass;
					long sourceProjectId;
					std::string mrType;
					bool supportMergeFastForwardOnly;
					std::vector<ReviewersItem> reviewers;
					std::string createFrom;
					std::string mrBizId;
					std::string sourceBranch;
					std::string updateTime;
					Author author;
					long targetProjectId;
					std::string targetBranch;
				};


				CreateMergeRequestResult();
				explicit CreateMergeRequestResult(const std::string &payload);
				~CreateMergeRequestResult();
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
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATEMERGEREQUESTRESULT_H_