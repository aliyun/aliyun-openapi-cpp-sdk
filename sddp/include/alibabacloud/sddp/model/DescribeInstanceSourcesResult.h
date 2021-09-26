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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESOURCESRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeInstanceSourcesResult : public ServiceResult
			{
			public:
				struct InstanceSource
				{
					std::string userName;
					long instanceSize;
					std::string instanceId;
					int logStoreDay;
					std::string tenantName;
					long productId;
					bool canModifyUserName;
					long lastModifyTime;
					std::string instanceDescription1;
					long gmtCreate;
					std::string tenantId;
					long dataLimitId;
					int auditStatus;
					std::string lastModifyUserId;
					std::string regionName;
					int autoScan;
					int passwordStatus;
					int enable;
					std::string dbName;
					std::string engineType;
					std::string instanceDescription;
					std::string regionId;
					long id;
				};


				DescribeInstanceSourcesResult();
				explicit DescribeInstanceSourcesResult(const std::string &payload);
				~DescribeInstanceSourcesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<InstanceSource> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<InstanceSource> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESOURCESRESULT_H_