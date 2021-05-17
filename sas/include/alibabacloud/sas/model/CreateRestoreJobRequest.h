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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATERESTOREJOBREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATERESTOREJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT CreateRestoreJobRequest : public RpcServiceRequest
			{

			public:
				CreateRestoreJobRequest();
				~CreateRestoreJobRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				std::string getSnapshotHash()const;
				void setSnapshotHash(const std::string& snapshotHash);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getSnapshotVersion()const;
				void setSnapshotVersion(const std::string& snapshotVersion);
				std::string getPolicyVersion()const;
				void setPolicyVersion(const std::string& policyVersion);
				std::string getIncludes()const;
				void setIncludes(const std::string& includes);
				std::string getTarget()const;
				void setTarget(const std::string& target);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string uuid_;
				std::string snapshotHash_;
				std::string sourceIp_;
				std::string snapshotVersion_;
				std::string policyVersion_;
				std::string includes_;
				std::string target_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_CREATERESTOREJOBREQUEST_H_