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

#ifndef ALIBABACLOUD_IOT_MODEL_QUERYTOPICCONFIGRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_QUERYTOPICCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT QueryTopicConfigResult : public ServiceResult
			{
			public:
				struct TopicConfigInfo
				{
					std::string codec;
					std::string description;
					bool enableProxySubscribe;
					std::string operation;
					std::string productKey;
					bool enableBroadcast;
					std::string topicFullName;
				};


				QueryTopicConfigResult();
				explicit QueryTopicConfigResult(const std::string &payload);
				~QueryTopicConfigResult();
				std::string getMessage()const;
				std::vector<TopicConfigInfo> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<TopicConfigInfo> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_QUERYTOPICCONFIGRESULT_H_