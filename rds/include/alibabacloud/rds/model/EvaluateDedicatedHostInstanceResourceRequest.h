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

#ifndef ALIBABACLOUD_RDS_MODEL_EVALUATEDEDICATEDHOSTINSTANCERESOURCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_EVALUATEDEDICATEDHOSTINSTANCERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT EvaluateDedicatedHostInstanceResourceRequest : public RpcServiceRequest
			{

			public:
				EvaluateDedicatedHostInstanceResourceRequest();
				~EvaluateDedicatedHostInstanceResourceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getDedicatedHostGroupId()const;
				void setDedicatedHostGroupId(const std::string& dedicatedHostGroupId);
				std::string getInstanceClassNames()const;
				void setInstanceClassNames(const std::string& instanceClassNames);
				std::string getDiskSize()const;
				void setDiskSize(const std::string& diskSize);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDiskType()const;
				void setDiskType(const std::string& diskType);

            private:
				long resourceOwnerId_;
				std::string engineVersion_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string engine_;
				std::string dedicatedHostGroupId_;
				std::string instanceClassNames_;
				std::string diskSize_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string diskType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_EVALUATEDEDICATEDHOSTINSTANCERESOURCEREQUEST_H_