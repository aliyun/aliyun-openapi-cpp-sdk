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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribePreCheckStatusResult : public ServiceResult
			{
			public:
				struct ProgressInfo
				{
					struct JobLog
					{
						std::string errData;
						std::string errMsg;
						std::string errType;
						std::string logLevel;
					};
					std::string sourceSchema;
					std::string destSchema;
					std::string errMsg;
					std::string names;
					std::string item;
					std::string repairMethod;
					std::string finishTime;
					long diffRow;
					int orderNum;
					std::string parentObj;
					std::string jobId;
					std::string ddlSql;
					std::string sub;
					std::string targetNames;
					std::string bootTime;
					std::vector<ProgressInfo::JobLog> logs;
					bool canSkip;
					int delaySeconds;
					std::string ignoreFlag;
					std::string state;
					int total;
					bool skip;
					std::string errDetail;
					std::string id;
					std::string current;
				};
				struct AnalysisProgressInfo
				{
					struct JobLog2
					{
						std::string errData;
						std::string errMsg;
						std::string errType;
						std::string logLevel;
					};
					std::string sourceSchema;
					std::string destSchema;
					std::string errMsg;
					std::string names;
					std::string item;
					std::string repairMethod;
					std::string finishTime;
					long diffRow;
					int orderNum;
					std::string parentObj;
					std::string jobId;
					std::string ddlSql;
					std::vector<AnalysisProgressInfo::JobLog2> logs1;
					std::string sub;
					std::string targetNames;
					std::string bootTime;
					bool canSkip;
					int delaySeconds;
					std::string ignoreFlag;
					std::string state;
					int total;
					bool skip;
					std::string errDetail;
					std::string id;
					std::string current;
				};
				struct SubDistributedJobStatusItem
				{
					struct ProgressInfo4
					{
						struct JobLog6
						{
							std::string errData;
							std::string errMsg;
							std::string errType;
							std::string logLevel;
						};
						std::string sourceSchema;
						std::string destSchema;
						std::string errMsg;
						std::string names;
						std::string item;
						std::string repairMethod;
						std::string finishTime;
						long diffRow;
						int orderNum;
						std::string parentObj;
						std::string jobId;
						std::string ddlSql;
						std::string sub;
						std::vector<ProgressInfo4::JobLog6> logs5;
						std::string targetNames;
						std::string bootTime;
						bool canSkip;
						int delaySeconds;
						std::string ignoreFlag;
						std::string state;
						int total;
						bool skip;
						std::string errDetail;
						std::string id;
						std::string current;
					};
					std::string state;
					int total;
					std::string jobName;
					int errorItem;
					std::string code;
					std::string jobId;
					std::vector<SubDistributedJobStatusItem::ProgressInfo4> jobProgress3;
				};
				struct FullNetCheckJobStatusItem
				{
					struct ProgressInfo8
					{
						struct JobLog10
						{
							std::string errData;
							std::string errMsg;
							std::string errType;
							std::string logLevel;
						};
						std::string sourceSchema;
						std::string destSchema;
						std::string errMsg;
						std::string names;
						std::string item;
						std::string repairMethod;
						std::string finishTime;
						long diffRow;
						int orderNum;
						std::string parentObj;
						std::string jobId;
						std::string ddlSql;
						std::string sub;
						std::string targetNames;
						std::vector<ProgressInfo8::JobLog10> logs9;
						std::string bootTime;
						bool canSkip;
						int delaySeconds;
						std::string ignoreFlag;
						std::string state;
						int total;
						bool skip;
						std::string errDetail;
						std::string id;
						std::string current;
					};
					std::string srcRegionCidr;
					std::string destRegionCidr;
					std::string hostRegion;
					std::string jobName;
					int errorItem;
					std::string sourceEndpointType;
					std::string code;
					std::string destinationEndpointType;
					std::string srcRegion;
					std::string state;
					int total;
					std::vector<FullNetCheckJobStatusItem::ProgressInfo8> jobProgress7;
					std::string jobId;
					std::string destRegion;
				};


				DescribePreCheckStatusResult();
				explicit DescribePreCheckStatusResult(const std::string &payload);
				~DescribePreCheckStatusResult();
				long getTotalRecordCount()const;
				std::vector<AnalysisProgressInfo> getAnalysisJobProgress()const;
				long getPageRecordCount()const;
				std::vector<FullNetCheckJobStatusItem> getFullNetCheckJobStatus()const;
				std::string getJobName()const;
				int getErrorItem()const;
				std::vector<SubDistributedJobStatusItem> getSubDistributedJobStatus()const;
				std::string getCode()const;
				bool getSuccess()const;
				int getErrorAnalysisItem()const;
				long getPageNumber()const;
				std::string getState()const;
				int getTotal()const;
				int getHttpStatusCode()const;
				std::string getJobId()const;
				std::vector<ProgressInfo> getJobProgress()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				std::vector<AnalysisProgressInfo> analysisJobProgress_;
				long pageRecordCount_;
				std::vector<FullNetCheckJobStatusItem> fullNetCheckJobStatus_;
				std::string jobName_;
				int errorItem_;
				std::vector<SubDistributedJobStatusItem> subDistributedJobStatus_;
				std::string code_;
				bool success_;
				int errorAnalysisItem_;
				long pageNumber_;
				std::string state_;
				int total_;
				int httpStatusCode_;
				std::string jobId_;
				std::vector<ProgressInfo> jobProgress_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSRESULT_H_