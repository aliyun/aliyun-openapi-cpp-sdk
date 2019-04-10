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

#ifndef ALIBABACLOUD_EHPC_MODEL_CREATEJOBFILEREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_CREATEJOBFILEREQUEST_H_

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
			class ALIBABACLOUD_EHPC_EXPORT CreateJobFileRequest : public RpcServiceRequest
			{

			public:
				CreateJobFileRequest();
				~CreateJobFileRequest();

				std::string getTargetFile()const;
				void setTargetFile(const std::string& targetFile);
				std::string getRunasUserPassword()const;
				void setRunasUserPassword(const std::string& runasUserPassword);
				std::string getRunasUser()const;
				void setRunasUser(const std::string& runasUser);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getContent()const;
				void setContent(const std::string& content);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string targetFile_;
				std::string runasUserPassword_;
				std::string runasUser_;
				std::string clusterId_;
				std::string content_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_CREATEJOBFILEREQUEST_H_