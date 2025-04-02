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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESULT_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESULT_H_

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
			class ALIBABACLOUD_RESOURCECENTER_EXPORT ListMultiAccountResourceRelationshipsResult : public ServiceResult
			{
			public:
				struct ResourceRelationship
				{
					std::string accountId;
					std::string relatedResourceRegionId;
					std::string relatedResourceId;
					std::string resourceId;
					std::string resourceType;
					std::string regionId;
					std::string relatedResourceType;
				};


				ListMultiAccountResourceRelationshipsResult();
				explicit ListMultiAccountResourceRelationshipsResult(const std::string &payload);
				~ListMultiAccountResourceRelationshipsResult();
				std::vector<ResourceRelationship> getResourceRelationships()const;
				std::string getNextToken()const;
				std::string getScope()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResourceRelationship> resourceRelationships_;
				std::string nextToken_;
				std::string scope_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESULT_H_