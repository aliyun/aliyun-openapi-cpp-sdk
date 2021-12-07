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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeInstancesRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeInstancesRequest();
				~DescribeInstancesRequest();

				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getDbType()const;
				void setDbType(const std::string& dbType);

            private:
				std::string clusterName_;
				int pageNumber_;
				std::string resourceGroupId_;
				std::string regionId_;
				int pageSize_;
				std::vector<Tag> tag_;
				std::string clusterId_;
				std::string dbType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCESREQUEST_H_