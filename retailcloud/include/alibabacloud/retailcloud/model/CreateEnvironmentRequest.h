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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEENVIRONMENTREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateEnvironmentRequest : public RpcServiceRequest
			{

			public:
				CreateEnvironmentRequest();
				~CreateEnvironmentRequest();

				std::string getEnvName()const;
				void setEnvName(const std::string& envName);
				int getReplicas()const;
				void setReplicas(int replicas);
				long getAppId()const;
				void setAppId(long appId);
				int getEnvType()const;
				void setEnvType(int envType);
				long getAppSchemaId()const;
				void setAppSchemaId(long appSchemaId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string envName_;
				int replicas_;
				long appId_;
				int envType_;
				long appSchemaId_;
				std::string clusterId_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEENVIRONMENTREQUEST_H_