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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSGROUPSUBDETAILRESULT_H_
#define ALIBABACLOUD_ONS_MODEL_ONSGROUPSUBDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ons/OnsExport.h>

namespace AlibabaCloud
{
	namespace Ons
	{
		namespace Model
		{
			class ALIBABACLOUD_ONS_EXPORT OnsGroupSubDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct SubscriptionDataListItem
					{
						std::string subString;
						std::string topic;
					};
					std::string messageModel;
					std::vector<SubscriptionDataListItem> subscriptionDataList;
					bool online;
					std::string groupId;
				};


				OnsGroupSubDetailResult();
				explicit OnsGroupSubDetailResult(const std::string &payload);
				~OnsGroupSubDetailResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSGROUPSUBDETAILRESULT_H_