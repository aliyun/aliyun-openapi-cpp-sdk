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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEDEPLOYCONFIGREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEDEPLOYCONFIGREQUEST_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateDeployConfigRequest : public RpcServiceRequest
			{

			public:
				CreateDeployConfigRequest();
				~CreateDeployConfigRequest();

				std::string getCodePath()const;
				void setCodePath(const std::string& codePath);
				std::vector<std::string> getConfigMapList()const;
				void setConfigMapList(const std::vector<std::string>& configMapList);
				long getAppId()const;
				void setAppId(long appId);
				std::string getConfigMap()const;
				void setConfigMap(const std::string& configMap);
				std::string getStatefulSet()const;
				void setStatefulSet(const std::string& statefulSet);
				std::string getEnvType()const;
				void setEnvType(const std::string& envType);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<std::string> getSecretList()const;
				void setSecretList(const std::vector<std::string>& secretList);
				std::string getCronJob()const;
				void setCronJob(const std::string& cronJob);
				std::string getDeployment()const;
				void setDeployment(const std::string& deployment);

            private:
				std::string codePath_;
				std::vector<std::string> configMapList_;
				long appId_;
				std::string configMap_;
				std::string statefulSet_;
				std::string envType_;
				std::string name_;
				std::vector<std::string> secretList_;
				std::string cronJob_;
				std::string deployment_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEDEPLOYCONFIGREQUEST_H_