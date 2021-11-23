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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPAGEQUERYBYTOPICRESULT_H_
#define ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPAGEQUERYBYTOPICRESULT_H_

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
			class ALIBABACLOUD_ONS_EXPORT OnsMessagePageQueryByTopicResult : public ServiceResult
			{
			public:
				struct MsgFoundDo
				{
					struct OnsRestMessageDo
					{
						struct MessageProperty
						{
							std::string value;
							std::string name;
						};
						long bornTimestamp;
						std::string offsetId;
						std::string instanceId;
						int storeSize;
						std::string bornHost;
						int bodyCRC;
						int flag;
						std::string msgId;
						long storeTimestamp;
						std::string storeHost;
						std::vector<OnsRestMessageDo::MessageProperty> propertyList;
						std::string topic;
						int reconsumeTimes;
						std::string body;
					};
					std::string taskId;
					long currentPage;
					long maxPageCount;
					std::vector<OnsRestMessageDo> msgFoundList;
				};


				OnsMessagePageQueryByTopicResult();
				explicit OnsMessagePageQueryByTopicResult(const std::string &payload);
				~OnsMessagePageQueryByTopicResult();
				MsgFoundDo getMsgFoundDo()const;
				std::string getHelpUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				MsgFoundDo msgFoundDo_;
				std::string helpUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPAGEQUERYBYTOPICRESULT_H_