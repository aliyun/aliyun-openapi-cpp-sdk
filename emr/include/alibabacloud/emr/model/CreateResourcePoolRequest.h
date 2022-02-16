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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATERESOURCEPOOLREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATERESOURCEPOOLREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateResourcePoolRequest : public RpcServiceRequest
			{
			public:
				struct Config
				{
					std::string configKey;
					std::string note;
					std::string configType;
					std::string targetId;
					std::string configValue;
					std::string category;
				};

			public:
				CreateResourcePoolRequest();
				~CreateResourcePoolRequest();

				std::string getNote()const;
				void setNote(const std::string& note);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getActive()const;
				void setActive(bool active);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getYarnSiteConfig()const;
				void setYarnSiteConfig(const std::string& yarnSiteConfig);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<Config> getConfig()const;
				void setConfig(const std::vector<Config>& config);
				std::string getPoolType()const;
				void setPoolType(const std::string& poolType);

            private:
				std::string note_;
				long resourceOwnerId_;
				bool active_;
				std::string clusterId_;
				std::string yarnSiteConfig_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string name_;
				std::vector<Config> config_;
				std::string poolType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATERESOURCEPOOLREQUEST_H_