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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSINSTANCEDIMRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSINSTANCEDIMRESULT_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataLimitsInstanceDimResult : public ServiceResult
			{
			public:
				struct DataLimit
				{
					struct DataLimitListInner
					{
						int agentState;
						std::string connector;
						int samplingSize;
						int processStatus;
						int logStoreDay;
						int port;
						int checkStatus;
						int eventStatus;
						bool supportDatamask;
						std::string dbVersion;
						bool supportOcr;
						long lastFinishedTime;
						int enable;
						std::string engineType;
						std::string agentId;
						bool supportScan;
						std::string parentId;
						std::string userName;
						bool supportAgentInstall;
						bool supportEvent;
						long resourceType;
						std::string localName;
						long gmtCreate;
						int totalCount;
						int auditStatus;
						int datamaskStatus;
						int autoScan;
						std::string resourceTypeCode;
						long nextStartTime;
						bool supportAudit;
						std::string regionId;
						long id;
						std::string errorCode;
						int ocrStatus;
						std::string checkStatusName;
						std::string errorMessage;
						int processTotalCount;
						bool autoCreateAccount;
					};
					int agentState;
					std::string connector;
					int samplingSize;
					int processStatus;
					int logStoreDay;
					int port;
					int checkStatus;
					bool supportDatamask;
					std::string dbVersion;
					bool supportOcr;
					long lastFinishedTime;
					int enable;
					std::string engineType;
					std::string agentId;
					bool supportScan;
					std::string parentId;
					std::string userName;
					bool supportAgentInstall;
					long resourceType;
					std::string localName;
					long gmtCreate;
					int totalCount;
					int auditStatus;
					int datamaskStatus;
					std::vector<DataLimit::DataLimitListInner> dataLimitList;
					int autoScan;
					std::string resourceTypeCode;
					long nextStartTime;
					bool supportAudit;
					std::string instanceDescription;
					std::string regionId;
					long id;
					std::string errorCode;
					int ocrStatus;
					std::string checkStatusName;
					std::string errorMessage;
					int processTotalCount;
				};


				DescribeDataLimitsInstanceDimResult();
				explicit DescribeDataLimitsInstanceDimResult(const std::string &payload);
				~DescribeDataLimitsInstanceDimResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<DataLimit> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<DataLimit> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSINSTANCEDIMRESULT_H_