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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATECLUSTERBOOTSTRAPACTIONREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATECLUSTERBOOTSTRAPACTIONREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateClusterBootstrapActionRequest : public RpcServiceRequest
			{
			public:
				struct BootstrapAction
				{
					std::string path;
					std::string executionTarget;
					std::string executionMoment;
					std::string arg;
					std::string name;
					std::string executionFailStrategy;
				};

			public:
				CreateClusterBootstrapActionRequest();
				~CreateClusterBootstrapActionRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<BootstrapAction> getBootstrapAction()const;
				void setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				long resourceOwnerId_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::vector<BootstrapAction> bootstrapAction_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATECLUSTERBOOTSTRAPACTIONREQUEST_H_