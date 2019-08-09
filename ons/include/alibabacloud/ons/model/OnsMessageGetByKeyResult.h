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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSMESSAGEGETBYKEYRESULT_H_
#define ALIBABACLOUD_ONS_MODEL_ONSMESSAGEGETBYKEYRESULT_H_

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
			class ALIBABACLOUD_ONS_EXPORT OnsMessageGetByKeyResult : public ServiceResult
			{
			public:
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
					std::string body;
					int reconsumeTimes;
				};


				OnsMessageGetByKeyResult();
				explicit OnsMessageGetByKeyResult(const std::string &payload);
				~OnsMessageGetByKeyResult();
				std::vector<OnsRestMessageDo> getData()const;
				std::string getHelpUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<OnsRestMessageDo> data_;
				std::string helpUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSMESSAGEGETBYKEYRESULT_H_