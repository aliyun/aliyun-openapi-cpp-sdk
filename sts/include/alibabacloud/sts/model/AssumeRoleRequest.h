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

#ifndef ALIBABACLOUD_STS_MODEL_ASSUMEROLEREQUEST_H_
#define ALIBABACLOUD_STS_MODEL_ASSUMEROLEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sts/StsExport.h>

namespace AlibabaCloud
{
	namespace Sts
	{
		namespace Model
		{
			class ALIBABACLOUD_STS_EXPORT AssumeRoleRequest : public RpcServiceRequest
			{

			public:
				AssumeRoleRequest();
				~AssumeRoleRequest();

				std::string getRoleSessionName()const;
				void setRoleSessionName(const std::string& roleSessionName);
				std::string getPolicy()const;
				void setPolicy(const std::string& policy);
				std::string getRoleArn()const;
				void setRoleArn(const std::string& roleArn);
				long getDurationSeconds()const;
				void setDurationSeconds(long durationSeconds);

            private:
				std::string roleSessionName_;
				std::string policy_;
				std::string roleArn_;
				long durationSeconds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_STS_MODEL_ASSUMEROLEREQUEST_H_