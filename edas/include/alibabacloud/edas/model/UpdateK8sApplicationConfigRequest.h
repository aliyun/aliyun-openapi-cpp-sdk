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

#ifndef ALIBABACLOUD_EDAS_MODEL_UPDATEK8SAPPLICATIONCONFIGREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_UPDATEK8SAPPLICATIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT UpdateK8sApplicationConfigRequest : public RoaServiceRequest
			{

			public:
				UpdateK8sApplicationConfigRequest();
				~UpdateK8sApplicationConfigRequest();

				std::string getMemoryRequest()const;
				void setMemoryRequest(const std::string& memoryRequest);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getCpuRequest()const;
				void setCpuRequest(const std::string& cpuRequest);
				std::string getMemoryLimit()const;
				void setMemoryLimit(const std::string& memoryLimit);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getCpuLimit()const;
				void setCpuLimit(const std::string& cpuLimit);
				std::string getMcpuLimit()const;
				void setMcpuLimit(const std::string& mcpuLimit);
				std::string getMcpuRequest()const;
				void setMcpuRequest(const std::string& mcpuRequest);
				int getTimeout()const;
				void setTimeout(int timeout);

            private:
				std::string memoryRequest_;
				std::string appId_;
				std::string cpuRequest_;
				std::string memoryLimit_;
				std::string clusterId_;
				std::string cpuLimit_;
				std::string mcpuLimit_;
				std::string mcpuRequest_;
				int timeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_UPDATEK8SAPPLICATIONCONFIGREQUEST_H_