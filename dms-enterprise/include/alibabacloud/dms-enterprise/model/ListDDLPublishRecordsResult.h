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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDDLPUBLISHRECORDSRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDDLPUBLISHRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListDDLPublishRecordsResult : public ServiceResult
			{
			public:
				struct DDLPublishRecord
				{
					struct PublishTaskInfo
					{
						struct PublishJob
						{
							std::string tableName;
							std::string statusDesc;
							std::string scripts;
							std::string taskJobStatus;
							long executeCount;
							long dBTaskGroupId;
						};
						std::string statusDesc;
						std::string taskJobStatus;
						std::string publishStrategy;
						std::vector<PublishTaskInfo::PublishJob> publishJobList;
						long dbId;
						bool logic;
						std::string planTime;
					};
					std::string statusDesc;
					std::string comment;
					std::vector<DDLPublishRecord::PublishTaskInfo> publishTaskInfoList;
					std::string auditStatus;
					long creatorId;
					std::string auditExpireTime;
					bool finality;
					long workflowInstanceId;
					std::string finalityReason;
					std::string riskLevel;
					std::string publishStatus;
				};


				ListDDLPublishRecordsResult();
				explicit ListDDLPublishRecordsResult(const std::string &payload);
				~ListDDLPublishRecordsResult();
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				std::vector<DDLPublishRecord> getDDLPublishRecordList()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorCode_;
				std::string errorMessage_;
				std::vector<DDLPublishRecord> dDLPublishRecordList_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDDLPUBLISHRECORDSRESULT_H_