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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATEWORKITEMCOMMENTRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATEWORKITEMCOMMENTRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT UpdateWorkitemCommentResult : public ServiceResult
			{
			public:
				struct Comment
				{
					struct User
					{
						std::string account;
						std::string identifier;
						std::string displayName;
						std::string realName;
						std::string nickName;
						std::string avatar;
					};
					long parentId;
					bool isTop;
					User user;
					long modifiedTime;
					long topTime;
					std::string content;
					std::string targetIdentifier;
					long createTime;
					std::string targetType;
					std::string id;
					std::string formatType;
				};


				UpdateWorkitemCommentResult();
				explicit UpdateWorkitemCommentResult(const std::string &payload);
				~UpdateWorkitemCommentResult();
				Comment getComment()const;
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Comment comment_;
				std::string requestId_;
				std::string errorMsg_;
				std::string errorCode_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATEWORKITEMCOMMENTRESULT_H_