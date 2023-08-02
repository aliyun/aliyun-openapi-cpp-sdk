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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEPLANSRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEPLANSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstancePlansResult : public ServiceResult
			{
			public:
				struct PlanList
				{
					std::string dBInstanceId;
					std::string planId;
					std::string planScheduleType;
					std::string planEndDate;
					std::string planType;
					std::string planDesc;
					std::string planName;
					std::string planStartDate;
					std::string planConfig;
					std::string planStatus;
				};


				DescribeDBInstancePlansResult();
				explicit DescribeDBInstancePlansResult(const std::string &payload);
				~DescribeDBInstancePlansResult();
				std::string getStatus()const;
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<PlanList> getItems()const;
				std::string getErrorMessage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<PlanList> items_;
				std::string errorMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEPLANSRESULT_H_