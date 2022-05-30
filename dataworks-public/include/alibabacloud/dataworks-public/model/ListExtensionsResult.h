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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTEXTENSIONSRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTEXTENSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListExtensionsResult : public ServiceResult
			{
			public:
				struct PagingInfo
				{
					struct ExtensionsItem
					{
						struct BindEventListItem
						{
							std::string eventName;
							std::string eventCode;
						};
						int status;
						std::string extensionName;
						std::string owner;
						std::string extensionDesc;
						std::string extensionCode;
						std::vector<ExtensionsItem::BindEventListItem> bindEventList;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<ExtensionsItem> extensions;
				};


				ListExtensionsResult();
				explicit ListExtensionsResult(const std::string &payload);
				~ListExtensionsResult();
				PagingInfo getPagingInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				PagingInfo pagingInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTEXTENSIONSRESULT_H_