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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDPLAYLISTITEMSRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDPLAYLISTITEMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT AddPlaylistItemsResult : public ServiceResult
			{
			public:
				struct Items
				{
					struct FailedItem
					{
						std::string itemName;
						std::string itemId;
					};
					struct SuccessItem
					{
						std::string itemName;
						std::string itemId;
					};
					std::vector<FailedItem> failedItems;
					std::vector<SuccessItem> successItems;
				};


				AddPlaylistItemsResult();
				explicit AddPlaylistItemsResult(const std::string &payload);
				~AddPlaylistItemsResult();
				Items getItems()const;
				std::string getProgramId()const;

			protected:
				void parse(const std::string &payload);
			private:
				Items items_;
				std::string programId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDPLAYLISTITEMSRESULT_H_