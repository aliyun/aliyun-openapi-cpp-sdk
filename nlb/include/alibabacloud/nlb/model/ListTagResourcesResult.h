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

#ifndef ALIBABACLOUD_NLB_MODEL_LISTTAGRESOURCESRESULT_H_
#define ALIBABACLOUD_NLB_MODEL_LISTTAGRESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlb/NlbExport.h>

namespace AlibabaCloud
{
	namespace Nlb
	{
		namespace Model
		{
			class ALIBABACLOUD_NLB_EXPORT ListTagResourcesResult : public ServiceResult
			{
			public:
				struct TagResultModelList
				{
					std::string regionNo;
					std::string category;
					std::string scope;
					std::string resourceId;
					std::string tagKey;
					std::string resourceType;
					std::string tagValue;
					long aliUid;
				};


				ListTagResourcesResult();
				explicit ListTagResourcesResult(const std::string &payload);
				~ListTagResourcesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<TagResultModelList> getTagResources()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<TagResultModelList> tagResources_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLB_MODEL_LISTTAGRESOURCESRESULT_H_