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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeInstancesRequest : public RpcServiceRequest
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

				int getEdition()const;
				void setEdition(int edition);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				int getEnabled()const;
				void setEnabled(int enabled);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				long getExpireStartTime()const;
				void setExpireStartTime(long expireStartTime);
				long getExpireEndTime()const;
				void setExpireEndTime(long expireEndTime);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getInstanceIds()const;
				void setInstanceIds(const std::string& instanceIds);
				std::string getPageNo()const;
				void setPageNo(const std::string& pageNo);
				std::vector<int> getStatus()const;
				void setStatus(const std::vector<int>& status);

            private:
				int edition_;
				std::string remark_;
				int enabled_;
				std::string resourceGroupId_;
				std::string sourceIp_;
				std::string pageSize_;
				std::vector<Tag> tag_;
				long expireStartTime_;
				long expireEndTime_;
				std::string ip_;
				std::string instanceIds_;
				std::string pageNo_;
				std::vector<int> status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEINSTANCESREQUEST_H_