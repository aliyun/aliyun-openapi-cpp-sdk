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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSETRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSETRESULT_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataLimitSetResult : public ServiceResult
			{
			public:
				struct DataLimitSet
				{
					struct DataLimit
					{
						std::string parentId;
						std::string connector;
						std::string userName;
						bool supportEvent;
						int logStoreDay;
						int port;
						int checkStatus;
						int eventStatus;
						long resourceType;
						std::string localName;
						long gmtCreate;
						int auditStatus;
						std::string resourceTypeCode;
						std::string regionId;
						long id;
						std::string checkStatusName;
					};
					struct OssBucket
					{
						std::string bucketName;
						std::string regionId;
					};
					struct Region
					{
						std::string regionId;
						std::string localName;
					};
					int totalCount;
					std::vector<DataLimit> dataLimitList;
					std::string resourceTypeCode;
					std::vector<OssBucket> ossBucketList;
					long resourceType;
					std::vector<Region> regionList;
				};


				DescribeDataLimitSetResult();
				explicit DescribeDataLimitSetResult(const std::string &payload);
				~DescribeDataLimitSetResult();
				DataLimitSet getDataLimitSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				DataLimitSet dataLimitSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSETRESULT_H_