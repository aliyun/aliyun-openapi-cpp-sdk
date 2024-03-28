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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTCOMMENTSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTCOMMENTSRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListMergeRequestCommentsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct Author
					{
						std::string avatarUrl;
						std::string email;
						std::string aliyunPk;
						std::string username;
						std::string state;
						long id;
						std::string name;
					};
					struct RelatedPatchSet
					{
						std::string patchSetNo;
						std::string commitId;
						std::string patchSetBizId;
						std::string createdAt;
						std::string shortId;
						std::string relatedMergeItemType;
						std::string patchSetName;
					};
					struct Child_comments_list
					{
						struct Author1
						{
							std::string avatarUrl;
							std::string email;
							std::string aliyunPk;
							std::string username;
							std::string state;
							long id;
							std::string name;
						};
						struct RelatedPatchSet2
						{
							std::string patchSetNo;
							std::string commitId;
							std::string patchSetBizId;
							std::string createdAt;
							std::string shortId;
							std::string relatedMergeItemType;
							std::string patchSetName;
						};
						struct Child_comments_list_child
						{
							struct Author3
							{
								std::string avatarUrl;
								std::string email;
								std::string aliyunPk;
								std::string username;
								std::string state;
								long id;
								std::string name;
							};
							struct RelatedPatchSet4
							{
								std::string patchSetNo;
								std::string commitId;
								std::string patchSetBizId;
								std::string createdAt;
								std::string shortId;
								std::string relatedMergeItemType;
								std::string patchSetName;
							};
							std::string filePath;
							std::string parentCommentBizId;
							Author3 author3;
							std::string commentTime;
							RelatedPatchSet4 relatedPatchSet4;
							std::string lineNumber;
							std::string rootCommentBizId;
							std::string lastEditTime;
							std::string commentType;
							std::string commentBizId;
							std::string state;
							std::string content;
							bool resolved;
							bool deleted;
						};
						std::vector<Child_comments_list::Child_comments_list_child> finalChildComments;
						std::string filePath;
						std::string parentCommentBizId;
						std::string commentTime;
						Author1 author1;
						std::string lineNumber;
						std::string rootCommentBizId;
						RelatedPatchSet2 relatedPatchSet2;
						std::string lastEditTime;
						std::string commentType;
						std::string commentBizId;
						std::string state;
						std::string content;
						bool resolved;
						bool deleted;
					};
					RelatedPatchSet relatedPatchSet;
					std::string filePath;
					std::string parentCommentBizId;
					std::string commentTime;
					std::string lineNumber;
					std::string rootCommentBizId;
					std::string lastEditTime;
					std::string commentType;
					std::string commentBizId;
					std::string state;
					std::string content;
					Author author;
					bool resolved;
					bool deleted;
					std::vector<ResultItem::Child_comments_list> childComments;
				};


				ListMergeRequestCommentsResult();
				explicit ListMergeRequestCommentsResult(const std::string &payload);
				~ListMergeRequestCommentsResult();
				std::vector<ResultItem> getresult()const;
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultItem> result_;
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTCOMMENTSRESULT_H_