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

#ifndef ALIBABACLOUD_IOT_MODEL_GETTHINGMODELSTATUSINNERRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_GETTHINGMODELSTATUSINNERRESULT_H_

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
			class ALIBABACLOUD_IOT_EXPORT GetThingModelStatusInnerResult : public ServiceResult
			{
			public:
				struct Data
				{
					int status;
					std::string rbacTenantId;
					long modifiedTime;
					std::string instanceId;
					long outTime;
					std::string info;
					std::string productKey;
				};


				GetThingModelStatusInnerResult();
				explicit GetThingModelStatusInnerResult(const std::string &payload);
				~GetThingModelStatusInnerResult();
				std::string getLocalizedMsg()const;
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string localizedMsg_;
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_GETTHINGMODELSTATUSINNERRESULT_H_