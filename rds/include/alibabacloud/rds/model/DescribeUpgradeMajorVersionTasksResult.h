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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEUPGRADEMAJORVERSIONTASKSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEUPGRADEMAJORVERSIONTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeUpgradeMajorVersionTasksResult : public ServiceResult
			{
			public:
				struct Tasks
				{
					std::string sourceInsName;
					int taskId;
					std::string endTime;
					std::string targetMajorVersion;
					bool cutOver;
					std::string targetInsName;
					std::string startTime;
					std::string upgradeMode;
					std::string result;
					int zeroDownTimePort;
					std::string sourceMajorVersion;
					std::string collectStatMode;
					std::string switchEndTime;
					int totalLogicRepDelayTime;
					std::string zeroDownTimeConnectionString;
					int totalLogicRepLatencyMB;
					std::string detail;
					std::string switchTime;
				};


				DescribeUpgradeMajorVersionTasksResult();
				explicit DescribeUpgradeMajorVersionTasksResult(const std::string &payload);
				~DescribeUpgradeMajorVersionTasksResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<Tasks> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<Tasks> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEUPGRADEMAJORVERSIONTASKSRESULT_H_