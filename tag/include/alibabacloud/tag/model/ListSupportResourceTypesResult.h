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

#ifndef ALIBABACLOUD_TAG_MODEL_LISTSUPPORTRESOURCETYPESRESULT_H_
#define ALIBABACLOUD_TAG_MODEL_LISTSUPPORTRESOURCETYPESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/tag/TagExport.h>

namespace AlibabaCloud
{
	namespace Tag
	{
		namespace Model
		{
			class ALIBABACLOUD_TAG_EXPORT ListSupportResourceTypesResult : public ServiceResult
			{
			public:
				struct SupportResourceType
				{
					struct SupportItemsItem
					{
						bool support;
						std::string supportCode;
						std::vector<std::string> supportDetails;
					};
					std::string arnTemplate;
					std::string productCode;
					std::vector<SupportResourceType::SupportItemsItem> supportItems;
					std::string resourceType;
				};


				ListSupportResourceTypesResult();
				explicit ListSupportResourceTypesResult(const std::string &payload);
				~ListSupportResourceTypesResult();
				std::string getNextToken()const;
				std::vector<SupportResourceType> getSupportResourceTypes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<SupportResourceType> supportResourceTypes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TAG_MODEL_LISTSUPPORTRESOURCETYPESRESULT_H_