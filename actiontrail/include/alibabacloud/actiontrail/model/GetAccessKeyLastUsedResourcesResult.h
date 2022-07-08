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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDRESOURCESRESULT_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDRESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT GetAccessKeyLastUsedResourcesResult : public ServiceResult
			{
			public:
				struct ResourcesItem
				{
					std::string resourceName;
					std::string resourceType;
					long usedTimestamp;
					std::string detail;
					std::string source;
				};


				GetAccessKeyLastUsedResourcesResult();
				explicit GetAccessKeyLastUsedResourcesResult(const std::string &payload);
				~GetAccessKeyLastUsedResourcesResult();
				std::string getNextToken()const;
				std::vector<ResourcesItem> getResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<ResourcesItem> resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDRESOURCESRESULT_H_