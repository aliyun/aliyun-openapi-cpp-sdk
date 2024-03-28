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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATECOMMITWITHMULTIPLEFILESRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATECOMMITWITHMULTIPLEFILESRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT CreateCommitWithMultipleFilesResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Author
					{
						std::string email;
						std::string avatarUrl;
						std::string aliyunPk;
						std::string username;
						std::string state;
						std::string websiteUrl;
						long id;
						std::string name;
					};
					struct Committer
					{
						std::string email;
						std::string avatarUrl;
						std::string aliyunPk;
						std::string username;
						std::string state;
						std::string websiteUrl;
						long id;
						std::string name;
					};
					std::string authoredDate;
					std::string message;
					std::string authorName;
					std::string createdAt;
					std::string title;
					std::string authorEmail;
					std::string committerEmail;
					std::string committedDate;
					std::vector<std::string> parentIds;
					Author author;
					std::string shortId;
					Committer committer;
					std::string id;
					std::string committerName;
				};


				CreateCommitWithMultipleFilesResult();
				explicit CreateCommitWithMultipleFilesResult(const std::string &payload);
				~CreateCommitWithMultipleFilesResult();
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATECOMMITWITHMULTIPLEFILESRESULT_H_