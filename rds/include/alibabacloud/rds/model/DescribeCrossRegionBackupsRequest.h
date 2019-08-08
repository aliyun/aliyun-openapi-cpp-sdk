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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPSREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeCrossRegionBackupsRequest : public RpcServiceRequest
			{

			public:
				DescribeCrossRegionBackupsRequest();
				~DescribeCrossRegionBackupsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getCrossBackupRegion()const;
				void setCrossBackupRegion(const std::string& crossBackupRegion);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				int getCrossBackupId()const;
				void setCrossBackupId(int crossBackupId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string endTime_;
				std::string startTime_;
				long ownerId_;
				std::string crossBackupRegion_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string regionId_;
				int pageSize_;
				std::string dBInstanceId_;
				int crossBackupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPSREQUEST_H_