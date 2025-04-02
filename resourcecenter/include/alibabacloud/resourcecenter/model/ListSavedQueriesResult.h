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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_LISTSAVEDQUERIESRESULT_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_LISTSAVEDQUERIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcecenter/ResourceCenterExport.h>

namespace AlibabaCloud
{
	namespace ResourceCenter
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCECENTER_EXPORT ListSavedQueriesResult : public ServiceResult
			{
			public:
				struct SavedQuery
				{
					std::string description;
					std::string createTime;
					std::string queryId;
					std::string updateTime;
					std::string name;
				};


				ListSavedQueriesResult();
				explicit ListSavedQueriesResult(const std::string &payload);
				~ListSavedQueriesResult();
				std::string getNextToken()const;
				std::string getMaxResults()const;
				std::vector<SavedQuery> getSavedQueries()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::string maxResults_;
				std::vector<SavedQuery> savedQueries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_LISTSAVEDQUERIESRESULT_H_