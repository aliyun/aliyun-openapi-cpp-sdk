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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEUPGRADEREPORTRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEUPGRADEREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeUpgradeReportResult : public ServiceResult
			{
			public:
				struct Report
				{
					std::string checkTime;
					std::string taskId;
					std::string endTime;
					std::string effectiveTime;
					std::string dstVersion;
					std::string srcInsName;
					std::string startTime;
					std::string upgradeMode;
					std::string srcVersion;
					std::string result;
				};
				struct SQLReport
				{
					std::string status;
					std::string type;
					std::string schema;
					std::string dDL;
					std::string name;
				};


				DescribeUpgradeReportResult();
				explicit DescribeUpgradeReportResult(const std::string &payload);
				~DescribeUpgradeReportResult();
				std::string getSourceDBClusterId()const;
				std::string getType()const;
				std::string getDetails()const;
				std::string getSrcDeleted()const;
				std::string getDstDBType()const;
				std::vector<Report> getUpgradeReportList()const;
				std::vector<SQLReport> getItems()const;
				long getTotalSize()const;
				long getItemsSize()const;
				std::string getSrcDBType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string sourceDBClusterId_;
				std::string type_;
				std::string details_;
				std::string srcDeleted_;
				std::string dstDBType_;
				std::vector<Report> upgradeReportList_;
				std::vector<SQLReport> items_;
				long totalSize_;
				long itemsSize_;
				std::string srcDBType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEUPGRADEREPORTRESULT_H_