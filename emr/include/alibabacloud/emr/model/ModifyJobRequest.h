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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYJOBREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ModifyJobRequest : public RpcServiceRequest
			{

			public:
				ModifyJobRequest();
				~ModifyJobRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getFailAct()const;
				void setFailAct(const std::string& failAct);
				std::string getRunParameter()const;
				void setRunParameter(const std::string& runParameter);
				int getRetryInterval()const;
				void setRetryInterval(int retryInterval);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getId()const;
				void setId(const std::string& id);
				int getMaxRetry()const;
				void setMaxRetry(int maxRetry);

            private:
				long resourceOwnerId_;
				std::string type_;
				std::string accessKeyId_;
				std::string failAct_;
				std::string runParameter_;
				int retryInterval_;
				std::string regionId_;
				std::string name_;
				std::string id_;
				int maxRetry_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYJOBREQUEST_H_