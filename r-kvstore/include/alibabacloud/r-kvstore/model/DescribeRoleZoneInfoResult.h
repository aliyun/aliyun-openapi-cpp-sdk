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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEROLEZONEINFORESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEROLEZONEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeRoleZoneInfoResult : public ServiceResult
			{
			public:
				struct NodeInfo
				{
					std::string zoneId;
					float connection;
					std::string cPUUsage;
					float intranetOut;
					std::string insName;
					long currentBandWidth;
					float intranetIn;
					int insType;
					std::string role;
					int isLatestVersion;
					std::string nodeType;
					bool isOpenBandWidthService;
					std::string currentMinorVersion;
					std::string nodeId;
					long defaultBandWidth;
					std::string custinsId;
					float avgRt;
				};


				DescribeRoleZoneInfoResult();
				explicit DescribeRoleZoneInfoResult(const std::string &payload);
				~DescribeRoleZoneInfoResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<NodeInfo> getNode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<NodeInfo> node_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEROLEZONEINFORESULT_H_