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

#ifndef ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKRMAREQUEST_H_
#define ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKRMAREQUEST_H_

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
			class ALIBABACLOUD_TESLADAM_EXPORT ActionDiskRmaRequest : public RpcServiceRequest
			{

			public:
				ActionDiskRmaRequest();
				~ActionDiskRmaRequest();

				std::string getDiskName()const;
				void setDiskName(const std::string& diskName);
				std::string getExecutionId()const;
				void setExecutionId(const std::string& executionId);
				std::string getDiskSlot()const;
				void setDiskSlot(const std::string& diskSlot);
				std::string getHostname()const;
				void setHostname(const std::string& hostname);
				std::string getDiskMount()const;
				void setDiskMount(const std::string& diskMount);
				std::string getDiskReason()const;
				void setDiskReason(const std::string& diskReason);
				std::string getDiskSn()const;
				void setDiskSn(const std::string& diskSn);

            private:
				std::string diskName_;
				std::string executionId_;
				std::string diskSlot_;
				std::string hostname_;
				std::string diskMount_;
				std::string diskReason_;
				std::string diskSn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLADAM_MODEL_ACTIONDISKRMAREQUEST_H_