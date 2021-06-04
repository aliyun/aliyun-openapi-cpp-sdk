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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEPREFIXLISTATTRIBUTESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEPREFIXLISTATTRIBUTESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribePrefixListAttributesResult : public ServiceResult
			{
			public:
				struct Entry
				{
					std::string description;
					std::string cidr;
				};


				DescribePrefixListAttributesResult();
				explicit DescribePrefixListAttributesResult(const std::string &payload);
				~DescribePrefixListAttributesResult();
				int getMaxEntries()const;
				std::string getDescription()const;
				std::string getPrefixListId()const;
				std::string getPrefixListName()const;
				std::string getCreationTime()const;
				std::vector<Entry> getEntries()const;
				std::string getAddressFamily()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxEntries_;
				std::string description_;
				std::string prefixListId_;
				std::string prefixListName_;
				std::string creationTime_;
				std::vector<Entry> entries_;
				std::string addressFamily_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEPREFIXLISTATTRIBUTESRESULT_H_