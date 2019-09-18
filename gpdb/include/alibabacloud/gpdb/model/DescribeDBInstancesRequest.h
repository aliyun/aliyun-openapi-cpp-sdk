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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

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
			class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstancesRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeDBInstancesRequest();
				~DescribeDBInstancesRequest();

				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getDBInstanceIds()const;
				void setDBInstanceIds(const std::string& dBInstanceIds);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);

            private:
				int pageNumber_;
				std::string accessKeyId_;
				std::string regionId_;
				int pageSize_;
				std::string dBInstanceDescription_;
				std::vector<Tag> tag_;
				std::string dBInstanceIds_;
				long ownerId_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESREQUEST_H_