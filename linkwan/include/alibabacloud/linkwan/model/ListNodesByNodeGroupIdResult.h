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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_LISTNODESBYNODEGROUPIDRESULT_H_
#define ALIBABACLOUD_LINKWAN_MODEL_LISTNODESBYNODEGROUPIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT ListNodesByNodeGroupIdResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Node
					{
						long boundMillis;
						std::string classMode;
						std::string multicastGroupId;
						std::string appkey;
						std::string nodeType;
						std::string devAddr;
						std::string devEui;
						long lastJoinMillis;
						std::string authTypes;
						std::string joinEui;
					};
					long totalCount;
					std::vector<Node> list;
				};


				ListNodesByNodeGroupIdResult();
				explicit ListNodesByNodeGroupIdResult(const std::string &payload);
				~ListNodesByNodeGroupIdResult();
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_LISTNODESBYNODEGROUPIDRESULT_H_