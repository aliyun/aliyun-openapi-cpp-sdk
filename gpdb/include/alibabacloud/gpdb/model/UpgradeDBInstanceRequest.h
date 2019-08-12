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

#ifndef ALIBABACLOUD_GPDB_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT UpgradeDBInstanceRequest : public RpcServiceRequest
			{

			public:
				UpgradeDBInstanceRequest();
				~UpgradeDBInstanceRequest();

				std::string getDBInstanceGroupCount()const;
				void setDBInstanceGroupCount(const std::string& dBInstanceGroupCount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);

            private:
				std::string dBInstanceGroupCount_;
				std::string regionId_;
				std::string dBInstanceId_;
				long ownerId_;
				std::string payType_;
				std::string accessKeyId_;
				std::string dBInstanceClass_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_UPGRADEDBINSTANCEREQUEST_H_