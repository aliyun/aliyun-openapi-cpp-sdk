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

#ifndef ALIBABACLOUD_CCC_MODEL_MODIFYNOTIFICATIONCONFIGRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_MODIFYNOTIFICATIONCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ModifyNotificationConfigResult : public ServiceResult
			{
			public:
				struct SubscriptionsItem
				{
					std::string displayName;
					bool selected;
					std::string name;
				};


				ModifyNotificationConfigResult();
				explicit ModifyNotificationConfigResult(const std::string &payload);
				~ModifyNotificationConfigResult();
				std::string getMessage()const;
				std::vector<SubscriptionsItem> getSubscriptions()const;
				std::string getProducerId()const;
				std::string getAccessPoint()const;
				int getHttpStatusCode()const;
				std::string getTopic()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<SubscriptionsItem> subscriptions_;
				std::string producerId_;
				std::string accessPoint_;
				int httpStatusCode_;
				std::string topic_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_MODIFYNOTIFICATIONCONFIGRESULT_H_