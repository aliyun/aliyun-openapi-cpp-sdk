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

#ifndef ALIBABACLOUD_LIVE_MODEL_LISTEVENTSUBRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_LISTEVENTSUBRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT ListEventSubResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string callbackUrl;
					std::string modifyTime;
					std::string subId;
					std::vector<std::string> events;
					std::string createTime;
					int roles;
					std::vector<std::string> users;
					std::string channelId;
				};


				ListEventSubResult();
				explicit ListEventSubResult(const std::string &payload);
				~ListEventSubResult();
				std::vector<Data> getSubscribers()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> subscribers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_LISTEVENTSUBRESULT_H_