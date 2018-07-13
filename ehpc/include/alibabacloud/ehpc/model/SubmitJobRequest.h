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

#ifndef ALIBABACLOUD_EHPC_MODEL_SUBMITJOBREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_SUBMITJOBREQUEST_H_

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
			class ALIBABACLOUD_EHPC_EXPORT SubmitJobRequest : public RpcServiceRequest
			{

			public:
				SubmitJobRequest();
				~SubmitJobRequest();

				std::string getStderrRedirectPath()const;
				void setStderrRedirectPath(const std::string& stderrRedirectPath);
				std::string getVariables()const;
				void setVariables(const std::string& variables);
				std::string getRunasUserPassword()const;
				void setRunasUserPassword(const std::string& runasUserPassword);
				std::string getPostCmdLine()const;
				void setPostCmdLine(const std::string& postCmdLine);
				std::string getRunasUser()const;
				void setRunasUser(const std::string& runasUser);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				bool getReRunable()const;
				void setReRunable(bool reRunable);
				int getPriority()const;
				void setPriority(int priority);
				std::string getCommandLine()const;
				void setCommandLine(const std::string& commandLine);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getArrayRequest()const;
				void setArrayRequest(const std::string& arrayRequest);
				std::string getUnzipCmd()const;
				void setUnzipCmd(const std::string& unzipCmd);
				std::string getPackagePath()const;
				void setPackagePath(const std::string& packagePath);
				std::string getInputFileUrl()const;
				void setInputFileUrl(const std::string& inputFileUrl);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getStdoutRedirectPath()const;
				void setStdoutRedirectPath(const std::string& stdoutRedirectPath);
				std::string getContainerId()const;
				void setContainerId(const std::string& containerId);

            private:
				std::string stderrRedirectPath_;
				std::string variables_;
				std::string runasUserPassword_;
				std::string postCmdLine_;
				std::string runasUser_;
				std::string clusterId_;
				bool reRunable_;
				int priority_;
				std::string commandLine_;
				std::string accessKeyId_;
				std::string arrayRequest_;
				std::string unzipCmd_;
				std::string packagePath_;
				std::string inputFileUrl_;
				std::string name_;
				std::string stdoutRedirectPath_;
				std::string containerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_SUBMITJOBREQUEST_H_