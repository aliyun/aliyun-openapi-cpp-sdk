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

#ifndef ALIBABACLOUD_EHPC_MODEL_INVOKESHELLCOMMANDREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_INVOKESHELLCOMMANDREQUEST_H_

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
			class ALIBABACLOUD_EHPC_EXPORT InvokeShellCommandRequest : public RpcServiceRequest
			{
				struct Instance
				{
					std::string id;
				};

			public:
				InvokeShellCommandRequest();
				~InvokeShellCommandRequest();

				std::vector<Instance> getInstance()const;
				void setInstance(const std::vector<Instance>& instance);
				std::string getWorkingDir()const;
				void setWorkingDir(const std::string& workingDir);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getCommand()const;
				void setCommand(const std::string& command);
				int getTimeout()const;
				void setTimeout(int timeout);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::vector<Instance> instance_;
				std::string workingDir_;
				std::string clusterId_;
				std::string command_;
				int timeout_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_INVOKESHELLCOMMANDREQUEST_H_