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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_LISTTAGKEYSRESULT_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_LISTTAGKEYSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddosbgp/DdosbgpExport.h>

namespace AlibabaCloud
{
	namespace Ddosbgp
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSBGP_EXPORT ListTagKeysResult : public ServiceResult
			{
			public:
				struct TagKey
				{
					int tagCount;
					std::string tagKey;
				};


				ListTagKeysResult();
				explicit ListTagKeysResult(const std::string &payload);
				~ListTagKeysResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<TagKey> getTagKeys()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<TagKey> tagKeys_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_LISTTAGKEYSRESULT_H_