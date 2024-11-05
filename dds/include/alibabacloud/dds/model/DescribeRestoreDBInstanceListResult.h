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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBERESTOREDBINSTANCELISTRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBERESTOREDBINSTANCELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeRestoreDBInstanceListResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					int isDeleted;
					std::string engineVersion;
					std::string dBInstanceStatus;
					std::string zoneId;
					std::string dBInstanceId;
					std::string hiddenZoneId;
					std::string creationTime;
					std::string dBInstanceType;
					std::string lockMode;
					std::string regionId;
					std::string dBInstanceDescription;
					std::string secondaryZoneId;
				};


				DescribeRestoreDBInstanceListResult();
				explicit DescribeRestoreDBInstanceListResult(const std::string &payload);
				~DescribeRestoreDBInstanceListResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DBInstance> getDBInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<DBInstance> dBInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBERESTOREDBINSTANCELISTRESULT_H_