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

#ifndef ALIBABACLOUD_DBS_MODEL_DESCRIBEFULLBACKUPLISTREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_DESCRIBEFULLBACKUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT DescribeFullBackupListRequest : public RpcServiceRequest
			{

			public:
				DescribeFullBackupListRequest();
				~DescribeFullBackupListRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getBackupPlanId()const;
				void setBackupPlanId(const std::string& backupPlanId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				bool getShowStorageType()const;
				void setShowStorageType(bool showStorageType);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				std::string clientToken_;
				std::string backupPlanId_;
				int pageNum_;
				std::string ownerId_;
				bool showStorageType_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_DESCRIBEFULLBACKUPLISTREQUEST_H_