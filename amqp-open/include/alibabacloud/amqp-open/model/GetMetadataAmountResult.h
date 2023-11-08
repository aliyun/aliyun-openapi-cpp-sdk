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

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_GETMETADATAAMOUNTRESULT_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_GETMETADATAAMOUNTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/amqp-open/Amqp_openExport.h>

namespace AlibabaCloud
{
	namespace Amqp_open
	{
		namespace Model
		{
			class ALIBABACLOUD_AMQP_OPEN_EXPORT GetMetadataAmountResult : public ServiceResult
			{
			public:
				struct Data
				{
					int maxExchanges;
					int maxVirtualHosts;
					int maxQueues;
					int currentExchanges;
					int currentVirtualHosts;
					int currentQueues;
				};


				GetMetadataAmountResult();
				explicit GetMetadataAmountResult(const std::string &payload);
				~GetMetadataAmountResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_GETMETADATAAMOUNTRESULT_H_