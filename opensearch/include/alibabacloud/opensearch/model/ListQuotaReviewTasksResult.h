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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_LISTQUOTAREVIEWTASKSRESULT_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_LISTQUOTAREVIEWTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/opensearch/OpenSearchExport.h>

namespace AlibabaCloud
{
	namespace OpenSearch
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENSEARCH_EXPORT ListQuotaReviewTasksResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					std::string appGroupType;
					std::string oldSpec;
					bool approved;
					std::string gmtModified;
					std::string newSpec;
					int oldComputeResource;
					std::string gmtCreate;
					int newComputeResource;
					int appGroupId;
					int oldDocSize;
					bool available;
					int id;
					std::string appGroupName;
					int newSocSize;
					bool pending;
					std::string memo;
				};


				ListQuotaReviewTasksResult();
				explicit ListQuotaReviewTasksResult(const std::string &payload);
				~ListQuotaReviewTasksResult();
				std::vector<ResultItem> getresult()const;
				int getTotalCount()const;
				std::string getRequestId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultItem> result_;
				int totalCount_;
				std::string requestId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_LISTQUOTAREVIEWTASKSRESULT_H_