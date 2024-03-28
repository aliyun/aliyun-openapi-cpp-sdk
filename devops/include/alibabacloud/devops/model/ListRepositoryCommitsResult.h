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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYCOMMITSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYCOMMITSRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListRepositoryCommitsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct Author
					{
						std::string tbUserId;
						std::string avatarUrl;
						std::string email;
						std::string username;
						std::string externUid;
						std::string state;
						std::string websiteUrl;
						long id;
						std::string name;
					};
					struct Committer
					{
						std::string tbUserId;
						std::string avatarUrl;
						std::string email;
						std::string username;
						std::string externUid;
						std::string state;
						std::string websiteUrl;
						long id;
						std::string name;
					};
					struct Signature
					{
						std::string verificationStatus;
						std::string gpgKeyId;
					};
					std::string authoredDate;
					std::string authorName;
					std::string message;
					std::string createdAt;
					std::string title;
					std::string authorEmail;
					std::string committedDate;
					std::string committerEmail;
					std::vector<std::string> parentIds;
					Signature signature;
					long commentsCount;
					Author author;
					std::string shortId;
					Committer committer;
					std::string id;
					std::string committerName;
				};


				ListRepositoryCommitsResult();
				explicit ListRepositoryCommitsResult(const std::string &payload);
				~ListRepositoryCommitsResult();
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
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYCOMMITSRESULT_H_