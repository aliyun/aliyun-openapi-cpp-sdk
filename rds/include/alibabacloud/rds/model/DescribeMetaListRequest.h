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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEMETALISTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEMETALISTREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeMetaListRequest : public RpcServiceRequest
			{

			public:
				DescribeMetaListRequest();
				~DescribeMetaListRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getPattern()const;
				void setPattern(const std::string& pattern);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getPageIndex()const;
				void setPageIndex(const std::string& pageIndex);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getBackupSetID()const;
				void setBackupSetID(const std::string& backupSetID);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getGetDbName()const;
				void setGetDbName(const std::string& getDbName);
				std::string getRestoreType()const;
				void setRestoreType(const std::string& restoreType);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string pattern_;
				std::string accessKeyId_;
				std::string pageSize_;
				std::string dBInstanceId_;
				std::string pageIndex_;
				std::string restoreTime_;
				std::string resourceOwnerAccount_;
				std::string backupSetID_;
				long ownerId_;
				std::string getDbName_;
				std::string restoreType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEMETALISTREQUEST_H_