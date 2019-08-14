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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSINSTANCESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeGWSInstancesResult : public ServiceResult
			{
			public:
				struct InstanceInfo
				{
					struct AppInfo
					{
						std::string appArgs;
						std::string appPath;
						std::string appName;
					};
					std::string status;
					std::string userName;
					std::string clusterId;
					std::string instanceId;
					std::string createTime;
					std::string instanceType;
					std::string expireTime;
					std::vector<InstanceInfo::AppInfo> appList;
					std::string workMode;
					std::string name;
				};


				DescribeGWSInstancesResult();
				explicit DescribeGWSInstancesResult(const std::string &payload);
				~DescribeGWSInstancesResult();
				std::vector<InstanceInfo> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstanceInfo> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSINSTANCESRESULT_H_