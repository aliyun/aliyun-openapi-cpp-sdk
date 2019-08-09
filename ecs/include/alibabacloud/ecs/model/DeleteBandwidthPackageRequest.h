<<<<<<< HEAD
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

#ifndef ALIBABACLOUD_ECS_MODEL_DELETEBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DELETEBANDWIDTHPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DeleteBandwidthPackageRequest : public RpcServiceRequest
			{

			public:
				DeleteBandwidthPackageRequest();
				~DeleteBandwidthPackageRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getBandwidthPackageId()const;
				void setBandwidthPackageId(const std::string& bandwidthPackageId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string bandwidthPackageId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				long ownerId_;

			};
		}
	}
}
=======
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

#ifndef ALIBABACLOUD_ECS_MODEL_DELETEBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DELETEBANDWIDTHPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DeleteBandwidthPackageRequest : public RpcServiceRequest
			{

			public:
				DeleteBandwidthPackageRequest();
				~DeleteBandwidthPackageRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getBandwidthPackageId()const;
				void setBandwidthPackageId(const std::string& bandwidthPackageId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string bandwidthPackageId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				long ownerId_;

			};
		}
	}
}
>>>>>>> master
#endif // !ALIBABACLOUD_ECS_MODEL_DELETEBANDWIDTHPACKAGEREQUEST_H_