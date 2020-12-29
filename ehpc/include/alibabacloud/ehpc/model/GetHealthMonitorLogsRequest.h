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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETHEALTHMONITORLOGSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_GETHEALTHMONITORLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT GetHealthMonitorLogsRequest : public RpcServiceRequest
			{

			public:
				GetHealthMonitorLogsRequest();
				~GetHealthMonitorLogsRequest();

				int getEndTime()const;
				void setEndTime(int endTime);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getStartTime()const;
				void setStartTime(int startTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getEnableReverse()const;
				void setEnableReverse(bool enableReverse);
				std::string getFilter()const;
				void setFilter(const std::string& filter);

            private:
				int endTime_;
				std::string clusterId_;
				int startTime_;
				std::string accessKeyId_;
				bool enableReverse_;
				std::string filter_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_GETHEALTHMONITORLOGSREQUEST_H_