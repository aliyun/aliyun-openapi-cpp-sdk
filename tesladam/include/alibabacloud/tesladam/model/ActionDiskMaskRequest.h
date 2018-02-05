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

#ifndef ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKMASKREQUEST_H_
#define ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKMASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/tesladam/TeslaDamExport.h>

namespace AlibabaCloud
{
	namespace TeslaDam
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLADAM_EXPORT ActionDiskMaskRequest : public RpcServiceRequest
			{

			public:
				ActionDiskMaskRequest();
				~ActionDiskMaskRequest();

				std::string getOp()const;
				void setOp(const std::string& op);
				std::string getDiskMount()const;
				void setDiskMount(const std::string& diskMount);
				std::string getIp()const;
				void setIp(const std::string& ip);

            private:
				std::string op_;
				std::string diskMount_;
				std::string ip_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKMASKREQUEST_H_