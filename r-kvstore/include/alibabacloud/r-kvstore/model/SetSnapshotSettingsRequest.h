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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_SETSNAPSHOTSETTINGSREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_SETSNAPSHOTSETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT SetSnapshotSettingsRequest : public RpcServiceRequest
			{

			public:
				SetSnapshotSettingsRequest();
				~SetSnapshotSettingsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getEndHour()const;
				void setEndHour(int endHour);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getDayList()const;
				void setDayList(int dayList);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getRetentionDay()const;
				void setRetentionDay(int retentionDay);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getMaxManualSnapshots()const;
				void setMaxManualSnapshots(int maxManualSnapshots);
				int getMaxAutoSnapshots()const;
				void setMaxAutoSnapshots(int maxAutoSnapshots);
				int getBeginHour()const;
				void setBeginHour(int beginHour);

            private:
				long resourceOwnerId_;
				int endHour_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int dayList_;
				long ownerId_;
				std::string accessKeyId_;
				std::string instanceId_;
				int retentionDay_;
				std::string regionId_;
				int maxManualSnapshots_;
				int maxAutoSnapshots_;
				int beginHour_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_SETSNAPSHOTSETTINGSREQUEST_H_