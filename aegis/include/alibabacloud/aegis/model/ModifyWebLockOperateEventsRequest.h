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

#ifndef ALIBABACLOUD_AEGIS_MODEL_MODIFYWEBLOCKOPERATEEVENTSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_MODIFYWEBLOCKOPERATEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT ModifyWebLockOperateEventsRequest : public RpcServiceRequest
			{

			public:
				ModifyWebLockOperateEventsRequest();
				~ModifyWebLockOperateEventsRequest();

				std::string getEventIds()const;
				void setEventIds(const std::string& eventIds);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getOperation()const;
				void setOperation(const std::string& operation);

            private:
				std::string eventIds_;
				std::string sourceIp_;
				std::string operation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_MODIFYWEBLOCKOPERATEEVENTSREQUEST_H_