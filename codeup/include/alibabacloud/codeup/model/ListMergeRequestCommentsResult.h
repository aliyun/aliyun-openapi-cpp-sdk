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

#ifndef ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTCOMMENTSRESULT_H_
#define ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTCOMMENTSRESULT_H_

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
			class ALIBABACLOUD_CODEUP_EXPORT ListMergeRequestCommentsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct Author
					{
						std::string avatarUrl;
						std::string email;
						std::string externUserId;
						long id;
						std::string name;
					};
					bool isDraft;
					std::string path;
					std::string createdAt;
					long projectId;
					std::string updatedAt;
					long line;
					std::string side;
					int closed;
					std::string note;
					long parentNoteId;
					Author author;
					long id;
					bool outDated;
					std::string rangeContext;
				};


				ListMergeRequestCommentsResult();
				explicit ListMergeRequestCommentsResult(const std::string &payload);
				~ListMergeRequestCommentsResult();
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
#endif // !ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTCOMMENTSRESULT_H_